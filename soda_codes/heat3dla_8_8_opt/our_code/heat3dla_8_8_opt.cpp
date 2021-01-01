#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: heat3dla_8_8_opt_compute_units.h
#include "heat3dla_8_8_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-48, 176], [-7, 133], [-6, 37]}
	// Capacity: 8552
	// # of read delays: 7
  // 0, 31, 4261, 4290, 4291, 4321, 8551
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 30> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4229> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 28> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 29> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 4229> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2;
	}

	inline hw_uint<32>  peek_4260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4261() {
		return f4;
	}

	inline hw_uint<32>  peek_4289() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4290() {
		return f6;
	}

	inline hw_uint<32>  peek_4291() {
		return f8;
	}

	inline hw_uint<32>  peek_4320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4321() {
		return f10;
	}

	inline hw_uint<32>  peek_8550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_8551() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-47, 169], [-7, 134], [-6, 37]}
	// Capacity: 8552
	// # of read delays: 6
  // 0, 31, 4261, 4291, 4321, 8551
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 30> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4229> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 29> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 29> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4229> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2;
	}

	inline hw_uint<32>  peek_4260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4261() {
		return f4;
	}

	inline hw_uint<32>  peek_4290() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4291() {
		return f6;
	}

	inline hw_uint<32>  peek_4320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4321() {
		return f8;
	}

	inline hw_uint<32>  peek_8550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_8551() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-46, 170], [-7, 134], [-6, 37]}
	// Capacity: 8552
	// # of read delays: 6
  // 0, 31, 4261, 4291, 4321, 8551
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 30> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4229> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 29> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 29> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4229> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2;
	}

	inline hw_uint<32>  peek_4260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4261() {
		return f4;
	}

	inline hw_uint<32>  peek_4290() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4291() {
		return f6;
	}

	inline hw_uint<32>  peek_4320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4321() {
		return f8;
	}

	inline hw_uint<32>  peek_8550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_8551() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-45, 171], [-7, 134], [-6, 37]}
	// Capacity: 8552
	// # of read delays: 6
  // 0, 31, 4261, 4291, 4321, 8551
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 30> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4229> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 29> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 29> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4229> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2;
	}

	inline hw_uint<32>  peek_4260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4261() {
		return f4;
	}

	inline hw_uint<32>  peek_4290() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4291() {
		return f6;
	}

	inline hw_uint<32>  peek_4320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4321() {
		return f8;
	}

	inline hw_uint<32>  peek_8550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_8551() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-44, 172], [-7, 134], [-6, 37]}
	// Capacity: 8552
	// # of read delays: 6
  // 0, 31, 4261, 4291, 4321, 8551
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 30> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4229> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 29> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 29> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4229> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2;
	}

	inline hw_uint<32>  peek_4260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4261() {
		return f4;
	}

	inline hw_uint<32>  peek_4290() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4291() {
		return f6;
	}

	inline hw_uint<32>  peek_4320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4321() {
		return f8;
	}

	inline hw_uint<32>  peek_8550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_8551() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-43, 173], [-7, 134], [-6, 37]}
	// Capacity: 8552
	// # of read delays: 6
  // 0, 31, 4261, 4291, 4321, 8551
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 30> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4229> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 29> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 29> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4229> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2;
	}

	inline hw_uint<32>  peek_4260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4261() {
		return f4;
	}

	inline hw_uint<32>  peek_4290() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4291() {
		return f6;
	}

	inline hw_uint<32>  peek_4320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4321() {
		return f8;
	}

	inline hw_uint<32>  peek_8550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_8551() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-42, 174], [-7, 134], [-6, 37]}
	// Capacity: 8552
	// # of read delays: 6
  // 0, 31, 4261, 4291, 4321, 8551
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 30> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4229> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 29> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 29> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4229> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2;
	}

	inline hw_uint<32>  peek_4260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4261() {
		return f4;
	}

	inline hw_uint<32>  peek_4290() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4291() {
		return f6;
	}

	inline hw_uint<32>  peek_4320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4321() {
		return f8;
	}

	inline hw_uint<32>  peek_8550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_8551() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-49, 175], [-6, 134], [-6, 37]}
	// Capacity: 8552
	// # of read delays: 7
  // 0, 31, 4261, 4291, 4292, 4321, 8551
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 30> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4229> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 29> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 28> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 4229> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_31() {
		return f2;
	}

	inline hw_uint<32>  peek_4260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4261() {
		return f4;
	}

	inline hw_uint<32>  peek_4290() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4291() {
		return f6;
	}

	inline hw_uint<32>  peek_4292() {
		return f8;
	}

	inline hw_uint<32>  peek_4320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4321() {
		return f10;
	}

	inline hw_uint<32>  peek_8550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_8551() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4229
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4229 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_cache {
  // # of banks: 8
  h3_0_h3_0_update_0_write0_merged_banks_7_cache h3_0_h3_0_update_0_write0_merged_banks_7;
  h3_0_h3_0_update_0_write1_merged_banks_7_cache h3_0_h3_0_update_0_write1_merged_banks_7;
  h3_0_h3_0_update_0_write2_merged_banks_7_cache h3_0_h3_0_update_0_write2_merged_banks_7;
  h3_0_h3_0_update_0_write3_merged_banks_7_cache h3_0_h3_0_update_0_write3_merged_banks_7;
  h3_0_h3_0_update_0_write4_merged_banks_7_cache h3_0_h3_0_update_0_write4_merged_banks_7;
  h3_0_h3_0_update_0_write5_merged_banks_7_cache h3_0_h3_0_update_0_write5_merged_banks_7;
  h3_0_h3_0_update_0_write6_merged_banks_7_cache h3_0_h3_0_update_0_write6_merged_banks_7;
  h3_0_h3_0_update_0_write7_merged_banks_7_cache h3_0_h3_0_update_0_write7_merged_banks_7;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.push(h3_0_h3_0_update_0_write0);
}

inline void h3_0_h3_0_update_0_write1_write(hw_uint<32> & h3_0_h3_0_update_0_write1, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.push(h3_0_h3_0_update_0_write1);
}

inline void h3_0_h3_0_update_0_write2_write(hw_uint<32> & h3_0_h3_0_update_0_write2, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.push(h3_0_h3_0_update_0_write2);
}

inline void h3_0_h3_0_update_0_write3_write(hw_uint<32> & h3_0_h3_0_update_0_write3, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.push(h3_0_h3_0_update_0_write3);
}

inline void h3_0_h3_0_update_0_write4_write(hw_uint<32> & h3_0_h3_0_update_0_write4, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.push(h3_0_h3_0_update_0_write4);
}

inline void h3_0_h3_0_update_0_write5_write(hw_uint<32> & h3_0_h3_0_update_0_write5, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.push(h3_0_h3_0_update_0_write5);
}

inline void h3_0_h3_0_update_0_write6_write(hw_uint<32> & h3_0_h3_0_update_0_write6, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.push(h3_0_h3_0_update_0_write6);
}

inline void h3_0_h3_0_update_0_write7_write(hw_uint<32> & h3_0_h3_0_update_0_write7, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.push(h3_0_h3_0_update_0_write7);
}

inline hw_uint<32>  h3_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[-1 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_4292();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, -1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_4321();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd10_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd10 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd11_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd11 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, 1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_31();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd12_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd12 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, 1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_4261();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd13_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd13 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd14_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd14 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd15_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd15 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, -1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_4321();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd16_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd16 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, -1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_8551();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd17_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd17 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd18_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd18 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, 1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_31();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd19_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd19 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, 1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_4261();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, d1, -1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_8551();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd20_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd20 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd21_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd21 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd22_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd22 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, -1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_4321();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd23_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd23 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, -1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_8551();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd24_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd24 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd25_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd25 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, 1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_31();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd26_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd26 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, 1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_4261();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd27_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd27 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd28_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd28 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd29_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd29 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, -1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_4321();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd30_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd30 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, -1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_8551();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd31_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd31 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd32_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd32 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, 1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_31();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd33_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd33 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, 1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_4261();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd34_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd34 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd35_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd35 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd36_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd36 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, -1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_4321();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd37_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd37 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, -1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_8551();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd38_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd38 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd39_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd39 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, 1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_31();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, d1, 1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_31();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd40_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd40 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, 1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_4261();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd41_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd41 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd42_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd42 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd43_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd43 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, -1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_4321();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd44_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd44 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, -1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_8551();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd45_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd45 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd46_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd46 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, 1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_31();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd47_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd47 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, 1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_4261();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd48_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd48 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd49_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd49 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd5_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd5 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, 1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_4261();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd50_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd50 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, -1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_4321();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd51_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd51 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, -1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_8551();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd52_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd52 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd53_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd53 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, 1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_31();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd54_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd54 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, 1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_4261();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd55_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd55 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_4290();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd6_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd6 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd7_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd7 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_4291();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd8_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd8 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, -1 + d1, d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_4321();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd9_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd9 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, -1 + d2] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_8551();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
//	h3_0_h3_0_update_0_write1
//	h3_0_h3_0_update_0_write2
//	h3_0_h3_0_update_0_write3
//	h3_0_h3_0_update_0_write4
//	h3_0_h3_0_update_0_write5
//	h3_0_h3_0_update_0_write6
//	h3_0_h3_0_update_0_write7
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<256>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write1_res = h3_0_update_0_write.extract<32, 63>();
	h3_0_h3_0_update_0_write1_write(h3_0_h3_0_update_0_write1_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write2_res = h3_0_update_0_write.extract<64, 95>();
	h3_0_h3_0_update_0_write2_write(h3_0_h3_0_update_0_write2_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write3_res = h3_0_update_0_write.extract<96, 127>();
	h3_0_h3_0_update_0_write3_write(h3_0_h3_0_update_0_write3_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write4_res = h3_0_update_0_write.extract<128, 159>();
	h3_0_h3_0_update_0_write4_write(h3_0_h3_0_update_0_write4_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write5_res = h3_0_update_0_write.extract<160, 191>();
	h3_0_h3_0_update_0_write5_write(h3_0_h3_0_update_0_write5_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write6_res = h3_0_update_0_write.extract<192, 223>();
	h3_0_h3_0_update_0_write6_write(h3_0_h3_0_update_0_write6_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write7_res = h3_0_update_0_write.extract<224, 255>();
	h3_0_h3_0_update_0_write7_write(h3_0_h3_0_update_0_write7_res, h3_0, d0, d1, d2, dynamic_address);
}

// h3_1_update_0_read
//	h3_1_rd0
//	h3_1_rd1
//	h3_1_rd2
//	h3_1_rd3
//	h3_1_rd4
//	h3_1_rd5
//	h3_1_rd6
//	h3_1_rd7
//	h3_1_rd8
//	h3_1_rd9
//	h3_1_rd10
//	h3_1_rd11
//	h3_1_rd12
//	h3_1_rd13
//	h3_1_rd14
//	h3_1_rd15
//	h3_1_rd16
//	h3_1_rd17
//	h3_1_rd18
//	h3_1_rd19
//	h3_1_rd20
//	h3_1_rd21
//	h3_1_rd22
//	h3_1_rd23
//	h3_1_rd24
//	h3_1_rd25
//	h3_1_rd26
//	h3_1_rd27
//	h3_1_rd28
//	h3_1_rd29
//	h3_1_rd30
//	h3_1_rd31
//	h3_1_rd32
//	h3_1_rd33
//	h3_1_rd34
//	h3_1_rd35
//	h3_1_rd36
//	h3_1_rd37
//	h3_1_rd38
//	h3_1_rd39
//	h3_1_rd40
//	h3_1_rd41
//	h3_1_rd42
//	h3_1_rd43
//	h3_1_rd44
//	h3_1_rd45
//	h3_1_rd46
//	h3_1_rd47
//	h3_1_rd48
//	h3_1_rd49
//	h3_1_rd50
//	h3_1_rd51
//	h3_1_rd52
//	h3_1_rd53
//	h3_1_rd54
//	h3_1_rd55
inline hw_uint<1792> h3_0_h3_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_1_rd0
    // h3_1_rd1
    // h3_1_rd2
    // h3_1_rd3
    // h3_1_rd4
    // h3_1_rd5
    // h3_1_rd6
    // h3_1_rd7
    // h3_1_rd8
    // h3_1_rd9
    // h3_1_rd10
    // h3_1_rd11
    // h3_1_rd12
    // h3_1_rd13
    // h3_1_rd14
    // h3_1_rd15
    // h3_1_rd16
    // h3_1_rd17
    // h3_1_rd18
    // h3_1_rd19
    // h3_1_rd20
    // h3_1_rd21
    // h3_1_rd22
    // h3_1_rd23
    // h3_1_rd24
    // h3_1_rd25
    // h3_1_rd26
    // h3_1_rd27
    // h3_1_rd28
    // h3_1_rd29
    // h3_1_rd30
    // h3_1_rd31
    // h3_1_rd32
    // h3_1_rd33
    // h3_1_rd34
    // h3_1_rd35
    // h3_1_rd36
    // h3_1_rd37
    // h3_1_rd38
    // h3_1_rd39
    // h3_1_rd40
    // h3_1_rd41
    // h3_1_rd42
    // h3_1_rd43
    // h3_1_rd44
    // h3_1_rd45
    // h3_1_rd46
    // h3_1_rd47
    // h3_1_rd48
    // h3_1_rd49
    // h3_1_rd50
    // h3_1_rd51
    // h3_1_rd52
    // h3_1_rd53
    // h3_1_rd54
    // h3_1_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_1_rd0_res = h3_1_rd0_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_1_rd0_res);
	hw_uint<32>  h3_1_rd1_res = h3_1_rd1_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_1_rd1_res);
	hw_uint<32>  h3_1_rd2_res = h3_1_rd2_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_1_rd2_res);
	hw_uint<32>  h3_1_rd3_res = h3_1_rd3_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_1_rd3_res);
	hw_uint<32>  h3_1_rd4_res = h3_1_rd4_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_1_rd4_res);
	hw_uint<32>  h3_1_rd5_res = h3_1_rd5_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_1_rd5_res);
	hw_uint<32>  h3_1_rd6_res = h3_1_rd6_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_1_rd6_res);
	hw_uint<32>  h3_1_rd7_res = h3_1_rd7_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_1_rd7_res);
	hw_uint<32>  h3_1_rd8_res = h3_1_rd8_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_1_rd8_res);
	hw_uint<32>  h3_1_rd9_res = h3_1_rd9_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_1_rd9_res);
	hw_uint<32>  h3_1_rd10_res = h3_1_rd10_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_1_rd10_res);
	hw_uint<32>  h3_1_rd11_res = h3_1_rd11_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_1_rd11_res);
	hw_uint<32>  h3_1_rd12_res = h3_1_rd12_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_1_rd12_res);
	hw_uint<32>  h3_1_rd13_res = h3_1_rd13_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_1_rd13_res);
	hw_uint<32>  h3_1_rd14_res = h3_1_rd14_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_1_rd14_res);
	hw_uint<32>  h3_1_rd15_res = h3_1_rd15_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_1_rd15_res);
	hw_uint<32>  h3_1_rd16_res = h3_1_rd16_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_1_rd16_res);
	hw_uint<32>  h3_1_rd17_res = h3_1_rd17_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_1_rd17_res);
	hw_uint<32>  h3_1_rd18_res = h3_1_rd18_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_1_rd18_res);
	hw_uint<32>  h3_1_rd19_res = h3_1_rd19_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_1_rd19_res);
	hw_uint<32>  h3_1_rd20_res = h3_1_rd20_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_1_rd20_res);
	hw_uint<32>  h3_1_rd21_res = h3_1_rd21_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_1_rd21_res);
	hw_uint<32>  h3_1_rd22_res = h3_1_rd22_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_1_rd22_res);
	hw_uint<32>  h3_1_rd23_res = h3_1_rd23_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_1_rd23_res);
	hw_uint<32>  h3_1_rd24_res = h3_1_rd24_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_1_rd24_res);
	hw_uint<32>  h3_1_rd25_res = h3_1_rd25_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_1_rd25_res);
	hw_uint<32>  h3_1_rd26_res = h3_1_rd26_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_1_rd26_res);
	hw_uint<32>  h3_1_rd27_res = h3_1_rd27_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_1_rd27_res);
	hw_uint<32>  h3_1_rd28_res = h3_1_rd28_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_1_rd28_res);
	hw_uint<32>  h3_1_rd29_res = h3_1_rd29_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_1_rd29_res);
	hw_uint<32>  h3_1_rd30_res = h3_1_rd30_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_1_rd30_res);
	hw_uint<32>  h3_1_rd31_res = h3_1_rd31_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_1_rd31_res);
	hw_uint<32>  h3_1_rd32_res = h3_1_rd32_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_1_rd32_res);
	hw_uint<32>  h3_1_rd33_res = h3_1_rd33_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_1_rd33_res);
	hw_uint<32>  h3_1_rd34_res = h3_1_rd34_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_1_rd34_res);
	hw_uint<32>  h3_1_rd35_res = h3_1_rd35_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_1_rd35_res);
	hw_uint<32>  h3_1_rd36_res = h3_1_rd36_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_1_rd36_res);
	hw_uint<32>  h3_1_rd37_res = h3_1_rd37_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_1_rd37_res);
	hw_uint<32>  h3_1_rd38_res = h3_1_rd38_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_1_rd38_res);
	hw_uint<32>  h3_1_rd39_res = h3_1_rd39_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_1_rd39_res);
	hw_uint<32>  h3_1_rd40_res = h3_1_rd40_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_1_rd40_res);
	hw_uint<32>  h3_1_rd41_res = h3_1_rd41_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_1_rd41_res);
	hw_uint<32>  h3_1_rd42_res = h3_1_rd42_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_1_rd42_res);
	hw_uint<32>  h3_1_rd43_res = h3_1_rd43_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_1_rd43_res);
	hw_uint<32>  h3_1_rd44_res = h3_1_rd44_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_1_rd44_res);
	hw_uint<32>  h3_1_rd45_res = h3_1_rd45_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_1_rd45_res);
	hw_uint<32>  h3_1_rd46_res = h3_1_rd46_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_1_rd46_res);
	hw_uint<32>  h3_1_rd47_res = h3_1_rd47_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_1_rd47_res);
	hw_uint<32>  h3_1_rd48_res = h3_1_rd48_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_1_rd48_res);
	hw_uint<32>  h3_1_rd49_res = h3_1_rd49_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_1_rd49_res);
	hw_uint<32>  h3_1_rd50_res = h3_1_rd50_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_1_rd50_res);
	hw_uint<32>  h3_1_rd51_res = h3_1_rd51_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_1_rd51_res);
	hw_uint<32>  h3_1_rd52_res = h3_1_rd52_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_1_rd52_res);
	hw_uint<32>  h3_1_rd53_res = h3_1_rd53_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_1_rd53_res);
	hw_uint<32>  h3_1_rd54_res = h3_1_rd54_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_1_rd54_res);
	hw_uint<32>  h3_1_rd55_res = h3_1_rd55_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_1_rd55_res);
	return result;
}

struct h3_1_h3_1_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-40, 168], [-6, 132], [-5, 36]}
	// Capacity: 7870
	// # of read delays: 7
  // 0, 29, 3921, 3948, 3949, 3977, 7869
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 28> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3891> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 26> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 27> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 3891> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_29() {
		return f2;
	}

	inline hw_uint<32>  peek_3920() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3921() {
		return f4;
	}

	inline hw_uint<32>  peek_3947() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3948() {
		return f6;
	}

	inline hw_uint<32>  peek_3949() {
		return f8;
	}

	inline hw_uint<32>  peek_3976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_3977() {
		return f10;
	}

	inline hw_uint<32>  peek_7868() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_7869() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-39, 161], [-6, 133], [-5, 36]}
	// Capacity: 7870
	// # of read delays: 6
  // 0, 29, 3921, 3949, 3977, 7869
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 28> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3891> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 27> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 27> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3891> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_29() {
		return f2;
	}

	inline hw_uint<32>  peek_3920() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3921() {
		return f4;
	}

	inline hw_uint<32>  peek_3948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3949() {
		return f6;
	}

	inline hw_uint<32>  peek_3976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3977() {
		return f8;
	}

	inline hw_uint<32>  peek_7868() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7869() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-38, 162], [-6, 133], [-5, 36]}
	// Capacity: 7870
	// # of read delays: 6
  // 0, 29, 3921, 3949, 3977, 7869
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 28> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3891> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 27> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 27> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3891> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_29() {
		return f2;
	}

	inline hw_uint<32>  peek_3920() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3921() {
		return f4;
	}

	inline hw_uint<32>  peek_3948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3949() {
		return f6;
	}

	inline hw_uint<32>  peek_3976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3977() {
		return f8;
	}

	inline hw_uint<32>  peek_7868() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7869() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-37, 163], [-6, 133], [-5, 36]}
	// Capacity: 7870
	// # of read delays: 6
  // 0, 29, 3921, 3949, 3977, 7869
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 28> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3891> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 27> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 27> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3891> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_29() {
		return f2;
	}

	inline hw_uint<32>  peek_3920() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3921() {
		return f4;
	}

	inline hw_uint<32>  peek_3948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3949() {
		return f6;
	}

	inline hw_uint<32>  peek_3976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3977() {
		return f8;
	}

	inline hw_uint<32>  peek_7868() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7869() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-36, 164], [-6, 133], [-5, 36]}
	// Capacity: 7870
	// # of read delays: 6
  // 0, 29, 3921, 3949, 3977, 7869
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 28> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3891> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 27> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 27> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3891> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_29() {
		return f2;
	}

	inline hw_uint<32>  peek_3920() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3921() {
		return f4;
	}

	inline hw_uint<32>  peek_3948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3949() {
		return f6;
	}

	inline hw_uint<32>  peek_3976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3977() {
		return f8;
	}

	inline hw_uint<32>  peek_7868() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7869() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-35, 165], [-6, 133], [-5, 36]}
	// Capacity: 7870
	// # of read delays: 6
  // 0, 29, 3921, 3949, 3977, 7869
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 28> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3891> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 27> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 27> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3891> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_29() {
		return f2;
	}

	inline hw_uint<32>  peek_3920() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3921() {
		return f4;
	}

	inline hw_uint<32>  peek_3948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3949() {
		return f6;
	}

	inline hw_uint<32>  peek_3976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3977() {
		return f8;
	}

	inline hw_uint<32>  peek_7868() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7869() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-34, 166], [-6, 133], [-5, 36]}
	// Capacity: 7870
	// # of read delays: 6
  // 0, 29, 3921, 3949, 3977, 7869
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 28> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3891> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 27> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 27> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3891> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_29() {
		return f2;
	}

	inline hw_uint<32>  peek_3920() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3921() {
		return f4;
	}

	inline hw_uint<32>  peek_3948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3949() {
		return f6;
	}

	inline hw_uint<32>  peek_3976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3977() {
		return f8;
	}

	inline hw_uint<32>  peek_7868() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7869() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-41, 167], [-5, 133], [-5, 36]}
	// Capacity: 7870
	// # of read delays: 7
  // 0, 29, 3921, 3949, 3950, 3977, 7869
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 28> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3891> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 27> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 26> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 3891> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_29() {
		return f2;
	}

	inline hw_uint<32>  peek_3920() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3921() {
		return f4;
	}

	inline hw_uint<32>  peek_3948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3949() {
		return f6;
	}

	inline hw_uint<32>  peek_3950() {
		return f8;
	}

	inline hw_uint<32>  peek_3976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_3977() {
		return f10;
	}

	inline hw_uint<32>  peek_7868() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_7869() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3891
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3891 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 28
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 28 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_cache {
  // # of banks: 8
  h3_1_h3_1_update_0_write0_merged_banks_7_cache h3_1_h3_1_update_0_write0_merged_banks_7;
  h3_1_h3_1_update_0_write1_merged_banks_7_cache h3_1_h3_1_update_0_write1_merged_banks_7;
  h3_1_h3_1_update_0_write2_merged_banks_7_cache h3_1_h3_1_update_0_write2_merged_banks_7;
  h3_1_h3_1_update_0_write3_merged_banks_7_cache h3_1_h3_1_update_0_write3_merged_banks_7;
  h3_1_h3_1_update_0_write4_merged_banks_7_cache h3_1_h3_1_update_0_write4_merged_banks_7;
  h3_1_h3_1_update_0_write5_merged_banks_7_cache h3_1_h3_1_update_0_write5_merged_banks_7;
  h3_1_h3_1_update_0_write6_merged_banks_7_cache h3_1_h3_1_update_0_write6_merged_banks_7;
  h3_1_h3_1_update_0_write7_merged_banks_7_cache h3_1_h3_1_update_0_write7_merged_banks_7;
};



