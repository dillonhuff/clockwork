#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sobel_unrolled_16_opt_compute_units.h
#include "sobel_unrolled_16_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_12_cache {
	// RAM Box: {[0, 1920], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 6
  // 0, 1, 122, 123, 244, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 120> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 120> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_122() {
		return f4;
	}

	inline hw_uint<32>  peek_123() {
		return f6;
	}

	inline hw_uint<32>  peek_243() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_244() {
		return f8;
	}

	inline hw_uint<32>  peek_245() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write1_merged_banks_12_cache {
	// RAM Box: {[1, 1905], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write10_merged_banks_12_cache {
	// RAM Box: {[10, 1914], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write11_merged_banks_12_cache {
	// RAM Box: {[11, 1915], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write12_merged_banks_12_cache {
	// RAM Box: {[12, 1916], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write13_merged_banks_12_cache {
	// RAM Box: {[13, 1917], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write14_merged_banks_12_cache {
	// RAM Box: {[14, 1918], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write15_merged_banks_12_cache {
	// RAM Box: {[-1, 1919], [-1, 1080]}
	// Capacity: 247
	// # of read delays: 7
  // 0, 1, 2, 123, 124, 245, 246
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 120> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 120> f9;
	hw_uint<32>  f10;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_123() {
		return f6;
	}

	inline hw_uint<32>  peek_124() {
		return f8;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_245() {
		return f10;
	}

	inline hw_uint<32>  peek_246() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write2_merged_banks_12_cache {
	// RAM Box: {[2, 1906], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write3_merged_banks_12_cache {
	// RAM Box: {[3, 1907], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write4_merged_banks_12_cache {
	// RAM Box: {[4, 1908], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write5_merged_banks_12_cache {
	// RAM Box: {[5, 1909], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write6_merged_banks_12_cache {
	// RAM Box: {[6, 1910], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write7_merged_banks_12_cache {
	// RAM Box: {[7, 1911], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write8_merged_banks_12_cache {
	// RAM Box: {[8, 1912], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_img_update_0_write9_merged_banks_12_cache {
	// RAM Box: {[9, 1913], [-1, 1080]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 121> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 121> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_123() {
		return f4;
	}

	inline hw_uint<32>  peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_245() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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

struct img_cache {
  // # of banks: 16
  img_img_update_0_write0_merged_banks_12_cache img_img_update_0_write0_merged_banks_12;
  img_img_update_0_write1_merged_banks_12_cache img_img_update_0_write1_merged_banks_12;
  img_img_update_0_write10_merged_banks_12_cache img_img_update_0_write10_merged_banks_12;
  img_img_update_0_write11_merged_banks_12_cache img_img_update_0_write11_merged_banks_12;
  img_img_update_0_write12_merged_banks_12_cache img_img_update_0_write12_merged_banks_12;
  img_img_update_0_write13_merged_banks_12_cache img_img_update_0_write13_merged_banks_12;
  img_img_update_0_write14_merged_banks_12_cache img_img_update_0_write14_merged_banks_12;
  img_img_update_0_write15_merged_banks_12_cache img_img_update_0_write15_merged_banks_12;
  img_img_update_0_write2_merged_banks_12_cache img_img_update_0_write2_merged_banks_12;
  img_img_update_0_write3_merged_banks_12_cache img_img_update_0_write3_merged_banks_12;
  img_img_update_0_write4_merged_banks_12_cache img_img_update_0_write4_merged_banks_12;
  img_img_update_0_write5_merged_banks_12_cache img_img_update_0_write5_merged_banks_12;
  img_img_update_0_write6_merged_banks_12_cache img_img_update_0_write6_merged_banks_12;
  img_img_update_0_write7_merged_banks_12_cache img_img_update_0_write7_merged_banks_12;
  img_img_update_0_write8_merged_banks_12_cache img_img_update_0_write8_merged_banks_12;
  img_img_update_0_write9_merged_banks_12_cache img_img_update_0_write9_merged_banks_12;
};



inline void img_img_update_0_write0_write(hw_uint<32> & img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write0_merged_banks_12.push(img_img_update_0_write0);
}

inline void img_img_update_0_write1_write(hw_uint<32> & img_img_update_0_write1, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write1_merged_banks_12.push(img_img_update_0_write1);
}

inline void img_img_update_0_write10_write(hw_uint<32> & img_img_update_0_write10, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write10_merged_banks_12.push(img_img_update_0_write10);
}

inline void img_img_update_0_write11_write(hw_uint<32> & img_img_update_0_write11, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write11_merged_banks_12.push(img_img_update_0_write11);
}

inline void img_img_update_0_write12_write(hw_uint<32> & img_img_update_0_write12, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write12_merged_banks_12.push(img_img_update_0_write12);
}

inline void img_img_update_0_write13_write(hw_uint<32> & img_img_update_0_write13, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write13_merged_banks_12.push(img_img_update_0_write13);
}

inline void img_img_update_0_write14_write(hw_uint<32> & img_img_update_0_write14, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write14_merged_banks_12.push(img_img_update_0_write14);
}

inline void img_img_update_0_write15_write(hw_uint<32> & img_img_update_0_write15, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write15_merged_banks_12.push(img_img_update_0_write15);
}

inline void img_img_update_0_write2_write(hw_uint<32> & img_img_update_0_write2, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write2_merged_banks_12.push(img_img_update_0_write2);
}

inline void img_img_update_0_write3_write(hw_uint<32> & img_img_update_0_write3, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write3_merged_banks_12.push(img_img_update_0_write3);
}

inline void img_img_update_0_write4_write(hw_uint<32> & img_img_update_0_write4, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write4_merged_banks_12.push(img_img_update_0_write4);
}

inline void img_img_update_0_write5_write(hw_uint<32> & img_img_update_0_write5, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write5_merged_banks_12.push(img_img_update_0_write5);
}

inline void img_img_update_0_write6_write(hw_uint<32> & img_img_update_0_write6, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write6_merged_banks_12.push(img_img_update_0_write6);
}

inline void img_img_update_0_write7_write(hw_uint<32> & img_img_update_0_write7, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write7_merged_banks_12.push(img_img_update_0_write7);
}

inline void img_img_update_0_write8_write(hw_uint<32> & img_img_update_0_write8, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write8_merged_banks_12.push(img_img_update_0_write8);
}

inline void img_img_update_0_write9_write(hw_uint<32> & img_img_update_0_write9, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write9_merged_banks_12.push(img_img_update_0_write9);
}

inline hw_uint<32>  mag_x_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd0 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_246();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_x_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd1 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_124();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_x_rd10_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd10 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_123();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd11_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd11 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd12_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd12 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_245();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd13_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd13 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_123();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd14_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd14 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd15_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd15 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_245();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd16_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd16 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_123();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd17_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd17 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd18_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd18 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_245();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd19_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd19 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_123();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd2 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_2();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_x_rd20_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd20 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd21_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd21 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_245();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_x_rd22_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd22 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_123();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_x_rd23_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd23 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_x_rd24_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd24 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_245();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd25_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd25 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_123();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd26_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd26 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd27_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd27 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_245();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_x_rd28_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd28 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_123();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_x_rd29_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd29 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_x_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd3 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_245();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd30_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd30 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_245();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_x_rd31_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd31 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_123();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_x_rd32_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd32 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_x_rd33_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd33 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_245();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_x_rd34_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd34 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_123();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_x_rd35_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd35 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_x_rd36_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd36 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_245();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_x_rd37_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd37 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_123();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_x_rd38_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd38 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_x_rd39_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd39 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_245();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_x_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd4 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_123();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd40_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd40 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_123();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_x_rd41_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd41 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_x_rd42_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd42 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_245();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_x_rd43_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd43 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_123();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_x_rd44_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd44 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_x_rd45_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd45 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_245();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_x_rd46_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd46 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_123();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_x_rd47_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd47 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_x_rd48_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd48 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_245();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_x_rd49_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd49 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_123();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_x_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd5 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd50_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd50 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_x_rd51_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd51 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_245();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_x_rd52_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd52 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_123();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_x_rd53_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd53 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_x_rd54_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd54 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_245();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_x_rd55_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd55 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_123();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_x_rd56_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd56 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_x_rd57_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd57 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_245();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_x_rd58_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd58 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_123();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_x_rd59_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd59 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_x_rd6_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd6 read pattern: { mag_x_update_0[d0, d1] -> img[16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_245();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd60_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd60 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_245();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_x_rd61_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd61 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_123();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_x_rd62_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd62 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_x_rd63_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd63 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_245();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_x_rd64_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd64 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_123();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_x_rd65_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd65 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_x_rd66_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd66 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_245();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_x_rd67_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd67 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_123();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_x_rd68_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd68 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_x_rd69_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd69 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_245();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_x_rd7_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd7 read pattern: { mag_x_update_0[d0, d1] -> img[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_123();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd70_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd70 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_123();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_x_rd71_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd71 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_x_rd72_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd72 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_245();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_x_rd73_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd73 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_123();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_x_rd74_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd74 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_x_rd75_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd75 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_245();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_x_rd76_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd76 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_123();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_x_rd77_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd77 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_x_rd78_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd78 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_245();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_x_rd79_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd79 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_123();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_x_rd8_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd8 read pattern: { mag_x_update_0[d0, d1] -> img[16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd80_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd80 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_x_rd81_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd81 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_245();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_x_rd82_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd82 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_123();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_x_rd83_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd83 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_x_rd84_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd84 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_245();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_x_rd85_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd85 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_123();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_x_rd86_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd86 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_x_rd87_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd87 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_245();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_x_rd88_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd88 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_123();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_x_rd89_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd89 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_1();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_x_rd9_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd9 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_245();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd90_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd90 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_245();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_x_rd91_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd91 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_123();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_x_rd92_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd92 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_x_rd93_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd93 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_244();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd94_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd94 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_122();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd95_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd95 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd0 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_246();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_y_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd1 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_2();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_y_rd10_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd10 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_245();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd11_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd11 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd12_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd12 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_245();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd13_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd13 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd14_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd14 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_245();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd15_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd15 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd16_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd16 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_245();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd17_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd17 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd18_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd18 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_245();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd19_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd19 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd2 read pattern: { mag_y_update_0[d0, d1] -> img[16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_245();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd20_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd20 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_245();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd21_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd21 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd22_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd22 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_245();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_y_rd23_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd23 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_y_rd24_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd24 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_245();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd25_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd25 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd26_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd26 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_245();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_y_rd27_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd27 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_y_rd28_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd28 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_245();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_y_rd29_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd29 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_y_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd3 read pattern: { mag_y_update_0[d0, d1] -> img[16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd30_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd30 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_245();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_y_rd31_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd31 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<32>  mag_y_rd32_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd32 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_245();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_y_rd33_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd33 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_y_rd34_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd34 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_245();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_y_rd35_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd35 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_y_rd36_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd36 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_245();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_y_rd37_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd37 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<32>  mag_y_rd38_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd38 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_245();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_y_rd39_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd39 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_y_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd4 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_245();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd40_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd40 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_245();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_y_rd41_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd41 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_y_rd42_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd42 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_245();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_y_rd43_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd43 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<32>  mag_y_rd44_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd44 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_245();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_y_rd45_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd45 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_y_rd46_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd46 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_245();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_y_rd47_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd47 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_y_rd48_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd48 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_245();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_y_rd49_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd49 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<32>  mag_y_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd5 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd50_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd50 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_245();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_y_rd51_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd51 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_y_rd52_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd52 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_245();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_y_rd53_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd53 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_y_rd54_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd54 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_245();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_y_rd55_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd55 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<32>  mag_y_rd56_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd56 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_245();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_y_rd57_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd57 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_y_rd58_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd58 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_245();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_y_rd59_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd59 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_y_rd6_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd6 read pattern: { mag_y_update_0[d0, d1] -> img[16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_245();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd60_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd60 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_245();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_y_rd61_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd61 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<32>  mag_y_rd62_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd62 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_245();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_y_rd63_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd63 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_y_rd64_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd64 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_245();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_y_rd65_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd65 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_y_rd66_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd66 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_245();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_y_rd67_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd67 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<32>  mag_y_rd68_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd68 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_245();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_y_rd69_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd69 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_y_rd7_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd7 read pattern: { mag_y_update_0[d0, d1] -> img[16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd70_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd70 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_245();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_y_rd71_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd71 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_y_rd72_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd72 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_245();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_y_rd73_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd73 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<32>  mag_y_rd74_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd74 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_245();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_y_rd75_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd75 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_y_rd76_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd76 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_245();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_y_rd77_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd77 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_y_rd78_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd78 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_245();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_y_rd79_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd79 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<32>  mag_y_rd8_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd8 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_245();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd80_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd80 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_245();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_y_rd81_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd81 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_y_rd82_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd82 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_245();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_y_rd83_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd83 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_y_rd84_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd84 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_245();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_y_rd85_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd85 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<32>  mag_y_rd86_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd86 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_245();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_y_rd87_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd87 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_y_rd88_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd88 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_245();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_y_rd89_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd89 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_1();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_y_rd9_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd9 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd90_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd90 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_245();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_y_rd91_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd91 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<32>  mag_y_rd92_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd92 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_245();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_y_rd93_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd93 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_1();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<32>  mag_y_rd94_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd94 read pattern: { mag_y_update_0[d0, d1] -> img[16 + 16d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_244();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd95_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd95 read pattern: { mag_y_update_0[d0, d1] -> img[16 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
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
inline void img_img_update_0_write_bundle_write(hw_uint<512>& img_update_0_write, img_cache& img, int d0, int d1, int dynamic_address) {
	hw_uint<32>  img_img_update_0_write0_res = img_update_0_write.extract<0, 31>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write1_res = img_update_0_write.extract<32, 63>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write2_res = img_update_0_write.extract<64, 95>();
	img_img_update_0_write2_write(img_img_update_0_write2_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write3_res = img_update_0_write.extract<96, 127>();
	img_img_update_0_write3_write(img_img_update_0_write3_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write4_res = img_update_0_write.extract<128, 159>();
	img_img_update_0_write4_write(img_img_update_0_write4_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write5_res = img_update_0_write.extract<160, 191>();
	img_img_update_0_write5_write(img_img_update_0_write5_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write6_res = img_update_0_write.extract<192, 223>();
	img_img_update_0_write6_write(img_img_update_0_write6_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write7_res = img_update_0_write.extract<224, 255>();
	img_img_update_0_write7_write(img_img_update_0_write7_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write8_res = img_update_0_write.extract<256, 287>();
	img_img_update_0_write8_write(img_img_update_0_write8_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write9_res = img_update_0_write.extract<288, 319>();
	img_img_update_0_write9_write(img_img_update_0_write9_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write10_res = img_update_0_write.extract<320, 351>();
	img_img_update_0_write10_write(img_img_update_0_write10_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write11_res = img_update_0_write.extract<352, 383>();
	img_img_update_0_write11_write(img_img_update_0_write11_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write12_res = img_update_0_write.extract<384, 415>();
	img_img_update_0_write12_write(img_img_update_0_write12_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write13_res = img_update_0_write.extract<416, 447>();
	img_img_update_0_write13_write(img_img_update_0_write13_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write14_res = img_update_0_write.extract<448, 479>();
	img_img_update_0_write14_write(img_img_update_0_write14_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write15_res = img_update_0_write.extract<480, 511>();
	img_img_update_0_write15_write(img_img_update_0_write15_res, img, d0, d1, dynamic_address);
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
inline hw_uint<3072> img_mag_x_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 96
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

	hw_uint<3072> result;
	hw_uint<32>  mag_x_rd0_res = mag_x_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 3072>(result, mag_x_rd0_res);
	hw_uint<32>  mag_x_rd1_res = mag_x_rd1_select(img, d0, d1, dynamic_address);
	set_at<32, 3072>(result, mag_x_rd1_res);
	hw_uint<32>  mag_x_rd2_res = mag_x_rd2_select(img, d0, d1, dynamic_address);
	set_at<64, 3072>(result, mag_x_rd2_res);
	hw_uint<32>  mag_x_rd3_res = mag_x_rd3_select(img, d0, d1, dynamic_address);
	set_at<96, 3072>(result, mag_x_rd3_res);
	hw_uint<32>  mag_x_rd4_res = mag_x_rd4_select(img, d0, d1, dynamic_address);
	set_at<128, 3072>(result, mag_x_rd4_res);
	hw_uint<32>  mag_x_rd5_res = mag_x_rd5_select(img, d0, d1, dynamic_address);
	set_at<160, 3072>(result, mag_x_rd5_res);
	hw_uint<32>  mag_x_rd6_res = mag_x_rd6_select(img, d0, d1, dynamic_address);
	set_at<192, 3072>(result, mag_x_rd6_res);
	hw_uint<32>  mag_x_rd7_res = mag_x_rd7_select(img, d0, d1, dynamic_address);
	set_at<224, 3072>(result, mag_x_rd7_res);
	hw_uint<32>  mag_x_rd8_res = mag_x_rd8_select(img, d0, d1, dynamic_address);
	set_at<256, 3072>(result, mag_x_rd8_res);
	hw_uint<32>  mag_x_rd9_res = mag_x_rd9_select(img, d0, d1, dynamic_address);
	set_at<288, 3072>(result, mag_x_rd9_res);
	hw_uint<32>  mag_x_rd10_res = mag_x_rd10_select(img, d0, d1, dynamic_address);
	set_at<320, 3072>(result, mag_x_rd10_res);
	hw_uint<32>  mag_x_rd11_res = mag_x_rd11_select(img, d0, d1, dynamic_address);
	set_at<352, 3072>(result, mag_x_rd11_res);
	hw_uint<32>  mag_x_rd12_res = mag_x_rd12_select(img, d0, d1, dynamic_address);
	set_at<384, 3072>(result, mag_x_rd12_res);
	hw_uint<32>  mag_x_rd13_res = mag_x_rd13_select(img, d0, d1, dynamic_address);
	set_at<416, 3072>(result, mag_x_rd13_res);
	hw_uint<32>  mag_x_rd14_res = mag_x_rd14_select(img, d0, d1, dynamic_address);
	set_at<448, 3072>(result, mag_x_rd14_res);
	hw_uint<32>  mag_x_rd15_res = mag_x_rd15_select(img, d0, d1, dynamic_address);
	set_at<480, 3072>(result, mag_x_rd15_res);
	hw_uint<32>  mag_x_rd16_res = mag_x_rd16_select(img, d0, d1, dynamic_address);
	set_at<512, 3072>(result, mag_x_rd16_res);
	hw_uint<32>  mag_x_rd17_res = mag_x_rd17_select(img, d0, d1, dynamic_address);
	set_at<544, 3072>(result, mag_x_rd17_res);
	hw_uint<32>  mag_x_rd18_res = mag_x_rd18_select(img, d0, d1, dynamic_address);
	set_at<576, 3072>(result, mag_x_rd18_res);
	hw_uint<32>  mag_x_rd19_res = mag_x_rd19_select(img, d0, d1, dynamic_address);
	set_at<608, 3072>(result, mag_x_rd19_res);
	hw_uint<32>  mag_x_rd20_res = mag_x_rd20_select(img, d0, d1, dynamic_address);
	set_at<640, 3072>(result, mag_x_rd20_res);
	hw_uint<32>  mag_x_rd21_res = mag_x_rd21_select(img, d0, d1, dynamic_address);
	set_at<672, 3072>(result, mag_x_rd21_res);
	hw_uint<32>  mag_x_rd22_res = mag_x_rd22_select(img, d0, d1, dynamic_address);
	set_at<704, 3072>(result, mag_x_rd22_res);
	hw_uint<32>  mag_x_rd23_res = mag_x_rd23_select(img, d0, d1, dynamic_address);
	set_at<736, 3072>(result, mag_x_rd23_res);
	hw_uint<32>  mag_x_rd24_res = mag_x_rd24_select(img, d0, d1, dynamic_address);
	set_at<768, 3072>(result, mag_x_rd24_res);
	hw_uint<32>  mag_x_rd25_res = mag_x_rd25_select(img, d0, d1, dynamic_address);
	set_at<800, 3072>(result, mag_x_rd25_res);
	hw_uint<32>  mag_x_rd26_res = mag_x_rd26_select(img, d0, d1, dynamic_address);
	set_at<832, 3072>(result, mag_x_rd26_res);
	hw_uint<32>  mag_x_rd27_res = mag_x_rd27_select(img, d0, d1, dynamic_address);
	set_at<864, 3072>(result, mag_x_rd27_res);
	hw_uint<32>  mag_x_rd28_res = mag_x_rd28_select(img, d0, d1, dynamic_address);
	set_at<896, 3072>(result, mag_x_rd28_res);
	hw_uint<32>  mag_x_rd29_res = mag_x_rd29_select(img, d0, d1, dynamic_address);
	set_at<928, 3072>(result, mag_x_rd29_res);
	hw_uint<32>  mag_x_rd30_res = mag_x_rd30_select(img, d0, d1, dynamic_address);
	set_at<960, 3072>(result, mag_x_rd30_res);
	hw_uint<32>  mag_x_rd31_res = mag_x_rd31_select(img, d0, d1, dynamic_address);
	set_at<992, 3072>(result, mag_x_rd31_res);
	hw_uint<32>  mag_x_rd32_res = mag_x_rd32_select(img, d0, d1, dynamic_address);
	set_at<1024, 3072>(result, mag_x_rd32_res);
	hw_uint<32>  mag_x_rd33_res = mag_x_rd33_select(img, d0, d1, dynamic_address);
	set_at<1056, 3072>(result, mag_x_rd33_res);
	hw_uint<32>  mag_x_rd34_res = mag_x_rd34_select(img, d0, d1, dynamic_address);
	set_at<1088, 3072>(result, mag_x_rd34_res);
	hw_uint<32>  mag_x_rd35_res = mag_x_rd35_select(img, d0, d1, dynamic_address);
	set_at<1120, 3072>(result, mag_x_rd35_res);
	hw_uint<32>  mag_x_rd36_res = mag_x_rd36_select(img, d0, d1, dynamic_address);
	set_at<1152, 3072>(result, mag_x_rd36_res);
	hw_uint<32>  mag_x_rd37_res = mag_x_rd37_select(img, d0, d1, dynamic_address);
	set_at<1184, 3072>(result, mag_x_rd37_res);
	hw_uint<32>  mag_x_rd38_res = mag_x_rd38_select(img, d0, d1, dynamic_address);
	set_at<1216, 3072>(result, mag_x_rd38_res);
	hw_uint<32>  mag_x_rd39_res = mag_x_rd39_select(img, d0, d1, dynamic_address);
	set_at<1248, 3072>(result, mag_x_rd39_res);
	hw_uint<32>  mag_x_rd40_res = mag_x_rd40_select(img, d0, d1, dynamic_address);
	set_at<1280, 3072>(result, mag_x_rd40_res);
	hw_uint<32>  mag_x_rd41_res = mag_x_rd41_select(img, d0, d1, dynamic_address);
	set_at<1312, 3072>(result, mag_x_rd41_res);
	hw_uint<32>  mag_x_rd42_res = mag_x_rd42_select(img, d0, d1, dynamic_address);
	set_at<1344, 3072>(result, mag_x_rd42_res);
	hw_uint<32>  mag_x_rd43_res = mag_x_rd43_select(img, d0, d1, dynamic_address);
	set_at<1376, 3072>(result, mag_x_rd43_res);
	hw_uint<32>  mag_x_rd44_res = mag_x_rd44_select(img, d0, d1, dynamic_address);
	set_at<1408, 3072>(result, mag_x_rd44_res);
	hw_uint<32>  mag_x_rd45_res = mag_x_rd45_select(img, d0, d1, dynamic_address);
	set_at<1440, 3072>(result, mag_x_rd45_res);
	hw_uint<32>  mag_x_rd46_res = mag_x_rd46_select(img, d0, d1, dynamic_address);
	set_at<1472, 3072>(result, mag_x_rd46_res);
	hw_uint<32>  mag_x_rd47_res = mag_x_rd47_select(img, d0, d1, dynamic_address);
	set_at<1504, 3072>(result, mag_x_rd47_res);
	hw_uint<32>  mag_x_rd48_res = mag_x_rd48_select(img, d0, d1, dynamic_address);
	set_at<1536, 3072>(result, mag_x_rd48_res);
	hw_uint<32>  mag_x_rd49_res = mag_x_rd49_select(img, d0, d1, dynamic_address);
	set_at<1568, 3072>(result, mag_x_rd49_res);
	hw_uint<32>  mag_x_rd50_res = mag_x_rd50_select(img, d0, d1, dynamic_address);
	set_at<1600, 3072>(result, mag_x_rd50_res);
	hw_uint<32>  mag_x_rd51_res = mag_x_rd51_select(img, d0, d1, dynamic_address);
	set_at<1632, 3072>(result, mag_x_rd51_res);
	hw_uint<32>  mag_x_rd52_res = mag_x_rd52_select(img, d0, d1, dynamic_address);
	set_at<1664, 3072>(result, mag_x_rd52_res);
	hw_uint<32>  mag_x_rd53_res = mag_x_rd53_select(img, d0, d1, dynamic_address);
	set_at<1696, 3072>(result, mag_x_rd53_res);
	hw_uint<32>  mag_x_rd54_res = mag_x_rd54_select(img, d0, d1, dynamic_address);
	set_at<1728, 3072>(result, mag_x_rd54_res);
	hw_uint<32>  mag_x_rd55_res = mag_x_rd55_select(img, d0, d1, dynamic_address);
	set_at<1760, 3072>(result, mag_x_rd55_res);
	hw_uint<32>  mag_x_rd56_res = mag_x_rd56_select(img, d0, d1, dynamic_address);
	set_at<1792, 3072>(result, mag_x_rd56_res);
	hw_uint<32>  mag_x_rd57_res = mag_x_rd57_select(img, d0, d1, dynamic_address);
	set_at<1824, 3072>(result, mag_x_rd57_res);
	hw_uint<32>  mag_x_rd58_res = mag_x_rd58_select(img, d0, d1, dynamic_address);
	set_at<1856, 3072>(result, mag_x_rd58_res);
	hw_uint<32>  mag_x_rd59_res = mag_x_rd59_select(img, d0, d1, dynamic_address);
	set_at<1888, 3072>(result, mag_x_rd59_res);
	hw_uint<32>  mag_x_rd60_res = mag_x_rd60_select(img, d0, d1, dynamic_address);
	set_at<1920, 3072>(result, mag_x_rd60_res);
	hw_uint<32>  mag_x_rd61_res = mag_x_rd61_select(img, d0, d1, dynamic_address);
	set_at<1952, 3072>(result, mag_x_rd61_res);
	hw_uint<32>  mag_x_rd62_res = mag_x_rd62_select(img, d0, d1, dynamic_address);
	set_at<1984, 3072>(result, mag_x_rd62_res);
	hw_uint<32>  mag_x_rd63_res = mag_x_rd63_select(img, d0, d1, dynamic_address);
	set_at<2016, 3072>(result, mag_x_rd63_res);
	hw_uint<32>  mag_x_rd64_res = mag_x_rd64_select(img, d0, d1, dynamic_address);
	set_at<2048, 3072>(result, mag_x_rd64_res);
	hw_uint<32>  mag_x_rd65_res = mag_x_rd65_select(img, d0, d1, dynamic_address);
	set_at<2080, 3072>(result, mag_x_rd65_res);
	hw_uint<32>  mag_x_rd66_res = mag_x_rd66_select(img, d0, d1, dynamic_address);
	set_at<2112, 3072>(result, mag_x_rd66_res);
	hw_uint<32>  mag_x_rd67_res = mag_x_rd67_select(img, d0, d1, dynamic_address);
	set_at<2144, 3072>(result, mag_x_rd67_res);
	hw_uint<32>  mag_x_rd68_res = mag_x_rd68_select(img, d0, d1, dynamic_address);
	set_at<2176, 3072>(result, mag_x_rd68_res);
	hw_uint<32>  mag_x_rd69_res = mag_x_rd69_select(img, d0, d1, dynamic_address);
	set_at<2208, 3072>(result, mag_x_rd69_res);
	hw_uint<32>  mag_x_rd70_res = mag_x_rd70_select(img, d0, d1, dynamic_address);
	set_at<2240, 3072>(result, mag_x_rd70_res);
	hw_uint<32>  mag_x_rd71_res = mag_x_rd71_select(img, d0, d1, dynamic_address);
	set_at<2272, 3072>(result, mag_x_rd71_res);
	hw_uint<32>  mag_x_rd72_res = mag_x_rd72_select(img, d0, d1, dynamic_address);
	set_at<2304, 3072>(result, mag_x_rd72_res);
	hw_uint<32>  mag_x_rd73_res = mag_x_rd73_select(img, d0, d1, dynamic_address);
	set_at<2336, 3072>(result, mag_x_rd73_res);
	hw_uint<32>  mag_x_rd74_res = mag_x_rd74_select(img, d0, d1, dynamic_address);
	set_at<2368, 3072>(result, mag_x_rd74_res);
	hw_uint<32>  mag_x_rd75_res = mag_x_rd75_select(img, d0, d1, dynamic_address);
	set_at<2400, 3072>(result, mag_x_rd75_res);
	hw_uint<32>  mag_x_rd76_res = mag_x_rd76_select(img, d0, d1, dynamic_address);
	set_at<2432, 3072>(result, mag_x_rd76_res);
	hw_uint<32>  mag_x_rd77_res = mag_x_rd77_select(img, d0, d1, dynamic_address);
	set_at<2464, 3072>(result, mag_x_rd77_res);
	hw_uint<32>  mag_x_rd78_res = mag_x_rd78_select(img, d0, d1, dynamic_address);
	set_at<2496, 3072>(result, mag_x_rd78_res);
	hw_uint<32>  mag_x_rd79_res = mag_x_rd79_select(img, d0, d1, dynamic_address);
	set_at<2528, 3072>(result, mag_x_rd79_res);
	hw_uint<32>  mag_x_rd80_res = mag_x_rd80_select(img, d0, d1, dynamic_address);
	set_at<2560, 3072>(result, mag_x_rd80_res);
	hw_uint<32>  mag_x_rd81_res = mag_x_rd81_select(img, d0, d1, dynamic_address);
	set_at<2592, 3072>(result, mag_x_rd81_res);
	hw_uint<32>  mag_x_rd82_res = mag_x_rd82_select(img, d0, d1, dynamic_address);
	set_at<2624, 3072>(result, mag_x_rd82_res);
	hw_uint<32>  mag_x_rd83_res = mag_x_rd83_select(img, d0, d1, dynamic_address);
	set_at<2656, 3072>(result, mag_x_rd83_res);
	hw_uint<32>  mag_x_rd84_res = mag_x_rd84_select(img, d0, d1, dynamic_address);
	set_at<2688, 3072>(result, mag_x_rd84_res);
	hw_uint<32>  mag_x_rd85_res = mag_x_rd85_select(img, d0, d1, dynamic_address);
	set_at<2720, 3072>(result, mag_x_rd85_res);
	hw_uint<32>  mag_x_rd86_res = mag_x_rd86_select(img, d0, d1, dynamic_address);
	set_at<2752, 3072>(result, mag_x_rd86_res);
	hw_uint<32>  mag_x_rd87_res = mag_x_rd87_select(img, d0, d1, dynamic_address);
	set_at<2784, 3072>(result, mag_x_rd87_res);
	hw_uint<32>  mag_x_rd88_res = mag_x_rd88_select(img, d0, d1, dynamic_address);
	set_at<2816, 3072>(result, mag_x_rd88_res);
	hw_uint<32>  mag_x_rd89_res = mag_x_rd89_select(img, d0, d1, dynamic_address);
	set_at<2848, 3072>(result, mag_x_rd89_res);
	hw_uint<32>  mag_x_rd90_res = mag_x_rd90_select(img, d0, d1, dynamic_address);
	set_at<2880, 3072>(result, mag_x_rd90_res);
	hw_uint<32>  mag_x_rd91_res = mag_x_rd91_select(img, d0, d1, dynamic_address);
	set_at<2912, 3072>(result, mag_x_rd91_res);
	hw_uint<32>  mag_x_rd92_res = mag_x_rd92_select(img, d0, d1, dynamic_address);
	set_at<2944, 3072>(result, mag_x_rd92_res);
	hw_uint<32>  mag_x_rd93_res = mag_x_rd93_select(img, d0, d1, dynamic_address);
	set_at<2976, 3072>(result, mag_x_rd93_res);
	hw_uint<32>  mag_x_rd94_res = mag_x_rd94_select(img, d0, d1, dynamic_address);
	set_at<3008, 3072>(result, mag_x_rd94_res);
	hw_uint<32>  mag_x_rd95_res = mag_x_rd95_select(img, d0, d1, dynamic_address);
	set_at<3040, 3072>(result, mag_x_rd95_res);
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
inline hw_uint<3072> img_mag_y_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 96
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

	hw_uint<3072> result;
	hw_uint<32>  mag_y_rd0_res = mag_y_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 3072>(result, mag_y_rd0_res);
	hw_uint<32>  mag_y_rd1_res = mag_y_rd1_select(img, d0, d1, dynamic_address);
	set_at<32, 3072>(result, mag_y_rd1_res);
	hw_uint<32>  mag_y_rd2_res = mag_y_rd2_select(img, d0, d1, dynamic_address);
	set_at<64, 3072>(result, mag_y_rd2_res);
	hw_uint<32>  mag_y_rd3_res = mag_y_rd3_select(img, d0, d1, dynamic_address);
	set_at<96, 3072>(result, mag_y_rd3_res);
	hw_uint<32>  mag_y_rd4_res = mag_y_rd4_select(img, d0, d1, dynamic_address);
	set_at<128, 3072>(result, mag_y_rd4_res);
	hw_uint<32>  mag_y_rd5_res = mag_y_rd5_select(img, d0, d1, dynamic_address);
	set_at<160, 3072>(result, mag_y_rd5_res);
	hw_uint<32>  mag_y_rd6_res = mag_y_rd6_select(img, d0, d1, dynamic_address);
	set_at<192, 3072>(result, mag_y_rd6_res);
	hw_uint<32>  mag_y_rd7_res = mag_y_rd7_select(img, d0, d1, dynamic_address);
	set_at<224, 3072>(result, mag_y_rd7_res);
	hw_uint<32>  mag_y_rd8_res = mag_y_rd8_select(img, d0, d1, dynamic_address);
	set_at<256, 3072>(result, mag_y_rd8_res);
	hw_uint<32>  mag_y_rd9_res = mag_y_rd9_select(img, d0, d1, dynamic_address);
	set_at<288, 3072>(result, mag_y_rd9_res);
	hw_uint<32>  mag_y_rd10_res = mag_y_rd10_select(img, d0, d1, dynamic_address);
	set_at<320, 3072>(result, mag_y_rd10_res);
	hw_uint<32>  mag_y_rd11_res = mag_y_rd11_select(img, d0, d1, dynamic_address);
	set_at<352, 3072>(result, mag_y_rd11_res);
	hw_uint<32>  mag_y_rd12_res = mag_y_rd12_select(img, d0, d1, dynamic_address);
	set_at<384, 3072>(result, mag_y_rd12_res);
	hw_uint<32>  mag_y_rd13_res = mag_y_rd13_select(img, d0, d1, dynamic_address);
	set_at<416, 3072>(result, mag_y_rd13_res);
	hw_uint<32>  mag_y_rd14_res = mag_y_rd14_select(img, d0, d1, dynamic_address);
	set_at<448, 3072>(result, mag_y_rd14_res);
	hw_uint<32>  mag_y_rd15_res = mag_y_rd15_select(img, d0, d1, dynamic_address);
	set_at<480, 3072>(result, mag_y_rd15_res);
	hw_uint<32>  mag_y_rd16_res = mag_y_rd16_select(img, d0, d1, dynamic_address);
	set_at<512, 3072>(result, mag_y_rd16_res);
	hw_uint<32>  mag_y_rd17_res = mag_y_rd17_select(img, d0, d1, dynamic_address);
	set_at<544, 3072>(result, mag_y_rd17_res);
	hw_uint<32>  mag_y_rd18_res = mag_y_rd18_select(img, d0, d1, dynamic_address);
	set_at<576, 3072>(result, mag_y_rd18_res);
	hw_uint<32>  mag_y_rd19_res = mag_y_rd19_select(img, d0, d1, dynamic_address);
	set_at<608, 3072>(result, mag_y_rd19_res);
	hw_uint<32>  mag_y_rd20_res = mag_y_rd20_select(img, d0, d1, dynamic_address);
	set_at<640, 3072>(result, mag_y_rd20_res);
	hw_uint<32>  mag_y_rd21_res = mag_y_rd21_select(img, d0, d1, dynamic_address);
	set_at<672, 3072>(result, mag_y_rd21_res);
	hw_uint<32>  mag_y_rd22_res = mag_y_rd22_select(img, d0, d1, dynamic_address);
	set_at<704, 3072>(result, mag_y_rd22_res);
	hw_uint<32>  mag_y_rd23_res = mag_y_rd23_select(img, d0, d1, dynamic_address);
	set_at<736, 3072>(result, mag_y_rd23_res);
	hw_uint<32>  mag_y_rd24_res = mag_y_rd24_select(img, d0, d1, dynamic_address);
	set_at<768, 3072>(result, mag_y_rd24_res);
	hw_uint<32>  mag_y_rd25_res = mag_y_rd25_select(img, d0, d1, dynamic_address);
	set_at<800, 3072>(result, mag_y_rd25_res);
	hw_uint<32>  mag_y_rd26_res = mag_y_rd26_select(img, d0, d1, dynamic_address);
	set_at<832, 3072>(result, mag_y_rd26_res);
	hw_uint<32>  mag_y_rd27_res = mag_y_rd27_select(img, d0, d1, dynamic_address);
	set_at<864, 3072>(result, mag_y_rd27_res);
	hw_uint<32>  mag_y_rd28_res = mag_y_rd28_select(img, d0, d1, dynamic_address);
	set_at<896, 3072>(result, mag_y_rd28_res);
	hw_uint<32>  mag_y_rd29_res = mag_y_rd29_select(img, d0, d1, dynamic_address);
	set_at<928, 3072>(result, mag_y_rd29_res);
	hw_uint<32>  mag_y_rd30_res = mag_y_rd30_select(img, d0, d1, dynamic_address);
	set_at<960, 3072>(result, mag_y_rd30_res);
	hw_uint<32>  mag_y_rd31_res = mag_y_rd31_select(img, d0, d1, dynamic_address);
	set_at<992, 3072>(result, mag_y_rd31_res);
	hw_uint<32>  mag_y_rd32_res = mag_y_rd32_select(img, d0, d1, dynamic_address);
	set_at<1024, 3072>(result, mag_y_rd32_res);
	hw_uint<32>  mag_y_rd33_res = mag_y_rd33_select(img, d0, d1, dynamic_address);
	set_at<1056, 3072>(result, mag_y_rd33_res);
	hw_uint<32>  mag_y_rd34_res = mag_y_rd34_select(img, d0, d1, dynamic_address);
	set_at<1088, 3072>(result, mag_y_rd34_res);
	hw_uint<32>  mag_y_rd35_res = mag_y_rd35_select(img, d0, d1, dynamic_address);
	set_at<1120, 3072>(result, mag_y_rd35_res);
	hw_uint<32>  mag_y_rd36_res = mag_y_rd36_select(img, d0, d1, dynamic_address);
	set_at<1152, 3072>(result, mag_y_rd36_res);
	hw_uint<32>  mag_y_rd37_res = mag_y_rd37_select(img, d0, d1, dynamic_address);
	set_at<1184, 3072>(result, mag_y_rd37_res);
	hw_uint<32>  mag_y_rd38_res = mag_y_rd38_select(img, d0, d1, dynamic_address);
	set_at<1216, 3072>(result, mag_y_rd38_res);
	hw_uint<32>  mag_y_rd39_res = mag_y_rd39_select(img, d0, d1, dynamic_address);
	set_at<1248, 3072>(result, mag_y_rd39_res);
	hw_uint<32>  mag_y_rd40_res = mag_y_rd40_select(img, d0, d1, dynamic_address);
	set_at<1280, 3072>(result, mag_y_rd40_res);
	hw_uint<32>  mag_y_rd41_res = mag_y_rd41_select(img, d0, d1, dynamic_address);
	set_at<1312, 3072>(result, mag_y_rd41_res);
	hw_uint<32>  mag_y_rd42_res = mag_y_rd42_select(img, d0, d1, dynamic_address);
	set_at<1344, 3072>(result, mag_y_rd42_res);
	hw_uint<32>  mag_y_rd43_res = mag_y_rd43_select(img, d0, d1, dynamic_address);
	set_at<1376, 3072>(result, mag_y_rd43_res);
	hw_uint<32>  mag_y_rd44_res = mag_y_rd44_select(img, d0, d1, dynamic_address);
	set_at<1408, 3072>(result, mag_y_rd44_res);
	hw_uint<32>  mag_y_rd45_res = mag_y_rd45_select(img, d0, d1, dynamic_address);
	set_at<1440, 3072>(result, mag_y_rd45_res);
	hw_uint<32>  mag_y_rd46_res = mag_y_rd46_select(img, d0, d1, dynamic_address);
	set_at<1472, 3072>(result, mag_y_rd46_res);
	hw_uint<32>  mag_y_rd47_res = mag_y_rd47_select(img, d0, d1, dynamic_address);
	set_at<1504, 3072>(result, mag_y_rd47_res);
	hw_uint<32>  mag_y_rd48_res = mag_y_rd48_select(img, d0, d1, dynamic_address);
	set_at<1536, 3072>(result, mag_y_rd48_res);
	hw_uint<32>  mag_y_rd49_res = mag_y_rd49_select(img, d0, d1, dynamic_address);
	set_at<1568, 3072>(result, mag_y_rd49_res);
	hw_uint<32>  mag_y_rd50_res = mag_y_rd50_select(img, d0, d1, dynamic_address);
	set_at<1600, 3072>(result, mag_y_rd50_res);
	hw_uint<32>  mag_y_rd51_res = mag_y_rd51_select(img, d0, d1, dynamic_address);
	set_at<1632, 3072>(result, mag_y_rd51_res);
	hw_uint<32>  mag_y_rd52_res = mag_y_rd52_select(img, d0, d1, dynamic_address);
	set_at<1664, 3072>(result, mag_y_rd52_res);
	hw_uint<32>  mag_y_rd53_res = mag_y_rd53_select(img, d0, d1, dynamic_address);
	set_at<1696, 3072>(result, mag_y_rd53_res);
	hw_uint<32>  mag_y_rd54_res = mag_y_rd54_select(img, d0, d1, dynamic_address);
	set_at<1728, 3072>(result, mag_y_rd54_res);
	hw_uint<32>  mag_y_rd55_res = mag_y_rd55_select(img, d0, d1, dynamic_address);
	set_at<1760, 3072>(result, mag_y_rd55_res);
	hw_uint<32>  mag_y_rd56_res = mag_y_rd56_select(img, d0, d1, dynamic_address);
	set_at<1792, 3072>(result, mag_y_rd56_res);
	hw_uint<32>  mag_y_rd57_res = mag_y_rd57_select(img, d0, d1, dynamic_address);
	set_at<1824, 3072>(result, mag_y_rd57_res);
	hw_uint<32>  mag_y_rd58_res = mag_y_rd58_select(img, d0, d1, dynamic_address);
	set_at<1856, 3072>(result, mag_y_rd58_res);
	hw_uint<32>  mag_y_rd59_res = mag_y_rd59_select(img, d0, d1, dynamic_address);
	set_at<1888, 3072>(result, mag_y_rd59_res);
	hw_uint<32>  mag_y_rd60_res = mag_y_rd60_select(img, d0, d1, dynamic_address);
	set_at<1920, 3072>(result, mag_y_rd60_res);
	hw_uint<32>  mag_y_rd61_res = mag_y_rd61_select(img, d0, d1, dynamic_address);
	set_at<1952, 3072>(result, mag_y_rd61_res);
	hw_uint<32>  mag_y_rd62_res = mag_y_rd62_select(img, d0, d1, dynamic_address);
	set_at<1984, 3072>(result, mag_y_rd62_res);
	hw_uint<32>  mag_y_rd63_res = mag_y_rd63_select(img, d0, d1, dynamic_address);
	set_at<2016, 3072>(result, mag_y_rd63_res);
	hw_uint<32>  mag_y_rd64_res = mag_y_rd64_select(img, d0, d1, dynamic_address);
	set_at<2048, 3072>(result, mag_y_rd64_res);
	hw_uint<32>  mag_y_rd65_res = mag_y_rd65_select(img, d0, d1, dynamic_address);
	set_at<2080, 3072>(result, mag_y_rd65_res);
	hw_uint<32>  mag_y_rd66_res = mag_y_rd66_select(img, d0, d1, dynamic_address);
	set_at<2112, 3072>(result, mag_y_rd66_res);
	hw_uint<32>  mag_y_rd67_res = mag_y_rd67_select(img, d0, d1, dynamic_address);
	set_at<2144, 3072>(result, mag_y_rd67_res);
	hw_uint<32>  mag_y_rd68_res = mag_y_rd68_select(img, d0, d1, dynamic_address);
	set_at<2176, 3072>(result, mag_y_rd68_res);
	hw_uint<32>  mag_y_rd69_res = mag_y_rd69_select(img, d0, d1, dynamic_address);
	set_at<2208, 3072>(result, mag_y_rd69_res);
	hw_uint<32>  mag_y_rd70_res = mag_y_rd70_select(img, d0, d1, dynamic_address);
	set_at<2240, 3072>(result, mag_y_rd70_res);
	hw_uint<32>  mag_y_rd71_res = mag_y_rd71_select(img, d0, d1, dynamic_address);
	set_at<2272, 3072>(result, mag_y_rd71_res);
	hw_uint<32>  mag_y_rd72_res = mag_y_rd72_select(img, d0, d1, dynamic_address);
	set_at<2304, 3072>(result, mag_y_rd72_res);
	hw_uint<32>  mag_y_rd73_res = mag_y_rd73_select(img, d0, d1, dynamic_address);
	set_at<2336, 3072>(result, mag_y_rd73_res);
	hw_uint<32>  mag_y_rd74_res = mag_y_rd74_select(img, d0, d1, dynamic_address);
	set_at<2368, 3072>(result, mag_y_rd74_res);
	hw_uint<32>  mag_y_rd75_res = mag_y_rd75_select(img, d0, d1, dynamic_address);
	set_at<2400, 3072>(result, mag_y_rd75_res);
	hw_uint<32>  mag_y_rd76_res = mag_y_rd76_select(img, d0, d1, dynamic_address);
	set_at<2432, 3072>(result, mag_y_rd76_res);
	hw_uint<32>  mag_y_rd77_res = mag_y_rd77_select(img, d0, d1, dynamic_address);
	set_at<2464, 3072>(result, mag_y_rd77_res);
	hw_uint<32>  mag_y_rd78_res = mag_y_rd78_select(img, d0, d1, dynamic_address);
	set_at<2496, 3072>(result, mag_y_rd78_res);
	hw_uint<32>  mag_y_rd79_res = mag_y_rd79_select(img, d0, d1, dynamic_address);
	set_at<2528, 3072>(result, mag_y_rd79_res);
	hw_uint<32>  mag_y_rd80_res = mag_y_rd80_select(img, d0, d1, dynamic_address);
	set_at<2560, 3072>(result, mag_y_rd80_res);
	hw_uint<32>  mag_y_rd81_res = mag_y_rd81_select(img, d0, d1, dynamic_address);
	set_at<2592, 3072>(result, mag_y_rd81_res);
	hw_uint<32>  mag_y_rd82_res = mag_y_rd82_select(img, d0, d1, dynamic_address);
	set_at<2624, 3072>(result, mag_y_rd82_res);
	hw_uint<32>  mag_y_rd83_res = mag_y_rd83_select(img, d0, d1, dynamic_address);
	set_at<2656, 3072>(result, mag_y_rd83_res);
	hw_uint<32>  mag_y_rd84_res = mag_y_rd84_select(img, d0, d1, dynamic_address);
	set_at<2688, 3072>(result, mag_y_rd84_res);
	hw_uint<32>  mag_y_rd85_res = mag_y_rd85_select(img, d0, d1, dynamic_address);
	set_at<2720, 3072>(result, mag_y_rd85_res);
	hw_uint<32>  mag_y_rd86_res = mag_y_rd86_select(img, d0, d1, dynamic_address);
	set_at<2752, 3072>(result, mag_y_rd86_res);
	hw_uint<32>  mag_y_rd87_res = mag_y_rd87_select(img, d0, d1, dynamic_address);
	set_at<2784, 3072>(result, mag_y_rd87_res);
	hw_uint<32>  mag_y_rd88_res = mag_y_rd88_select(img, d0, d1, dynamic_address);
	set_at<2816, 3072>(result, mag_y_rd88_res);
	hw_uint<32>  mag_y_rd89_res = mag_y_rd89_select(img, d0, d1, dynamic_address);
	set_at<2848, 3072>(result, mag_y_rd89_res);
	hw_uint<32>  mag_y_rd90_res = mag_y_rd90_select(img, d0, d1, dynamic_address);
	set_at<2880, 3072>(result, mag_y_rd90_res);
	hw_uint<32>  mag_y_rd91_res = mag_y_rd91_select(img, d0, d1, dynamic_address);
	set_at<2912, 3072>(result, mag_y_rd91_res);
	hw_uint<32>  mag_y_rd92_res = mag_y_rd92_select(img, d0, d1, dynamic_address);
	set_at<2944, 3072>(result, mag_y_rd92_res);
	hw_uint<32>  mag_y_rd93_res = mag_y_rd93_select(img, d0, d1, dynamic_address);
	set_at<2976, 3072>(result, mag_y_rd93_res);
	hw_uint<32>  mag_y_rd94_res = mag_y_rd94_select(img, d0, d1, dynamic_address);
	set_at<3008, 3072>(result, mag_y_rd94_res);
	hw_uint<32>  mag_y_rd95_res = mag_y_rd95_select(img, d0, d1, dynamic_address);
	set_at<3040, 3072>(result, mag_y_rd95_res);
	return result;
}

#include "hw_classes.h"

struct mag_x_mag_x_update_0_write0_to_sobel_unrolled_16_rd0_cache {
	// RAM Box: {[0, 1904], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write1_to_sobel_unrolled_16_rd1_cache {
	// RAM Box: {[1, 1905], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write10_to_sobel_unrolled_16_rd10_cache {
	// RAM Box: {[10, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write11_to_sobel_unrolled_16_rd11_cache {
	// RAM Box: {[11, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write12_to_sobel_unrolled_16_rd12_cache {
	// RAM Box: {[12, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write13_to_sobel_unrolled_16_rd13_cache {
	// RAM Box: {[13, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write14_to_sobel_unrolled_16_rd14_cache {
	// RAM Box: {[14, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write15_to_sobel_unrolled_16_rd15_cache {
	// RAM Box: {[15, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write2_to_sobel_unrolled_16_rd2_cache {
	// RAM Box: {[2, 1906], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write3_to_sobel_unrolled_16_rd3_cache {
	// RAM Box: {[3, 1907], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write4_to_sobel_unrolled_16_rd4_cache {
	// RAM Box: {[4, 1908], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write5_to_sobel_unrolled_16_rd5_cache {
	// RAM Box: {[5, 1909], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write6_to_sobel_unrolled_16_rd6_cache {
	// RAM Box: {[6, 1910], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write7_to_sobel_unrolled_16_rd7_cache {
	// RAM Box: {[7, 1911], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write8_to_sobel_unrolled_16_rd8_cache {
	// RAM Box: {[8, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write9_to_sobel_unrolled_16_rd9_cache {
	// RAM Box: {[9, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_cache {
  // # of banks: 16
  mag_x_mag_x_update_0_write0_to_sobel_unrolled_16_rd0_cache mag_x_mag_x_update_0_write0_to_sobel_unrolled_16_rd0;
  mag_x_mag_x_update_0_write1_to_sobel_unrolled_16_rd1_cache mag_x_mag_x_update_0_write1_to_sobel_unrolled_16_rd1;
  mag_x_mag_x_update_0_write10_to_sobel_unrolled_16_rd10_cache mag_x_mag_x_update_0_write10_to_sobel_unrolled_16_rd10;
  mag_x_mag_x_update_0_write11_to_sobel_unrolled_16_rd11_cache mag_x_mag_x_update_0_write11_to_sobel_unrolled_16_rd11;
  mag_x_mag_x_update_0_write12_to_sobel_unrolled_16_rd12_cache mag_x_mag_x_update_0_write12_to_sobel_unrolled_16_rd12;
  mag_x_mag_x_update_0_write13_to_sobel_unrolled_16_rd13_cache mag_x_mag_x_update_0_write13_to_sobel_unrolled_16_rd13;
  mag_x_mag_x_update_0_write14_to_sobel_unrolled_16_rd14_cache mag_x_mag_x_update_0_write14_to_sobel_unrolled_16_rd14;
  mag_x_mag_x_update_0_write15_to_sobel_unrolled_16_rd15_cache mag_x_mag_x_update_0_write15_to_sobel_unrolled_16_rd15;
  mag_x_mag_x_update_0_write2_to_sobel_unrolled_16_rd2_cache mag_x_mag_x_update_0_write2_to_sobel_unrolled_16_rd2;
  mag_x_mag_x_update_0_write3_to_sobel_unrolled_16_rd3_cache mag_x_mag_x_update_0_write3_to_sobel_unrolled_16_rd3;
  mag_x_mag_x_update_0_write4_to_sobel_unrolled_16_rd4_cache mag_x_mag_x_update_0_write4_to_sobel_unrolled_16_rd4;
  mag_x_mag_x_update_0_write5_to_sobel_unrolled_16_rd5_cache mag_x_mag_x_update_0_write5_to_sobel_unrolled_16_rd5;
  mag_x_mag_x_update_0_write6_to_sobel_unrolled_16_rd6_cache mag_x_mag_x_update_0_write6_to_sobel_unrolled_16_rd6;
  mag_x_mag_x_update_0_write7_to_sobel_unrolled_16_rd7_cache mag_x_mag_x_update_0_write7_to_sobel_unrolled_16_rd7;
  mag_x_mag_x_update_0_write8_to_sobel_unrolled_16_rd8_cache mag_x_mag_x_update_0_write8_to_sobel_unrolled_16_rd8;
  mag_x_mag_x_update_0_write9_to_sobel_unrolled_16_rd9_cache mag_x_mag_x_update_0_write9_to_sobel_unrolled_16_rd9;
};



inline void mag_x_mag_x_update_0_write0_write(hw_uint<32> & mag_x_mag_x_update_0_write0, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write0_to_sobel_unrolled_16_rd0.push(mag_x_mag_x_update_0_write0);
}

inline void mag_x_mag_x_update_0_write1_write(hw_uint<32> & mag_x_mag_x_update_0_write1, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write1_to_sobel_unrolled_16_rd1.push(mag_x_mag_x_update_0_write1);
}

inline void mag_x_mag_x_update_0_write10_write(hw_uint<32> & mag_x_mag_x_update_0_write10, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write10_to_sobel_unrolled_16_rd10.push(mag_x_mag_x_update_0_write10);
}

inline void mag_x_mag_x_update_0_write11_write(hw_uint<32> & mag_x_mag_x_update_0_write11, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write11_to_sobel_unrolled_16_rd11.push(mag_x_mag_x_update_0_write11);
}

inline void mag_x_mag_x_update_0_write12_write(hw_uint<32> & mag_x_mag_x_update_0_write12, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write12_to_sobel_unrolled_16_rd12.push(mag_x_mag_x_update_0_write12);
}

inline void mag_x_mag_x_update_0_write13_write(hw_uint<32> & mag_x_mag_x_update_0_write13, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write13_to_sobel_unrolled_16_rd13.push(mag_x_mag_x_update_0_write13);
}

inline void mag_x_mag_x_update_0_write14_write(hw_uint<32> & mag_x_mag_x_update_0_write14, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write14_to_sobel_unrolled_16_rd14.push(mag_x_mag_x_update_0_write14);
}

inline void mag_x_mag_x_update_0_write15_write(hw_uint<32> & mag_x_mag_x_update_0_write15, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write15_to_sobel_unrolled_16_rd15.push(mag_x_mag_x_update_0_write15);
}

inline void mag_x_mag_x_update_0_write2_write(hw_uint<32> & mag_x_mag_x_update_0_write2, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write2_to_sobel_unrolled_16_rd2.push(mag_x_mag_x_update_0_write2);
}

inline void mag_x_mag_x_update_0_write3_write(hw_uint<32> & mag_x_mag_x_update_0_write3, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write3_to_sobel_unrolled_16_rd3.push(mag_x_mag_x_update_0_write3);
}

inline void mag_x_mag_x_update_0_write4_write(hw_uint<32> & mag_x_mag_x_update_0_write4, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write4_to_sobel_unrolled_16_rd4.push(mag_x_mag_x_update_0_write4);
}

inline void mag_x_mag_x_update_0_write5_write(hw_uint<32> & mag_x_mag_x_update_0_write5, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write5_to_sobel_unrolled_16_rd5.push(mag_x_mag_x_update_0_write5);
}

inline void mag_x_mag_x_update_0_write6_write(hw_uint<32> & mag_x_mag_x_update_0_write6, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write6_to_sobel_unrolled_16_rd6.push(mag_x_mag_x_update_0_write6);
}

inline void mag_x_mag_x_update_0_write7_write(hw_uint<32> & mag_x_mag_x_update_0_write7, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write7_to_sobel_unrolled_16_rd7.push(mag_x_mag_x_update_0_write7);
}

inline void mag_x_mag_x_update_0_write8_write(hw_uint<32> & mag_x_mag_x_update_0_write8, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write8_to_sobel_unrolled_16_rd8.push(mag_x_mag_x_update_0_write8);
}

inline void mag_x_mag_x_update_0_write9_write(hw_uint<32> & mag_x_mag_x_update_0_write9, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write9_to_sobel_unrolled_16_rd9.push(mag_x_mag_x_update_0_write9);
}

inline hw_uint<32>  sobel_unrolled_16_rd0_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd0 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write0 = mag_x.mag_x_mag_x_update_0_write0_to_sobel_unrolled_16_rd0.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write0;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd1_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd1 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write1 = mag_x.mag_x_mag_x_update_0_write1_to_sobel_unrolled_16_rd1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write1;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd10_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd10 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write10 = mag_x.mag_x_mag_x_update_0_write10_to_sobel_unrolled_16_rd10.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write10;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd11_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd11 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write11 = mag_x.mag_x_mag_x_update_0_write11_to_sobel_unrolled_16_rd11.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write11;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd12_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd12 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write12 = mag_x.mag_x_mag_x_update_0_write12_to_sobel_unrolled_16_rd12.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write12;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd13_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd13 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write13 = mag_x.mag_x_mag_x_update_0_write13_to_sobel_unrolled_16_rd13.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write13;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd14_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd14 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write14 = mag_x.mag_x_mag_x_update_0_write14_to_sobel_unrolled_16_rd14.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write14;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd15_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd15 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write15 = mag_x.mag_x_mag_x_update_0_write15_to_sobel_unrolled_16_rd15.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write15;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd2_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd2 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write2 = mag_x.mag_x_mag_x_update_0_write2_to_sobel_unrolled_16_rd2.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write2;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd3_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd3 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write3 = mag_x.mag_x_mag_x_update_0_write3_to_sobel_unrolled_16_rd3.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write3;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd4_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd4 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write4 = mag_x.mag_x_mag_x_update_0_write4_to_sobel_unrolled_16_rd4.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write4;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd5_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd5 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write5 = mag_x.mag_x_mag_x_update_0_write5_to_sobel_unrolled_16_rd5.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write5;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd6_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd6 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write6 = mag_x.mag_x_mag_x_update_0_write6_to_sobel_unrolled_16_rd6.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write6;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd7_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd7 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write7 = mag_x.mag_x_mag_x_update_0_write7_to_sobel_unrolled_16_rd7.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write7;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd8_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd8 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write8 = mag_x.mag_x_mag_x_update_0_write8_to_sobel_unrolled_16_rd8.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write8;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd9_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd9 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_x[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write9 = mag_x.mag_x_mag_x_update_0_write9_to_sobel_unrolled_16_rd9.peek(/* one reader or all rams */ 0);
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
inline void mag_x_mag_x_update_0_write_bundle_write(hw_uint<512>& mag_x_update_0_write, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
	hw_uint<32>  mag_x_mag_x_update_0_write0_res = mag_x_update_0_write.extract<0, 31>();
	mag_x_mag_x_update_0_write0_write(mag_x_mag_x_update_0_write0_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write1_res = mag_x_update_0_write.extract<32, 63>();
	mag_x_mag_x_update_0_write1_write(mag_x_mag_x_update_0_write1_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write2_res = mag_x_update_0_write.extract<64, 95>();
	mag_x_mag_x_update_0_write2_write(mag_x_mag_x_update_0_write2_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write3_res = mag_x_update_0_write.extract<96, 127>();
	mag_x_mag_x_update_0_write3_write(mag_x_mag_x_update_0_write3_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write4_res = mag_x_update_0_write.extract<128, 159>();
	mag_x_mag_x_update_0_write4_write(mag_x_mag_x_update_0_write4_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write5_res = mag_x_update_0_write.extract<160, 191>();
	mag_x_mag_x_update_0_write5_write(mag_x_mag_x_update_0_write5_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write6_res = mag_x_update_0_write.extract<192, 223>();
	mag_x_mag_x_update_0_write6_write(mag_x_mag_x_update_0_write6_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write7_res = mag_x_update_0_write.extract<224, 255>();
	mag_x_mag_x_update_0_write7_write(mag_x_mag_x_update_0_write7_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write8_res = mag_x_update_0_write.extract<256, 287>();
	mag_x_mag_x_update_0_write8_write(mag_x_mag_x_update_0_write8_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write9_res = mag_x_update_0_write.extract<288, 319>();
	mag_x_mag_x_update_0_write9_write(mag_x_mag_x_update_0_write9_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write10_res = mag_x_update_0_write.extract<320, 351>();
	mag_x_mag_x_update_0_write10_write(mag_x_mag_x_update_0_write10_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write11_res = mag_x_update_0_write.extract<352, 383>();
	mag_x_mag_x_update_0_write11_write(mag_x_mag_x_update_0_write11_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write12_res = mag_x_update_0_write.extract<384, 415>();
	mag_x_mag_x_update_0_write12_write(mag_x_mag_x_update_0_write12_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write13_res = mag_x_update_0_write.extract<416, 447>();
	mag_x_mag_x_update_0_write13_write(mag_x_mag_x_update_0_write13_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write14_res = mag_x_update_0_write.extract<448, 479>();
	mag_x_mag_x_update_0_write14_write(mag_x_mag_x_update_0_write14_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write15_res = mag_x_update_0_write.extract<480, 511>();
	mag_x_mag_x_update_0_write15_write(mag_x_mag_x_update_0_write15_res, mag_x, d0, d1, dynamic_address);
}

// sobel_unrolled_16_update_0_read
//	sobel_unrolled_16_rd0
//	sobel_unrolled_16_rd1
//	sobel_unrolled_16_rd2
//	sobel_unrolled_16_rd3
//	sobel_unrolled_16_rd4
//	sobel_unrolled_16_rd5
//	sobel_unrolled_16_rd6
//	sobel_unrolled_16_rd7
//	sobel_unrolled_16_rd8
//	sobel_unrolled_16_rd9
//	sobel_unrolled_16_rd10
//	sobel_unrolled_16_rd11
//	sobel_unrolled_16_rd12
//	sobel_unrolled_16_rd13
//	sobel_unrolled_16_rd14
//	sobel_unrolled_16_rd15
inline hw_uint<512> mag_x_sobel_unrolled_16_update_0_read_bundle_read(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // sobel_unrolled_16_rd0
    // sobel_unrolled_16_rd1
    // sobel_unrolled_16_rd2
    // sobel_unrolled_16_rd3
    // sobel_unrolled_16_rd4
    // sobel_unrolled_16_rd5
    // sobel_unrolled_16_rd6
    // sobel_unrolled_16_rd7
    // sobel_unrolled_16_rd8
    // sobel_unrolled_16_rd9
    // sobel_unrolled_16_rd10
    // sobel_unrolled_16_rd11
    // sobel_unrolled_16_rd12
    // sobel_unrolled_16_rd13
    // sobel_unrolled_16_rd14
    // sobel_unrolled_16_rd15

	hw_uint<512> result;
	hw_uint<32>  sobel_unrolled_16_rd0_res = sobel_unrolled_16_rd0_select(mag_x, d0, d1, dynamic_address);
	set_at<0, 512>(result, sobel_unrolled_16_rd0_res);
	hw_uint<32>  sobel_unrolled_16_rd1_res = sobel_unrolled_16_rd1_select(mag_x, d0, d1, dynamic_address);
	set_at<32, 512>(result, sobel_unrolled_16_rd1_res);
	hw_uint<32>  sobel_unrolled_16_rd2_res = sobel_unrolled_16_rd2_select(mag_x, d0, d1, dynamic_address);
	set_at<64, 512>(result, sobel_unrolled_16_rd2_res);
	hw_uint<32>  sobel_unrolled_16_rd3_res = sobel_unrolled_16_rd3_select(mag_x, d0, d1, dynamic_address);
	set_at<96, 512>(result, sobel_unrolled_16_rd3_res);
	hw_uint<32>  sobel_unrolled_16_rd4_res = sobel_unrolled_16_rd4_select(mag_x, d0, d1, dynamic_address);
	set_at<128, 512>(result, sobel_unrolled_16_rd4_res);
	hw_uint<32>  sobel_unrolled_16_rd5_res = sobel_unrolled_16_rd5_select(mag_x, d0, d1, dynamic_address);
	set_at<160, 512>(result, sobel_unrolled_16_rd5_res);
	hw_uint<32>  sobel_unrolled_16_rd6_res = sobel_unrolled_16_rd6_select(mag_x, d0, d1, dynamic_address);
	set_at<192, 512>(result, sobel_unrolled_16_rd6_res);
	hw_uint<32>  sobel_unrolled_16_rd7_res = sobel_unrolled_16_rd7_select(mag_x, d0, d1, dynamic_address);
	set_at<224, 512>(result, sobel_unrolled_16_rd7_res);
	hw_uint<32>  sobel_unrolled_16_rd8_res = sobel_unrolled_16_rd8_select(mag_x, d0, d1, dynamic_address);
	set_at<256, 512>(result, sobel_unrolled_16_rd8_res);
	hw_uint<32>  sobel_unrolled_16_rd9_res = sobel_unrolled_16_rd9_select(mag_x, d0, d1, dynamic_address);
	set_at<288, 512>(result, sobel_unrolled_16_rd9_res);
	hw_uint<32>  sobel_unrolled_16_rd10_res = sobel_unrolled_16_rd10_select(mag_x, d0, d1, dynamic_address);
	set_at<320, 512>(result, sobel_unrolled_16_rd10_res);
	hw_uint<32>  sobel_unrolled_16_rd11_res = sobel_unrolled_16_rd11_select(mag_x, d0, d1, dynamic_address);
	set_at<352, 512>(result, sobel_unrolled_16_rd11_res);
	hw_uint<32>  sobel_unrolled_16_rd12_res = sobel_unrolled_16_rd12_select(mag_x, d0, d1, dynamic_address);
	set_at<384, 512>(result, sobel_unrolled_16_rd12_res);
	hw_uint<32>  sobel_unrolled_16_rd13_res = sobel_unrolled_16_rd13_select(mag_x, d0, d1, dynamic_address);
	set_at<416, 512>(result, sobel_unrolled_16_rd13_res);
	hw_uint<32>  sobel_unrolled_16_rd14_res = sobel_unrolled_16_rd14_select(mag_x, d0, d1, dynamic_address);
	set_at<448, 512>(result, sobel_unrolled_16_rd14_res);
	hw_uint<32>  sobel_unrolled_16_rd15_res = sobel_unrolled_16_rd15_select(mag_x, d0, d1, dynamic_address);
	set_at<480, 512>(result, sobel_unrolled_16_rd15_res);
	return result;
}

#include "hw_classes.h"

struct mag_y_mag_y_update_0_write0_to_sobel_unrolled_16_rd0_cache {
	// RAM Box: {[0, 1904], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write1_to_sobel_unrolled_16_rd1_cache {
	// RAM Box: {[1, 1905], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write10_to_sobel_unrolled_16_rd10_cache {
	// RAM Box: {[10, 1914], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write11_to_sobel_unrolled_16_rd11_cache {
	// RAM Box: {[11, 1915], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write12_to_sobel_unrolled_16_rd12_cache {
	// RAM Box: {[12, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write13_to_sobel_unrolled_16_rd13_cache {
	// RAM Box: {[13, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write14_to_sobel_unrolled_16_rd14_cache {
	// RAM Box: {[14, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write15_to_sobel_unrolled_16_rd15_cache {
	// RAM Box: {[15, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write2_to_sobel_unrolled_16_rd2_cache {
	// RAM Box: {[2, 1906], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write3_to_sobel_unrolled_16_rd3_cache {
	// RAM Box: {[3, 1907], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write4_to_sobel_unrolled_16_rd4_cache {
	// RAM Box: {[4, 1908], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write5_to_sobel_unrolled_16_rd5_cache {
	// RAM Box: {[5, 1909], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write6_to_sobel_unrolled_16_rd6_cache {
	// RAM Box: {[6, 1910], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write7_to_sobel_unrolled_16_rd7_cache {
	// RAM Box: {[7, 1911], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write8_to_sobel_unrolled_16_rd8_cache {
	// RAM Box: {[8, 1912], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write9_to_sobel_unrolled_16_rd9_cache {
	// RAM Box: {[9, 1913], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_cache {
  // # of banks: 16
  mag_y_mag_y_update_0_write0_to_sobel_unrolled_16_rd0_cache mag_y_mag_y_update_0_write0_to_sobel_unrolled_16_rd0;
  mag_y_mag_y_update_0_write1_to_sobel_unrolled_16_rd1_cache mag_y_mag_y_update_0_write1_to_sobel_unrolled_16_rd1;
  mag_y_mag_y_update_0_write10_to_sobel_unrolled_16_rd10_cache mag_y_mag_y_update_0_write10_to_sobel_unrolled_16_rd10;
  mag_y_mag_y_update_0_write11_to_sobel_unrolled_16_rd11_cache mag_y_mag_y_update_0_write11_to_sobel_unrolled_16_rd11;
  mag_y_mag_y_update_0_write12_to_sobel_unrolled_16_rd12_cache mag_y_mag_y_update_0_write12_to_sobel_unrolled_16_rd12;
  mag_y_mag_y_update_0_write13_to_sobel_unrolled_16_rd13_cache mag_y_mag_y_update_0_write13_to_sobel_unrolled_16_rd13;
  mag_y_mag_y_update_0_write14_to_sobel_unrolled_16_rd14_cache mag_y_mag_y_update_0_write14_to_sobel_unrolled_16_rd14;
  mag_y_mag_y_update_0_write15_to_sobel_unrolled_16_rd15_cache mag_y_mag_y_update_0_write15_to_sobel_unrolled_16_rd15;
  mag_y_mag_y_update_0_write2_to_sobel_unrolled_16_rd2_cache mag_y_mag_y_update_0_write2_to_sobel_unrolled_16_rd2;
  mag_y_mag_y_update_0_write3_to_sobel_unrolled_16_rd3_cache mag_y_mag_y_update_0_write3_to_sobel_unrolled_16_rd3;
  mag_y_mag_y_update_0_write4_to_sobel_unrolled_16_rd4_cache mag_y_mag_y_update_0_write4_to_sobel_unrolled_16_rd4;
  mag_y_mag_y_update_0_write5_to_sobel_unrolled_16_rd5_cache mag_y_mag_y_update_0_write5_to_sobel_unrolled_16_rd5;
  mag_y_mag_y_update_0_write6_to_sobel_unrolled_16_rd6_cache mag_y_mag_y_update_0_write6_to_sobel_unrolled_16_rd6;
  mag_y_mag_y_update_0_write7_to_sobel_unrolled_16_rd7_cache mag_y_mag_y_update_0_write7_to_sobel_unrolled_16_rd7;
  mag_y_mag_y_update_0_write8_to_sobel_unrolled_16_rd8_cache mag_y_mag_y_update_0_write8_to_sobel_unrolled_16_rd8;
  mag_y_mag_y_update_0_write9_to_sobel_unrolled_16_rd9_cache mag_y_mag_y_update_0_write9_to_sobel_unrolled_16_rd9;
};



inline void mag_y_mag_y_update_0_write0_write(hw_uint<32> & mag_y_mag_y_update_0_write0, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write0_to_sobel_unrolled_16_rd0.push(mag_y_mag_y_update_0_write0);
}

inline void mag_y_mag_y_update_0_write1_write(hw_uint<32> & mag_y_mag_y_update_0_write1, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write1_to_sobel_unrolled_16_rd1.push(mag_y_mag_y_update_0_write1);
}

inline void mag_y_mag_y_update_0_write10_write(hw_uint<32> & mag_y_mag_y_update_0_write10, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write10_to_sobel_unrolled_16_rd10.push(mag_y_mag_y_update_0_write10);
}

inline void mag_y_mag_y_update_0_write11_write(hw_uint<32> & mag_y_mag_y_update_0_write11, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write11_to_sobel_unrolled_16_rd11.push(mag_y_mag_y_update_0_write11);
}

inline void mag_y_mag_y_update_0_write12_write(hw_uint<32> & mag_y_mag_y_update_0_write12, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write12_to_sobel_unrolled_16_rd12.push(mag_y_mag_y_update_0_write12);
}

inline void mag_y_mag_y_update_0_write13_write(hw_uint<32> & mag_y_mag_y_update_0_write13, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write13_to_sobel_unrolled_16_rd13.push(mag_y_mag_y_update_0_write13);
}

inline void mag_y_mag_y_update_0_write14_write(hw_uint<32> & mag_y_mag_y_update_0_write14, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write14_to_sobel_unrolled_16_rd14.push(mag_y_mag_y_update_0_write14);
}

inline void mag_y_mag_y_update_0_write15_write(hw_uint<32> & mag_y_mag_y_update_0_write15, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write15_to_sobel_unrolled_16_rd15.push(mag_y_mag_y_update_0_write15);
}

inline void mag_y_mag_y_update_0_write2_write(hw_uint<32> & mag_y_mag_y_update_0_write2, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write2_to_sobel_unrolled_16_rd2.push(mag_y_mag_y_update_0_write2);
}

inline void mag_y_mag_y_update_0_write3_write(hw_uint<32> & mag_y_mag_y_update_0_write3, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write3_to_sobel_unrolled_16_rd3.push(mag_y_mag_y_update_0_write3);
}

inline void mag_y_mag_y_update_0_write4_write(hw_uint<32> & mag_y_mag_y_update_0_write4, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write4_to_sobel_unrolled_16_rd4.push(mag_y_mag_y_update_0_write4);
}

inline void mag_y_mag_y_update_0_write5_write(hw_uint<32> & mag_y_mag_y_update_0_write5, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write5_to_sobel_unrolled_16_rd5.push(mag_y_mag_y_update_0_write5);
}

inline void mag_y_mag_y_update_0_write6_write(hw_uint<32> & mag_y_mag_y_update_0_write6, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write6_to_sobel_unrolled_16_rd6.push(mag_y_mag_y_update_0_write6);
}

inline void mag_y_mag_y_update_0_write7_write(hw_uint<32> & mag_y_mag_y_update_0_write7, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write7_to_sobel_unrolled_16_rd7.push(mag_y_mag_y_update_0_write7);
}

inline void mag_y_mag_y_update_0_write8_write(hw_uint<32> & mag_y_mag_y_update_0_write8, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write8_to_sobel_unrolled_16_rd8.push(mag_y_mag_y_update_0_write8);
}

inline void mag_y_mag_y_update_0_write9_write(hw_uint<32> & mag_y_mag_y_update_0_write9, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write9_to_sobel_unrolled_16_rd9.push(mag_y_mag_y_update_0_write9);
}

inline hw_uint<32>  sobel_unrolled_16_rd0_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd0 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write0 = mag_y.mag_y_mag_y_update_0_write0_to_sobel_unrolled_16_rd0.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write0;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd1_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd1 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write1 = mag_y.mag_y_mag_y_update_0_write1_to_sobel_unrolled_16_rd1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write1;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd10_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd10 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write10 = mag_y.mag_y_mag_y_update_0_write10_to_sobel_unrolled_16_rd10.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write10;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd11_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd11 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write11 = mag_y.mag_y_mag_y_update_0_write11_to_sobel_unrolled_16_rd11.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write11;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd12_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd12 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write12 = mag_y.mag_y_mag_y_update_0_write12_to_sobel_unrolled_16_rd12.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write12;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd13_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd13 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write13 = mag_y.mag_y_mag_y_update_0_write13_to_sobel_unrolled_16_rd13.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write13;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd14_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd14 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write14 = mag_y.mag_y_mag_y_update_0_write14_to_sobel_unrolled_16_rd14.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write14;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd15_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd15 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write15 = mag_y.mag_y_mag_y_update_0_write15_to_sobel_unrolled_16_rd15.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write15;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd2_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd2 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write2 = mag_y.mag_y_mag_y_update_0_write2_to_sobel_unrolled_16_rd2.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write2;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd3_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd3 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write3 = mag_y.mag_y_mag_y_update_0_write3_to_sobel_unrolled_16_rd3.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write3;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd4_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd4 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write4 = mag_y.mag_y_mag_y_update_0_write4_to_sobel_unrolled_16_rd4.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write4;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd5_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd5 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write5 = mag_y.mag_y_mag_y_update_0_write5_to_sobel_unrolled_16_rd5.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write5;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd6_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd6 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write6 = mag_y.mag_y_mag_y_update_0_write6_to_sobel_unrolled_16_rd6.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write6;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd7_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd7 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write7 = mag_y.mag_y_mag_y_update_0_write7_to_sobel_unrolled_16_rd7.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write7;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd8_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd8 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write8 = mag_y.mag_y_mag_y_update_0_write8_to_sobel_unrolled_16_rd8.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write8;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_16_rd9_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_16_rd9 read pattern: { sobel_unrolled_16_update_0[d0, d1] -> mag_y[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write9 = mag_y.mag_y_mag_y_update_0_write9_to_sobel_unrolled_16_rd9.peek(/* one reader or all rams */ 0);
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
inline void mag_y_mag_y_update_0_write_bundle_write(hw_uint<512>& mag_y_update_0_write, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
	hw_uint<32>  mag_y_mag_y_update_0_write0_res = mag_y_update_0_write.extract<0, 31>();
	mag_y_mag_y_update_0_write0_write(mag_y_mag_y_update_0_write0_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write1_res = mag_y_update_0_write.extract<32, 63>();
	mag_y_mag_y_update_0_write1_write(mag_y_mag_y_update_0_write1_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write2_res = mag_y_update_0_write.extract<64, 95>();
	mag_y_mag_y_update_0_write2_write(mag_y_mag_y_update_0_write2_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write3_res = mag_y_update_0_write.extract<96, 127>();
	mag_y_mag_y_update_0_write3_write(mag_y_mag_y_update_0_write3_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write4_res = mag_y_update_0_write.extract<128, 159>();
	mag_y_mag_y_update_0_write4_write(mag_y_mag_y_update_0_write4_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write5_res = mag_y_update_0_write.extract<160, 191>();
	mag_y_mag_y_update_0_write5_write(mag_y_mag_y_update_0_write5_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write6_res = mag_y_update_0_write.extract<192, 223>();
	mag_y_mag_y_update_0_write6_write(mag_y_mag_y_update_0_write6_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write7_res = mag_y_update_0_write.extract<224, 255>();
	mag_y_mag_y_update_0_write7_write(mag_y_mag_y_update_0_write7_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write8_res = mag_y_update_0_write.extract<256, 287>();
	mag_y_mag_y_update_0_write8_write(mag_y_mag_y_update_0_write8_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write9_res = mag_y_update_0_write.extract<288, 319>();
	mag_y_mag_y_update_0_write9_write(mag_y_mag_y_update_0_write9_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write10_res = mag_y_update_0_write.extract<320, 351>();
	mag_y_mag_y_update_0_write10_write(mag_y_mag_y_update_0_write10_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write11_res = mag_y_update_0_write.extract<352, 383>();
	mag_y_mag_y_update_0_write11_write(mag_y_mag_y_update_0_write11_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write12_res = mag_y_update_0_write.extract<384, 415>();
	mag_y_mag_y_update_0_write12_write(mag_y_mag_y_update_0_write12_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write13_res = mag_y_update_0_write.extract<416, 447>();
	mag_y_mag_y_update_0_write13_write(mag_y_mag_y_update_0_write13_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write14_res = mag_y_update_0_write.extract<448, 479>();
	mag_y_mag_y_update_0_write14_write(mag_y_mag_y_update_0_write14_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write15_res = mag_y_update_0_write.extract<480, 511>();
	mag_y_mag_y_update_0_write15_write(mag_y_mag_y_update_0_write15_res, mag_y, d0, d1, dynamic_address);
}

// sobel_unrolled_16_update_0_read
//	sobel_unrolled_16_rd0
//	sobel_unrolled_16_rd1
//	sobel_unrolled_16_rd2
//	sobel_unrolled_16_rd3
//	sobel_unrolled_16_rd4
//	sobel_unrolled_16_rd5
//	sobel_unrolled_16_rd6
//	sobel_unrolled_16_rd7
//	sobel_unrolled_16_rd8
//	sobel_unrolled_16_rd9
//	sobel_unrolled_16_rd10
//	sobel_unrolled_16_rd11
//	sobel_unrolled_16_rd12
//	sobel_unrolled_16_rd13
//	sobel_unrolled_16_rd14
//	sobel_unrolled_16_rd15
inline hw_uint<512> mag_y_sobel_unrolled_16_update_0_read_bundle_read(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // sobel_unrolled_16_rd0
    // sobel_unrolled_16_rd1
    // sobel_unrolled_16_rd2
    // sobel_unrolled_16_rd3
    // sobel_unrolled_16_rd4
    // sobel_unrolled_16_rd5
    // sobel_unrolled_16_rd6
    // sobel_unrolled_16_rd7
    // sobel_unrolled_16_rd8
    // sobel_unrolled_16_rd9
    // sobel_unrolled_16_rd10
    // sobel_unrolled_16_rd11
    // sobel_unrolled_16_rd12
    // sobel_unrolled_16_rd13
    // sobel_unrolled_16_rd14
    // sobel_unrolled_16_rd15

	hw_uint<512> result;
	hw_uint<32>  sobel_unrolled_16_rd0_res = sobel_unrolled_16_rd0_select(mag_y, d0, d1, dynamic_address);
	set_at<0, 512>(result, sobel_unrolled_16_rd0_res);
	hw_uint<32>  sobel_unrolled_16_rd1_res = sobel_unrolled_16_rd1_select(mag_y, d0, d1, dynamic_address);
	set_at<32, 512>(result, sobel_unrolled_16_rd1_res);
	hw_uint<32>  sobel_unrolled_16_rd2_res = sobel_unrolled_16_rd2_select(mag_y, d0, d1, dynamic_address);
	set_at<64, 512>(result, sobel_unrolled_16_rd2_res);
	hw_uint<32>  sobel_unrolled_16_rd3_res = sobel_unrolled_16_rd3_select(mag_y, d0, d1, dynamic_address);
	set_at<96, 512>(result, sobel_unrolled_16_rd3_res);
	hw_uint<32>  sobel_unrolled_16_rd4_res = sobel_unrolled_16_rd4_select(mag_y, d0, d1, dynamic_address);
	set_at<128, 512>(result, sobel_unrolled_16_rd4_res);
	hw_uint<32>  sobel_unrolled_16_rd5_res = sobel_unrolled_16_rd5_select(mag_y, d0, d1, dynamic_address);
	set_at<160, 512>(result, sobel_unrolled_16_rd5_res);
	hw_uint<32>  sobel_unrolled_16_rd6_res = sobel_unrolled_16_rd6_select(mag_y, d0, d1, dynamic_address);
	set_at<192, 512>(result, sobel_unrolled_16_rd6_res);
	hw_uint<32>  sobel_unrolled_16_rd7_res = sobel_unrolled_16_rd7_select(mag_y, d0, d1, dynamic_address);
	set_at<224, 512>(result, sobel_unrolled_16_rd7_res);
	hw_uint<32>  sobel_unrolled_16_rd8_res = sobel_unrolled_16_rd8_select(mag_y, d0, d1, dynamic_address);
	set_at<256, 512>(result, sobel_unrolled_16_rd8_res);
	hw_uint<32>  sobel_unrolled_16_rd9_res = sobel_unrolled_16_rd9_select(mag_y, d0, d1, dynamic_address);
	set_at<288, 512>(result, sobel_unrolled_16_rd9_res);
	hw_uint<32>  sobel_unrolled_16_rd10_res = sobel_unrolled_16_rd10_select(mag_y, d0, d1, dynamic_address);
	set_at<320, 512>(result, sobel_unrolled_16_rd10_res);
	hw_uint<32>  sobel_unrolled_16_rd11_res = sobel_unrolled_16_rd11_select(mag_y, d0, d1, dynamic_address);
	set_at<352, 512>(result, sobel_unrolled_16_rd11_res);
	hw_uint<32>  sobel_unrolled_16_rd12_res = sobel_unrolled_16_rd12_select(mag_y, d0, d1, dynamic_address);
	set_at<384, 512>(result, sobel_unrolled_16_rd12_res);
	hw_uint<32>  sobel_unrolled_16_rd13_res = sobel_unrolled_16_rd13_select(mag_y, d0, d1, dynamic_address);
	set_at<416, 512>(result, sobel_unrolled_16_rd13_res);
	hw_uint<32>  sobel_unrolled_16_rd14_res = sobel_unrolled_16_rd14_select(mag_y, d0, d1, dynamic_address);
	set_at<448, 512>(result, sobel_unrolled_16_rd14_res);
	hw_uint<32>  sobel_unrolled_16_rd15_res = sobel_unrolled_16_rd15_select(mag_y, d0, d1, dynamic_address);
	set_at<480, 512>(result, sobel_unrolled_16_rd15_res);
	return result;
}

// Total re-use buffer capacity: 125472 bits


// Operation logic
inline void mag_x_update_0(img_cache& img, mag_x_cache& mag_x, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_mag_x_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sobel_mx_unrolled_16(img_0_c__0_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_write_bundle_write(/* arg names */compute_result, mag_x, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void sobel_unrolled_16_update_0(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<512> >& /* buffer_args num ports = 16 */sobel_unrolled_16, int d0, int d1) {
  // Dynamic address computation

	// Consume: mag_x
	auto mag_x_0_c__0_value = mag_x_sobel_unrolled_16_update_0_read_bundle_read(mag_x/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_0_c__0_value = mag_y_sobel_unrolled_16_update_0_read_bundle_read(mag_y/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_cu_unrolled_16(mag_x_0_c__0_value, mag_y_0_c__0_value);
	// Produce: sobel_unrolled_16
	sobel_unrolled_16.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void img_update_0(HWStream<hw_uint<512> >& /* buffer_args num ports = 16 */off_chip_img, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = id_unrolled_16(off_chip_img_0_c__0_value);
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

	auto compute_result = sobel_my_unrolled_16(img_0_c__0_value);
	// Produce: mag_y
	mag_y_mag_y_update_0_write_bundle_write(/* arg names */compute_result, mag_y, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sobel_unrolled_16_opt(HWStream<hw_uint<512> >& /* get_args num ports = 16 */off_chip_img, HWStream<hw_uint<512> >& /* get_args num ports = 16 */sobel_unrolled_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sobel_unrolled_16_opt_debug.csv");
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

// schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080; sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079; mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
//   { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 120 and -1 <= d1 <= 1080 }
// Condition for img_update_0(((-1 + i2 == 0) && (1 + i1 >= 0) && (120 - i1 >= 0) && (1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { sobel_unrolled_16_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for sobel_unrolled_16_update_0(((-4 + i2 == 0) && (-1 + i1 >= 0) && (120 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for mag_y_update_0(((-2 + i2 == 0) && (-1 + i1 >= 0) && (120 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for mag_x_update_0(((-3 + i2 == 0) && (-1 + i1 >= 0) && (120 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))

  /*
for (int c0 = -1; c0 <= 1080; c0 += 1)
  for (int c1 = -1; c1 <= 120; c1 += 1) {
    img_update_0(c1, c0);
    if (c0 >= 1 && c1 >= 1) {
      mag_y_update_0(c1 - 1, c0 - 1);
      mag_x_update_0(c1 - 1, c0 - 1);
      sobel_unrolled_16_update_0(c1 - 1, c0 - 1);
    }
  }

  */
	for (int c0 = -1; c0 <= 1080; c0 += 1)
	  for (int c1 = -1; c1 <= 120; c1 += 1) {
	    img_update_0(off_chip_img /* buf name */, img, c1, c0);
	    if (c0 >= 1 && c1 >= 1) {
	      mag_y_update_0(img /* buf name */, mag_y, c1 - 1, c0 - 1);
	      mag_x_update_0(img /* buf name */, mag_x, c1 - 1, c0 - 1);
	      sobel_unrolled_16_update_0(mag_x /* buf name */, mag_y /* buf name */, sobel_unrolled_16, c1 - 1, c0 - 1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sobel_unrolled_16_opt_wrapper(HWStream<hw_uint<512> >& /* get_args num ports = 16 */off_chip_img, HWStream<hw_uint<512> >& /* get_args num ports = 16 */sobel_unrolled_16, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sobel_unrolled_16_opt(off_chip_img, sobel_unrolled_16);
  }
}
#ifdef __VIVADO_SYNTH__
  // { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 120 and -1 <= img_1 <= 1080 }
const int img_update_0_read_pipe0_num_transfers = 132004;
  // { sobel_unrolled_16_update_0[root = 0, sobel_unrolled_16_0, sobel_unrolled_16_1] -> sobel_unrolled_16[0, 0] : 0 <= sobel_unrolled_16_0 <= 119 and 0 <= sobel_unrolled_16_1 <= 1079 }
const int sobel_unrolled_16_update_0_write_pipe0_num_transfers = 129600;


extern "C" {

void sobel_unrolled_16_opt_accel(hw_uint<512>* img_update_0_read_pipe0, hw_uint<512>* sobel_unrolled_16_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sobel_unrolled_16_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sobel_unrolled_16_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > img_update_0_read_pipe0_channel;
  static HWStream<hw_uint<512> > sobel_unrolled_16_update_0_write_pipe0_channel;

  burst_read<512>(img_update_0_read_pipe0, img_update_0_read_pipe0_channel, img_update_0_read_pipe0_num_transfers*size);

  sobel_unrolled_16_opt_wrapper(img_update_0_read_pipe0_channel, sobel_unrolled_16_update_0_write_pipe0_channel, size);

  burst_write<512>(sobel_unrolled_16_update_0_write_pipe0, sobel_unrolled_16_update_0_write_pipe0_channel, sobel_unrolled_16_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sobel_unrolled_16_opt_rdai(HWStream<hw_uint<512> >& img_update_0_read_pipe0, HWStream<hw_uint<512> >&  sobel_unrolled_16_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = sobel_unrolled_16_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sobel_unrolled_16_opt(img_update_0_read_pipe0, sobel_unrolled_16_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