inline void h3_1_h3_1_update_0_write0_write(hw_uint<32> & h3_1_h3_1_update_0_write0, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.push(h3_1_h3_1_update_0_write0);
}

inline void h3_1_h3_1_update_0_write1_write(hw_uint<32> & h3_1_h3_1_update_0_write1, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.push(h3_1_h3_1_update_0_write1);
}

inline void h3_1_h3_1_update_0_write2_write(hw_uint<32> & h3_1_h3_1_update_0_write2, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.push(h3_1_h3_1_update_0_write2);
}

inline void h3_1_h3_1_update_0_write3_write(hw_uint<32> & h3_1_h3_1_update_0_write3, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.push(h3_1_h3_1_update_0_write3);
}

inline void h3_1_h3_1_update_0_write4_write(hw_uint<32> & h3_1_h3_1_update_0_write4, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.push(h3_1_h3_1_update_0_write4);
}

inline void h3_1_h3_1_update_0_write5_write(hw_uint<32> & h3_1_h3_1_update_0_write5, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.push(h3_1_h3_1_update_0_write5);
}

inline void h3_1_h3_1_update_0_write6_write(hw_uint<32> & h3_1_h3_1_update_0_write6, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.push(h3_1_h3_1_update_0_write6);
}

inline void h3_1_h3_1_update_0_write7_write(hw_uint<32> & h3_1_h3_1_update_0_write7, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.push(h3_1_h3_1_update_0_write7);
}

inline hw_uint<32>  h3_2_rd0_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[-1 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_3950();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, -1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_3977();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd10_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd10 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd11_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd11 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, 1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_29();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd12_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd12 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, 1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_3921();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd13_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd13 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd14_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd14 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd15_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd15 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, -1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_3977();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd16_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd16 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, -1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_7869();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd17_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd17 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd18_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd18 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, 1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_29();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd19_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd19 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, 1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_3921();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, d1, -1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_7869();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd20_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd20 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd21_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd21 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd22_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd22 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, -1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_3977();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd23_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd23 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, -1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_7869();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd24_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd24 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd25_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd25 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, 1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_29();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd26_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd26 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, 1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_3921();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd27_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd27 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd28_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd28 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd29_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd29 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, -1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_3977();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd30_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd30 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, -1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_7869();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd31_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd31 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd32_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd32 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, 1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_29();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd33_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd33 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, 1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_3921();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd34_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd34 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd35_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd35 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd36_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd36 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, -1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_3977();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd37_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd37 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, -1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_7869();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd38_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd38 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd39_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd39 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, 1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_29();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, d1, 1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_29();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd40_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd40 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, 1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_3921();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd41_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd41 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd42_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd42 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd43_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd43 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, -1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_3977();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd44_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd44 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, -1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_7869();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd45_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd45 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd46_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd46 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, 1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_29();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd47_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd47 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, 1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_3921();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd48_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd48 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd49_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd49 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd5_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd5 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, 1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_3921();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd50_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd50 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, -1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_3977();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd51_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd51 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, d1, -1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_7869();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd52_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd52 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd53_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd53 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, d1, 1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_29();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd54_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd54 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, 1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_3921();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd55_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd55 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_3948();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd6_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd6 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd7_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd7 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_3949();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd8_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd8 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, -1 + d1, d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_3977();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd9_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd9 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, -1 + d2] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_7869();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_1_update_0_write
//	h3_1_h3_1_update_0_write0
//	h3_1_h3_1_update_0_write1
//	h3_1_h3_1_update_0_write2
//	h3_1_h3_1_update_0_write3
//	h3_1_h3_1_update_0_write4
//	h3_1_h3_1_update_0_write5
//	h3_1_h3_1_update_0_write6
//	h3_1_h3_1_update_0_write7
inline void h3_1_h3_1_update_0_write_bundle_write(hw_uint<256>& h3_1_update_0_write, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_1_h3_1_update_0_write0_res = h3_1_update_0_write.extract<0, 31>();
	h3_1_h3_1_update_0_write0_write(h3_1_h3_1_update_0_write0_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write1_res = h3_1_update_0_write.extract<32, 63>();
	h3_1_h3_1_update_0_write1_write(h3_1_h3_1_update_0_write1_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write2_res = h3_1_update_0_write.extract<64, 95>();
	h3_1_h3_1_update_0_write2_write(h3_1_h3_1_update_0_write2_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write3_res = h3_1_update_0_write.extract<96, 127>();
	h3_1_h3_1_update_0_write3_write(h3_1_h3_1_update_0_write3_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write4_res = h3_1_update_0_write.extract<128, 159>();
	h3_1_h3_1_update_0_write4_write(h3_1_h3_1_update_0_write4_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write5_res = h3_1_update_0_write.extract<160, 191>();
	h3_1_h3_1_update_0_write5_write(h3_1_h3_1_update_0_write5_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write6_res = h3_1_update_0_write.extract<192, 223>();
	h3_1_h3_1_update_0_write6_write(h3_1_h3_1_update_0_write6_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write7_res = h3_1_update_0_write.extract<224, 255>();
	h3_1_h3_1_update_0_write7_write(h3_1_h3_1_update_0_write7_res, h3_1, d0, d1, d2, dynamic_address);
}

// h3_2_update_0_read
//	h3_2_rd0
//	h3_2_rd1
//	h3_2_rd2
//	h3_2_rd3
//	h3_2_rd4
//	h3_2_rd5
//	h3_2_rd6
//	h3_2_rd7
//	h3_2_rd8
//	h3_2_rd9
//	h3_2_rd10
//	h3_2_rd11
//	h3_2_rd12
//	h3_2_rd13
//	h3_2_rd14
//	h3_2_rd15
//	h3_2_rd16
//	h3_2_rd17
//	h3_2_rd18
//	h3_2_rd19
//	h3_2_rd20
//	h3_2_rd21
//	h3_2_rd22
//	h3_2_rd23
//	h3_2_rd24
//	h3_2_rd25
//	h3_2_rd26
//	h3_2_rd27
//	h3_2_rd28
//	h3_2_rd29
//	h3_2_rd30
//	h3_2_rd31
//	h3_2_rd32
//	h3_2_rd33
//	h3_2_rd34
//	h3_2_rd35
//	h3_2_rd36
//	h3_2_rd37
//	h3_2_rd38
//	h3_2_rd39
//	h3_2_rd40
//	h3_2_rd41
//	h3_2_rd42
//	h3_2_rd43
//	h3_2_rd44
//	h3_2_rd45
//	h3_2_rd46
//	h3_2_rd47
//	h3_2_rd48
//	h3_2_rd49
//	h3_2_rd50
//	h3_2_rd51
//	h3_2_rd52
//	h3_2_rd53
//	h3_2_rd54
//	h3_2_rd55
inline hw_uint<1792> h3_1_h3_2_update_0_read_bundle_read(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_2_rd0
    // h3_2_rd1
    // h3_2_rd2
    // h3_2_rd3
    // h3_2_rd4
    // h3_2_rd5
    // h3_2_rd6
    // h3_2_rd7
    // h3_2_rd8
    // h3_2_rd9
    // h3_2_rd10
    // h3_2_rd11
    // h3_2_rd12
    // h3_2_rd13
    // h3_2_rd14
    // h3_2_rd15
    // h3_2_rd16
    // h3_2_rd17
    // h3_2_rd18
    // h3_2_rd19
    // h3_2_rd20
    // h3_2_rd21
    // h3_2_rd22
    // h3_2_rd23
    // h3_2_rd24
    // h3_2_rd25
    // h3_2_rd26
    // h3_2_rd27
    // h3_2_rd28
    // h3_2_rd29
    // h3_2_rd30
    // h3_2_rd31
    // h3_2_rd32
    // h3_2_rd33
    // h3_2_rd34
    // h3_2_rd35
    // h3_2_rd36
    // h3_2_rd37
    // h3_2_rd38
    // h3_2_rd39
    // h3_2_rd40
    // h3_2_rd41
    // h3_2_rd42
    // h3_2_rd43
    // h3_2_rd44
    // h3_2_rd45
    // h3_2_rd46
    // h3_2_rd47
    // h3_2_rd48
    // h3_2_rd49
    // h3_2_rd50
    // h3_2_rd51
    // h3_2_rd52
    // h3_2_rd53
    // h3_2_rd54
    // h3_2_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_2_rd0_res = h3_2_rd0_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_2_rd0_res);
	hw_uint<32>  h3_2_rd1_res = h3_2_rd1_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_2_rd1_res);
	hw_uint<32>  h3_2_rd2_res = h3_2_rd2_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_2_rd2_res);
	hw_uint<32>  h3_2_rd3_res = h3_2_rd3_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_2_rd3_res);
	hw_uint<32>  h3_2_rd4_res = h3_2_rd4_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_2_rd4_res);
	hw_uint<32>  h3_2_rd5_res = h3_2_rd5_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_2_rd5_res);
	hw_uint<32>  h3_2_rd6_res = h3_2_rd6_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_2_rd6_res);
	hw_uint<32>  h3_2_rd7_res = h3_2_rd7_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_2_rd7_res);
	hw_uint<32>  h3_2_rd8_res = h3_2_rd8_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_2_rd8_res);
	hw_uint<32>  h3_2_rd9_res = h3_2_rd9_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_2_rd9_res);
	hw_uint<32>  h3_2_rd10_res = h3_2_rd10_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_2_rd10_res);
	hw_uint<32>  h3_2_rd11_res = h3_2_rd11_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_2_rd11_res);
	hw_uint<32>  h3_2_rd12_res = h3_2_rd12_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_2_rd12_res);
	hw_uint<32>  h3_2_rd13_res = h3_2_rd13_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_2_rd13_res);
	hw_uint<32>  h3_2_rd14_res = h3_2_rd14_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_2_rd14_res);
	hw_uint<32>  h3_2_rd15_res = h3_2_rd15_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_2_rd15_res);
	hw_uint<32>  h3_2_rd16_res = h3_2_rd16_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_2_rd16_res);
	hw_uint<32>  h3_2_rd17_res = h3_2_rd17_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_2_rd17_res);
	hw_uint<32>  h3_2_rd18_res = h3_2_rd18_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_2_rd18_res);
	hw_uint<32>  h3_2_rd19_res = h3_2_rd19_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_2_rd19_res);
	hw_uint<32>  h3_2_rd20_res = h3_2_rd20_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_2_rd20_res);
	hw_uint<32>  h3_2_rd21_res = h3_2_rd21_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_2_rd21_res);
	hw_uint<32>  h3_2_rd22_res = h3_2_rd22_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_2_rd22_res);
	hw_uint<32>  h3_2_rd23_res = h3_2_rd23_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_2_rd23_res);
	hw_uint<32>  h3_2_rd24_res = h3_2_rd24_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_2_rd24_res);
	hw_uint<32>  h3_2_rd25_res = h3_2_rd25_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_2_rd25_res);
	hw_uint<32>  h3_2_rd26_res = h3_2_rd26_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_2_rd26_res);
	hw_uint<32>  h3_2_rd27_res = h3_2_rd27_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_2_rd27_res);
	hw_uint<32>  h3_2_rd28_res = h3_2_rd28_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_2_rd28_res);
	hw_uint<32>  h3_2_rd29_res = h3_2_rd29_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_2_rd29_res);
	hw_uint<32>  h3_2_rd30_res = h3_2_rd30_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_2_rd30_res);
	hw_uint<32>  h3_2_rd31_res = h3_2_rd31_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_2_rd31_res);
	hw_uint<32>  h3_2_rd32_res = h3_2_rd32_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_2_rd32_res);
	hw_uint<32>  h3_2_rd33_res = h3_2_rd33_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_2_rd33_res);
	hw_uint<32>  h3_2_rd34_res = h3_2_rd34_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_2_rd34_res);
	hw_uint<32>  h3_2_rd35_res = h3_2_rd35_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_2_rd35_res);
	hw_uint<32>  h3_2_rd36_res = h3_2_rd36_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_2_rd36_res);
	hw_uint<32>  h3_2_rd37_res = h3_2_rd37_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_2_rd37_res);
	hw_uint<32>  h3_2_rd38_res = h3_2_rd38_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_2_rd38_res);
	hw_uint<32>  h3_2_rd39_res = h3_2_rd39_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_2_rd39_res);
	hw_uint<32>  h3_2_rd40_res = h3_2_rd40_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_2_rd40_res);
	hw_uint<32>  h3_2_rd41_res = h3_2_rd41_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_2_rd41_res);
	hw_uint<32>  h3_2_rd42_res = h3_2_rd42_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_2_rd42_res);
	hw_uint<32>  h3_2_rd43_res = h3_2_rd43_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_2_rd43_res);
	hw_uint<32>  h3_2_rd44_res = h3_2_rd44_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_2_rd44_res);
	hw_uint<32>  h3_2_rd45_res = h3_2_rd45_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_2_rd45_res);
	hw_uint<32>  h3_2_rd46_res = h3_2_rd46_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_2_rd46_res);
	hw_uint<32>  h3_2_rd47_res = h3_2_rd47_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_2_rd47_res);
	hw_uint<32>  h3_2_rd48_res = h3_2_rd48_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_2_rd48_res);
	hw_uint<32>  h3_2_rd49_res = h3_2_rd49_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_2_rd49_res);
	hw_uint<32>  h3_2_rd50_res = h3_2_rd50_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_2_rd50_res);
	hw_uint<32>  h3_2_rd51_res = h3_2_rd51_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_2_rd51_res);
	hw_uint<32>  h3_2_rd52_res = h3_2_rd52_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_2_rd52_res);
	hw_uint<32>  h3_2_rd53_res = h3_2_rd53_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_2_rd53_res);
	hw_uint<32>  h3_2_rd54_res = h3_2_rd54_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_2_rd54_res);
	hw_uint<32>  h3_2_rd55_res = h3_2_rd55_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_2_rd55_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-32, 160], [-5, 131], [-4, 35]}
	// Capacity: 7204
	// # of read delays: 7
  // 0, 27, 3589, 3614, 3615, 3641, 7203
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 26> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3561> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 24> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 25> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 3561> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_27() {
		return f2;
	}

	inline hw_uint<32>  peek_3588() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3589() {
		return f4;
	}

	inline hw_uint<32>  peek_3613() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3614() {
		return f6;
	}

	inline hw_uint<32>  peek_3615() {
		return f8;
	}

	inline hw_uint<32>  peek_3640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_3641() {
		return f10;
	}

	inline hw_uint<32>  peek_7202() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_7203() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-31, 153], [-5, 132], [-4, 35]}
	// Capacity: 7204
	// # of read delays: 6
  // 0, 27, 3589, 3615, 3641, 7203
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 26> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3561> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 25> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 25> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3561> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_27() {
		return f2;
	}

	inline hw_uint<32>  peek_3588() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3589() {
		return f4;
	}

	inline hw_uint<32>  peek_3614() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3615() {
		return f6;
	}

	inline hw_uint<32>  peek_3640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3641() {
		return f8;
	}

	inline hw_uint<32>  peek_7202() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7203() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-30, 154], [-5, 132], [-4, 35]}
	// Capacity: 7204
	// # of read delays: 6
  // 0, 27, 3589, 3615, 3641, 7203
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 26> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3561> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 25> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 25> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3561> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_27() {
		return f2;
	}

	inline hw_uint<32>  peek_3588() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3589() {
		return f4;
	}

	inline hw_uint<32>  peek_3614() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3615() {
		return f6;
	}

	inline hw_uint<32>  peek_3640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3641() {
		return f8;
	}

	inline hw_uint<32>  peek_7202() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7203() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-29, 155], [-5, 132], [-4, 35]}
	// Capacity: 7204
	// # of read delays: 6
  // 0, 27, 3589, 3615, 3641, 7203
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 26> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3561> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 25> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 25> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3561> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_27() {
		return f2;
	}

	inline hw_uint<32>  peek_3588() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3589() {
		return f4;
	}

	inline hw_uint<32>  peek_3614() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3615() {
		return f6;
	}

	inline hw_uint<32>  peek_3640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3641() {
		return f8;
	}

	inline hw_uint<32>  peek_7202() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7203() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-28, 156], [-5, 132], [-4, 35]}
	// Capacity: 7204
	// # of read delays: 6
  // 0, 27, 3589, 3615, 3641, 7203
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 26> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3561> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 25> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 25> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3561> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_27() {
		return f2;
	}

	inline hw_uint<32>  peek_3588() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3589() {
		return f4;
	}

	inline hw_uint<32>  peek_3614() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3615() {
		return f6;
	}

	inline hw_uint<32>  peek_3640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3641() {
		return f8;
	}

	inline hw_uint<32>  peek_7202() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7203() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-27, 157], [-5, 132], [-4, 35]}
	// Capacity: 7204
	// # of read delays: 6
  // 0, 27, 3589, 3615, 3641, 7203
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 26> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3561> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 25> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 25> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3561> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_27() {
		return f2;
	}

	inline hw_uint<32>  peek_3588() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3589() {
		return f4;
	}

	inline hw_uint<32>  peek_3614() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3615() {
		return f6;
	}

	inline hw_uint<32>  peek_3640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3641() {
		return f8;
	}

	inline hw_uint<32>  peek_7202() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7203() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-26, 158], [-5, 132], [-4, 35]}
	// Capacity: 7204
	// # of read delays: 6
  // 0, 27, 3589, 3615, 3641, 7203
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 26> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3561> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 25> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 25> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3561> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_27() {
		return f2;
	}

	inline hw_uint<32>  peek_3588() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3589() {
		return f4;
	}

	inline hw_uint<32>  peek_3614() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3615() {
		return f6;
	}

	inline hw_uint<32>  peek_3640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3641() {
		return f8;
	}

	inline hw_uint<32>  peek_7202() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_7203() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-33, 159], [-4, 132], [-4, 35]}
	// Capacity: 7204
	// # of read delays: 7
  // 0, 27, 3589, 3615, 3616, 3641, 7203
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 26> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3561> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 25> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 24> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 3561> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_27() {
		return f2;
	}

	inline hw_uint<32>  peek_3588() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3589() {
		return f4;
	}

	inline hw_uint<32>  peek_3614() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3615() {
		return f6;
	}

	inline hw_uint<32>  peek_3616() {
		return f8;
	}

	inline hw_uint<32>  peek_3640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_3641() {
		return f10;
	}

	inline hw_uint<32>  peek_7202() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_7203() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 25
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 25 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3561
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3561 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 26
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 26 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_cache {
  // # of banks: 8
  h3_2_h3_2_update_0_write0_merged_banks_7_cache h3_2_h3_2_update_0_write0_merged_banks_7;
  h3_2_h3_2_update_0_write1_merged_banks_7_cache h3_2_h3_2_update_0_write1_merged_banks_7;
  h3_2_h3_2_update_0_write2_merged_banks_7_cache h3_2_h3_2_update_0_write2_merged_banks_7;
  h3_2_h3_2_update_0_write3_merged_banks_7_cache h3_2_h3_2_update_0_write3_merged_banks_7;
  h3_2_h3_2_update_0_write4_merged_banks_7_cache h3_2_h3_2_update_0_write4_merged_banks_7;
  h3_2_h3_2_update_0_write5_merged_banks_7_cache h3_2_h3_2_update_0_write5_merged_banks_7;
  h3_2_h3_2_update_0_write6_merged_banks_7_cache h3_2_h3_2_update_0_write6_merged_banks_7;
  h3_2_h3_2_update_0_write7_merged_banks_7_cache h3_2_h3_2_update_0_write7_merged_banks_7;
};



inline void h3_2_h3_2_update_0_write0_write(hw_uint<32> & h3_2_h3_2_update_0_write0, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.push(h3_2_h3_2_update_0_write0);
}

inline void h3_2_h3_2_update_0_write1_write(hw_uint<32> & h3_2_h3_2_update_0_write1, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.push(h3_2_h3_2_update_0_write1);
}

inline void h3_2_h3_2_update_0_write2_write(hw_uint<32> & h3_2_h3_2_update_0_write2, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.push(h3_2_h3_2_update_0_write2);
}

inline void h3_2_h3_2_update_0_write3_write(hw_uint<32> & h3_2_h3_2_update_0_write3, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.push(h3_2_h3_2_update_0_write3);
}

inline void h3_2_h3_2_update_0_write4_write(hw_uint<32> & h3_2_h3_2_update_0_write4, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.push(h3_2_h3_2_update_0_write4);
}

inline void h3_2_h3_2_update_0_write5_write(hw_uint<32> & h3_2_h3_2_update_0_write5, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.push(h3_2_h3_2_update_0_write5);
}

inline void h3_2_h3_2_update_0_write6_write(hw_uint<32> & h3_2_h3_2_update_0_write6, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.push(h3_2_h3_2_update_0_write6);
}

inline void h3_2_h3_2_update_0_write7_write(hw_uint<32> & h3_2_h3_2_update_0_write7, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.push(h3_2_h3_2_update_0_write7);
}

inline hw_uint<32>  h3_3_rd0_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[-1 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_3616();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, -1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_3641();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd10_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd10 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd11_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd11 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, 1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_27();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd12_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd12 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, 1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_3589();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd13_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd13 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd14_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd14 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd15_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd15 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, -1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_3641();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd16_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd16 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, -1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_7203();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd17_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd17 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd18_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd18 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, 1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_27();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd19_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd19 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, 1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_3589();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, d1, -1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_7203();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd20_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd20 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd21_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd21 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd22_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd22 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, -1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_3641();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd23_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd23 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, -1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_7203();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd24_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd24 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd25_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd25 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, 1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_27();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd26_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd26 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, 1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_3589();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd27_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd27 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd28_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd28 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd29_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd29 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, -1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_3641();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd30_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd30 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, -1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_7203();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd31_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd31 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd32_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd32 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, 1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_27();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd33_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd33 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, 1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_3589();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd34_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd34 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd35_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd35 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd36_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd36 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, -1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_3641();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd37_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd37 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, -1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_7203();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd38_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd38 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd39_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd39 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, 1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_27();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, d1, 1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_27();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd40_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd40 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, 1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_3589();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd41_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd41 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd42_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd42 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd43_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd43 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, -1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_3641();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd44_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd44 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, -1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_7203();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd45_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd45 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd46_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd46 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, 1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_27();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd47_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd47 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, 1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_3589();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd48_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd48 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd49_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd49 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd5_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd5 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, 1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_3589();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd50_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd50 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, -1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_3641();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd51_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd51 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, d1, -1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_7203();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd52_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd52 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd53_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd53 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, d1, 1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_27();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd54_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd54 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, 1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_3589();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd55_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd55 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_3614();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd6_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd6 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd7_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd7 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_3615();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd8_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd8 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, -1 + d1, d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_3641();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd9_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd9 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, -1 + d2] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_7203();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_2_update_0_write
//	h3_2_h3_2_update_0_write0
//	h3_2_h3_2_update_0_write1
//	h3_2_h3_2_update_0_write2
//	h3_2_h3_2_update_0_write3
//	h3_2_h3_2_update_0_write4
//	h3_2_h3_2_update_0_write5
//	h3_2_h3_2_update_0_write6
//	h3_2_h3_2_update_0_write7
inline void h3_2_h3_2_update_0_write_bundle_write(hw_uint<256>& h3_2_update_0_write, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_2_h3_2_update_0_write0_res = h3_2_update_0_write.extract<0, 31>();
	h3_2_h3_2_update_0_write0_write(h3_2_h3_2_update_0_write0_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write1_res = h3_2_update_0_write.extract<32, 63>();
	h3_2_h3_2_update_0_write1_write(h3_2_h3_2_update_0_write1_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write2_res = h3_2_update_0_write.extract<64, 95>();
	h3_2_h3_2_update_0_write2_write(h3_2_h3_2_update_0_write2_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write3_res = h3_2_update_0_write.extract<96, 127>();
	h3_2_h3_2_update_0_write3_write(h3_2_h3_2_update_0_write3_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write4_res = h3_2_update_0_write.extract<128, 159>();
	h3_2_h3_2_update_0_write4_write(h3_2_h3_2_update_0_write4_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write5_res = h3_2_update_0_write.extract<160, 191>();
	h3_2_h3_2_update_0_write5_write(h3_2_h3_2_update_0_write5_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write6_res = h3_2_update_0_write.extract<192, 223>();
	h3_2_h3_2_update_0_write6_write(h3_2_h3_2_update_0_write6_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write7_res = h3_2_update_0_write.extract<224, 255>();
	h3_2_h3_2_update_0_write7_write(h3_2_h3_2_update_0_write7_res, h3_2, d0, d1, d2, dynamic_address);
}

// h3_3_update_0_read
//	h3_3_rd0
//	h3_3_rd1
//	h3_3_rd2
//	h3_3_rd3
//	h3_3_rd4
//	h3_3_rd5
//	h3_3_rd6
//	h3_3_rd7
//	h3_3_rd8
//	h3_3_rd9
//	h3_3_rd10
//	h3_3_rd11
//	h3_3_rd12
//	h3_3_rd13
//	h3_3_rd14
//	h3_3_rd15
//	h3_3_rd16
//	h3_3_rd17
//	h3_3_rd18
//	h3_3_rd19
//	h3_3_rd20
//	h3_3_rd21
//	h3_3_rd22
//	h3_3_rd23
//	h3_3_rd24
//	h3_3_rd25
//	h3_3_rd26
//	h3_3_rd27
//	h3_3_rd28
//	h3_3_rd29
//	h3_3_rd30
//	h3_3_rd31
//	h3_3_rd32
//	h3_3_rd33
//	h3_3_rd34
//	h3_3_rd35
//	h3_3_rd36
//	h3_3_rd37
//	h3_3_rd38
//	h3_3_rd39
//	h3_3_rd40
//	h3_3_rd41
//	h3_3_rd42
//	h3_3_rd43
//	h3_3_rd44
//	h3_3_rd45
//	h3_3_rd46
//	h3_3_rd47
//	h3_3_rd48
//	h3_3_rd49
//	h3_3_rd50
//	h3_3_rd51
//	h3_3_rd52
//	h3_3_rd53
//	h3_3_rd54
//	h3_3_rd55
inline hw_uint<1792> h3_2_h3_3_update_0_read_bundle_read(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_3_rd0
    // h3_3_rd1
    // h3_3_rd2
    // h3_3_rd3
    // h3_3_rd4
    // h3_3_rd5
    // h3_3_rd6
    // h3_3_rd7
    // h3_3_rd8
    // h3_3_rd9
    // h3_3_rd10
    // h3_3_rd11
    // h3_3_rd12
    // h3_3_rd13
    // h3_3_rd14
    // h3_3_rd15
    // h3_3_rd16
    // h3_3_rd17
    // h3_3_rd18
    // h3_3_rd19
    // h3_3_rd20
    // h3_3_rd21
    // h3_3_rd22
    // h3_3_rd23
    // h3_3_rd24
    // h3_3_rd25
    // h3_3_rd26
    // h3_3_rd27
    // h3_3_rd28
    // h3_3_rd29
    // h3_3_rd30
    // h3_3_rd31
    // h3_3_rd32
    // h3_3_rd33
    // h3_3_rd34
    // h3_3_rd35
    // h3_3_rd36
    // h3_3_rd37
    // h3_3_rd38
    // h3_3_rd39
    // h3_3_rd40
    // h3_3_rd41
    // h3_3_rd42
    // h3_3_rd43
    // h3_3_rd44
    // h3_3_rd45
    // h3_3_rd46
    // h3_3_rd47
    // h3_3_rd48
    // h3_3_rd49
    // h3_3_rd50
    // h3_3_rd51
    // h3_3_rd52
    // h3_3_rd53
    // h3_3_rd54
    // h3_3_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_3_rd0_res = h3_3_rd0_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_3_rd0_res);
	hw_uint<32>  h3_3_rd1_res = h3_3_rd1_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_3_rd1_res);
	hw_uint<32>  h3_3_rd2_res = h3_3_rd2_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_3_rd2_res);
	hw_uint<32>  h3_3_rd3_res = h3_3_rd3_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_3_rd3_res);
	hw_uint<32>  h3_3_rd4_res = h3_3_rd4_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_3_rd4_res);
	hw_uint<32>  h3_3_rd5_res = h3_3_rd5_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_3_rd5_res);
	hw_uint<32>  h3_3_rd6_res = h3_3_rd6_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_3_rd6_res);
	hw_uint<32>  h3_3_rd7_res = h3_3_rd7_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_3_rd7_res);
	hw_uint<32>  h3_3_rd8_res = h3_3_rd8_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_3_rd8_res);
	hw_uint<32>  h3_3_rd9_res = h3_3_rd9_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_3_rd9_res);
	hw_uint<32>  h3_3_rd10_res = h3_3_rd10_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_3_rd10_res);
	hw_uint<32>  h3_3_rd11_res = h3_3_rd11_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_3_rd11_res);
	hw_uint<32>  h3_3_rd12_res = h3_3_rd12_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_3_rd12_res);
	hw_uint<32>  h3_3_rd13_res = h3_3_rd13_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_3_rd13_res);
	hw_uint<32>  h3_3_rd14_res = h3_3_rd14_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_3_rd14_res);
	hw_uint<32>  h3_3_rd15_res = h3_3_rd15_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_3_rd15_res);
	hw_uint<32>  h3_3_rd16_res = h3_3_rd16_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_3_rd16_res);
	hw_uint<32>  h3_3_rd17_res = h3_3_rd17_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_3_rd17_res);
	hw_uint<32>  h3_3_rd18_res = h3_3_rd18_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_3_rd18_res);
	hw_uint<32>  h3_3_rd19_res = h3_3_rd19_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_3_rd19_res);
	hw_uint<32>  h3_3_rd20_res = h3_3_rd20_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_3_rd20_res);
	hw_uint<32>  h3_3_rd21_res = h3_3_rd21_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_3_rd21_res);
	hw_uint<32>  h3_3_rd22_res = h3_3_rd22_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_3_rd22_res);
	hw_uint<32>  h3_3_rd23_res = h3_3_rd23_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_3_rd23_res);
	hw_uint<32>  h3_3_rd24_res = h3_3_rd24_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_3_rd24_res);
	hw_uint<32>  h3_3_rd25_res = h3_3_rd25_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_3_rd25_res);
	hw_uint<32>  h3_3_rd26_res = h3_3_rd26_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_3_rd26_res);
	hw_uint<32>  h3_3_rd27_res = h3_3_rd27_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_3_rd27_res);
	hw_uint<32>  h3_3_rd28_res = h3_3_rd28_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_3_rd28_res);
	hw_uint<32>  h3_3_rd29_res = h3_3_rd29_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_3_rd29_res);
	hw_uint<32>  h3_3_rd30_res = h3_3_rd30_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_3_rd30_res);
	hw_uint<32>  h3_3_rd31_res = h3_3_rd31_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_3_rd31_res);
	hw_uint<32>  h3_3_rd32_res = h3_3_rd32_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_3_rd32_res);
	hw_uint<32>  h3_3_rd33_res = h3_3_rd33_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_3_rd33_res);
	hw_uint<32>  h3_3_rd34_res = h3_3_rd34_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_3_rd34_res);
	hw_uint<32>  h3_3_rd35_res = h3_3_rd35_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_3_rd35_res);
	hw_uint<32>  h3_3_rd36_res = h3_3_rd36_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_3_rd36_res);
	hw_uint<32>  h3_3_rd37_res = h3_3_rd37_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_3_rd37_res);
	hw_uint<32>  h3_3_rd38_res = h3_3_rd38_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_3_rd38_res);
	hw_uint<32>  h3_3_rd39_res = h3_3_rd39_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_3_rd39_res);
	hw_uint<32>  h3_3_rd40_res = h3_3_rd40_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_3_rd40_res);
	hw_uint<32>  h3_3_rd41_res = h3_3_rd41_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_3_rd41_res);
	hw_uint<32>  h3_3_rd42_res = h3_3_rd42_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_3_rd42_res);
	hw_uint<32>  h3_3_rd43_res = h3_3_rd43_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_3_rd43_res);
	hw_uint<32>  h3_3_rd44_res = h3_3_rd44_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_3_rd44_res);
	hw_uint<32>  h3_3_rd45_res = h3_3_rd45_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_3_rd45_res);
	hw_uint<32>  h3_3_rd46_res = h3_3_rd46_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_3_rd46_res);
	hw_uint<32>  h3_3_rd47_res = h3_3_rd47_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_3_rd47_res);
	hw_uint<32>  h3_3_rd48_res = h3_3_rd48_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_3_rd48_res);
	hw_uint<32>  h3_3_rd49_res = h3_3_rd49_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_3_rd49_res);
	hw_uint<32>  h3_3_rd50_res = h3_3_rd50_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_3_rd50_res);
	hw_uint<32>  h3_3_rd51_res = h3_3_rd51_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_3_rd51_res);
	hw_uint<32>  h3_3_rd52_res = h3_3_rd52_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_3_rd52_res);
	hw_uint<32>  h3_3_rd53_res = h3_3_rd53_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_3_rd53_res);
	hw_uint<32>  h3_3_rd54_res = h3_3_rd54_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_3_rd54_res);
	hw_uint<32>  h3_3_rd55_res = h3_3_rd55_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_3_rd55_res);
	return result;
}

struct h3_3_h3_3_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-24, 152], [-4, 130], [-3, 34]}
	// Capacity: 6554
	// # of read delays: 7
  // 0, 25, 3265, 3288, 3289, 3313, 6553
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 24> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3239> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 22> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 23> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 3239> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_25() {
		return f2;
	}

	inline hw_uint<32>  peek_3264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3265() {
		return f4;
	}

	inline hw_uint<32>  peek_3287() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3288() {
		return f6;
	}

	inline hw_uint<32>  peek_3289() {
		return f8;
	}

	inline hw_uint<32>  peek_3312() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_3313() {
		return f10;
	}

	inline hw_uint<32>  peek_6552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_6553() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-23, 145], [-4, 131], [-3, 34]}
	// Capacity: 6554
	// # of read delays: 6
  // 0, 25, 3265, 3289, 3313, 6553
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 24> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3239> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 23> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 23> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3239> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_25() {
		return f2;
	}

	inline hw_uint<32>  peek_3264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3265() {
		return f4;
	}

	inline hw_uint<32>  peek_3288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3289() {
		return f6;
	}

	inline hw_uint<32>  peek_3312() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3313() {
		return f8;
	}

	inline hw_uint<32>  peek_6552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_6553() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-22, 146], [-4, 131], [-3, 34]}
	// Capacity: 6554
	// # of read delays: 6
  // 0, 25, 3265, 3289, 3313, 6553
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 24> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3239> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 23> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 23> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3239> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_25() {
		return f2;
	}

	inline hw_uint<32>  peek_3264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3265() {
		return f4;
	}

	inline hw_uint<32>  peek_3288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3289() {
		return f6;
	}

	inline hw_uint<32>  peek_3312() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3313() {
		return f8;
	}

	inline hw_uint<32>  peek_6552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_6553() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-21, 147], [-4, 131], [-3, 34]}
	// Capacity: 6554
	// # of read delays: 6
  // 0, 25, 3265, 3289, 3313, 6553
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 24> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3239> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 23> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 23> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3239> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_25() {
		return f2;
	}

	inline hw_uint<32>  peek_3264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3265() {
		return f4;
	}

	inline hw_uint<32>  peek_3288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3289() {
		return f6;
	}

	inline hw_uint<32>  peek_3312() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3313() {
		return f8;
	}

	inline hw_uint<32>  peek_6552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_6553() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-20, 148], [-4, 131], [-3, 34]}
	// Capacity: 6554
	// # of read delays: 6
  // 0, 25, 3265, 3289, 3313, 6553
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 24> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3239> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 23> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 23> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3239> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_25() {
		return f2;
	}

	inline hw_uint<32>  peek_3264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3265() {
		return f4;
	}

	inline hw_uint<32>  peek_3288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3289() {
		return f6;
	}

	inline hw_uint<32>  peek_3312() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3313() {
		return f8;
	}

	inline hw_uint<32>  peek_6552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_6553() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-19, 149], [-4, 131], [-3, 34]}
	// Capacity: 6554
	// # of read delays: 6
  // 0, 25, 3265, 3289, 3313, 6553
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 24> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3239> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 23> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 23> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3239> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_25() {
		return f2;
	}

	inline hw_uint<32>  peek_3264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3265() {
		return f4;
	}

	inline hw_uint<32>  peek_3288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3289() {
		return f6;
	}

	inline hw_uint<32>  peek_3312() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3313() {
		return f8;
	}

	inline hw_uint<32>  peek_6552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_6553() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-18, 150], [-4, 131], [-3, 34]}
	// Capacity: 6554
	// # of read delays: 6
  // 0, 25, 3265, 3289, 3313, 6553
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 24> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3239> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 23> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 23> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 3239> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_25() {
		return f2;
	}

	inline hw_uint<32>  peek_3264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3265() {
		return f4;
	}

	inline hw_uint<32>  peek_3288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3289() {
		return f6;
	}

	inline hw_uint<32>  peek_3312() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_3313() {
		return f8;
	}

	inline hw_uint<32>  peek_6552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_6553() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-25, 151], [-3, 131], [-3, 34]}
	// Capacity: 6554
	// # of read delays: 7
  // 0, 25, 3265, 3289, 3290, 3313, 6553
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 24> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3239> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 23> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 22> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 3239> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_25() {
		return f2;
	}

	inline hw_uint<32>  peek_3264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_3265() {
		return f4;
	}

	inline hw_uint<32>  peek_3288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_3289() {
		return f6;
	}

	inline hw_uint<32>  peek_3290() {
		return f8;
	}

	inline hw_uint<32>  peek_3312() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_3313() {
		return f10;
	}

	inline hw_uint<32>  peek_6552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_6553() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3239
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3239 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_cache {
  // # of banks: 8
  h3_3_h3_3_update_0_write0_merged_banks_7_cache h3_3_h3_3_update_0_write0_merged_banks_7;
  h3_3_h3_3_update_0_write1_merged_banks_7_cache h3_3_h3_3_update_0_write1_merged_banks_7;
  h3_3_h3_3_update_0_write2_merged_banks_7_cache h3_3_h3_3_update_0_write2_merged_banks_7;
  h3_3_h3_3_update_0_write3_merged_banks_7_cache h3_3_h3_3_update_0_write3_merged_banks_7;
  h3_3_h3_3_update_0_write4_merged_banks_7_cache h3_3_h3_3_update_0_write4_merged_banks_7;
  h3_3_h3_3_update_0_write5_merged_banks_7_cache h3_3_h3_3_update_0_write5_merged_banks_7;
  h3_3_h3_3_update_0_write6_merged_banks_7_cache h3_3_h3_3_update_0_write6_merged_banks_7;
  h3_3_h3_3_update_0_write7_merged_banks_7_cache h3_3_h3_3_update_0_write7_merged_banks_7;
};



inline void h3_3_h3_3_update_0_write0_write(hw_uint<32> & h3_3_h3_3_update_0_write0, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.push(h3_3_h3_3_update_0_write0);
}

inline void h3_3_h3_3_update_0_write1_write(hw_uint<32> & h3_3_h3_3_update_0_write1, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.push(h3_3_h3_3_update_0_write1);
}

inline void h3_3_h3_3_update_0_write2_write(hw_uint<32> & h3_3_h3_3_update_0_write2, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.push(h3_3_h3_3_update_0_write2);
}

inline void h3_3_h3_3_update_0_write3_write(hw_uint<32> & h3_3_h3_3_update_0_write3, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.push(h3_3_h3_3_update_0_write3);
}

inline void h3_3_h3_3_update_0_write4_write(hw_uint<32> & h3_3_h3_3_update_0_write4, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.push(h3_3_h3_3_update_0_write4);
}

inline void h3_3_h3_3_update_0_write5_write(hw_uint<32> & h3_3_h3_3_update_0_write5, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.push(h3_3_h3_3_update_0_write5);
}

inline void h3_3_h3_3_update_0_write6_write(hw_uint<32> & h3_3_h3_3_update_0_write6, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.push(h3_3_h3_3_update_0_write6);
}

inline void h3_3_h3_3_update_0_write7_write(hw_uint<32> & h3_3_h3_3_update_0_write7, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.push(h3_3_h3_3_update_0_write7);
}

inline hw_uint<32>  h3_4_rd0_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[-1 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_3290();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, -1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_3313();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd10_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd10 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd11_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd11 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, 1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_25();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd12_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd12 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, 1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_3265();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd13_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd13 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd14_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd14 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd15_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd15 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, -1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_3313();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd16_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd16 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, -1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_6553();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd17_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd17 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd18_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd18 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, 1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_25();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd19_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd19 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, 1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_3265();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, d1, -1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_6553();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd20_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd20 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd21_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd21 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd22_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd22 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, -1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_3313();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd23_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd23 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, -1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_6553();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd24_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd24 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd25_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd25 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, 1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_25();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd26_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd26 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, 1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_3265();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd27_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd27 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd28_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd28 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd29_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd29 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, -1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_3313();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd30_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd30 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, -1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_6553();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd31_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd31 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd32_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd32 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, 1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_25();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd33_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd33 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, 1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_3265();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd34_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd34 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd35_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd35 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd36_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd36 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, -1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_3313();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd37_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd37 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, -1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_6553();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd38_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd38 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd39_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd39 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, 1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_25();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, d1, 1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_25();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd40_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd40 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, 1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_3265();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd41_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd41 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd42_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd42 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd43_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd43 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, -1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_3313();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd44_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd44 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, -1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_6553();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd45_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd45 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd46_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd46 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, 1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_25();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd47_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd47 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, 1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_3265();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd48_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd48 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd49_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd49 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd5_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd5 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, 1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_3265();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd50_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd50 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, -1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_3313();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd51_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd51 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, d1, -1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_6553();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd52_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd52 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd53_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd53 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, d1, 1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_25();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd54_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd54 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, 1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_3265();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd55_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd55 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_3288();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd6_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd6 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd7_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd7 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_3289();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd8_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd8 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, -1 + d1, d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_3313();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd9_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd9 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, -1 + d2] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_6553();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_3_update_0_write
//	h3_3_h3_3_update_0_write0
//	h3_3_h3_3_update_0_write1
//	h3_3_h3_3_update_0_write2
//	h3_3_h3_3_update_0_write3
//	h3_3_h3_3_update_0_write4
//	h3_3_h3_3_update_0_write5
//	h3_3_h3_3_update_0_write6
//	h3_3_h3_3_update_0_write7
inline void h3_3_h3_3_update_0_write_bundle_write(hw_uint<256>& h3_3_update_0_write, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_3_h3_3_update_0_write0_res = h3_3_update_0_write.extract<0, 31>();
	h3_3_h3_3_update_0_write0_write(h3_3_h3_3_update_0_write0_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write1_res = h3_3_update_0_write.extract<32, 63>();
	h3_3_h3_3_update_0_write1_write(h3_3_h3_3_update_0_write1_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write2_res = h3_3_update_0_write.extract<64, 95>();
	h3_3_h3_3_update_0_write2_write(h3_3_h3_3_update_0_write2_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write3_res = h3_3_update_0_write.extract<96, 127>();
	h3_3_h3_3_update_0_write3_write(h3_3_h3_3_update_0_write3_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write4_res = h3_3_update_0_write.extract<128, 159>();
	h3_3_h3_3_update_0_write4_write(h3_3_h3_3_update_0_write4_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write5_res = h3_3_update_0_write.extract<160, 191>();
	h3_3_h3_3_update_0_write5_write(h3_3_h3_3_update_0_write5_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write6_res = h3_3_update_0_write.extract<192, 223>();
	h3_3_h3_3_update_0_write6_write(h3_3_h3_3_update_0_write6_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write7_res = h3_3_update_0_write.extract<224, 255>();
	h3_3_h3_3_update_0_write7_write(h3_3_h3_3_update_0_write7_res, h3_3, d0, d1, d2, dynamic_address);
}

// h3_4_update_0_read
//	h3_4_rd0
//	h3_4_rd1
//	h3_4_rd2
//	h3_4_rd3
//	h3_4_rd4
//	h3_4_rd5
//	h3_4_rd6
//	h3_4_rd7
//	h3_4_rd8
//	h3_4_rd9
//	h3_4_rd10
//	h3_4_rd11
//	h3_4_rd12
//	h3_4_rd13
//	h3_4_rd14
//	h3_4_rd15
//	h3_4_rd16
//	h3_4_rd17
//	h3_4_rd18
//	h3_4_rd19
//	h3_4_rd20
//	h3_4_rd21
//	h3_4_rd22
//	h3_4_rd23
//	h3_4_rd24
//	h3_4_rd25
//	h3_4_rd26
//	h3_4_rd27
//	h3_4_rd28
//	h3_4_rd29
//	h3_4_rd30
//	h3_4_rd31
//	h3_4_rd32
//	h3_4_rd33
//	h3_4_rd34
//	h3_4_rd35
//	h3_4_rd36
//	h3_4_rd37
//	h3_4_rd38
//	h3_4_rd39
//	h3_4_rd40
//	h3_4_rd41
//	h3_4_rd42
//	h3_4_rd43
//	h3_4_rd44
//	h3_4_rd45
//	h3_4_rd46
//	h3_4_rd47
//	h3_4_rd48
//	h3_4_rd49
//	h3_4_rd50
//	h3_4_rd51
//	h3_4_rd52
//	h3_4_rd53
//	h3_4_rd54
//	h3_4_rd55
inline hw_uint<1792> h3_3_h3_4_update_0_read_bundle_read(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_4_rd0
    // h3_4_rd1
    // h3_4_rd2
    // h3_4_rd3
    // h3_4_rd4
    // h3_4_rd5
    // h3_4_rd6
    // h3_4_rd7
    // h3_4_rd8
    // h3_4_rd9
    // h3_4_rd10
    // h3_4_rd11
    // h3_4_rd12
    // h3_4_rd13
    // h3_4_rd14
    // h3_4_rd15
    // h3_4_rd16
    // h3_4_rd17
    // h3_4_rd18
    // h3_4_rd19
    // h3_4_rd20
    // h3_4_rd21
    // h3_4_rd22
    // h3_4_rd23
    // h3_4_rd24
    // h3_4_rd25
    // h3_4_rd26
    // h3_4_rd27
    // h3_4_rd28
    // h3_4_rd29
    // h3_4_rd30
    // h3_4_rd31
    // h3_4_rd32
    // h3_4_rd33
    // h3_4_rd34
    // h3_4_rd35
    // h3_4_rd36
    // h3_4_rd37
    // h3_4_rd38
    // h3_4_rd39
    // h3_4_rd40
    // h3_4_rd41
    // h3_4_rd42
    // h3_4_rd43
    // h3_4_rd44
    // h3_4_rd45
    // h3_4_rd46
    // h3_4_rd47
    // h3_4_rd48
    // h3_4_rd49
    // h3_4_rd50
    // h3_4_rd51
    // h3_4_rd52
    // h3_4_rd53
    // h3_4_rd54
    // h3_4_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_4_rd0_res = h3_4_rd0_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_4_rd0_res);
	hw_uint<32>  h3_4_rd1_res = h3_4_rd1_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_4_rd1_res);
	hw_uint<32>  h3_4_rd2_res = h3_4_rd2_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_4_rd2_res);
	hw_uint<32>  h3_4_rd3_res = h3_4_rd3_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_4_rd3_res);
	hw_uint<32>  h3_4_rd4_res = h3_4_rd4_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_4_rd4_res);
	hw_uint<32>  h3_4_rd5_res = h3_4_rd5_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_4_rd5_res);
	hw_uint<32>  h3_4_rd6_res = h3_4_rd6_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_4_rd6_res);
	hw_uint<32>  h3_4_rd7_res = h3_4_rd7_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_4_rd7_res);
	hw_uint<32>  h3_4_rd8_res = h3_4_rd8_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_4_rd8_res);
	hw_uint<32>  h3_4_rd9_res = h3_4_rd9_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_4_rd9_res);
	hw_uint<32>  h3_4_rd10_res = h3_4_rd10_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_4_rd10_res);
	hw_uint<32>  h3_4_rd11_res = h3_4_rd11_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_4_rd11_res);
	hw_uint<32>  h3_4_rd12_res = h3_4_rd12_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_4_rd12_res);
	hw_uint<32>  h3_4_rd13_res = h3_4_rd13_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_4_rd13_res);
	hw_uint<32>  h3_4_rd14_res = h3_4_rd14_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_4_rd14_res);
	hw_uint<32>  h3_4_rd15_res = h3_4_rd15_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_4_rd15_res);
	hw_uint<32>  h3_4_rd16_res = h3_4_rd16_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_4_rd16_res);
	hw_uint<32>  h3_4_rd17_res = h3_4_rd17_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_4_rd17_res);
	hw_uint<32>  h3_4_rd18_res = h3_4_rd18_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_4_rd18_res);
	hw_uint<32>  h3_4_rd19_res = h3_4_rd19_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_4_rd19_res);
	hw_uint<32>  h3_4_rd20_res = h3_4_rd20_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_4_rd20_res);
	hw_uint<32>  h3_4_rd21_res = h3_4_rd21_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_4_rd21_res);
	hw_uint<32>  h3_4_rd22_res = h3_4_rd22_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_4_rd22_res);
	hw_uint<32>  h3_4_rd23_res = h3_4_rd23_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_4_rd23_res);
	hw_uint<32>  h3_4_rd24_res = h3_4_rd24_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_4_rd24_res);
	hw_uint<32>  h3_4_rd25_res = h3_4_rd25_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_4_rd25_res);
	hw_uint<32>  h3_4_rd26_res = h3_4_rd26_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_4_rd26_res);
	hw_uint<32>  h3_4_rd27_res = h3_4_rd27_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_4_rd27_res);
	hw_uint<32>  h3_4_rd28_res = h3_4_rd28_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_4_rd28_res);
	hw_uint<32>  h3_4_rd29_res = h3_4_rd29_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_4_rd29_res);
	hw_uint<32>  h3_4_rd30_res = h3_4_rd30_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_4_rd30_res);
	hw_uint<32>  h3_4_rd31_res = h3_4_rd31_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_4_rd31_res);
	hw_uint<32>  h3_4_rd32_res = h3_4_rd32_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_4_rd32_res);
	hw_uint<32>  h3_4_rd33_res = h3_4_rd33_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_4_rd33_res);
	hw_uint<32>  h3_4_rd34_res = h3_4_rd34_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_4_rd34_res);
	hw_uint<32>  h3_4_rd35_res = h3_4_rd35_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_4_rd35_res);
	hw_uint<32>  h3_4_rd36_res = h3_4_rd36_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_4_rd36_res);
	hw_uint<32>  h3_4_rd37_res = h3_4_rd37_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_4_rd37_res);
	hw_uint<32>  h3_4_rd38_res = h3_4_rd38_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_4_rd38_res);
	hw_uint<32>  h3_4_rd39_res = h3_4_rd39_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_4_rd39_res);
	hw_uint<32>  h3_4_rd40_res = h3_4_rd40_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_4_rd40_res);
	hw_uint<32>  h3_4_rd41_res = h3_4_rd41_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_4_rd41_res);
	hw_uint<32>  h3_4_rd42_res = h3_4_rd42_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_4_rd42_res);
	hw_uint<32>  h3_4_rd43_res = h3_4_rd43_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_4_rd43_res);
	hw_uint<32>  h3_4_rd44_res = h3_4_rd44_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_4_rd44_res);
	hw_uint<32>  h3_4_rd45_res = h3_4_rd45_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_4_rd45_res);
	hw_uint<32>  h3_4_rd46_res = h3_4_rd46_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_4_rd46_res);
	hw_uint<32>  h3_4_rd47_res = h3_4_rd47_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_4_rd47_res);
	hw_uint<32>  h3_4_rd48_res = h3_4_rd48_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_4_rd48_res);
	hw_uint<32>  h3_4_rd49_res = h3_4_rd49_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_4_rd49_res);
	hw_uint<32>  h3_4_rd50_res = h3_4_rd50_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_4_rd50_res);
	hw_uint<32>  h3_4_rd51_res = h3_4_rd51_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_4_rd51_res);
	hw_uint<32>  h3_4_rd52_res = h3_4_rd52_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_4_rd52_res);
	hw_uint<32>  h3_4_rd53_res = h3_4_rd53_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_4_rd53_res);
	hw_uint<32>  h3_4_rd54_res = h3_4_rd54_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_4_rd54_res);
	hw_uint<32>  h3_4_rd55_res = h3_4_rd55_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_4_rd55_res);
	return result;
}

struct h3_4_h3_4_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-16, 144], [-3, 129], [-2, 33]}
	// Capacity: 5920
	// # of read delays: 7
  // 0, 23, 2949, 2970, 2971, 2993, 5919
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 22> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2925> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 20> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 21> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2925> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_23() {
		return f2;
	}

	inline hw_uint<32>  peek_2948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2949() {
		return f4;
	}

	inline hw_uint<32>  peek_2969() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2970() {
		return f6;
	}

	inline hw_uint<32>  peek_2971() {
		return f8;
	}

	inline hw_uint<32>  peek_2992() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2993() {
		return f10;
	}

	inline hw_uint<32>  peek_5918() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_5919() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-15, 137], [-3, 130], [-2, 33]}
	// Capacity: 5920
	// # of read delays: 6
  // 0, 23, 2949, 2971, 2993, 5919
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 22> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2925> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 21> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 21> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2925> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_23() {
		return f2;
	}

	inline hw_uint<32>  peek_2948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2949() {
		return f4;
	}

	inline hw_uint<32>  peek_2970() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2971() {
		return f6;
	}

	inline hw_uint<32>  peek_2992() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2993() {
		return f8;
	}

	inline hw_uint<32>  peek_5918() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5919() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-14, 138], [-3, 130], [-2, 33]}
	// Capacity: 5920
	// # of read delays: 6
  // 0, 23, 2949, 2971, 2993, 5919
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 22> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2925> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 21> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 21> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2925> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_23() {
		return f2;
	}

	inline hw_uint<32>  peek_2948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2949() {
		return f4;
	}

	inline hw_uint<32>  peek_2970() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2971() {
		return f6;
	}

	inline hw_uint<32>  peek_2992() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2993() {
		return f8;
	}

	inline hw_uint<32>  peek_5918() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5919() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-13, 139], [-3, 130], [-2, 33]}
	// Capacity: 5920
	// # of read delays: 6
  // 0, 23, 2949, 2971, 2993, 5919
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 22> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2925> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 21> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 21> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2925> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_23() {
		return f2;
	}

	inline hw_uint<32>  peek_2948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2949() {
		return f4;
	}

	inline hw_uint<32>  peek_2970() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2971() {
		return f6;
	}

	inline hw_uint<32>  peek_2992() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2993() {
		return f8;
	}

	inline hw_uint<32>  peek_5918() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5919() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-12, 140], [-3, 130], [-2, 33]}
	// Capacity: 5920
	// # of read delays: 6
  // 0, 23, 2949, 2971, 2993, 5919
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 22> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2925> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 21> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 21> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2925> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_23() {
		return f2;
	}

	inline hw_uint<32>  peek_2948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2949() {
		return f4;
	}

	inline hw_uint<32>  peek_2970() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2971() {
		return f6;
	}

	inline hw_uint<32>  peek_2992() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2993() {
		return f8;
	}

	inline hw_uint<32>  peek_5918() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5919() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-11, 141], [-3, 130], [-2, 33]}
	// Capacity: 5920
	// # of read delays: 6
  // 0, 23, 2949, 2971, 2993, 5919
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 22> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2925> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 21> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 21> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2925> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_23() {
		return f2;
	}

	inline hw_uint<32>  peek_2948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2949() {
		return f4;
	}

	inline hw_uint<32>  peek_2970() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2971() {
		return f6;
	}

	inline hw_uint<32>  peek_2992() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2993() {
		return f8;
	}

	inline hw_uint<32>  peek_5918() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5919() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-10, 142], [-3, 130], [-2, 33]}
	// Capacity: 5920
	// # of read delays: 6
  // 0, 23, 2949, 2971, 2993, 5919
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 22> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2925> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 21> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 21> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2925> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_23() {
		return f2;
	}

	inline hw_uint<32>  peek_2948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2949() {
		return f4;
	}

	inline hw_uint<32>  peek_2970() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2971() {
		return f6;
	}

	inline hw_uint<32>  peek_2992() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2993() {
		return f8;
	}

	inline hw_uint<32>  peek_5918() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5919() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-17, 143], [-2, 130], [-2, 33]}
	// Capacity: 5920
	// # of read delays: 7
  // 0, 23, 2949, 2971, 2972, 2993, 5919
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 22> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2925> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 21> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 20> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2925> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_23() {
		return f2;
	}

	inline hw_uint<32>  peek_2948() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2949() {
		return f4;
	}

	inline hw_uint<32>  peek_2970() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2971() {
		return f6;
	}

	inline hw_uint<32>  peek_2972() {
		return f8;
	}

	inline hw_uint<32>  peek_2992() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2993() {
		return f10;
	}

	inline hw_uint<32>  peek_5918() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_5919() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2925
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2925 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_cache {
  // # of banks: 8
  h3_4_h3_4_update_0_write0_merged_banks_7_cache h3_4_h3_4_update_0_write0_merged_banks_7;
  h3_4_h3_4_update_0_write1_merged_banks_7_cache h3_4_h3_4_update_0_write1_merged_banks_7;
  h3_4_h3_4_update_0_write2_merged_banks_7_cache h3_4_h3_4_update_0_write2_merged_banks_7;
  h3_4_h3_4_update_0_write3_merged_banks_7_cache h3_4_h3_4_update_0_write3_merged_banks_7;
  h3_4_h3_4_update_0_write4_merged_banks_7_cache h3_4_h3_4_update_0_write4_merged_banks_7;
  h3_4_h3_4_update_0_write5_merged_banks_7_cache h3_4_h3_4_update_0_write5_merged_banks_7;
  h3_4_h3_4_update_0_write6_merged_banks_7_cache h3_4_h3_4_update_0_write6_merged_banks_7;
  h3_4_h3_4_update_0_write7_merged_banks_7_cache h3_4_h3_4_update_0_write7_merged_banks_7;
};



inline void h3_4_h3_4_update_0_write0_write(hw_uint<32> & h3_4_h3_4_update_0_write0, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.push(h3_4_h3_4_update_0_write0);
}

inline void h3_4_h3_4_update_0_write1_write(hw_uint<32> & h3_4_h3_4_update_0_write1, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.push(h3_4_h3_4_update_0_write1);
}

inline void h3_4_h3_4_update_0_write2_write(hw_uint<32> & h3_4_h3_4_update_0_write2, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.push(h3_4_h3_4_update_0_write2);
}

inline void h3_4_h3_4_update_0_write3_write(hw_uint<32> & h3_4_h3_4_update_0_write3, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.push(h3_4_h3_4_update_0_write3);
}

inline void h3_4_h3_4_update_0_write4_write(hw_uint<32> & h3_4_h3_4_update_0_write4, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.push(h3_4_h3_4_update_0_write4);
}

inline void h3_4_h3_4_update_0_write5_write(hw_uint<32> & h3_4_h3_4_update_0_write5, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.push(h3_4_h3_4_update_0_write5);
}

inline void h3_4_h3_4_update_0_write6_write(hw_uint<32> & h3_4_h3_4_update_0_write6, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.push(h3_4_h3_4_update_0_write6);
}

inline void h3_4_h3_4_update_0_write7_write(hw_uint<32> & h3_4_h3_4_update_0_write7, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.push(h3_4_h3_4_update_0_write7);
}

inline hw_uint<32>  h3_5_rd0_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[-1 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_2972();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, -1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_2993();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd10_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd10 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd11_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd11 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, 1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_23();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd12_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd12 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, 1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_2949();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd13_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd13 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd14_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd14 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd15_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd15 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, -1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_2993();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd16_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd16 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, -1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_5919();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd17_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd17 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd18_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd18 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, 1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_23();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd19_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd19 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, 1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_2949();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, d1, -1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_5919();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd20_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd20 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd21_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd21 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd22_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd22 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, -1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_2993();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd23_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd23 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, -1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_5919();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd24_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd24 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd25_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd25 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, 1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_23();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd26_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd26 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, 1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_2949();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd27_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd27 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd28_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd28 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd29_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd29 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, -1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_2993();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd30_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd30 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, -1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_5919();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd31_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd31 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd32_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd32 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, 1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_23();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd33_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd33 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, 1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_2949();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd34_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd34 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd35_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd35 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd36_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd36 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, -1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_2993();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd37_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd37 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, -1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_5919();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd38_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd38 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd39_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd39 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, 1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_23();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, d1, 1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_23();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd40_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd40 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, 1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_2949();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd41_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd41 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd42_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd42 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd43_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd43 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, -1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_2993();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd44_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd44 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, -1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_5919();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd45_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd45 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd46_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd46 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, 1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_23();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd47_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd47 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, 1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_2949();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd48_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd48 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd49_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd49 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd5_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd5 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, 1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_2949();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd50_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd50 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, -1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_2993();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd51_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd51 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, d1, -1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_5919();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd52_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd52 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd53_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd53 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, d1, 1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_23();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd54_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd54 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, 1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_2949();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd55_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd55 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_2970();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd6_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd6 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd7_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd7 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_2971();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd8_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd8 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, -1 + d1, d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_2993();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd9_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd9 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, -1 + d2] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_5919();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_4_update_0_write
//	h3_4_h3_4_update_0_write0
//	h3_4_h3_4_update_0_write1
//	h3_4_h3_4_update_0_write2
//	h3_4_h3_4_update_0_write3
//	h3_4_h3_4_update_0_write4
//	h3_4_h3_4_update_0_write5
//	h3_4_h3_4_update_0_write6
//	h3_4_h3_4_update_0_write7
inline void h3_4_h3_4_update_0_write_bundle_write(hw_uint<256>& h3_4_update_0_write, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_4_h3_4_update_0_write0_res = h3_4_update_0_write.extract<0, 31>();
	h3_4_h3_4_update_0_write0_write(h3_4_h3_4_update_0_write0_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write1_res = h3_4_update_0_write.extract<32, 63>();
	h3_4_h3_4_update_0_write1_write(h3_4_h3_4_update_0_write1_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write2_res = h3_4_update_0_write.extract<64, 95>();
	h3_4_h3_4_update_0_write2_write(h3_4_h3_4_update_0_write2_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write3_res = h3_4_update_0_write.extract<96, 127>();
	h3_4_h3_4_update_0_write3_write(h3_4_h3_4_update_0_write3_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write4_res = h3_4_update_0_write.extract<128, 159>();
	h3_4_h3_4_update_0_write4_write(h3_4_h3_4_update_0_write4_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write5_res = h3_4_update_0_write.extract<160, 191>();
	h3_4_h3_4_update_0_write5_write(h3_4_h3_4_update_0_write5_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write6_res = h3_4_update_0_write.extract<192, 223>();
	h3_4_h3_4_update_0_write6_write(h3_4_h3_4_update_0_write6_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write7_res = h3_4_update_0_write.extract<224, 255>();
	h3_4_h3_4_update_0_write7_write(h3_4_h3_4_update_0_write7_res, h3_4, d0, d1, d2, dynamic_address);
}

// h3_5_update_0_read
//	h3_5_rd0
//	h3_5_rd1
//	h3_5_rd2
//	h3_5_rd3
//	h3_5_rd4
//	h3_5_rd5
//	h3_5_rd6
//	h3_5_rd7
//	h3_5_rd8
//	h3_5_rd9
//	h3_5_rd10
//	h3_5_rd11
//	h3_5_rd12
//	h3_5_rd13
//	h3_5_rd14
//	h3_5_rd15
//	h3_5_rd16
//	h3_5_rd17
//	h3_5_rd18
//	h3_5_rd19
//	h3_5_rd20
//	h3_5_rd21
//	h3_5_rd22
//	h3_5_rd23
//	h3_5_rd24
//	h3_5_rd25
//	h3_5_rd26
//	h3_5_rd27
//	h3_5_rd28
//	h3_5_rd29
//	h3_5_rd30
//	h3_5_rd31
//	h3_5_rd32
//	h3_5_rd33
//	h3_5_rd34
//	h3_5_rd35
//	h3_5_rd36
//	h3_5_rd37
//	h3_5_rd38
//	h3_5_rd39
//	h3_5_rd40
//	h3_5_rd41
//	h3_5_rd42
//	h3_5_rd43
//	h3_5_rd44
//	h3_5_rd45
//	h3_5_rd46
//	h3_5_rd47
//	h3_5_rd48
//	h3_5_rd49
//	h3_5_rd50
//	h3_5_rd51
//	h3_5_rd52
//	h3_5_rd53
//	h3_5_rd54
//	h3_5_rd55
inline hw_uint<1792> h3_4_h3_5_update_0_read_bundle_read(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_5_rd0
    // h3_5_rd1
    // h3_5_rd2
    // h3_5_rd3
    // h3_5_rd4
    // h3_5_rd5
    // h3_5_rd6
    // h3_5_rd7
    // h3_5_rd8
    // h3_5_rd9
    // h3_5_rd10
    // h3_5_rd11
    // h3_5_rd12
    // h3_5_rd13
    // h3_5_rd14
    // h3_5_rd15
    // h3_5_rd16
    // h3_5_rd17
    // h3_5_rd18
    // h3_5_rd19
    // h3_5_rd20
    // h3_5_rd21
    // h3_5_rd22
    // h3_5_rd23
    // h3_5_rd24
    // h3_5_rd25
    // h3_5_rd26
    // h3_5_rd27
    // h3_5_rd28
    // h3_5_rd29
    // h3_5_rd30
    // h3_5_rd31
    // h3_5_rd32
    // h3_5_rd33
    // h3_5_rd34
    // h3_5_rd35
    // h3_5_rd36
    // h3_5_rd37
    // h3_5_rd38
    // h3_5_rd39
    // h3_5_rd40
    // h3_5_rd41
    // h3_5_rd42
    // h3_5_rd43
    // h3_5_rd44
    // h3_5_rd45
    // h3_5_rd46
    // h3_5_rd47
    // h3_5_rd48
    // h3_5_rd49
    // h3_5_rd50
    // h3_5_rd51
    // h3_5_rd52
    // h3_5_rd53
    // h3_5_rd54
    // h3_5_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_5_rd0_res = h3_5_rd0_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_5_rd0_res);
	hw_uint<32>  h3_5_rd1_res = h3_5_rd1_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_5_rd1_res);
	hw_uint<32>  h3_5_rd2_res = h3_5_rd2_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_5_rd2_res);
	hw_uint<32>  h3_5_rd3_res = h3_5_rd3_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_5_rd3_res);
	hw_uint<32>  h3_5_rd4_res = h3_5_rd4_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_5_rd4_res);
	hw_uint<32>  h3_5_rd5_res = h3_5_rd5_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_5_rd5_res);
	hw_uint<32>  h3_5_rd6_res = h3_5_rd6_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_5_rd6_res);
	hw_uint<32>  h3_5_rd7_res = h3_5_rd7_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_5_rd7_res);
	hw_uint<32>  h3_5_rd8_res = h3_5_rd8_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_5_rd8_res);
	hw_uint<32>  h3_5_rd9_res = h3_5_rd9_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_5_rd9_res);
	hw_uint<32>  h3_5_rd10_res = h3_5_rd10_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_5_rd10_res);
	hw_uint<32>  h3_5_rd11_res = h3_5_rd11_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_5_rd11_res);
	hw_uint<32>  h3_5_rd12_res = h3_5_rd12_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_5_rd12_res);
	hw_uint<32>  h3_5_rd13_res = h3_5_rd13_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_5_rd13_res);
	hw_uint<32>  h3_5_rd14_res = h3_5_rd14_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_5_rd14_res);
	hw_uint<32>  h3_5_rd15_res = h3_5_rd15_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_5_rd15_res);
	hw_uint<32>  h3_5_rd16_res = h3_5_rd16_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_5_rd16_res);
	hw_uint<32>  h3_5_rd17_res = h3_5_rd17_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_5_rd17_res);
	hw_uint<32>  h3_5_rd18_res = h3_5_rd18_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_5_rd18_res);
	hw_uint<32>  h3_5_rd19_res = h3_5_rd19_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_5_rd19_res);
	hw_uint<32>  h3_5_rd20_res = h3_5_rd20_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_5_rd20_res);
	hw_uint<32>  h3_5_rd21_res = h3_5_rd21_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_5_rd21_res);
	hw_uint<32>  h3_5_rd22_res = h3_5_rd22_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_5_rd22_res);
	hw_uint<32>  h3_5_rd23_res = h3_5_rd23_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_5_rd23_res);
	hw_uint<32>  h3_5_rd24_res = h3_5_rd24_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_5_rd24_res);
	hw_uint<32>  h3_5_rd25_res = h3_5_rd25_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_5_rd25_res);
	hw_uint<32>  h3_5_rd26_res = h3_5_rd26_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_5_rd26_res);
	hw_uint<32>  h3_5_rd27_res = h3_5_rd27_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_5_rd27_res);
	hw_uint<32>  h3_5_rd28_res = h3_5_rd28_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_5_rd28_res);
	hw_uint<32>  h3_5_rd29_res = h3_5_rd29_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_5_rd29_res);
	hw_uint<32>  h3_5_rd30_res = h3_5_rd30_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_5_rd30_res);
	hw_uint<32>  h3_5_rd31_res = h3_5_rd31_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_5_rd31_res);
	hw_uint<32>  h3_5_rd32_res = h3_5_rd32_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_5_rd32_res);
	hw_uint<32>  h3_5_rd33_res = h3_5_rd33_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_5_rd33_res);
	hw_uint<32>  h3_5_rd34_res = h3_5_rd34_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_5_rd34_res);
	hw_uint<32>  h3_5_rd35_res = h3_5_rd35_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_5_rd35_res);
	hw_uint<32>  h3_5_rd36_res = h3_5_rd36_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_5_rd36_res);
	hw_uint<32>  h3_5_rd37_res = h3_5_rd37_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_5_rd37_res);
	hw_uint<32>  h3_5_rd38_res = h3_5_rd38_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_5_rd38_res);
	hw_uint<32>  h3_5_rd39_res = h3_5_rd39_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_5_rd39_res);
	hw_uint<32>  h3_5_rd40_res = h3_5_rd40_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_5_rd40_res);
	hw_uint<32>  h3_5_rd41_res = h3_5_rd41_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_5_rd41_res);
	hw_uint<32>  h3_5_rd42_res = h3_5_rd42_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_5_rd42_res);
	hw_uint<32>  h3_5_rd43_res = h3_5_rd43_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_5_rd43_res);
	hw_uint<32>  h3_5_rd44_res = h3_5_rd44_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_5_rd44_res);
	hw_uint<32>  h3_5_rd45_res = h3_5_rd45_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_5_rd45_res);
	hw_uint<32>  h3_5_rd46_res = h3_5_rd46_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_5_rd46_res);
	hw_uint<32>  h3_5_rd47_res = h3_5_rd47_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_5_rd47_res);
	hw_uint<32>  h3_5_rd48_res = h3_5_rd48_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_5_rd48_res);
	hw_uint<32>  h3_5_rd49_res = h3_5_rd49_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_5_rd49_res);
	hw_uint<32>  h3_5_rd50_res = h3_5_rd50_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_5_rd50_res);
	hw_uint<32>  h3_5_rd51_res = h3_5_rd51_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_5_rd51_res);
	hw_uint<32>  h3_5_rd52_res = h3_5_rd52_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_5_rd52_res);
	hw_uint<32>  h3_5_rd53_res = h3_5_rd53_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_5_rd53_res);
	hw_uint<32>  h3_5_rd54_res = h3_5_rd54_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_5_rd54_res);
	hw_uint<32>  h3_5_rd55_res = h3_5_rd55_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_5_rd55_res);
	return result;
}

struct h3_5_h3_5_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-8, 136], [-2, 128], [-1, 32]}
	// Capacity: 5302
	// # of read delays: 7
  // 0, 21, 2641, 2660, 2661, 2681, 5301
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 20> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2619> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 18> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 19> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2619> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_21() {
		return f2;
	}

	inline hw_uint<32>  peek_2640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2641() {
		return f4;
	}

	inline hw_uint<32>  peek_2659() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2660() {
		return f6;
	}

	inline hw_uint<32>  peek_2661() {
		return f8;
	}

	inline hw_uint<32>  peek_2680() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2681() {
		return f10;
	}

	inline hw_uint<32>  peek_5300() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_5301() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-7, 129], [-2, 129], [-1, 32]}
	// Capacity: 5302
	// # of read delays: 6
  // 0, 21, 2641, 2661, 2681, 5301
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 20> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2619> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 19> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 19> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2619> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_21() {
		return f2;
	}

	inline hw_uint<32>  peek_2640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2641() {
		return f4;
	}

	inline hw_uint<32>  peek_2660() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2661() {
		return f6;
	}

	inline hw_uint<32>  peek_2680() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2681() {
		return f8;
	}

	inline hw_uint<32>  peek_5300() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5301() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-6, 130], [-2, 129], [-1, 32]}
	// Capacity: 5302
	// # of read delays: 6
  // 0, 21, 2641, 2661, 2681, 5301
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 20> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2619> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 19> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 19> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2619> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_21() {
		return f2;
	}

	inline hw_uint<32>  peek_2640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2641() {
		return f4;
	}

	inline hw_uint<32>  peek_2660() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2661() {
		return f6;
	}

	inline hw_uint<32>  peek_2680() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2681() {
		return f8;
	}

	inline hw_uint<32>  peek_5300() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5301() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-5, 131], [-2, 129], [-1, 32]}
	// Capacity: 5302
	// # of read delays: 6
  // 0, 21, 2641, 2661, 2681, 5301
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 20> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2619> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 19> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 19> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2619> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_21() {
		return f2;
	}

	inline hw_uint<32>  peek_2640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2641() {
		return f4;
	}

	inline hw_uint<32>  peek_2660() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2661() {
		return f6;
	}

	inline hw_uint<32>  peek_2680() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2681() {
		return f8;
	}

	inline hw_uint<32>  peek_5300() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5301() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-4, 132], [-2, 129], [-1, 32]}
	// Capacity: 5302
	// # of read delays: 6
  // 0, 21, 2641, 2661, 2681, 5301
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 20> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2619> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 19> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 19> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2619> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_21() {
		return f2;
	}

	inline hw_uint<32>  peek_2640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2641() {
		return f4;
	}

	inline hw_uint<32>  peek_2660() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2661() {
		return f6;
	}

	inline hw_uint<32>  peek_2680() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2681() {
		return f8;
	}

	inline hw_uint<32>  peek_5300() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5301() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-3, 133], [-2, 129], [-1, 32]}
	// Capacity: 5302
	// # of read delays: 6
  // 0, 21, 2641, 2661, 2681, 5301
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 20> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2619> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 19> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 19> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2619> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_21() {
		return f2;
	}

	inline hw_uint<32>  peek_2640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2641() {
		return f4;
	}

	inline hw_uint<32>  peek_2660() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2661() {
		return f6;
	}

	inline hw_uint<32>  peek_2680() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2681() {
		return f8;
	}

	inline hw_uint<32>  peek_5300() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5301() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-2, 134], [-2, 129], [-1, 32]}
	// Capacity: 5302
	// # of read delays: 6
  // 0, 21, 2641, 2661, 2681, 5301
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 20> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2619> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 19> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 19> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2619> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_21() {
		return f2;
	}

	inline hw_uint<32>  peek_2640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2641() {
		return f4;
	}

	inline hw_uint<32>  peek_2660() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2661() {
		return f6;
	}

	inline hw_uint<32>  peek_2680() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2681() {
		return f8;
	}

	inline hw_uint<32>  peek_5300() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_5301() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-9, 135], [-1, 129], [-1, 32]}
	// Capacity: 5302
	// # of read delays: 7
  // 0, 21, 2641, 2661, 2662, 2681, 5301
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 20> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2619> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 19> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 18> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2619> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_21() {
		return f2;
	}

	inline hw_uint<32>  peek_2640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2641() {
		return f4;
	}

	inline hw_uint<32>  peek_2660() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2661() {
		return f6;
	}

	inline hw_uint<32>  peek_2662() {
		return f8;
	}

	inline hw_uint<32>  peek_2680() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2681() {
		return f10;
	}

	inline hw_uint<32>  peek_5300() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_5301() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2619
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2619 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_cache {
  // # of banks: 8
  h3_5_h3_5_update_0_write0_merged_banks_7_cache h3_5_h3_5_update_0_write0_merged_banks_7;
  h3_5_h3_5_update_0_write1_merged_banks_7_cache h3_5_h3_5_update_0_write1_merged_banks_7;
  h3_5_h3_5_update_0_write2_merged_banks_7_cache h3_5_h3_5_update_0_write2_merged_banks_7;
  h3_5_h3_5_update_0_write3_merged_banks_7_cache h3_5_h3_5_update_0_write3_merged_banks_7;
  h3_5_h3_5_update_0_write4_merged_banks_7_cache h3_5_h3_5_update_0_write4_merged_banks_7;
  h3_5_h3_5_update_0_write5_merged_banks_7_cache h3_5_h3_5_update_0_write5_merged_banks_7;
  h3_5_h3_5_update_0_write6_merged_banks_7_cache h3_5_h3_5_update_0_write6_merged_banks_7;
  h3_5_h3_5_update_0_write7_merged_banks_7_cache h3_5_h3_5_update_0_write7_merged_banks_7;
};



inline void h3_5_h3_5_update_0_write0_write(hw_uint<32> & h3_5_h3_5_update_0_write0, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.push(h3_5_h3_5_update_0_write0);
}

inline void h3_5_h3_5_update_0_write1_write(hw_uint<32> & h3_5_h3_5_update_0_write1, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.push(h3_5_h3_5_update_0_write1);
}

inline void h3_5_h3_5_update_0_write2_write(hw_uint<32> & h3_5_h3_5_update_0_write2, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.push(h3_5_h3_5_update_0_write2);
}

inline void h3_5_h3_5_update_0_write3_write(hw_uint<32> & h3_5_h3_5_update_0_write3, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.push(h3_5_h3_5_update_0_write3);
}

inline void h3_5_h3_5_update_0_write4_write(hw_uint<32> & h3_5_h3_5_update_0_write4, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.push(h3_5_h3_5_update_0_write4);
}

inline void h3_5_h3_5_update_0_write5_write(hw_uint<32> & h3_5_h3_5_update_0_write5, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.push(h3_5_h3_5_update_0_write5);
}

inline void h3_5_h3_5_update_0_write6_write(hw_uint<32> & h3_5_h3_5_update_0_write6, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.push(h3_5_h3_5_update_0_write6);
}

inline void h3_5_h3_5_update_0_write7_write(hw_uint<32> & h3_5_h3_5_update_0_write7, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.push(h3_5_h3_5_update_0_write7);
}

inline hw_uint<32>  h3_6_rd0_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[-1 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_2662();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, -1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_2681();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd10_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd10 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd11_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd11 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, 1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_21();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd12_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd12 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, 1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_2641();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd13_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd13 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd14_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd14 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd15_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd15 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, -1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_2681();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd16_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd16 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, -1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_5301();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd17_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd17 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd18_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd18 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, 1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_21();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd19_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd19 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, 1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_2641();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, d1, -1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_5301();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd20_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd20 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd21_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd21 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd22_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd22 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, -1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_2681();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd23_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd23 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, -1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_5301();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd24_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd24 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd25_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd25 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, 1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_21();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd26_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd26 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, 1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_2641();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd27_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd27 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd28_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd28 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd29_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd29 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, -1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_2681();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd30_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd30 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, -1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_5301();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd31_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd31 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd32_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd32 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, 1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_21();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd33_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd33 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, 1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_2641();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd34_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd34 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd35_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd35 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd36_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd36 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, -1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_2681();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd37_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd37 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, -1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_5301();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd38_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd38 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd39_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd39 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, 1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_21();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, d1, 1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_21();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd40_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd40 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, 1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_2641();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd41_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd41 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd42_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd42 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd43_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd43 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, -1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_2681();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd44_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd44 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, -1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_5301();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd45_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd45 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd46_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd46 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, 1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_21();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd47_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd47 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, 1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_2641();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd48_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd48 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd49_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd49 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd5_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd5 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, 1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_2641();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd50_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd50 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, -1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_2681();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd51_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd51 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, d1, -1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_5301();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd52_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd52 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd53_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd53 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, d1, 1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_21();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd54_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd54 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, 1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_2641();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd55_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd55 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_2660();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd6_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd6 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd7_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd7 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_2661();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd8_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd8 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, -1 + d1, d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_2681();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd9_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd9 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, -1 + d2] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_5301();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_5_update_0_write
//	h3_5_h3_5_update_0_write0
//	h3_5_h3_5_update_0_write1
//	h3_5_h3_5_update_0_write2
//	h3_5_h3_5_update_0_write3
//	h3_5_h3_5_update_0_write4
//	h3_5_h3_5_update_0_write5
//	h3_5_h3_5_update_0_write6
//	h3_5_h3_5_update_0_write7
inline void h3_5_h3_5_update_0_write_bundle_write(hw_uint<256>& h3_5_update_0_write, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_5_h3_5_update_0_write0_res = h3_5_update_0_write.extract<0, 31>();
	h3_5_h3_5_update_0_write0_write(h3_5_h3_5_update_0_write0_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write1_res = h3_5_update_0_write.extract<32, 63>();
	h3_5_h3_5_update_0_write1_write(h3_5_h3_5_update_0_write1_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write2_res = h3_5_update_0_write.extract<64, 95>();
	h3_5_h3_5_update_0_write2_write(h3_5_h3_5_update_0_write2_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write3_res = h3_5_update_0_write.extract<96, 127>();
	h3_5_h3_5_update_0_write3_write(h3_5_h3_5_update_0_write3_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write4_res = h3_5_update_0_write.extract<128, 159>();
	h3_5_h3_5_update_0_write4_write(h3_5_h3_5_update_0_write4_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write5_res = h3_5_update_0_write.extract<160, 191>();
	h3_5_h3_5_update_0_write5_write(h3_5_h3_5_update_0_write5_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write6_res = h3_5_update_0_write.extract<192, 223>();
	h3_5_h3_5_update_0_write6_write(h3_5_h3_5_update_0_write6_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write7_res = h3_5_update_0_write.extract<224, 255>();
	h3_5_h3_5_update_0_write7_write(h3_5_h3_5_update_0_write7_res, h3_5, d0, d1, d2, dynamic_address);
}

// h3_6_update_0_read
//	h3_6_rd0
//	h3_6_rd1
//	h3_6_rd2
//	h3_6_rd3
//	h3_6_rd4
//	h3_6_rd5
//	h3_6_rd6
//	h3_6_rd7
//	h3_6_rd8
//	h3_6_rd9
//	h3_6_rd10
//	h3_6_rd11
//	h3_6_rd12
//	h3_6_rd13
//	h3_6_rd14
//	h3_6_rd15
//	h3_6_rd16
//	h3_6_rd17
//	h3_6_rd18
//	h3_6_rd19
//	h3_6_rd20
//	h3_6_rd21
//	h3_6_rd22
//	h3_6_rd23
//	h3_6_rd24
//	h3_6_rd25
//	h3_6_rd26
//	h3_6_rd27
//	h3_6_rd28
//	h3_6_rd29
//	h3_6_rd30
//	h3_6_rd31
//	h3_6_rd32
//	h3_6_rd33
//	h3_6_rd34
//	h3_6_rd35
//	h3_6_rd36
//	h3_6_rd37
//	h3_6_rd38
//	h3_6_rd39
//	h3_6_rd40
//	h3_6_rd41
//	h3_6_rd42
//	h3_6_rd43
//	h3_6_rd44
//	h3_6_rd45
//	h3_6_rd46
//	h3_6_rd47
//	h3_6_rd48
//	h3_6_rd49
//	h3_6_rd50
//	h3_6_rd51
//	h3_6_rd52
//	h3_6_rd53
//	h3_6_rd54
//	h3_6_rd55
inline hw_uint<1792> h3_5_h3_6_update_0_read_bundle_read(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_6_rd0
    // h3_6_rd1
    // h3_6_rd2
    // h3_6_rd3
    // h3_6_rd4
    // h3_6_rd5
    // h3_6_rd6
    // h3_6_rd7
    // h3_6_rd8
    // h3_6_rd9
    // h3_6_rd10
    // h3_6_rd11
    // h3_6_rd12
    // h3_6_rd13
    // h3_6_rd14
    // h3_6_rd15
    // h3_6_rd16
    // h3_6_rd17
    // h3_6_rd18
    // h3_6_rd19
    // h3_6_rd20
    // h3_6_rd21
    // h3_6_rd22
    // h3_6_rd23
    // h3_6_rd24
    // h3_6_rd25
    // h3_6_rd26
    // h3_6_rd27
    // h3_6_rd28
    // h3_6_rd29
    // h3_6_rd30
    // h3_6_rd31
    // h3_6_rd32
    // h3_6_rd33
    // h3_6_rd34
    // h3_6_rd35
    // h3_6_rd36
    // h3_6_rd37
    // h3_6_rd38
    // h3_6_rd39
    // h3_6_rd40
    // h3_6_rd41
    // h3_6_rd42
    // h3_6_rd43
    // h3_6_rd44
    // h3_6_rd45
    // h3_6_rd46
    // h3_6_rd47
    // h3_6_rd48
    // h3_6_rd49
    // h3_6_rd50
    // h3_6_rd51
    // h3_6_rd52
    // h3_6_rd53
    // h3_6_rd54
    // h3_6_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_6_rd0_res = h3_6_rd0_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_6_rd0_res);
	hw_uint<32>  h3_6_rd1_res = h3_6_rd1_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_6_rd1_res);
	hw_uint<32>  h3_6_rd2_res = h3_6_rd2_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_6_rd2_res);
	hw_uint<32>  h3_6_rd3_res = h3_6_rd3_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_6_rd3_res);
	hw_uint<32>  h3_6_rd4_res = h3_6_rd4_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_6_rd4_res);
	hw_uint<32>  h3_6_rd5_res = h3_6_rd5_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_6_rd5_res);
	hw_uint<32>  h3_6_rd6_res = h3_6_rd6_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_6_rd6_res);
	hw_uint<32>  h3_6_rd7_res = h3_6_rd7_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_6_rd7_res);
	hw_uint<32>  h3_6_rd8_res = h3_6_rd8_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_6_rd8_res);
	hw_uint<32>  h3_6_rd9_res = h3_6_rd9_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_6_rd9_res);
	hw_uint<32>  h3_6_rd10_res = h3_6_rd10_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_6_rd10_res);
	hw_uint<32>  h3_6_rd11_res = h3_6_rd11_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_6_rd11_res);
	hw_uint<32>  h3_6_rd12_res = h3_6_rd12_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_6_rd12_res);
	hw_uint<32>  h3_6_rd13_res = h3_6_rd13_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_6_rd13_res);
	hw_uint<32>  h3_6_rd14_res = h3_6_rd14_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_6_rd14_res);
	hw_uint<32>  h3_6_rd15_res = h3_6_rd15_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_6_rd15_res);
	hw_uint<32>  h3_6_rd16_res = h3_6_rd16_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_6_rd16_res);
	hw_uint<32>  h3_6_rd17_res = h3_6_rd17_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_6_rd17_res);
	hw_uint<32>  h3_6_rd18_res = h3_6_rd18_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_6_rd18_res);
	hw_uint<32>  h3_6_rd19_res = h3_6_rd19_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_6_rd19_res);
	hw_uint<32>  h3_6_rd20_res = h3_6_rd20_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_6_rd20_res);
	hw_uint<32>  h3_6_rd21_res = h3_6_rd21_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_6_rd21_res);
	hw_uint<32>  h3_6_rd22_res = h3_6_rd22_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_6_rd22_res);
	hw_uint<32>  h3_6_rd23_res = h3_6_rd23_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_6_rd23_res);
	hw_uint<32>  h3_6_rd24_res = h3_6_rd24_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_6_rd24_res);
	hw_uint<32>  h3_6_rd25_res = h3_6_rd25_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_6_rd25_res);
	hw_uint<32>  h3_6_rd26_res = h3_6_rd26_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_6_rd26_res);
	hw_uint<32>  h3_6_rd27_res = h3_6_rd27_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_6_rd27_res);
	hw_uint<32>  h3_6_rd28_res = h3_6_rd28_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_6_rd28_res);
	hw_uint<32>  h3_6_rd29_res = h3_6_rd29_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_6_rd29_res);
	hw_uint<32>  h3_6_rd30_res = h3_6_rd30_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_6_rd30_res);
	hw_uint<32>  h3_6_rd31_res = h3_6_rd31_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_6_rd31_res);
	hw_uint<32>  h3_6_rd32_res = h3_6_rd32_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_6_rd32_res);
	hw_uint<32>  h3_6_rd33_res = h3_6_rd33_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_6_rd33_res);
	hw_uint<32>  h3_6_rd34_res = h3_6_rd34_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_6_rd34_res);
	hw_uint<32>  h3_6_rd35_res = h3_6_rd35_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_6_rd35_res);
	hw_uint<32>  h3_6_rd36_res = h3_6_rd36_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_6_rd36_res);
	hw_uint<32>  h3_6_rd37_res = h3_6_rd37_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_6_rd37_res);
	hw_uint<32>  h3_6_rd38_res = h3_6_rd38_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_6_rd38_res);
	hw_uint<32>  h3_6_rd39_res = h3_6_rd39_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_6_rd39_res);
	hw_uint<32>  h3_6_rd40_res = h3_6_rd40_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_6_rd40_res);
	hw_uint<32>  h3_6_rd41_res = h3_6_rd41_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_6_rd41_res);
	hw_uint<32>  h3_6_rd42_res = h3_6_rd42_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_6_rd42_res);
	hw_uint<32>  h3_6_rd43_res = h3_6_rd43_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_6_rd43_res);
	hw_uint<32>  h3_6_rd44_res = h3_6_rd44_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_6_rd44_res);
	hw_uint<32>  h3_6_rd45_res = h3_6_rd45_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_6_rd45_res);
	hw_uint<32>  h3_6_rd46_res = h3_6_rd46_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_6_rd46_res);
	hw_uint<32>  h3_6_rd47_res = h3_6_rd47_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_6_rd47_res);
	hw_uint<32>  h3_6_rd48_res = h3_6_rd48_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_6_rd48_res);
	hw_uint<32>  h3_6_rd49_res = h3_6_rd49_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_6_rd49_res);
	hw_uint<32>  h3_6_rd50_res = h3_6_rd50_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_6_rd50_res);
	hw_uint<32>  h3_6_rd51_res = h3_6_rd51_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_6_rd51_res);
	hw_uint<32>  h3_6_rd52_res = h3_6_rd52_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_6_rd52_res);
	hw_uint<32>  h3_6_rd53_res = h3_6_rd53_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_6_rd53_res);
	hw_uint<32>  h3_6_rd54_res = h3_6_rd54_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_6_rd54_res);
	hw_uint<32>  h3_6_rd55_res = h3_6_rd55_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_6_rd55_res);
	return result;
}

struct h3_6_h3_6_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[0, 128], [-1, 127], [0, 31]}
	// Capacity: 4700
	// # of read delays: 7
  // 0, 19, 2341, 2358, 2359, 2377, 4699
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 18> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2321> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 16> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 17> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2321> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2;
	}

	inline hw_uint<32>  peek_2340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2341() {
		return f4;
	}

	inline hw_uint<32>  peek_2357() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2358() {
		return f6;
	}

	inline hw_uint<32>  peek_2359() {
		return f8;
	}

	inline hw_uint<32>  peek_2376() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2377() {
		return f10;
	}

	inline hw_uint<32>  peek_4698() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_4699() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 16
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[1, 121], [-1, 128], [0, 31]}
	// Capacity: 4700
	// # of read delays: 6
  // 0, 19, 2341, 2359, 2377, 4699
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 18> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2321> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 17> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 17> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2321> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2;
	}

	inline hw_uint<32>  peek_2340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2341() {
		return f4;
	}

	inline hw_uint<32>  peek_2358() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2359() {
		return f6;
	}

	inline hw_uint<32>  peek_2376() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2377() {
		return f8;
	}

	inline hw_uint<32>  peek_4698() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4699() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[2, 122], [-1, 128], [0, 31]}
	// Capacity: 4700
	// # of read delays: 6
  // 0, 19, 2341, 2359, 2377, 4699
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 18> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2321> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 17> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 17> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2321> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2;
	}

	inline hw_uint<32>  peek_2340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2341() {
		return f4;
	}

	inline hw_uint<32>  peek_2358() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2359() {
		return f6;
	}

	inline hw_uint<32>  peek_2376() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2377() {
		return f8;
	}

	inline hw_uint<32>  peek_4698() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4699() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[3, 123], [-1, 128], [0, 31]}
	// Capacity: 4700
	// # of read delays: 6
  // 0, 19, 2341, 2359, 2377, 4699
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 18> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2321> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 17> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 17> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2321> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2;
	}

	inline hw_uint<32>  peek_2340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2341() {
		return f4;
	}

	inline hw_uint<32>  peek_2358() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2359() {
		return f6;
	}

	inline hw_uint<32>  peek_2376() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2377() {
		return f8;
	}

	inline hw_uint<32>  peek_4698() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4699() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[4, 124], [-1, 128], [0, 31]}
	// Capacity: 4700
	// # of read delays: 6
  // 0, 19, 2341, 2359, 2377, 4699
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 18> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2321> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 17> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 17> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2321> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2;
	}

	inline hw_uint<32>  peek_2340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2341() {
		return f4;
	}

	inline hw_uint<32>  peek_2358() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2359() {
		return f6;
	}

	inline hw_uint<32>  peek_2376() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2377() {
		return f8;
	}

	inline hw_uint<32>  peek_4698() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4699() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[5, 125], [-1, 128], [0, 31]}
	// Capacity: 4700
	// # of read delays: 6
  // 0, 19, 2341, 2359, 2377, 4699
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 18> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2321> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 17> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 17> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2321> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2;
	}

	inline hw_uint<32>  peek_2340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2341() {
		return f4;
	}

	inline hw_uint<32>  peek_2358() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2359() {
		return f6;
	}

	inline hw_uint<32>  peek_2376() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2377() {
		return f8;
	}

	inline hw_uint<32>  peek_4698() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4699() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[6, 126], [-1, 128], [0, 31]}
	// Capacity: 4700
	// # of read delays: 6
  // 0, 19, 2341, 2359, 2377, 4699
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 18> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2321> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 17> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 17> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 2321> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2;
	}

	inline hw_uint<32>  peek_2340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2341() {
		return f4;
	}

	inline hw_uint<32>  peek_2358() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2359() {
		return f6;
	}

	inline hw_uint<32>  peek_2376() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2377() {
		return f8;
	}

	inline hw_uint<32>  peek_4698() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4699() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-1, 127], [0, 128], [0, 31]}
	// Capacity: 4700
	// # of read delays: 7
  // 0, 19, 2341, 2359, 2360, 2377, 4699
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 18> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 2321> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 17> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 16> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2321> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_19() {
		return f2;
	}

	inline hw_uint<32>  peek_2340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_2341() {
		return f4;
	}

	inline hw_uint<32>  peek_2358() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2359() {
		return f6;
	}

	inline hw_uint<32>  peek_2360() {
		return f8;
	}

	inline hw_uint<32>  peek_2376() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_2377() {
		return f10;
	}

	inline hw_uint<32>  peek_4698() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_4699() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 16
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 2321
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2321 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_cache {
  // # of banks: 8
  h3_6_h3_6_update_0_write0_merged_banks_7_cache h3_6_h3_6_update_0_write0_merged_banks_7;
  h3_6_h3_6_update_0_write1_merged_banks_7_cache h3_6_h3_6_update_0_write1_merged_banks_7;
  h3_6_h3_6_update_0_write2_merged_banks_7_cache h3_6_h3_6_update_0_write2_merged_banks_7;
  h3_6_h3_6_update_0_write3_merged_banks_7_cache h3_6_h3_6_update_0_write3_merged_banks_7;
  h3_6_h3_6_update_0_write4_merged_banks_7_cache h3_6_h3_6_update_0_write4_merged_banks_7;
  h3_6_h3_6_update_0_write5_merged_banks_7_cache h3_6_h3_6_update_0_write5_merged_banks_7;
  h3_6_h3_6_update_0_write6_merged_banks_7_cache h3_6_h3_6_update_0_write6_merged_banks_7;
  h3_6_h3_6_update_0_write7_merged_banks_7_cache h3_6_h3_6_update_0_write7_merged_banks_7;
};



inline void h3_6_h3_6_update_0_write0_write(hw_uint<32> & h3_6_h3_6_update_0_write0, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.push(h3_6_h3_6_update_0_write0);
}

inline void h3_6_h3_6_update_0_write1_write(hw_uint<32> & h3_6_h3_6_update_0_write1, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.push(h3_6_h3_6_update_0_write1);
}

inline void h3_6_h3_6_update_0_write2_write(hw_uint<32> & h3_6_h3_6_update_0_write2, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.push(h3_6_h3_6_update_0_write2);
}

inline void h3_6_h3_6_update_0_write3_write(hw_uint<32> & h3_6_h3_6_update_0_write3, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.push(h3_6_h3_6_update_0_write3);
}

inline void h3_6_h3_6_update_0_write4_write(hw_uint<32> & h3_6_h3_6_update_0_write4, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.push(h3_6_h3_6_update_0_write4);
}

inline void h3_6_h3_6_update_0_write5_write(hw_uint<32> & h3_6_h3_6_update_0_write5, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.push(h3_6_h3_6_update_0_write5);
}

inline void h3_6_h3_6_update_0_write6_write(hw_uint<32> & h3_6_h3_6_update_0_write6, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.push(h3_6_h3_6_update_0_write6);
}

inline void h3_6_h3_6_update_0_write7_write(hw_uint<32> & h3_6_h3_6_update_0_write7, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.push(h3_6_h3_6_update_0_write7);
}

inline hw_uint<32>  h3_7_rd0_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[-1 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_2360();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, -1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_2377();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd10_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd10 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd11_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd11 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, 1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_19();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd12_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd12 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, 1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_2341();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd13_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd13 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd14_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd14 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd15_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd15 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, -1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_2377();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd16_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd16 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, -1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_4699();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd17_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd17 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd18_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd18 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, 1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_19();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd19_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd19 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, 1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_2341();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, d1, -1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_4699();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd20_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd20 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd21_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd21 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd22_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd22 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, -1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_2377();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd23_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd23 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, -1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_4699();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd24_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd24 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd25_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd25 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, 1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_19();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd26_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd26 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, 1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_2341();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd27_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd27 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd28_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd28 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd29_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd29 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, -1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_2377();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd30_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd30 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, -1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_4699();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd31_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd31 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd32_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd32 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, 1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_19();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd33_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd33 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, 1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_2341();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd34_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd34 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd35_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd35 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd36_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd36 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, -1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_2377();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd37_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd37 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, -1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_4699();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd38_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd38 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd39_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd39 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, 1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_19();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, d1, 1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_19();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd40_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd40 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, 1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_2341();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd41_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd41 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd42_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd42 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd43_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd43 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, -1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_2377();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd44_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd44 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, -1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_4699();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd45_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd45 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd46_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd46 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, 1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_19();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd47_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd47 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, 1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_2341();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd48_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd48 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd49_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd49 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd5_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd5 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, 1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_2341();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd50_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd50 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, -1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_2377();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd51_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd51 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, d1, -1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_4699();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd52_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd52 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd53_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd53 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, d1, 1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_19();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd54_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd54 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, 1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_2341();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd55_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd55 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_2358();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd6_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd6 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd7_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd7 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_2359();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd8_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd8 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, -1 + d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_2377();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd9_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd9 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, -1 + d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_4699();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_6_update_0_write
//	h3_6_h3_6_update_0_write0
//	h3_6_h3_6_update_0_write1
//	h3_6_h3_6_update_0_write2
//	h3_6_h3_6_update_0_write3
//	h3_6_h3_6_update_0_write4
//	h3_6_h3_6_update_0_write5
//	h3_6_h3_6_update_0_write6
//	h3_6_h3_6_update_0_write7
inline void h3_6_h3_6_update_0_write_bundle_write(hw_uint<256>& h3_6_update_0_write, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_6_h3_6_update_0_write0_res = h3_6_update_0_write.extract<0, 31>();
	h3_6_h3_6_update_0_write0_write(h3_6_h3_6_update_0_write0_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write1_res = h3_6_update_0_write.extract<32, 63>();
	h3_6_h3_6_update_0_write1_write(h3_6_h3_6_update_0_write1_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write2_res = h3_6_update_0_write.extract<64, 95>();
	h3_6_h3_6_update_0_write2_write(h3_6_h3_6_update_0_write2_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write3_res = h3_6_update_0_write.extract<96, 127>();
	h3_6_h3_6_update_0_write3_write(h3_6_h3_6_update_0_write3_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write4_res = h3_6_update_0_write.extract<128, 159>();
	h3_6_h3_6_update_0_write4_write(h3_6_h3_6_update_0_write4_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write5_res = h3_6_update_0_write.extract<160, 191>();
	h3_6_h3_6_update_0_write5_write(h3_6_h3_6_update_0_write5_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write6_res = h3_6_update_0_write.extract<192, 223>();
	h3_6_h3_6_update_0_write6_write(h3_6_h3_6_update_0_write6_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write7_res = h3_6_update_0_write.extract<224, 255>();
	h3_6_h3_6_update_0_write7_write(h3_6_h3_6_update_0_write7_res, h3_6, d0, d1, d2, dynamic_address);
}

// h3_7_update_0_read
//	h3_7_rd0
//	h3_7_rd1
//	h3_7_rd2
//	h3_7_rd3
//	h3_7_rd4
//	h3_7_rd5
//	h3_7_rd6
//	h3_7_rd7
//	h3_7_rd8
//	h3_7_rd9
//	h3_7_rd10
//	h3_7_rd11
//	h3_7_rd12
//	h3_7_rd13
//	h3_7_rd14
//	h3_7_rd15
//	h3_7_rd16
//	h3_7_rd17
//	h3_7_rd18
//	h3_7_rd19
//	h3_7_rd20
//	h3_7_rd21
//	h3_7_rd22
//	h3_7_rd23
//	h3_7_rd24
//	h3_7_rd25
//	h3_7_rd26
//	h3_7_rd27
//	h3_7_rd28
//	h3_7_rd29
//	h3_7_rd30
//	h3_7_rd31
//	h3_7_rd32
//	h3_7_rd33
//	h3_7_rd34
//	h3_7_rd35
//	h3_7_rd36
//	h3_7_rd37
//	h3_7_rd38
//	h3_7_rd39
//	h3_7_rd40
//	h3_7_rd41
//	h3_7_rd42
//	h3_7_rd43
//	h3_7_rd44
//	h3_7_rd45
//	h3_7_rd46
//	h3_7_rd47
//	h3_7_rd48
//	h3_7_rd49
//	h3_7_rd50
//	h3_7_rd51
//	h3_7_rd52
//	h3_7_rd53
//	h3_7_rd54
//	h3_7_rd55
inline hw_uint<1792> h3_6_h3_7_update_0_read_bundle_read(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_7_rd0
    // h3_7_rd1
    // h3_7_rd2
    // h3_7_rd3
    // h3_7_rd4
    // h3_7_rd5
    // h3_7_rd6
    // h3_7_rd7
    // h3_7_rd8
    // h3_7_rd9
    // h3_7_rd10
    // h3_7_rd11
    // h3_7_rd12
    // h3_7_rd13
    // h3_7_rd14
    // h3_7_rd15
    // h3_7_rd16
    // h3_7_rd17
    // h3_7_rd18
    // h3_7_rd19
    // h3_7_rd20
    // h3_7_rd21
    // h3_7_rd22
    // h3_7_rd23
    // h3_7_rd24
    // h3_7_rd25
    // h3_7_rd26
    // h3_7_rd27
    // h3_7_rd28
    // h3_7_rd29
    // h3_7_rd30
    // h3_7_rd31
    // h3_7_rd32
    // h3_7_rd33
    // h3_7_rd34
    // h3_7_rd35
    // h3_7_rd36
    // h3_7_rd37
    // h3_7_rd38
    // h3_7_rd39
    // h3_7_rd40
    // h3_7_rd41
    // h3_7_rd42
    // h3_7_rd43
    // h3_7_rd44
    // h3_7_rd45
    // h3_7_rd46
    // h3_7_rd47
    // h3_7_rd48
    // h3_7_rd49
    // h3_7_rd50
    // h3_7_rd51
    // h3_7_rd52
    // h3_7_rd53
    // h3_7_rd54
    // h3_7_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_7_rd0_res = h3_7_rd0_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_7_rd0_res);
	hw_uint<32>  h3_7_rd1_res = h3_7_rd1_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_7_rd1_res);
	hw_uint<32>  h3_7_rd2_res = h3_7_rd2_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_7_rd2_res);
	hw_uint<32>  h3_7_rd3_res = h3_7_rd3_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_7_rd3_res);
	hw_uint<32>  h3_7_rd4_res = h3_7_rd4_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_7_rd4_res);
	hw_uint<32>  h3_7_rd5_res = h3_7_rd5_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_7_rd5_res);
	hw_uint<32>  h3_7_rd6_res = h3_7_rd6_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_7_rd6_res);
	hw_uint<32>  h3_7_rd7_res = h3_7_rd7_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_7_rd7_res);
	hw_uint<32>  h3_7_rd8_res = h3_7_rd8_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_7_rd8_res);
	hw_uint<32>  h3_7_rd9_res = h3_7_rd9_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_7_rd9_res);
	hw_uint<32>  h3_7_rd10_res = h3_7_rd10_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_7_rd10_res);
	hw_uint<32>  h3_7_rd11_res = h3_7_rd11_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_7_rd11_res);
	hw_uint<32>  h3_7_rd12_res = h3_7_rd12_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_7_rd12_res);
	hw_uint<32>  h3_7_rd13_res = h3_7_rd13_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_7_rd13_res);
	hw_uint<32>  h3_7_rd14_res = h3_7_rd14_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_7_rd14_res);
	hw_uint<32>  h3_7_rd15_res = h3_7_rd15_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_7_rd15_res);
	hw_uint<32>  h3_7_rd16_res = h3_7_rd16_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_7_rd16_res);
	hw_uint<32>  h3_7_rd17_res = h3_7_rd17_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_7_rd17_res);
	hw_uint<32>  h3_7_rd18_res = h3_7_rd18_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_7_rd18_res);
	hw_uint<32>  h3_7_rd19_res = h3_7_rd19_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_7_rd19_res);
	hw_uint<32>  h3_7_rd20_res = h3_7_rd20_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_7_rd20_res);
	hw_uint<32>  h3_7_rd21_res = h3_7_rd21_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_7_rd21_res);
	hw_uint<32>  h3_7_rd22_res = h3_7_rd22_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_7_rd22_res);
	hw_uint<32>  h3_7_rd23_res = h3_7_rd23_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_7_rd23_res);
	hw_uint<32>  h3_7_rd24_res = h3_7_rd24_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_7_rd24_res);
	hw_uint<32>  h3_7_rd25_res = h3_7_rd25_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_7_rd25_res);
	hw_uint<32>  h3_7_rd26_res = h3_7_rd26_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_7_rd26_res);
	hw_uint<32>  h3_7_rd27_res = h3_7_rd27_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_7_rd27_res);
	hw_uint<32>  h3_7_rd28_res = h3_7_rd28_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_7_rd28_res);
	hw_uint<32>  h3_7_rd29_res = h3_7_rd29_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_7_rd29_res);
	hw_uint<32>  h3_7_rd30_res = h3_7_rd30_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_7_rd30_res);
	hw_uint<32>  h3_7_rd31_res = h3_7_rd31_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_7_rd31_res);
	hw_uint<32>  h3_7_rd32_res = h3_7_rd32_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_7_rd32_res);
	hw_uint<32>  h3_7_rd33_res = h3_7_rd33_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_7_rd33_res);
	hw_uint<32>  h3_7_rd34_res = h3_7_rd34_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_7_rd34_res);
	hw_uint<32>  h3_7_rd35_res = h3_7_rd35_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_7_rd35_res);
	hw_uint<32>  h3_7_rd36_res = h3_7_rd36_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_7_rd36_res);
	hw_uint<32>  h3_7_rd37_res = h3_7_rd37_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_7_rd37_res);
	hw_uint<32>  h3_7_rd38_res = h3_7_rd38_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_7_rd38_res);
	hw_uint<32>  h3_7_rd39_res = h3_7_rd39_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_7_rd39_res);
	hw_uint<32>  h3_7_rd40_res = h3_7_rd40_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_7_rd40_res);
	hw_uint<32>  h3_7_rd41_res = h3_7_rd41_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_7_rd41_res);
	hw_uint<32>  h3_7_rd42_res = h3_7_rd42_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_7_rd42_res);
	hw_uint<32>  h3_7_rd43_res = h3_7_rd43_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_7_rd43_res);
	hw_uint<32>  h3_7_rd44_res = h3_7_rd44_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_7_rd44_res);
	hw_uint<32>  h3_7_rd45_res = h3_7_rd45_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_7_rd45_res);
	hw_uint<32>  h3_7_rd46_res = h3_7_rd46_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_7_rd46_res);
	hw_uint<32>  h3_7_rd47_res = h3_7_rd47_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_7_rd47_res);
	hw_uint<32>  h3_7_rd48_res = h3_7_rd48_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_7_rd48_res);
	hw_uint<32>  h3_7_rd49_res = h3_7_rd49_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_7_rd49_res);
	hw_uint<32>  h3_7_rd50_res = h3_7_rd50_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_7_rd50_res);
	hw_uint<32>  h3_7_rd51_res = h3_7_rd51_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_7_rd51_res);
	hw_uint<32>  h3_7_rd52_res = h3_7_rd52_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_7_rd52_res);
	hw_uint<32>  h3_7_rd53_res = h3_7_rd53_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_7_rd53_res);
	hw_uint<32>  h3_7_rd54_res = h3_7_rd54_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_7_rd54_res);
	hw_uint<32>  h3_7_rd55_res = h3_7_rd55_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_7_rd55_res);
	return result;
}

struct h3_7_h3_7_update_0_write0_to_heat3dla_8_8_rd0_cache {
	// RAM Box: {[0, 120], [0, 127], [0, 31]}
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

struct h3_7_h3_7_update_0_write1_to_heat3dla_8_8_rd1_cache {
	// RAM Box: {[1, 121], [0, 127], [0, 31]}
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

struct h3_7_h3_7_update_0_write2_to_heat3dla_8_8_rd2_cache {
	// RAM Box: {[2, 122], [0, 127], [0, 31]}
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

struct h3_7_h3_7_update_0_write3_to_heat3dla_8_8_rd3_cache {
	// RAM Box: {[3, 123], [0, 127], [0, 31]}
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

struct h3_7_h3_7_update_0_write4_to_heat3dla_8_8_rd4_cache {
	// RAM Box: {[4, 124], [0, 127], [0, 31]}
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

struct h3_7_h3_7_update_0_write5_to_heat3dla_8_8_rd5_cache {
	// RAM Box: {[5, 125], [0, 127], [0, 31]}
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

struct h3_7_h3_7_update_0_write6_to_heat3dla_8_8_rd6_cache {
	// RAM Box: {[6, 126], [0, 127], [0, 31]}
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

struct h3_7_h3_7_update_0_write7_to_heat3dla_8_8_rd7_cache {
	// RAM Box: {[7, 127], [0, 127], [0, 31]}
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

struct h3_7_cache {
  // # of banks: 8
  h3_7_h3_7_update_0_write0_to_heat3dla_8_8_rd0_cache h3_7_h3_7_update_0_write0_to_heat3dla_8_8_rd0;
  h3_7_h3_7_update_0_write1_to_heat3dla_8_8_rd1_cache h3_7_h3_7_update_0_write1_to_heat3dla_8_8_rd1;
  h3_7_h3_7_update_0_write2_to_heat3dla_8_8_rd2_cache h3_7_h3_7_update_0_write2_to_heat3dla_8_8_rd2;
  h3_7_h3_7_update_0_write3_to_heat3dla_8_8_rd3_cache h3_7_h3_7_update_0_write3_to_heat3dla_8_8_rd3;
  h3_7_h3_7_update_0_write4_to_heat3dla_8_8_rd4_cache h3_7_h3_7_update_0_write4_to_heat3dla_8_8_rd4;
  h3_7_h3_7_update_0_write5_to_heat3dla_8_8_rd5_cache h3_7_h3_7_update_0_write5_to_heat3dla_8_8_rd5;
  h3_7_h3_7_update_0_write6_to_heat3dla_8_8_rd6_cache h3_7_h3_7_update_0_write6_to_heat3dla_8_8_rd6;
  h3_7_h3_7_update_0_write7_to_heat3dla_8_8_rd7_cache h3_7_h3_7_update_0_write7_to_heat3dla_8_8_rd7;
};



inline void h3_7_h3_7_update_0_write0_write(hw_uint<32> & h3_7_h3_7_update_0_write0, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write0_to_heat3dla_8_8_rd0.push(h3_7_h3_7_update_0_write0);
}

inline void h3_7_h3_7_update_0_write1_write(hw_uint<32> & h3_7_h3_7_update_0_write1, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write1_to_heat3dla_8_8_rd1.push(h3_7_h3_7_update_0_write1);
}

inline void h3_7_h3_7_update_0_write2_write(hw_uint<32> & h3_7_h3_7_update_0_write2, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write2_to_heat3dla_8_8_rd2.push(h3_7_h3_7_update_0_write2);
}

inline void h3_7_h3_7_update_0_write3_write(hw_uint<32> & h3_7_h3_7_update_0_write3, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write3_to_heat3dla_8_8_rd3.push(h3_7_h3_7_update_0_write3);
}

inline void h3_7_h3_7_update_0_write4_write(hw_uint<32> & h3_7_h3_7_update_0_write4, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write4_to_heat3dla_8_8_rd4.push(h3_7_h3_7_update_0_write4);
}

inline void h3_7_h3_7_update_0_write5_write(hw_uint<32> & h3_7_h3_7_update_0_write5, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write5_to_heat3dla_8_8_rd5.push(h3_7_h3_7_update_0_write5);
}

inline void h3_7_h3_7_update_0_write6_write(hw_uint<32> & h3_7_h3_7_update_0_write6, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write6_to_heat3dla_8_8_rd6.push(h3_7_h3_7_update_0_write6);
}

inline void h3_7_h3_7_update_0_write7_write(hw_uint<32> & h3_7_h3_7_update_0_write7, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write7_to_heat3dla_8_8_rd7.push(h3_7_h3_7_update_0_write7);
}

inline hw_uint<32>  heat3dla_8_8_rd0_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_8_rd0 read pattern: { heat3dla_8_8_update_0[d0, d1, d2] -> h3_7[8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_to_heat3dla_8_8_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  heat3dla_8_8_rd1_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_8_rd1 read pattern: { heat3dla_8_8_update_0[d0, d1, d2] -> h3_7[1 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_to_heat3dla_8_8_rd1.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  heat3dla_8_8_rd2_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_8_rd2 read pattern: { heat3dla_8_8_update_0[d0, d1, d2] -> h3_7[2 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_to_heat3dla_8_8_rd2.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  heat3dla_8_8_rd3_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_8_rd3 read pattern: { heat3dla_8_8_update_0[d0, d1, d2] -> h3_7[3 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_to_heat3dla_8_8_rd3.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  heat3dla_8_8_rd4_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_8_rd4 read pattern: { heat3dla_8_8_update_0[d0, d1, d2] -> h3_7[4 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_to_heat3dla_8_8_rd4.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  heat3dla_8_8_rd5_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_8_rd5 read pattern: { heat3dla_8_8_update_0[d0, d1, d2] -> h3_7[5 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_to_heat3dla_8_8_rd5.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  heat3dla_8_8_rd6_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_8_rd6 read pattern: { heat3dla_8_8_update_0[d0, d1, d2] -> h3_7[6 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_to_heat3dla_8_8_rd6.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  heat3dla_8_8_rd7_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_8_rd7 read pattern: { heat3dla_8_8_update_0[d0, d1, d2] -> h3_7[7 + 8d0, d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_to_heat3dla_8_8_rd7.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

// # of bundles = 2
// h3_7_update_0_write
//	h3_7_h3_7_update_0_write0
//	h3_7_h3_7_update_0_write1
//	h3_7_h3_7_update_0_write2
//	h3_7_h3_7_update_0_write3
//	h3_7_h3_7_update_0_write4
//	h3_7_h3_7_update_0_write5
//	h3_7_h3_7_update_0_write6
//	h3_7_h3_7_update_0_write7
inline void h3_7_h3_7_update_0_write_bundle_write(hw_uint<256>& h3_7_update_0_write, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_7_h3_7_update_0_write0_res = h3_7_update_0_write.extract<0, 31>();
	h3_7_h3_7_update_0_write0_write(h3_7_h3_7_update_0_write0_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write1_res = h3_7_update_0_write.extract<32, 63>();
	h3_7_h3_7_update_0_write1_write(h3_7_h3_7_update_0_write1_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write2_res = h3_7_update_0_write.extract<64, 95>();
	h3_7_h3_7_update_0_write2_write(h3_7_h3_7_update_0_write2_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write3_res = h3_7_update_0_write.extract<96, 127>();
	h3_7_h3_7_update_0_write3_write(h3_7_h3_7_update_0_write3_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write4_res = h3_7_update_0_write.extract<128, 159>();
	h3_7_h3_7_update_0_write4_write(h3_7_h3_7_update_0_write4_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write5_res = h3_7_update_0_write.extract<160, 191>();
	h3_7_h3_7_update_0_write5_write(h3_7_h3_7_update_0_write5_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write6_res = h3_7_update_0_write.extract<192, 223>();
	h3_7_h3_7_update_0_write6_write(h3_7_h3_7_update_0_write6_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write7_res = h3_7_update_0_write.extract<224, 255>();
	h3_7_h3_7_update_0_write7_write(h3_7_h3_7_update_0_write7_res, h3_7, d0, d1, d2, dynamic_address);
}

// heat3dla_8_8_update_0_read
//	heat3dla_8_8_rd0
//	heat3dla_8_8_rd1
//	heat3dla_8_8_rd2
//	heat3dla_8_8_rd3
//	heat3dla_8_8_rd4
//	heat3dla_8_8_rd5
//	heat3dla_8_8_rd6
//	heat3dla_8_8_rd7
inline hw_uint<256> h3_7_heat3dla_8_8_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 8
    // heat3dla_8_8_rd0
    // heat3dla_8_8_rd1
    // heat3dla_8_8_rd2
    // heat3dla_8_8_rd3
    // heat3dla_8_8_rd4
    // heat3dla_8_8_rd5
    // heat3dla_8_8_rd6
    // heat3dla_8_8_rd7

	hw_uint<256> result;
	hw_uint<32>  heat3dla_8_8_rd0_res = heat3dla_8_8_rd0_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<0, 256>(result, heat3dla_8_8_rd0_res);
	hw_uint<32>  heat3dla_8_8_rd1_res = heat3dla_8_8_rd1_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<32, 256>(result, heat3dla_8_8_rd1_res);
	hw_uint<32>  heat3dla_8_8_rd2_res = heat3dla_8_8_rd2_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<64, 256>(result, heat3dla_8_8_rd2_res);
	hw_uint<32>  heat3dla_8_8_rd3_res = heat3dla_8_8_rd3_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<96, 256>(result, heat3dla_8_8_rd3_res);
	hw_uint<32>  heat3dla_8_8_rd4_res = heat3dla_8_8_rd4_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<128, 256>(result, heat3dla_8_8_rd4_res);
	hw_uint<32>  heat3dla_8_8_rd5_res = heat3dla_8_8_rd5_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<160, 256>(result, heat3dla_8_8_rd5_res);
	hw_uint<32>  heat3dla_8_8_rd6_res = heat3dla_8_8_rd6_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<192, 256>(result, heat3dla_8_8_rd6_res);
	hw_uint<32>  heat3dla_8_8_rd7_res = heat3dla_8_8_rd7_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<224, 256>(result, heat3dla_8_8_rd7_res);
	return result;
}

struct in_cc_in_cc_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-56, 184], [-8, 134], [-7, 38]}
	// Capacity: 9250
	// # of read delays: 7
  // 0, 33, 4609, 4640, 4641, 4673, 9249
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 32> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4575> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 30> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 31> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 4575> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2;
	}

	inline hw_uint<32>  peek_4608() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4609() {
		return f4;
	}

	inline hw_uint<32>  peek_4639() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4640() {
		return f6;
	}

	inline hw_uint<32>  peek_4641() {
		return f8;
	}

	inline hw_uint<32>  peek_4672() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4673() {
		return f10;
	}

	inline hw_uint<32>  peek_9248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_9249() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-55, 177], [-8, 135], [-7, 38]}
	// Capacity: 9250
	// # of read delays: 6
  // 0, 33, 4609, 4641, 4673, 9249
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 32> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4575> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 31> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4575> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2;
	}

	inline hw_uint<32>  peek_4608() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4609() {
		return f4;
	}

	inline hw_uint<32>  peek_4640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4641() {
		return f6;
	}

	inline hw_uint<32>  peek_4672() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4673() {
		return f8;
	}

	inline hw_uint<32>  peek_9248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_9249() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 31
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-54, 178], [-8, 135], [-7, 38]}
	// Capacity: 9250
	// # of read delays: 6
  // 0, 33, 4609, 4641, 4673, 9249
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 32> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4575> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 31> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4575> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2;
	}

	inline hw_uint<32>  peek_4608() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4609() {
		return f4;
	}

	inline hw_uint<32>  peek_4640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4641() {
		return f6;
	}

	inline hw_uint<32>  peek_4672() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4673() {
		return f8;
	}

	inline hw_uint<32>  peek_9248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_9249() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 31
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-53, 179], [-8, 135], [-7, 38]}
	// Capacity: 9250
	// # of read delays: 6
  // 0, 33, 4609, 4641, 4673, 9249
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 32> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4575> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 31> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4575> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2;
	}

	inline hw_uint<32>  peek_4608() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4609() {
		return f4;
	}

	inline hw_uint<32>  peek_4640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4641() {
		return f6;
	}

	inline hw_uint<32>  peek_4672() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4673() {
		return f8;
	}

	inline hw_uint<32>  peek_9248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_9249() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 31
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-52, 180], [-8, 135], [-7, 38]}
	// Capacity: 9250
	// # of read delays: 6
  // 0, 33, 4609, 4641, 4673, 9249
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 32> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4575> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 31> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4575> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2;
	}

	inline hw_uint<32>  peek_4608() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4609() {
		return f4;
	}

	inline hw_uint<32>  peek_4640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4641() {
		return f6;
	}

	inline hw_uint<32>  peek_4672() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4673() {
		return f8;
	}

	inline hw_uint<32>  peek_9248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_9249() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 31
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-51, 181], [-8, 135], [-7, 38]}
	// Capacity: 9250
	// # of read delays: 6
  // 0, 33, 4609, 4641, 4673, 9249
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 32> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4575> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 31> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4575> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2;
	}

	inline hw_uint<32>  peek_4608() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4609() {
		return f4;
	}

	inline hw_uint<32>  peek_4640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4641() {
		return f6;
	}

	inline hw_uint<32>  peek_4672() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4673() {
		return f8;
	}

	inline hw_uint<32>  peek_9248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_9249() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 31
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-50, 182], [-8, 135], [-7, 38]}
	// Capacity: 9250
	// # of read delays: 6
  // 0, 33, 4609, 4641, 4673, 9249
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 32> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4575> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 31> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4575> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2;
	}

	inline hw_uint<32>  peek_4608() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4609() {
		return f4;
	}

	inline hw_uint<32>  peek_4640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4641() {
		return f6;
	}

	inline hw_uint<32>  peek_4672() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_4673() {
		return f8;
	}

	inline hw_uint<32>  peek_9248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_9249() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f9.push(f8);
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
    // cap: 1 reading from capacity: 31
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-57, 183], [-7, 135], [-7, 38]}
	// Capacity: 9250
	// # of read delays: 7
  // 0, 33, 4609, 4641, 4642, 4673, 9249
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 32> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4575> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 31> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 30> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 4575> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_33() {
		return f2;
	}

	inline hw_uint<32>  peek_4608() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_4609() {
		return f4;
	}

	inline hw_uint<32>  peek_4640() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_4641() {
		return f6;
	}

	inline hw_uint<32>  peek_4642() {
		return f8;
	}

	inline hw_uint<32>  peek_4672() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_4673() {
		return f10;
	}

	inline hw_uint<32>  peek_9248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_9249() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 30
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4575
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4575 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 8
  in_cc_in_cc_update_0_write0_merged_banks_7_cache in_cc_in_cc_update_0_write0_merged_banks_7;
  in_cc_in_cc_update_0_write1_merged_banks_7_cache in_cc_in_cc_update_0_write1_merged_banks_7;
  in_cc_in_cc_update_0_write2_merged_banks_7_cache in_cc_in_cc_update_0_write2_merged_banks_7;
  in_cc_in_cc_update_0_write3_merged_banks_7_cache in_cc_in_cc_update_0_write3_merged_banks_7;
  in_cc_in_cc_update_0_write4_merged_banks_7_cache in_cc_in_cc_update_0_write4_merged_banks_7;
  in_cc_in_cc_update_0_write5_merged_banks_7_cache in_cc_in_cc_update_0_write5_merged_banks_7;
  in_cc_in_cc_update_0_write6_merged_banks_7_cache in_cc_in_cc_update_0_write6_merged_banks_7;
  in_cc_in_cc_update_0_write7_merged_banks_7_cache in_cc_in_cc_update_0_write7_merged_banks_7;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.push(in_cc_in_cc_update_0_write0);
}

inline void in_cc_in_cc_update_0_write1_write(hw_uint<32> & in_cc_in_cc_update_0_write1, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.push(in_cc_in_cc_update_0_write1);
}

inline void in_cc_in_cc_update_0_write2_write(hw_uint<32> & in_cc_in_cc_update_0_write2, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.push(in_cc_in_cc_update_0_write2);
}

inline void in_cc_in_cc_update_0_write3_write(hw_uint<32> & in_cc_in_cc_update_0_write3, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.push(in_cc_in_cc_update_0_write3);
}

inline void in_cc_in_cc_update_0_write4_write(hw_uint<32> & in_cc_in_cc_update_0_write4, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.push(in_cc_in_cc_update_0_write4);
}

inline void in_cc_in_cc_update_0_write5_write(hw_uint<32> & in_cc_in_cc_update_0_write5, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.push(in_cc_in_cc_update_0_write5);
}

inline void in_cc_in_cc_update_0_write6_write(hw_uint<32> & in_cc_in_cc_update_0_write6, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.push(in_cc_in_cc_update_0_write6);
}

inline void in_cc_in_cc_update_0_write7_write(hw_uint<32> & in_cc_in_cc_update_0_write7, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.push(in_cc_in_cc_update_0_write7);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[-1 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_4642();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, -1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_4673();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd10_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd10 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd11_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd11 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, 1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_33();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd12_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd12 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, 1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_4609();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd13_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd13 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd14_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd14 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd15_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd15 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, -1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_4673();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd16_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd16 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, -1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_9249();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd17_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd17 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd18_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd18 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, 1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_33();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd19_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd19 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, 1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_4609();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, -1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_9249();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd20_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd20 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd21_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd21 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd22_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd22 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, -1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_4673();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd23_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd23 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, -1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_9249();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd24_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd24 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd25_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd25 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, 1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_33();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd26_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd26 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, 1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_4609();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd27_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd27 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd28_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd28 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd29_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd29 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, -1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_4673();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd30_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd30 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, -1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_9249();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd31_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd31 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd32_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd32 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, 1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_33();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd33_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd33 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, 1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_4609();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd34_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd34 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd35_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd35 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd36_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd36 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, -1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_4673();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd37_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd37 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, -1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_9249();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd38_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd38 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd39_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd39 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, 1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_33();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, 1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_33();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd40_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd40 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, 1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_4609();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd41_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd41 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd42_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd42 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd43_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd43 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, -1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_4673();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd44_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd44 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, -1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_9249();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd45_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd45 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd46_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd46 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, 1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_33();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd47_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd47 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, 1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_4609();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd48_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd48 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd49_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd49 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, 1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_4609();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd50_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd50 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, -1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_4673();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd51_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd51 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, -1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_9249();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd52_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd52 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd53_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd53 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, 1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_33();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd54_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd54 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, 1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_4609();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd55_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd55 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_4640();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd7_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd7 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_4641();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd8_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd8 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, -1 + d1, d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_4673();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd9_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd9 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, -1 + d2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_9249();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_read
//	h3_0_rd0
//	h3_0_rd1
//	h3_0_rd2
//	h3_0_rd3
//	h3_0_rd4
//	h3_0_rd5
//	h3_0_rd6
//	h3_0_rd7
//	h3_0_rd8
//	h3_0_rd9
//	h3_0_rd10
//	h3_0_rd11
//	h3_0_rd12
//	h3_0_rd13
//	h3_0_rd14
//	h3_0_rd15
//	h3_0_rd16
//	h3_0_rd17
//	h3_0_rd18
//	h3_0_rd19
//	h3_0_rd20
//	h3_0_rd21
//	h3_0_rd22
//	h3_0_rd23
//	h3_0_rd24
//	h3_0_rd25
//	h3_0_rd26
//	h3_0_rd27
//	h3_0_rd28
//	h3_0_rd29
//	h3_0_rd30
//	h3_0_rd31
//	h3_0_rd32
//	h3_0_rd33
//	h3_0_rd34
//	h3_0_rd35
//	h3_0_rd36
//	h3_0_rd37
//	h3_0_rd38
//	h3_0_rd39
//	h3_0_rd40
//	h3_0_rd41
//	h3_0_rd42
//	h3_0_rd43
//	h3_0_rd44
//	h3_0_rd45
//	h3_0_rd46
//	h3_0_rd47
//	h3_0_rd48
//	h3_0_rd49
//	h3_0_rd50
//	h3_0_rd51
//	h3_0_rd52
//	h3_0_rd53
//	h3_0_rd54
//	h3_0_rd55
inline hw_uint<1792> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_0_rd0
    // h3_0_rd1
    // h3_0_rd2
    // h3_0_rd3
    // h3_0_rd4
    // h3_0_rd5
    // h3_0_rd6
    // h3_0_rd7
    // h3_0_rd8
    // h3_0_rd9
    // h3_0_rd10
    // h3_0_rd11
    // h3_0_rd12
    // h3_0_rd13
    // h3_0_rd14
    // h3_0_rd15
    // h3_0_rd16
    // h3_0_rd17
    // h3_0_rd18
    // h3_0_rd19
    // h3_0_rd20
    // h3_0_rd21
    // h3_0_rd22
    // h3_0_rd23
    // h3_0_rd24
    // h3_0_rd25
    // h3_0_rd26
    // h3_0_rd27
    // h3_0_rd28
    // h3_0_rd29
    // h3_0_rd30
    // h3_0_rd31
    // h3_0_rd32
    // h3_0_rd33
    // h3_0_rd34
    // h3_0_rd35
    // h3_0_rd36
    // h3_0_rd37
    // h3_0_rd38
    // h3_0_rd39
    // h3_0_rd40
    // h3_0_rd41
    // h3_0_rd42
    // h3_0_rd43
    // h3_0_rd44
    // h3_0_rd45
    // h3_0_rd46
    // h3_0_rd47
    // h3_0_rd48
    // h3_0_rd49
    // h3_0_rd50
    // h3_0_rd51
    // h3_0_rd52
    // h3_0_rd53
    // h3_0_rd54
    // h3_0_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_0_rd6_res);
	hw_uint<32>  h3_0_rd7_res = h3_0_rd7_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_0_rd7_res);
	hw_uint<32>  h3_0_rd8_res = h3_0_rd8_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_0_rd8_res);
	hw_uint<32>  h3_0_rd9_res = h3_0_rd9_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_0_rd9_res);
	hw_uint<32>  h3_0_rd10_res = h3_0_rd10_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_0_rd10_res);
	hw_uint<32>  h3_0_rd11_res = h3_0_rd11_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_0_rd11_res);
	hw_uint<32>  h3_0_rd12_res = h3_0_rd12_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_0_rd12_res);
	hw_uint<32>  h3_0_rd13_res = h3_0_rd13_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_0_rd13_res);
	hw_uint<32>  h3_0_rd14_res = h3_0_rd14_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_0_rd14_res);
	hw_uint<32>  h3_0_rd15_res = h3_0_rd15_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_0_rd15_res);
	hw_uint<32>  h3_0_rd16_res = h3_0_rd16_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_0_rd16_res);
	hw_uint<32>  h3_0_rd17_res = h3_0_rd17_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_0_rd17_res);
	hw_uint<32>  h3_0_rd18_res = h3_0_rd18_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_0_rd18_res);
	hw_uint<32>  h3_0_rd19_res = h3_0_rd19_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_0_rd19_res);
	hw_uint<32>  h3_0_rd20_res = h3_0_rd20_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_0_rd20_res);
	hw_uint<32>  h3_0_rd21_res = h3_0_rd21_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_0_rd21_res);
	hw_uint<32>  h3_0_rd22_res = h3_0_rd22_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_0_rd22_res);
	hw_uint<32>  h3_0_rd23_res = h3_0_rd23_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_0_rd23_res);
	hw_uint<32>  h3_0_rd24_res = h3_0_rd24_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_0_rd24_res);
	hw_uint<32>  h3_0_rd25_res = h3_0_rd25_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_0_rd25_res);
	hw_uint<32>  h3_0_rd26_res = h3_0_rd26_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_0_rd26_res);
	hw_uint<32>  h3_0_rd27_res = h3_0_rd27_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_0_rd27_res);
	hw_uint<32>  h3_0_rd28_res = h3_0_rd28_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_0_rd28_res);
	hw_uint<32>  h3_0_rd29_res = h3_0_rd29_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_0_rd29_res);
	hw_uint<32>  h3_0_rd30_res = h3_0_rd30_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_0_rd30_res);
	hw_uint<32>  h3_0_rd31_res = h3_0_rd31_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_0_rd31_res);
	hw_uint<32>  h3_0_rd32_res = h3_0_rd32_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_0_rd32_res);
	hw_uint<32>  h3_0_rd33_res = h3_0_rd33_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_0_rd33_res);
	hw_uint<32>  h3_0_rd34_res = h3_0_rd34_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_0_rd34_res);
	hw_uint<32>  h3_0_rd35_res = h3_0_rd35_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_0_rd35_res);
	hw_uint<32>  h3_0_rd36_res = h3_0_rd36_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_0_rd36_res);
	hw_uint<32>  h3_0_rd37_res = h3_0_rd37_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_0_rd37_res);
	hw_uint<32>  h3_0_rd38_res = h3_0_rd38_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_0_rd38_res);
	hw_uint<32>  h3_0_rd39_res = h3_0_rd39_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_0_rd39_res);
	hw_uint<32>  h3_0_rd40_res = h3_0_rd40_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_0_rd40_res);
	hw_uint<32>  h3_0_rd41_res = h3_0_rd41_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_0_rd41_res);
	hw_uint<32>  h3_0_rd42_res = h3_0_rd42_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_0_rd42_res);
	hw_uint<32>  h3_0_rd43_res = h3_0_rd43_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_0_rd43_res);
	hw_uint<32>  h3_0_rd44_res = h3_0_rd44_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_0_rd44_res);
	hw_uint<32>  h3_0_rd45_res = h3_0_rd45_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_0_rd45_res);
	hw_uint<32>  h3_0_rd46_res = h3_0_rd46_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_0_rd46_res);
	hw_uint<32>  h3_0_rd47_res = h3_0_rd47_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_0_rd47_res);
	hw_uint<32>  h3_0_rd48_res = h3_0_rd48_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_0_rd48_res);
	hw_uint<32>  h3_0_rd49_res = h3_0_rd49_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_0_rd49_res);
	hw_uint<32>  h3_0_rd50_res = h3_0_rd50_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_0_rd50_res);
	hw_uint<32>  h3_0_rd51_res = h3_0_rd51_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_0_rd51_res);
	hw_uint<32>  h3_0_rd52_res = h3_0_rd52_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_0_rd52_res);
	hw_uint<32>  h3_0_rd53_res = h3_0_rd53_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_0_rd53_res);
	hw_uint<32>  h3_0_rd54_res = h3_0_rd54_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_0_rd54_res);
	hw_uint<32>  h3_0_rd55_res = h3_0_rd55_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_0_rd55_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
//	in_cc_in_cc_update_0_write1
//	in_cc_in_cc_update_0_write2
//	in_cc_in_cc_update_0_write3
//	in_cc_in_cc_update_0_write4
//	in_cc_in_cc_update_0_write5
//	in_cc_in_cc_update_0_write6
//	in_cc_in_cc_update_0_write7
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<256>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write1_res = in_cc_update_0_write.extract<32, 63>();
	in_cc_in_cc_update_0_write1_write(in_cc_in_cc_update_0_write1_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write2_res = in_cc_update_0_write.extract<64, 95>();
	in_cc_in_cc_update_0_write2_write(in_cc_in_cc_update_0_write2_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write3_res = in_cc_update_0_write.extract<96, 127>();
	in_cc_in_cc_update_0_write3_write(in_cc_in_cc_update_0_write3_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write4_res = in_cc_update_0_write.extract<128, 159>();
	in_cc_in_cc_update_0_write4_write(in_cc_in_cc_update_0_write4_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write5_res = in_cc_update_0_write.extract<160, 191>();
	in_cc_in_cc_update_0_write5_write(in_cc_in_cc_update_0_write5_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write6_res = in_cc_update_0_write.extract<192, 223>();
	in_cc_in_cc_update_0_write6_write(in_cc_in_cc_update_0_write6_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write7_res = in_cc_update_0_write.extract<224, 255>();
	in_cc_in_cc_update_0_write7_write(in_cc_in_cc_update_0_write7_res, in_cc, d0, d1, d2, dynamic_address);
}

// Total re-use buffer capacity: 14168064 bits


// Operation logic
inline void h3_3_update_0(h3_2_cache& h3_2, h3_3_cache& h3_3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_2
	auto h3_2_0_c__0_value = h3_2_h3_3_update_0_read_bundle_read(h3_2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_3_generated_compute_unrolled_8(h3_2_0_c__0_value);
	// Produce: h3_3
	h3_3_h3_3_update_0_write_bundle_write(/* arg names */compute_result, h3_3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_6_update_0(h3_5_cache& h3_5, h3_6_cache& h3_6, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_5
	auto h3_5_0_c__0_value = h3_5_h3_6_update_0_read_bundle_read(h3_5/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_6_generated_compute_unrolled_8(h3_5_0_c__0_value);
	// Produce: h3_6
	h3_6_h3_6_update_0_write_bundle_write(/* arg names */compute_result, h3_6, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_2_update_0(h3_1_cache& h3_1, h3_2_cache& h3_2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_1
	auto h3_1_0_c__0_value = h3_1_h3_2_update_0_read_bundle_read(h3_1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_2_generated_compute_unrolled_8(h3_1_0_c__0_value);
	// Produce: h3_2
	h3_2_h3_2_update_0_write_bundle_write(/* arg names */compute_result, h3_2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void heat3dla_8_8_update_0(h3_7_cache& h3_7, HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */heat3dla_8_8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_7
	auto h3_7_0_c__0_value = h3_7_heat3dla_8_8_update_0_read_bundle_read(h3_7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = heat3dla_8_8_generated_compute_unrolled_8(h3_7_0_c__0_value);
	// Produce: heat3dla_8_8
	heat3dla_8_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_1_update_0(h3_0_cache& h3_0, h3_1_cache& h3_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_h3_1_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_1_generated_compute_unrolled_8(h3_0_0_c__0_value);
	// Produce: h3_1
	h3_1_h3_1_update_0_write_bundle_write(/* arg names */compute_result, h3_1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_4_update_0(h3_3_cache& h3_3, h3_4_cache& h3_4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_3
	auto h3_3_0_c__0_value = h3_3_h3_4_update_0_read_bundle_read(h3_3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_4_generated_compute_unrolled_8(h3_3_0_c__0_value);
	// Produce: h3_4
	h3_4_h3_4_update_0_write_bundle_write(/* arg names */compute_result, h3_4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_5_update_0(h3_4_cache& h3_4, h3_5_cache& h3_5, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_4
	auto h3_4_0_c__0_value = h3_4_h3_5_update_0_read_bundle_read(h3_4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_5_generated_compute_unrolled_8(h3_4_0_c__0_value);
	// Produce: h3_5
	h3_5_h3_5_update_0_write_bundle_write(/* arg names */compute_result, h3_5, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_7_update_0(h3_6_cache& h3_6, h3_7_cache& h3_7, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_6
	auto h3_6_0_c__0_value = h3_6_h3_7_update_0_read_bundle_read(h3_6/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_7_generated_compute_unrolled_8(h3_6_0_c__0_value);
	// Produce: h3_7
	h3_7_h3_7_update_0_write_bundle_write(/* arg names */compute_result, h3_7, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_cc_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */in, in_cc_cache& in_cc, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_8(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_8(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void heat3dla_8_8_opt(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in, HWStream<hw_uint<256> >& /* get_args num ports = 8 */heat3dla_8_8) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("heat3dla_8_8_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  h3_0_cache h3_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_1_cache h3_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_2_cache h3_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_3_cache h3_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_4_cache h3_4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_5_cache h3_5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_6_cache h3_6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_7_cache h3_7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39; h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36; h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34; h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37; h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35; h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33; h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31; heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31; h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38; h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
//   { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 23 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
// Condition for in_cc_update_0(((-1 + i3 == 0) && (8 + i2 >= 0) && (23 - i2 >= 0) && (8 + i1 >= 0) && (135 - i1 >= 0) && (8 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 20 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
// Condition for h3_2_update_0(((-4 + i3 == 0) && (2 + i2 >= 0) && (23 - i2 >= 0) && (2 + i1 >= 0) && (135 - i1 >= 0) && (2 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 18 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
// Condition for h3_4_update_0(((-6 + i3 == 0) && (-2 + i2 >= 0) && (23 - i2 >= 0) && (-2 + i1 >= 0) && (135 - i1 >= 0) && (-2 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 21 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
// Condition for h3_1_update_0(((-3 + i3 == 0) && (4 + i2 >= 0) && (23 - i2 >= 0) && (4 + i1 >= 0) && (135 - i1 >= 0) && (4 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 19 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
// Condition for h3_3_update_0(((-5 + i3 == 0) && (i2 >= 0) && (23 - i2 >= 0) && (i1 >= 0) && (135 - i1 >= 0) && (i0 >= 0) && (39 - i0 >= 0)))
//   { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 17 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
// Condition for h3_5_update_0(((-7 + i3 == 0) && (-4 + i2 >= 0) && (23 - i2 >= 0) && (-4 + i1 >= 0) && (135 - i1 >= 0) && (-4 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
// Condition for h3_7_update_0(((-9 + i3 == 0) && (-8 + i2 >= 0) && (23 - i2 >= 0) && (-8 + i1 >= 0) && (135 - i1 >= 0) && (-8 + i0 >= 0) && (39 - i0 >= 0)))
//   { heat3dla_8_8_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
// Condition for heat3dla_8_8_update_0(((-10 + i3 == 0) && (-8 + i2 >= 0) && (23 - i2 >= 0) && (-8 + i1 >= 0) && (135 - i1 >= 0) && (-8 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 22 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
// Condition for h3_0_update_0(((-2 + i3 == 0) && (6 + i2 >= 0) && (23 - i2 >= 0) && (6 + i1 >= 0) && (135 - i1 >= 0) && (6 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 16 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
// Condition for h3_6_update_0(((-8 + i3 == 0) && (-6 + i2 >= 0) && (23 - i2 >= 0) && (-6 + i1 >= 0) && (135 - i1 >= 0) && (-6 + i0 >= 0) && (39 - i0 >= 0)))

  /*
  // Schedules...
    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // h3_1_update_0 -> [1*d2*1*1 + 1*2,1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // h3_2_update_0 -> [1*d2*1*1 + 1*3,1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // h3_3_update_0 -> [1*d2*1*1 + 1*4,1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // h3_4_update_0 -> [1*d2*1*1 + 1*5,1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // h3_5_update_0 -> [1*d2*1*1 + 1*6,1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // h3_6_update_0 -> [1*d2*1*1 + 1*7,1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // h3_7_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // heat3dla_8_8_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*10]
    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -8; c0 <= 39; c0++) {
  for (int c1 = -8; c1 <= 135; c1++) {
    for (int c2 = -8; c2 <= 23; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((-8 <= c2 && c2 <= 23) && ((c2 - 0) % 1 == 0) && (-8 <= c1 && c1 <= 135) && ((c1 - 0) % 1 == 0) && (-8 <= c0 && c0 <= 39) && ((c0 - 0) % 1 == 0)) {
        in_cc_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((-6 <= c2 && c2 <= 23) && ((c2 - 1) % 1 == 0) && (-6 <= c1 && c1 <= 135) && ((c1 - 1) % 1 == 0) && (-6 <= c0 && c0 <= 39) && ((c0 - 1) % 1 == 0)) {
        h3_0_update_0((c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
      }

      if ((-4 <= c2 && c2 <= 23) && ((c2 - 2) % 1 == 0) && (-4 <= c1 && c1 <= 135) && ((c1 - 2) % 1 == 0) && (-4 <= c0 && c0 <= 39) && ((c0 - 2) % 1 == 0)) {
        h3_1_update_0((c2 - 2) / 1, (c1 - 2) / 1, (c0 - 2) / 1);
      }

      if ((-2 <= c2 && c2 <= 23) && ((c2 - 3) % 1 == 0) && (-2 <= c1 && c1 <= 135) && ((c1 - 3) % 1 == 0) && (-2 <= c0 && c0 <= 39) && ((c0 - 3) % 1 == 0)) {
        h3_2_update_0((c2 - 3) / 1, (c1 - 3) / 1, (c0 - 3) / 1);
      }

      if ((0 <= c2 && c2 <= 23) && ((c2 - 4) % 1 == 0) && (0 <= c1 && c1 <= 135) && ((c1 - 4) % 1 == 0) && (0 <= c0 && c0 <= 39) && ((c0 - 4) % 1 == 0)) {
        h3_3_update_0((c2 - 4) / 1, (c1 - 4) / 1, (c0 - 4) / 1);
      }

      if ((2 <= c2 && c2 <= 23) && ((c2 - 5) % 1 == 0) && (2 <= c1 && c1 <= 135) && ((c1 - 5) % 1 == 0) && (2 <= c0 && c0 <= 39) && ((c0 - 5) % 1 == 0)) {
        h3_4_update_0((c2 - 5) / 1, (c1 - 5) / 1, (c0 - 5) / 1);
      }

      if ((4 <= c2 && c2 <= 23) && ((c2 - 6) % 1 == 0) && (4 <= c1 && c1 <= 135) && ((c1 - 6) % 1 == 0) && (4 <= c0 && c0 <= 39) && ((c0 - 6) % 1 == 0)) {
        h3_5_update_0((c2 - 6) / 1, (c1 - 6) / 1, (c0 - 6) / 1);
      }

      if ((6 <= c2 && c2 <= 23) && ((c2 - 7) % 1 == 0) && (6 <= c1 && c1 <= 135) && ((c1 - 7) % 1 == 0) && (6 <= c0 && c0 <= 39) && ((c0 - 7) % 1 == 0)) {
        h3_6_update_0((c2 - 7) / 1, (c1 - 7) / 1, (c0 - 7) / 1);
      }

      if ((8 <= c2 && c2 <= 23) && ((c2 - 8) % 1 == 0) && (8 <= c1 && c1 <= 135) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 39) && ((c0 - 8) % 1 == 0)) {
        h3_7_update_0((c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
      }

      if ((8 <= c2 && c2 <= 23) && ((c2 - 8) % 1 == 0) && (8 <= c1 && c1 <= 135) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 39) && ((c0 - 8) % 1 == 0)) {
        heat3dla_8_8_update_0((c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // h3_1_update_0 -> [1*d2*1*1 + 1*2,1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // h3_2_update_0 -> [1*d2*1*1 + 1*3,1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // h3_3_update_0 -> [1*d2*1*1 + 1*4,1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // h3_4_update_0 -> [1*d2*1*1 + 1*5,1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // h3_5_update_0 -> [1*d2*1*1 + 1*6,1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // h3_6_update_0 -> [1*d2*1*1 + 1*7,1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // h3_7_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // heat3dla_8_8_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*10]
	    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -8; c0 <= 39; c0++) {
	  for (int c1 = -8; c1 <= 135; c1++) {
	    for (int c2 = -8; c2 <= 23; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((-8 <= c2 && c2 <= 23) && ((c2 - 0) % 1 == 0) && (-8 <= c1 && c1 <= 135) && ((c1 - 0) % 1 == 0) && (-8 <= c0 && c0 <= 39) && ((c0 - 0) % 1 == 0)) {
	        in_cc_update_0(in /* buf name */, in_cc, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((-6 <= c2 && c2 <= 23) && ((c2 - 1) % 1 == 0) && (-6 <= c1 && c1 <= 135) && ((c1 - 1) % 1 == 0) && (-6 <= c0 && c0 <= 39) && ((c0 - 1) % 1 == 0)) {
	        h3_0_update_0(in_cc /* buf name */, h3_0, (c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	      if ((-4 <= c2 && c2 <= 23) && ((c2 - 2) % 1 == 0) && (-4 <= c1 && c1 <= 135) && ((c1 - 2) % 1 == 0) && (-4 <= c0 && c0 <= 39) && ((c0 - 2) % 1 == 0)) {
	        h3_1_update_0(h3_0 /* buf name */, h3_1, (c2 - 2) / 1, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	      if ((-2 <= c2 && c2 <= 23) && ((c2 - 3) % 1 == 0) && (-2 <= c1 && c1 <= 135) && ((c1 - 3) % 1 == 0) && (-2 <= c0 && c0 <= 39) && ((c0 - 3) % 1 == 0)) {
	        h3_2_update_0(h3_1 /* buf name */, h3_2, (c2 - 3) / 1, (c1 - 3) / 1, (c0 - 3) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 23) && ((c2 - 4) % 1 == 0) && (0 <= c1 && c1 <= 135) && ((c1 - 4) % 1 == 0) && (0 <= c0 && c0 <= 39) && ((c0 - 4) % 1 == 0)) {
	        h3_3_update_0(h3_2 /* buf name */, h3_3, (c2 - 4) / 1, (c1 - 4) / 1, (c0 - 4) / 1);
	      }
	
	      if ((2 <= c2 && c2 <= 23) && ((c2 - 5) % 1 == 0) && (2 <= c1 && c1 <= 135) && ((c1 - 5) % 1 == 0) && (2 <= c0 && c0 <= 39) && ((c0 - 5) % 1 == 0)) {
	        h3_4_update_0(h3_3 /* buf name */, h3_4, (c2 - 5) / 1, (c1 - 5) / 1, (c0 - 5) / 1);
	      }
	
	      if ((4 <= c2 && c2 <= 23) && ((c2 - 6) % 1 == 0) && (4 <= c1 && c1 <= 135) && ((c1 - 6) % 1 == 0) && (4 <= c0 && c0 <= 39) && ((c0 - 6) % 1 == 0)) {
	        h3_5_update_0(h3_4 /* buf name */, h3_5, (c2 - 6) / 1, (c1 - 6) / 1, (c0 - 6) / 1);
	      }
	
	      if ((6 <= c2 && c2 <= 23) && ((c2 - 7) % 1 == 0) && (6 <= c1 && c1 <= 135) && ((c1 - 7) % 1 == 0) && (6 <= c0 && c0 <= 39) && ((c0 - 7) % 1 == 0)) {
	        h3_6_update_0(h3_5 /* buf name */, h3_6, (c2 - 7) / 1, (c1 - 7) / 1, (c0 - 7) / 1);
	      }
	
	      if ((8 <= c2 && c2 <= 23) && ((c2 - 8) % 1 == 0) && (8 <= c1 && c1 <= 135) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 39) && ((c0 - 8) % 1 == 0)) {
	        h3_7_update_0(h3_6 /* buf name */, h3_7, (c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
	      }
	
	      if ((8 <= c2 && c2 <= 23) && ((c2 - 8) % 1 == 0) && (8 <= c1 && c1 <= 135) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 39) && ((c0 - 8) % 1 == 0)) {
	        heat3dla_8_8_update_0(h3_7 /* buf name */, heat3dla_8_8, (c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void heat3dla_8_8_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in, HWStream<hw_uint<256> >& /* get_args num ports = 8 */heat3dla_8_8, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    heat3dla_8_8_opt(in, heat3dla_8_8);
  }
}
#ifdef __VIVADO_SYNTH__
  // { heat3dla_8_8_update_0[root = 0, heat3dla_8_8_0, heat3dla_8_8_1, heat3dla_8_8_2] -> heat3dla_8_8[0, 0] : 0 <= heat3dla_8_8_0 <= 15 and 0 <= heat3dla_8_8_1 <= 127 and 0 <= heat3dla_8_8_2 <= 31 }
const int heat3dla_8_8_update_0_write_pipe0_num_transfers = 65536;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -8 <= in_cc_0 <= 23 and -8 <= in_cc_1 <= 135 and -8 <= in_cc_2 <= 39 }
const int in_cc_update_0_read_pipe0_num_transfers = 221184;


extern "C" {

void heat3dla_8_8_opt_accel(hw_uint<256>* in_cc_update_0_read_pipe0, hw_uint<256>* heat3dla_8_8_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = heat3dla_8_8_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = heat3dla_8_8_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<256> > heat3dla_8_8_update_0_write_pipe0_channel;

  burst_read<256>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  heat3dla_8_8_opt_wrapper(in_cc_update_0_read_pipe0_channel, heat3dla_8_8_update_0_write_pipe0_channel, size);

  burst_write<256>(heat3dla_8_8_update_0_write_pipe0, heat3dla_8_8_update_0_write_pipe0_channel, heat3dla_8_8_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void heat3dla_8_8_opt_rdai(HWStream<hw_uint<256> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<256> >&  heat3dla_8_8_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = heat3dla_8_8_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  heat3dla_8_8_opt(in_cc_update_0_read_pipe0, heat3dla_8_8_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

