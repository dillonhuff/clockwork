#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: cp_noinit_ln1_16_opt_compute_units.h
#include "cp_noinit_ln1_16_opt_compute_units.h"

struct demosaic_demosaic_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[10, 1914], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[11, 1915], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[12, 1916], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[13, 1917], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[14, 1918], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[15, 1919], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[2, 1906], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[3, 1907], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[4, 1908], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[5, 1909], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[6, 1910], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[7, 1911], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[8, 1912], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[9, 1913], [0, 1081]}
	// Capacity: 244
	// # of read delays: 3
  // 0, 1, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_cache {
  // Reader addrs...
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[16 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[16 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[17 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // # of banks: 16
  demosaic_demosaic_update_0_write0_merged_banks_4_cache demosaic_demosaic_update_0_write0_merged_banks_4;
  demosaic_demosaic_update_0_write1_merged_banks_4_cache demosaic_demosaic_update_0_write1_merged_banks_4;
  demosaic_demosaic_update_0_write10_merged_banks_4_cache demosaic_demosaic_update_0_write10_merged_banks_4;
  demosaic_demosaic_update_0_write11_merged_banks_4_cache demosaic_demosaic_update_0_write11_merged_banks_4;
  demosaic_demosaic_update_0_write12_merged_banks_4_cache demosaic_demosaic_update_0_write12_merged_banks_4;
  demosaic_demosaic_update_0_write13_merged_banks_4_cache demosaic_demosaic_update_0_write13_merged_banks_4;
  demosaic_demosaic_update_0_write14_merged_banks_4_cache demosaic_demosaic_update_0_write14_merged_banks_4;
  demosaic_demosaic_update_0_write15_merged_banks_4_cache demosaic_demosaic_update_0_write15_merged_banks_4;
  demosaic_demosaic_update_0_write2_merged_banks_4_cache demosaic_demosaic_update_0_write2_merged_banks_4;
  demosaic_demosaic_update_0_write3_merged_banks_4_cache demosaic_demosaic_update_0_write3_merged_banks_4;
  demosaic_demosaic_update_0_write4_merged_banks_4_cache demosaic_demosaic_update_0_write4_merged_banks_4;
  demosaic_demosaic_update_0_write5_merged_banks_4_cache demosaic_demosaic_update_0_write5_merged_banks_4;
  demosaic_demosaic_update_0_write6_merged_banks_4_cache demosaic_demosaic_update_0_write6_merged_banks_4;
  demosaic_demosaic_update_0_write7_merged_banks_4_cache demosaic_demosaic_update_0_write7_merged_banks_4;
  demosaic_demosaic_update_0_write8_merged_banks_4_cache demosaic_demosaic_update_0_write8_merged_banks_4;
  demosaic_demosaic_update_0_write9_merged_banks_4_cache demosaic_demosaic_update_0_write9_merged_banks_4;
};



inline void demosaic_demosaic_update_0_write0_write(hw_uint<16>& demosaic_demosaic_update_0_write0, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.push(demosaic_demosaic_update_0_write0);
}

inline void demosaic_demosaic_update_0_write1_write(hw_uint<16>& demosaic_demosaic_update_0_write1, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.push(demosaic_demosaic_update_0_write1);
}

inline void demosaic_demosaic_update_0_write10_write(hw_uint<16>& demosaic_demosaic_update_0_write10, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write10_merged_banks_4.push(demosaic_demosaic_update_0_write10);
}

inline void demosaic_demosaic_update_0_write11_write(hw_uint<16>& demosaic_demosaic_update_0_write11, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write11_merged_banks_4.push(demosaic_demosaic_update_0_write11);
}

inline void demosaic_demosaic_update_0_write12_write(hw_uint<16>& demosaic_demosaic_update_0_write12, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write12_merged_banks_4.push(demosaic_demosaic_update_0_write12);
}

inline void demosaic_demosaic_update_0_write13_write(hw_uint<16>& demosaic_demosaic_update_0_write13, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write13_merged_banks_4.push(demosaic_demosaic_update_0_write13);
}

inline void demosaic_demosaic_update_0_write14_write(hw_uint<16>& demosaic_demosaic_update_0_write14, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write14_merged_banks_4.push(demosaic_demosaic_update_0_write14);
}

inline void demosaic_demosaic_update_0_write15_write(hw_uint<16>& demosaic_demosaic_update_0_write15, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write15_merged_banks_4.push(demosaic_demosaic_update_0_write15);
}

inline void demosaic_demosaic_update_0_write2_write(hw_uint<16>& demosaic_demosaic_update_0_write2, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.push(demosaic_demosaic_update_0_write2);
}

inline void demosaic_demosaic_update_0_write3_write(hw_uint<16>& demosaic_demosaic_update_0_write3, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.push(demosaic_demosaic_update_0_write3);
}

inline void demosaic_demosaic_update_0_write4_write(hw_uint<16>& demosaic_demosaic_update_0_write4, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write4_merged_banks_4.push(demosaic_demosaic_update_0_write4);
}

inline void demosaic_demosaic_update_0_write5_write(hw_uint<16>& demosaic_demosaic_update_0_write5, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write5_merged_banks_4.push(demosaic_demosaic_update_0_write5);
}

inline void demosaic_demosaic_update_0_write6_write(hw_uint<16>& demosaic_demosaic_update_0_write6, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write6_merged_banks_4.push(demosaic_demosaic_update_0_write6);
}

inline void demosaic_demosaic_update_0_write7_write(hw_uint<16>& demosaic_demosaic_update_0_write7, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write7_merged_banks_4.push(demosaic_demosaic_update_0_write7);
}

inline void demosaic_demosaic_update_0_write8_write(hw_uint<16>& demosaic_demosaic_update_0_write8, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write8_merged_banks_4.push(demosaic_demosaic_update_0_write8);
}

inline void demosaic_demosaic_update_0_write9_write(hw_uint<16>& demosaic_demosaic_update_0_write9, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write9_merged_banks_4.push(demosaic_demosaic_update_0_write9);
}

inline hw_uint<16> demosaic_bxb_rd0_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd0 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd1_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd1 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd10_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd10 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write4 = demosaic.demosaic_demosaic_update_0_write4_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd11_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd11 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write5 = demosaic.demosaic_demosaic_update_0_write5_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd12_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd12 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write4 = demosaic.demosaic_demosaic_update_0_write4_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd13_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd13 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write5 = demosaic.demosaic_demosaic_update_0_write5_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd14_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd14 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write6 = demosaic.demosaic_demosaic_update_0_write6_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd15_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd15 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write5 = demosaic.demosaic_demosaic_update_0_write5_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd16_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd16 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write6 = demosaic.demosaic_demosaic_update_0_write6_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd17_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd17 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write7 = demosaic.demosaic_demosaic_update_0_write7_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd18_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd18 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write6 = demosaic.demosaic_demosaic_update_0_write6_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd19_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd19 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write7 = demosaic.demosaic_demosaic_update_0_write7_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd2_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd2 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write2 = demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd20_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd20 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write8 = demosaic.demosaic_demosaic_update_0_write8_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd21_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd21 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write7 = demosaic.demosaic_demosaic_update_0_write7_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd22_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd22 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write8 = demosaic.demosaic_demosaic_update_0_write8_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd23_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd23 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write9 = demosaic.demosaic_demosaic_update_0_write9_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd24_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd24 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write8 = demosaic.demosaic_demosaic_update_0_write8_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd25_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd25 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write9 = demosaic.demosaic_demosaic_update_0_write9_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd26_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd26 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write10 = demosaic.demosaic_demosaic_update_0_write10_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd27_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd27 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write9 = demosaic.demosaic_demosaic_update_0_write9_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd28_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd28 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write10 = demosaic.demosaic_demosaic_update_0_write10_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd29_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd29 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write11 = demosaic.demosaic_demosaic_update_0_write11_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd3_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd3 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd30_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd30 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write10 = demosaic.demosaic_demosaic_update_0_write10_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd31_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd31 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write11 = demosaic.demosaic_demosaic_update_0_write11_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd32_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd32 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write12 = demosaic.demosaic_demosaic_update_0_write12_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd33_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd33 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write11 = demosaic.demosaic_demosaic_update_0_write11_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd34_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd34 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write12 = demosaic.demosaic_demosaic_update_0_write12_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd35_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd35 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write13 = demosaic.demosaic_demosaic_update_0_write13_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd36_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd36 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write12 = demosaic.demosaic_demosaic_update_0_write12_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd37_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd37 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write13 = demosaic.demosaic_demosaic_update_0_write13_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd38_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd38 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write14 = demosaic.demosaic_demosaic_update_0_write14_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd39_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd39 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write13 = demosaic.demosaic_demosaic_update_0_write13_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd4_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd4 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write2 = demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd40_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd40 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write14 = demosaic.demosaic_demosaic_update_0_write14_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd41_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd41 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write15 = demosaic.demosaic_demosaic_update_0_write15_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd42_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd42 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write14 = demosaic.demosaic_demosaic_update_0_write14_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd43_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd43 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write15 = demosaic.demosaic_demosaic_update_0_write15_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd44_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd44 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[16 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd45_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd45 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write15 = demosaic.demosaic_demosaic_update_0_write15_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd46_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd46 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[16 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd47_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd47 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[17 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd5_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd5 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write3 = demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd6_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd6 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write2 = demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd7_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd7 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write3 = demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd8_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd8 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write4 = demosaic.demosaic_demosaic_update_0_write4_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd9_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd9 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write3 = demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd1_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd1 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd10_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd10 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write10 = demosaic.demosaic_demosaic_update_0_write10_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd11_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd11 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write11 = demosaic.demosaic_demosaic_update_0_write11_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd12_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd12 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write12 = demosaic.demosaic_demosaic_update_0_write12_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd13_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd13 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write13 = demosaic.demosaic_demosaic_update_0_write13_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd14_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd14 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write14 = demosaic.demosaic_demosaic_update_0_write14_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd15_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd15 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write15 = demosaic.demosaic_demosaic_update_0_write15_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd2_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd2 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write2 = demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd3_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd3 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write3 = demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd4_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd4 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write4 = demosaic.demosaic_demosaic_update_0_write4_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd5_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd5 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write5 = demosaic.demosaic_demosaic_update_0_write5_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd6_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd6 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write6 = demosaic.demosaic_demosaic_update_0_write6_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd7_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd7 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write7 = demosaic.demosaic_demosaic_update_0_write7_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd8_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd8 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write8 = demosaic.demosaic_demosaic_update_0_write8_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd9_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd9 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write9 = demosaic.demosaic_demosaic_update_0_write9_merged_banks_4.peek_243();
  return value_demosaic_demosaic_update_0_write9;
  return 0;
}

// # of bundles = 3
// demosaic_bxb_update_0_read
//	demosaic_bxb_rd0
//	demosaic_bxb_rd1
//	demosaic_bxb_rd2
//	demosaic_bxb_rd3
//	demosaic_bxb_rd4
//	demosaic_bxb_rd5
//	demosaic_bxb_rd6
//	demosaic_bxb_rd7
//	demosaic_bxb_rd8
//	demosaic_bxb_rd9
//	demosaic_bxb_rd10
//	demosaic_bxb_rd11
//	demosaic_bxb_rd12
//	demosaic_bxb_rd13
//	demosaic_bxb_rd14
//	demosaic_bxb_rd15
//	demosaic_bxb_rd16
//	demosaic_bxb_rd17
//	demosaic_bxb_rd18
//	demosaic_bxb_rd19
//	demosaic_bxb_rd20
//	demosaic_bxb_rd21
//	demosaic_bxb_rd22
//	demosaic_bxb_rd23
//	demosaic_bxb_rd24
//	demosaic_bxb_rd25
//	demosaic_bxb_rd26
//	demosaic_bxb_rd27
//	demosaic_bxb_rd28
//	demosaic_bxb_rd29
//	demosaic_bxb_rd30
//	demosaic_bxb_rd31
//	demosaic_bxb_rd32
//	demosaic_bxb_rd33
//	demosaic_bxb_rd34
//	demosaic_bxb_rd35
//	demosaic_bxb_rd36
//	demosaic_bxb_rd37
//	demosaic_bxb_rd38
//	demosaic_bxb_rd39
//	demosaic_bxb_rd40
//	demosaic_bxb_rd41
//	demosaic_bxb_rd42
//	demosaic_bxb_rd43
//	demosaic_bxb_rd44
//	demosaic_bxb_rd45
//	demosaic_bxb_rd46
//	demosaic_bxb_rd47
inline hw_uint<768> demosaic_demosaic_bxb_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 48
    // demosaic_bxb_rd0
    // demosaic_bxb_rd1
    // demosaic_bxb_rd2
    // demosaic_bxb_rd3
    // demosaic_bxb_rd4
    // demosaic_bxb_rd5
    // demosaic_bxb_rd6
    // demosaic_bxb_rd7
    // demosaic_bxb_rd8
    // demosaic_bxb_rd9
    // demosaic_bxb_rd10
    // demosaic_bxb_rd11
    // demosaic_bxb_rd12
    // demosaic_bxb_rd13
    // demosaic_bxb_rd14
    // demosaic_bxb_rd15
    // demosaic_bxb_rd16
    // demosaic_bxb_rd17
    // demosaic_bxb_rd18
    // demosaic_bxb_rd19
    // demosaic_bxb_rd20
    // demosaic_bxb_rd21
    // demosaic_bxb_rd22
    // demosaic_bxb_rd23
    // demosaic_bxb_rd24
    // demosaic_bxb_rd25
    // demosaic_bxb_rd26
    // demosaic_bxb_rd27
    // demosaic_bxb_rd28
    // demosaic_bxb_rd29
    // demosaic_bxb_rd30
    // demosaic_bxb_rd31
    // demosaic_bxb_rd32
    // demosaic_bxb_rd33
    // demosaic_bxb_rd34
    // demosaic_bxb_rd35
    // demosaic_bxb_rd36
    // demosaic_bxb_rd37
    // demosaic_bxb_rd38
    // demosaic_bxb_rd39
    // demosaic_bxb_rd40
    // demosaic_bxb_rd41
    // demosaic_bxb_rd42
    // demosaic_bxb_rd43
    // demosaic_bxb_rd44
    // demosaic_bxb_rd45
    // demosaic_bxb_rd46
    // demosaic_bxb_rd47

	hw_uint<768> result;
	hw_uint<16> demosaic_bxb_rd0_res = demosaic_bxb_rd0_select(demosaic, d0, d1, dynamic_address);
	set_at<0, 768>(result, demosaic_bxb_rd0_res);
	hw_uint<16> demosaic_bxb_rd1_res = demosaic_bxb_rd1_select(demosaic, d0, d1, dynamic_address);
	set_at<16, 768>(result, demosaic_bxb_rd1_res);
	hw_uint<16> demosaic_bxb_rd2_res = demosaic_bxb_rd2_select(demosaic, d0, d1, dynamic_address);
	set_at<32, 768>(result, demosaic_bxb_rd2_res);
	hw_uint<16> demosaic_bxb_rd3_res = demosaic_bxb_rd3_select(demosaic, d0, d1, dynamic_address);
	set_at<48, 768>(result, demosaic_bxb_rd3_res);
	hw_uint<16> demosaic_bxb_rd4_res = demosaic_bxb_rd4_select(demosaic, d0, d1, dynamic_address);
	set_at<64, 768>(result, demosaic_bxb_rd4_res);
	hw_uint<16> demosaic_bxb_rd5_res = demosaic_bxb_rd5_select(demosaic, d0, d1, dynamic_address);
	set_at<80, 768>(result, demosaic_bxb_rd5_res);
	hw_uint<16> demosaic_bxb_rd6_res = demosaic_bxb_rd6_select(demosaic, d0, d1, dynamic_address);
	set_at<96, 768>(result, demosaic_bxb_rd6_res);
	hw_uint<16> demosaic_bxb_rd7_res = demosaic_bxb_rd7_select(demosaic, d0, d1, dynamic_address);
	set_at<112, 768>(result, demosaic_bxb_rd7_res);
	hw_uint<16> demosaic_bxb_rd8_res = demosaic_bxb_rd8_select(demosaic, d0, d1, dynamic_address);
	set_at<128, 768>(result, demosaic_bxb_rd8_res);
	hw_uint<16> demosaic_bxb_rd9_res = demosaic_bxb_rd9_select(demosaic, d0, d1, dynamic_address);
	set_at<144, 768>(result, demosaic_bxb_rd9_res);
	hw_uint<16> demosaic_bxb_rd10_res = demosaic_bxb_rd10_select(demosaic, d0, d1, dynamic_address);
	set_at<160, 768>(result, demosaic_bxb_rd10_res);
	hw_uint<16> demosaic_bxb_rd11_res = demosaic_bxb_rd11_select(demosaic, d0, d1, dynamic_address);
	set_at<176, 768>(result, demosaic_bxb_rd11_res);
	hw_uint<16> demosaic_bxb_rd12_res = demosaic_bxb_rd12_select(demosaic, d0, d1, dynamic_address);
	set_at<192, 768>(result, demosaic_bxb_rd12_res);
	hw_uint<16> demosaic_bxb_rd13_res = demosaic_bxb_rd13_select(demosaic, d0, d1, dynamic_address);
	set_at<208, 768>(result, demosaic_bxb_rd13_res);
	hw_uint<16> demosaic_bxb_rd14_res = demosaic_bxb_rd14_select(demosaic, d0, d1, dynamic_address);
	set_at<224, 768>(result, demosaic_bxb_rd14_res);
	hw_uint<16> demosaic_bxb_rd15_res = demosaic_bxb_rd15_select(demosaic, d0, d1, dynamic_address);
	set_at<240, 768>(result, demosaic_bxb_rd15_res);
	hw_uint<16> demosaic_bxb_rd16_res = demosaic_bxb_rd16_select(demosaic, d0, d1, dynamic_address);
	set_at<256, 768>(result, demosaic_bxb_rd16_res);
	hw_uint<16> demosaic_bxb_rd17_res = demosaic_bxb_rd17_select(demosaic, d0, d1, dynamic_address);
	set_at<272, 768>(result, demosaic_bxb_rd17_res);
	hw_uint<16> demosaic_bxb_rd18_res = demosaic_bxb_rd18_select(demosaic, d0, d1, dynamic_address);
	set_at<288, 768>(result, demosaic_bxb_rd18_res);
	hw_uint<16> demosaic_bxb_rd19_res = demosaic_bxb_rd19_select(demosaic, d0, d1, dynamic_address);
	set_at<304, 768>(result, demosaic_bxb_rd19_res);
	hw_uint<16> demosaic_bxb_rd20_res = demosaic_bxb_rd20_select(demosaic, d0, d1, dynamic_address);
	set_at<320, 768>(result, demosaic_bxb_rd20_res);
	hw_uint<16> demosaic_bxb_rd21_res = demosaic_bxb_rd21_select(demosaic, d0, d1, dynamic_address);
	set_at<336, 768>(result, demosaic_bxb_rd21_res);
	hw_uint<16> demosaic_bxb_rd22_res = demosaic_bxb_rd22_select(demosaic, d0, d1, dynamic_address);
	set_at<352, 768>(result, demosaic_bxb_rd22_res);
	hw_uint<16> demosaic_bxb_rd23_res = demosaic_bxb_rd23_select(demosaic, d0, d1, dynamic_address);
	set_at<368, 768>(result, demosaic_bxb_rd23_res);
	hw_uint<16> demosaic_bxb_rd24_res = demosaic_bxb_rd24_select(demosaic, d0, d1, dynamic_address);
	set_at<384, 768>(result, demosaic_bxb_rd24_res);
	hw_uint<16> demosaic_bxb_rd25_res = demosaic_bxb_rd25_select(demosaic, d0, d1, dynamic_address);
	set_at<400, 768>(result, demosaic_bxb_rd25_res);
	hw_uint<16> demosaic_bxb_rd26_res = demosaic_bxb_rd26_select(demosaic, d0, d1, dynamic_address);
	set_at<416, 768>(result, demosaic_bxb_rd26_res);
	hw_uint<16> demosaic_bxb_rd27_res = demosaic_bxb_rd27_select(demosaic, d0, d1, dynamic_address);
	set_at<432, 768>(result, demosaic_bxb_rd27_res);
	hw_uint<16> demosaic_bxb_rd28_res = demosaic_bxb_rd28_select(demosaic, d0, d1, dynamic_address);
	set_at<448, 768>(result, demosaic_bxb_rd28_res);
	hw_uint<16> demosaic_bxb_rd29_res = demosaic_bxb_rd29_select(demosaic, d0, d1, dynamic_address);
	set_at<464, 768>(result, demosaic_bxb_rd29_res);
	hw_uint<16> demosaic_bxb_rd30_res = demosaic_bxb_rd30_select(demosaic, d0, d1, dynamic_address);
	set_at<480, 768>(result, demosaic_bxb_rd30_res);
	hw_uint<16> demosaic_bxb_rd31_res = demosaic_bxb_rd31_select(demosaic, d0, d1, dynamic_address);
	set_at<496, 768>(result, demosaic_bxb_rd31_res);
	hw_uint<16> demosaic_bxb_rd32_res = demosaic_bxb_rd32_select(demosaic, d0, d1, dynamic_address);
	set_at<512, 768>(result, demosaic_bxb_rd32_res);
	hw_uint<16> demosaic_bxb_rd33_res = demosaic_bxb_rd33_select(demosaic, d0, d1, dynamic_address);
	set_at<528, 768>(result, demosaic_bxb_rd33_res);
	hw_uint<16> demosaic_bxb_rd34_res = demosaic_bxb_rd34_select(demosaic, d0, d1, dynamic_address);
	set_at<544, 768>(result, demosaic_bxb_rd34_res);
	hw_uint<16> demosaic_bxb_rd35_res = demosaic_bxb_rd35_select(demosaic, d0, d1, dynamic_address);
	set_at<560, 768>(result, demosaic_bxb_rd35_res);
	hw_uint<16> demosaic_bxb_rd36_res = demosaic_bxb_rd36_select(demosaic, d0, d1, dynamic_address);
	set_at<576, 768>(result, demosaic_bxb_rd36_res);
	hw_uint<16> demosaic_bxb_rd37_res = demosaic_bxb_rd37_select(demosaic, d0, d1, dynamic_address);
	set_at<592, 768>(result, demosaic_bxb_rd37_res);
	hw_uint<16> demosaic_bxb_rd38_res = demosaic_bxb_rd38_select(demosaic, d0, d1, dynamic_address);
	set_at<608, 768>(result, demosaic_bxb_rd38_res);
	hw_uint<16> demosaic_bxb_rd39_res = demosaic_bxb_rd39_select(demosaic, d0, d1, dynamic_address);
	set_at<624, 768>(result, demosaic_bxb_rd39_res);
	hw_uint<16> demosaic_bxb_rd40_res = demosaic_bxb_rd40_select(demosaic, d0, d1, dynamic_address);
	set_at<640, 768>(result, demosaic_bxb_rd40_res);
	hw_uint<16> demosaic_bxb_rd41_res = demosaic_bxb_rd41_select(demosaic, d0, d1, dynamic_address);
	set_at<656, 768>(result, demosaic_bxb_rd41_res);
	hw_uint<16> demosaic_bxb_rd42_res = demosaic_bxb_rd42_select(demosaic, d0, d1, dynamic_address);
	set_at<672, 768>(result, demosaic_bxb_rd42_res);
	hw_uint<16> demosaic_bxb_rd43_res = demosaic_bxb_rd43_select(demosaic, d0, d1, dynamic_address);
	set_at<688, 768>(result, demosaic_bxb_rd43_res);
	hw_uint<16> demosaic_bxb_rd44_res = demosaic_bxb_rd44_select(demosaic, d0, d1, dynamic_address);
	set_at<704, 768>(result, demosaic_bxb_rd44_res);
	hw_uint<16> demosaic_bxb_rd45_res = demosaic_bxb_rd45_select(demosaic, d0, d1, dynamic_address);
	set_at<720, 768>(result, demosaic_bxb_rd45_res);
	hw_uint<16> demosaic_bxb_rd46_res = demosaic_bxb_rd46_select(demosaic, d0, d1, dynamic_address);
	set_at<736, 768>(result, demosaic_bxb_rd46_res);
	hw_uint<16> demosaic_bxb_rd47_res = demosaic_bxb_rd47_select(demosaic, d0, d1, dynamic_address);
	set_at<752, 768>(result, demosaic_bxb_rd47_res);
	return result;
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
//	demosaic_diff_rd1
//	demosaic_diff_rd2
//	demosaic_diff_rd3
//	demosaic_diff_rd4
//	demosaic_diff_rd5
//	demosaic_diff_rd6
//	demosaic_diff_rd7
//	demosaic_diff_rd8
//	demosaic_diff_rd9
//	demosaic_diff_rd10
//	demosaic_diff_rd11
//	demosaic_diff_rd12
//	demosaic_diff_rd13
//	demosaic_diff_rd14
//	demosaic_diff_rd15
inline hw_uint<256> demosaic_demosaic_diff_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // demosaic_diff_rd0
    // demosaic_diff_rd1
    // demosaic_diff_rd2
    // demosaic_diff_rd3
    // demosaic_diff_rd4
    // demosaic_diff_rd5
    // demosaic_diff_rd6
    // demosaic_diff_rd7
    // demosaic_diff_rd8
    // demosaic_diff_rd9
    // demosaic_diff_rd10
    // demosaic_diff_rd11
    // demosaic_diff_rd12
    // demosaic_diff_rd13
    // demosaic_diff_rd14
    // demosaic_diff_rd15

	hw_uint<256> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic, d0, d1, dynamic_address);
	set_at<0, 256>(result, demosaic_diff_rd0_res);
	hw_uint<16> demosaic_diff_rd1_res = demosaic_diff_rd1_select(demosaic, d0, d1, dynamic_address);
	set_at<16, 256>(result, demosaic_diff_rd1_res);
	hw_uint<16> demosaic_diff_rd2_res = demosaic_diff_rd2_select(demosaic, d0, d1, dynamic_address);
	set_at<32, 256>(result, demosaic_diff_rd2_res);
	hw_uint<16> demosaic_diff_rd3_res = demosaic_diff_rd3_select(demosaic, d0, d1, dynamic_address);
	set_at<48, 256>(result, demosaic_diff_rd3_res);
	hw_uint<16> demosaic_diff_rd4_res = demosaic_diff_rd4_select(demosaic, d0, d1, dynamic_address);
	set_at<64, 256>(result, demosaic_diff_rd4_res);
	hw_uint<16> demosaic_diff_rd5_res = demosaic_diff_rd5_select(demosaic, d0, d1, dynamic_address);
	set_at<80, 256>(result, demosaic_diff_rd5_res);
	hw_uint<16> demosaic_diff_rd6_res = demosaic_diff_rd6_select(demosaic, d0, d1, dynamic_address);
	set_at<96, 256>(result, demosaic_diff_rd6_res);
	hw_uint<16> demosaic_diff_rd7_res = demosaic_diff_rd7_select(demosaic, d0, d1, dynamic_address);
	set_at<112, 256>(result, demosaic_diff_rd7_res);
	hw_uint<16> demosaic_diff_rd8_res = demosaic_diff_rd8_select(demosaic, d0, d1, dynamic_address);
	set_at<128, 256>(result, demosaic_diff_rd8_res);
	hw_uint<16> demosaic_diff_rd9_res = demosaic_diff_rd9_select(demosaic, d0, d1, dynamic_address);
	set_at<144, 256>(result, demosaic_diff_rd9_res);
	hw_uint<16> demosaic_diff_rd10_res = demosaic_diff_rd10_select(demosaic, d0, d1, dynamic_address);
	set_at<160, 256>(result, demosaic_diff_rd10_res);
	hw_uint<16> demosaic_diff_rd11_res = demosaic_diff_rd11_select(demosaic, d0, d1, dynamic_address);
	set_at<176, 256>(result, demosaic_diff_rd11_res);
	hw_uint<16> demosaic_diff_rd12_res = demosaic_diff_rd12_select(demosaic, d0, d1, dynamic_address);
	set_at<192, 256>(result, demosaic_diff_rd12_res);
	hw_uint<16> demosaic_diff_rd13_res = demosaic_diff_rd13_select(demosaic, d0, d1, dynamic_address);
	set_at<208, 256>(result, demosaic_diff_rd13_res);
	hw_uint<16> demosaic_diff_rd14_res = demosaic_diff_rd14_select(demosaic, d0, d1, dynamic_address);
	set_at<224, 256>(result, demosaic_diff_rd14_res);
	hw_uint<16> demosaic_diff_rd15_res = demosaic_diff_rd15_select(demosaic, d0, d1, dynamic_address);
	set_at<240, 256>(result, demosaic_diff_rd15_res);
	return result;
}

// demosaic_update_0_write
//	demosaic_demosaic_update_0_write0
//	demosaic_demosaic_update_0_write1
//	demosaic_demosaic_update_0_write2
//	demosaic_demosaic_update_0_write3
//	demosaic_demosaic_update_0_write4
//	demosaic_demosaic_update_0_write5
//	demosaic_demosaic_update_0_write6
//	demosaic_demosaic_update_0_write7
//	demosaic_demosaic_update_0_write8
//	demosaic_demosaic_update_0_write9
//	demosaic_demosaic_update_0_write10
//	demosaic_demosaic_update_0_write11
//	demosaic_demosaic_update_0_write12
//	demosaic_demosaic_update_0_write13
//	demosaic_demosaic_update_0_write14
//	demosaic_demosaic_update_0_write15
inline void demosaic_demosaic_update_0_write_bundle_write(hw_uint<256>& demosaic_update_0_write, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_demosaic_update_0_write0_res = demosaic_update_0_write.extract<0, 15>();
	demosaic_demosaic_update_0_write0_write(demosaic_demosaic_update_0_write0_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write1_res = demosaic_update_0_write.extract<16, 31>();
	demosaic_demosaic_update_0_write1_write(demosaic_demosaic_update_0_write1_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write2_res = demosaic_update_0_write.extract<32, 47>();
	demosaic_demosaic_update_0_write2_write(demosaic_demosaic_update_0_write2_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write3_res = demosaic_update_0_write.extract<48, 63>();
	demosaic_demosaic_update_0_write3_write(demosaic_demosaic_update_0_write3_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write4_res = demosaic_update_0_write.extract<64, 79>();
	demosaic_demosaic_update_0_write4_write(demosaic_demosaic_update_0_write4_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write5_res = demosaic_update_0_write.extract<80, 95>();
	demosaic_demosaic_update_0_write5_write(demosaic_demosaic_update_0_write5_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write6_res = demosaic_update_0_write.extract<96, 111>();
	demosaic_demosaic_update_0_write6_write(demosaic_demosaic_update_0_write6_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write7_res = demosaic_update_0_write.extract<112, 127>();
	demosaic_demosaic_update_0_write7_write(demosaic_demosaic_update_0_write7_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write8_res = demosaic_update_0_write.extract<128, 143>();
	demosaic_demosaic_update_0_write8_write(demosaic_demosaic_update_0_write8_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write9_res = demosaic_update_0_write.extract<144, 159>();
	demosaic_demosaic_update_0_write9_write(demosaic_demosaic_update_0_write9_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write10_res = demosaic_update_0_write.extract<160, 175>();
	demosaic_demosaic_update_0_write10_write(demosaic_demosaic_update_0_write10_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write11_res = demosaic_update_0_write.extract<176, 191>();
	demosaic_demosaic_update_0_write11_write(demosaic_demosaic_update_0_write11_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write12_res = demosaic_update_0_write.extract<192, 207>();
	demosaic_demosaic_update_0_write12_write(demosaic_demosaic_update_0_write12_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write13_res = demosaic_update_0_write.extract<208, 223>();
	demosaic_demosaic_update_0_write13_write(demosaic_demosaic_update_0_write13_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write14_res = demosaic_update_0_write.extract<224, 239>();
	demosaic_demosaic_update_0_write14_write(demosaic_demosaic_update_0_write14_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write15_res = demosaic_update_0_write.extract<240, 255>();
	demosaic_demosaic_update_0_write15_write(demosaic_demosaic_update_0_write15_res, demosaic, d0, d1, dynamic_address);
}

struct demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1904], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1905], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write10_merged_banks_3_cache {
	// RAM Box: {[10, 1914], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write11_merged_banks_3_cache {
	// RAM Box: {[11, 1915], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write12_merged_banks_3_cache {
	// RAM Box: {[12, 1916], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write13_merged_banks_3_cache {
	// RAM Box: {[13, 1917], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write14_merged_banks_3_cache {
	// RAM Box: {[14, 1918], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write15_merged_banks_3_cache {
	// RAM Box: {[15, 1919], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[2, 1906], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1907], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write4_merged_banks_3_cache {
	// RAM Box: {[4, 1908], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[5, 1909], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write6_merged_banks_3_cache {
	// RAM Box: {[6, 1910], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[7, 1911], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write8_merged_banks_3_cache {
	// RAM Box: {[8, 1912], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write9_merged_banks_3_cache {
	// RAM Box: {[9, 1913], [0, 1081]}
	// Capacity: 241
	// # of read delays: 3
  // 0, 120, 240
	hw_uint<16> f0;
	fifo<hw_uint<16>, 119> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_120() {
		return f2;
	}

	inline hw_uint<16> peek_239() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_240() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 119
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_cache {
  // Reader addrs...
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[5 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[5 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[6 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[6 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[7 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[7 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[8 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[8 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[9 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[9 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[10 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[10 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[11 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[11 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[12 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[12 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[13 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[13 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[14 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[14 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[15 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[15 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // # of banks: 16
  demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write10_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write10_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write11_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write11_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write12_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write12_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write13_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write13_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write14_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write14_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write15_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write15_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write4_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write4_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write5_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write5_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write6_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write6_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write7_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write7_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write8_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write8_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write9_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write9_merged_banks_3;
};



inline void demosaic_bx_demosaic_bx_update_0_write0_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write0, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write0);
}

inline void demosaic_bx_demosaic_bx_update_0_write1_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write1, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write1);
}

inline void demosaic_bx_demosaic_bx_update_0_write10_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write10, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write10_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write10);
}

inline void demosaic_bx_demosaic_bx_update_0_write11_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write11, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write11_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write11);
}

inline void demosaic_bx_demosaic_bx_update_0_write12_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write12, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write12_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write12);
}

inline void demosaic_bx_demosaic_bx_update_0_write13_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write13, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write13_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write13);
}

inline void demosaic_bx_demosaic_bx_update_0_write14_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write14, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write14_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write14);
}

inline void demosaic_bx_demosaic_bx_update_0_write15_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write15, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write15_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write15);
}

inline void demosaic_bx_demosaic_bx_update_0_write2_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write2, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write2);
}

inline void demosaic_bx_demosaic_bx_update_0_write3_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write3, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write3);
}

inline void demosaic_bx_demosaic_bx_update_0_write4_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write4, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write4_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write4);
}

inline void demosaic_bx_demosaic_bx_update_0_write5_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write5, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write5_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write5);
}

inline void demosaic_bx_demosaic_bx_update_0_write6_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write6, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write6_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write6);
}

inline void demosaic_bx_demosaic_bx_update_0_write7_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write7, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write7_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write7);
}

inline void demosaic_bx_demosaic_bx_update_0_write8_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write8, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write8_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write8);
}

inline void demosaic_bx_demosaic_bx_update_0_write9_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write9, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write9_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write9);
}

inline hw_uint<16> demosaic_byb_rd0_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd0 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd1_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd1 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd10_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd10 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write3 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd11_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd11 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write3 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd12_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd12 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write4 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write4_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd13_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd13 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write4 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write4_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd14_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd14 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write4 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write4_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd15_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd15 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write5 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write5_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd16_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd16 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[5 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write5 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write5_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd17_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd17 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[5 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write5 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write5_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd18_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd18 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write6 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write6_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd19_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd19 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[6 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write6 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write6_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd2_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd2 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd20_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd20 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[6 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write6 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write6_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd21_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd21 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write7 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write7_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd22_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd22 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[7 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write7 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write7_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd23_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd23 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[7 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write7 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write7_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd24_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd24 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write8 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write8_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd25_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd25 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[8 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write8 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write8_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd26_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd26 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[8 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write8 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write8_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd27_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd27 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write9 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write9_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd28_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd28 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[9 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write9 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write9_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd29_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd29 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[9 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write9 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write9_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd3_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd3 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd30_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd30 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write10 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write10_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd31_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd31 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[10 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write10 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write10_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd32_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd32 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[10 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write10 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write10_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd33_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd33 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write11 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write11_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd34_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd34 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[11 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write11 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write11_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd35_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd35 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[11 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write11 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write11_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd36_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd36 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write12 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write12_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd37_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd37 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[12 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write12 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write12_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd38_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd38 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[12 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write12 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write12_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd39_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd39 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write13 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write13_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd4_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd4 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd40_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd40 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[13 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write13 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write13_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd41_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd41 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[13 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write13 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write13_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd42_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd42 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write14 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write14_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd43_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd43 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[14 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write14 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write14_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd44_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd44 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[14 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write14 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write14_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd45_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd45 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write15 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write15_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd46_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd46 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[15 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write15 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write15_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd47_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd47 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[15 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write15 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write15_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd5_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd5 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd6_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd6 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write2 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd7_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd7 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write2 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3.peek_120();
  return value_demosaic_bx_demosaic_bx_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd8_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd8 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 16d0, 2 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write2 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd9_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd9 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write3 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3.peek_240();
  return value_demosaic_bx_demosaic_bx_update_0_write3;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_write
//	demosaic_bx_demosaic_bx_update_0_write0
//	demosaic_bx_demosaic_bx_update_0_write1
//	demosaic_bx_demosaic_bx_update_0_write2
//	demosaic_bx_demosaic_bx_update_0_write3
//	demosaic_bx_demosaic_bx_update_0_write4
//	demosaic_bx_demosaic_bx_update_0_write5
//	demosaic_bx_demosaic_bx_update_0_write6
//	demosaic_bx_demosaic_bx_update_0_write7
//	demosaic_bx_demosaic_bx_update_0_write8
//	demosaic_bx_demosaic_bx_update_0_write9
//	demosaic_bx_demosaic_bx_update_0_write10
//	demosaic_bx_demosaic_bx_update_0_write11
//	demosaic_bx_demosaic_bx_update_0_write12
//	demosaic_bx_demosaic_bx_update_0_write13
//	demosaic_bx_demosaic_bx_update_0_write14
//	demosaic_bx_demosaic_bx_update_0_write15
inline void demosaic_bx_demosaic_bx_update_0_write_bundle_write(hw_uint<256>& demosaic_bx_update_0_write, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write0_res = demosaic_bx_update_0_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_write0_write(demosaic_bx_demosaic_bx_update_0_write0_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write1_res = demosaic_bx_update_0_write.extract<16, 31>();
	demosaic_bx_demosaic_bx_update_0_write1_write(demosaic_bx_demosaic_bx_update_0_write1_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write2_res = demosaic_bx_update_0_write.extract<32, 47>();
	demosaic_bx_demosaic_bx_update_0_write2_write(demosaic_bx_demosaic_bx_update_0_write2_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write3_res = demosaic_bx_update_0_write.extract<48, 63>();
	demosaic_bx_demosaic_bx_update_0_write3_write(demosaic_bx_demosaic_bx_update_0_write3_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write4_res = demosaic_bx_update_0_write.extract<64, 79>();
	demosaic_bx_demosaic_bx_update_0_write4_write(demosaic_bx_demosaic_bx_update_0_write4_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write5_res = demosaic_bx_update_0_write.extract<80, 95>();
	demosaic_bx_demosaic_bx_update_0_write5_write(demosaic_bx_demosaic_bx_update_0_write5_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write6_res = demosaic_bx_update_0_write.extract<96, 111>();
	demosaic_bx_demosaic_bx_update_0_write6_write(demosaic_bx_demosaic_bx_update_0_write6_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write7_res = demosaic_bx_update_0_write.extract<112, 127>();
	demosaic_bx_demosaic_bx_update_0_write7_write(demosaic_bx_demosaic_bx_update_0_write7_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write8_res = demosaic_bx_update_0_write.extract<128, 143>();
	demosaic_bx_demosaic_bx_update_0_write8_write(demosaic_bx_demosaic_bx_update_0_write8_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write9_res = demosaic_bx_update_0_write.extract<144, 159>();
	demosaic_bx_demosaic_bx_update_0_write9_write(demosaic_bx_demosaic_bx_update_0_write9_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write10_res = demosaic_bx_update_0_write.extract<160, 175>();
	demosaic_bx_demosaic_bx_update_0_write10_write(demosaic_bx_demosaic_bx_update_0_write10_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write11_res = demosaic_bx_update_0_write.extract<176, 191>();
	demosaic_bx_demosaic_bx_update_0_write11_write(demosaic_bx_demosaic_bx_update_0_write11_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write12_res = demosaic_bx_update_0_write.extract<192, 207>();
	demosaic_bx_demosaic_bx_update_0_write12_write(demosaic_bx_demosaic_bx_update_0_write12_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write13_res = demosaic_bx_update_0_write.extract<208, 223>();
	demosaic_bx_demosaic_bx_update_0_write13_write(demosaic_bx_demosaic_bx_update_0_write13_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write14_res = demosaic_bx_update_0_write.extract<224, 239>();
	demosaic_bx_demosaic_bx_update_0_write14_write(demosaic_bx_demosaic_bx_update_0_write14_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write15_res = demosaic_bx_update_0_write.extract<240, 255>();
	demosaic_bx_demosaic_bx_update_0_write15_write(demosaic_bx_demosaic_bx_update_0_write15_res, demosaic_bx, d0, d1, dynamic_address);
}

// demosaic_byb_update_0_read
//	demosaic_byb_rd0
//	demosaic_byb_rd1
//	demosaic_byb_rd2
//	demosaic_byb_rd3
//	demosaic_byb_rd4
//	demosaic_byb_rd5
//	demosaic_byb_rd6
//	demosaic_byb_rd7
//	demosaic_byb_rd8
//	demosaic_byb_rd9
//	demosaic_byb_rd10
//	demosaic_byb_rd11
//	demosaic_byb_rd12
//	demosaic_byb_rd13
//	demosaic_byb_rd14
//	demosaic_byb_rd15
//	demosaic_byb_rd16
//	demosaic_byb_rd17
//	demosaic_byb_rd18
//	demosaic_byb_rd19
//	demosaic_byb_rd20
//	demosaic_byb_rd21
//	demosaic_byb_rd22
//	demosaic_byb_rd23
//	demosaic_byb_rd24
//	demosaic_byb_rd25
//	demosaic_byb_rd26
//	demosaic_byb_rd27
//	demosaic_byb_rd28
//	demosaic_byb_rd29
//	demosaic_byb_rd30
//	demosaic_byb_rd31
//	demosaic_byb_rd32
//	demosaic_byb_rd33
//	demosaic_byb_rd34
//	demosaic_byb_rd35
//	demosaic_byb_rd36
//	demosaic_byb_rd37
//	demosaic_byb_rd38
//	demosaic_byb_rd39
//	demosaic_byb_rd40
//	demosaic_byb_rd41
//	demosaic_byb_rd42
//	demosaic_byb_rd43
//	demosaic_byb_rd44
//	demosaic_byb_rd45
//	demosaic_byb_rd46
//	demosaic_byb_rd47
inline hw_uint<768> demosaic_bx_demosaic_byb_update_0_read_bundle_read(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 48
    // demosaic_byb_rd0
    // demosaic_byb_rd1
    // demosaic_byb_rd2
    // demosaic_byb_rd3
    // demosaic_byb_rd4
    // demosaic_byb_rd5
    // demosaic_byb_rd6
    // demosaic_byb_rd7
    // demosaic_byb_rd8
    // demosaic_byb_rd9
    // demosaic_byb_rd10
    // demosaic_byb_rd11
    // demosaic_byb_rd12
    // demosaic_byb_rd13
    // demosaic_byb_rd14
    // demosaic_byb_rd15
    // demosaic_byb_rd16
    // demosaic_byb_rd17
    // demosaic_byb_rd18
    // demosaic_byb_rd19
    // demosaic_byb_rd20
    // demosaic_byb_rd21
    // demosaic_byb_rd22
    // demosaic_byb_rd23
    // demosaic_byb_rd24
    // demosaic_byb_rd25
    // demosaic_byb_rd26
    // demosaic_byb_rd27
    // demosaic_byb_rd28
    // demosaic_byb_rd29
    // demosaic_byb_rd30
    // demosaic_byb_rd31
    // demosaic_byb_rd32
    // demosaic_byb_rd33
    // demosaic_byb_rd34
    // demosaic_byb_rd35
    // demosaic_byb_rd36
    // demosaic_byb_rd37
    // demosaic_byb_rd38
    // demosaic_byb_rd39
    // demosaic_byb_rd40
    // demosaic_byb_rd41
    // demosaic_byb_rd42
    // demosaic_byb_rd43
    // demosaic_byb_rd44
    // demosaic_byb_rd45
    // demosaic_byb_rd46
    // demosaic_byb_rd47

	hw_uint<768> result;
	hw_uint<16> demosaic_byb_rd0_res = demosaic_byb_rd0_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<0, 768>(result, demosaic_byb_rd0_res);
	hw_uint<16> demosaic_byb_rd1_res = demosaic_byb_rd1_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<16, 768>(result, demosaic_byb_rd1_res);
	hw_uint<16> demosaic_byb_rd2_res = demosaic_byb_rd2_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<32, 768>(result, demosaic_byb_rd2_res);
	hw_uint<16> demosaic_byb_rd3_res = demosaic_byb_rd3_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<48, 768>(result, demosaic_byb_rd3_res);
	hw_uint<16> demosaic_byb_rd4_res = demosaic_byb_rd4_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<64, 768>(result, demosaic_byb_rd4_res);
	hw_uint<16> demosaic_byb_rd5_res = demosaic_byb_rd5_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<80, 768>(result, demosaic_byb_rd5_res);
	hw_uint<16> demosaic_byb_rd6_res = demosaic_byb_rd6_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<96, 768>(result, demosaic_byb_rd6_res);
	hw_uint<16> demosaic_byb_rd7_res = demosaic_byb_rd7_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<112, 768>(result, demosaic_byb_rd7_res);
	hw_uint<16> demosaic_byb_rd8_res = demosaic_byb_rd8_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<128, 768>(result, demosaic_byb_rd8_res);
	hw_uint<16> demosaic_byb_rd9_res = demosaic_byb_rd9_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<144, 768>(result, demosaic_byb_rd9_res);
	hw_uint<16> demosaic_byb_rd10_res = demosaic_byb_rd10_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<160, 768>(result, demosaic_byb_rd10_res);
	hw_uint<16> demosaic_byb_rd11_res = demosaic_byb_rd11_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<176, 768>(result, demosaic_byb_rd11_res);
	hw_uint<16> demosaic_byb_rd12_res = demosaic_byb_rd12_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<192, 768>(result, demosaic_byb_rd12_res);
	hw_uint<16> demosaic_byb_rd13_res = demosaic_byb_rd13_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<208, 768>(result, demosaic_byb_rd13_res);
	hw_uint<16> demosaic_byb_rd14_res = demosaic_byb_rd14_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<224, 768>(result, demosaic_byb_rd14_res);
	hw_uint<16> demosaic_byb_rd15_res = demosaic_byb_rd15_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<240, 768>(result, demosaic_byb_rd15_res);
	hw_uint<16> demosaic_byb_rd16_res = demosaic_byb_rd16_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<256, 768>(result, demosaic_byb_rd16_res);
	hw_uint<16> demosaic_byb_rd17_res = demosaic_byb_rd17_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<272, 768>(result, demosaic_byb_rd17_res);
	hw_uint<16> demosaic_byb_rd18_res = demosaic_byb_rd18_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<288, 768>(result, demosaic_byb_rd18_res);
	hw_uint<16> demosaic_byb_rd19_res = demosaic_byb_rd19_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<304, 768>(result, demosaic_byb_rd19_res);
	hw_uint<16> demosaic_byb_rd20_res = demosaic_byb_rd20_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<320, 768>(result, demosaic_byb_rd20_res);
	hw_uint<16> demosaic_byb_rd21_res = demosaic_byb_rd21_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<336, 768>(result, demosaic_byb_rd21_res);
	hw_uint<16> demosaic_byb_rd22_res = demosaic_byb_rd22_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<352, 768>(result, demosaic_byb_rd22_res);
	hw_uint<16> demosaic_byb_rd23_res = demosaic_byb_rd23_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<368, 768>(result, demosaic_byb_rd23_res);
	hw_uint<16> demosaic_byb_rd24_res = demosaic_byb_rd24_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<384, 768>(result, demosaic_byb_rd24_res);
	hw_uint<16> demosaic_byb_rd25_res = demosaic_byb_rd25_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<400, 768>(result, demosaic_byb_rd25_res);
	hw_uint<16> demosaic_byb_rd26_res = demosaic_byb_rd26_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<416, 768>(result, demosaic_byb_rd26_res);
	hw_uint<16> demosaic_byb_rd27_res = demosaic_byb_rd27_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<432, 768>(result, demosaic_byb_rd27_res);
	hw_uint<16> demosaic_byb_rd28_res = demosaic_byb_rd28_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<448, 768>(result, demosaic_byb_rd28_res);
	hw_uint<16> demosaic_byb_rd29_res = demosaic_byb_rd29_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<464, 768>(result, demosaic_byb_rd29_res);
	hw_uint<16> demosaic_byb_rd30_res = demosaic_byb_rd30_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<480, 768>(result, demosaic_byb_rd30_res);
	hw_uint<16> demosaic_byb_rd31_res = demosaic_byb_rd31_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<496, 768>(result, demosaic_byb_rd31_res);
	hw_uint<16> demosaic_byb_rd32_res = demosaic_byb_rd32_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<512, 768>(result, demosaic_byb_rd32_res);
	hw_uint<16> demosaic_byb_rd33_res = demosaic_byb_rd33_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<528, 768>(result, demosaic_byb_rd33_res);
	hw_uint<16> demosaic_byb_rd34_res = demosaic_byb_rd34_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<544, 768>(result, demosaic_byb_rd34_res);
	hw_uint<16> demosaic_byb_rd35_res = demosaic_byb_rd35_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<560, 768>(result, demosaic_byb_rd35_res);
	hw_uint<16> demosaic_byb_rd36_res = demosaic_byb_rd36_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<576, 768>(result, demosaic_byb_rd36_res);
	hw_uint<16> demosaic_byb_rd37_res = demosaic_byb_rd37_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<592, 768>(result, demosaic_byb_rd37_res);
	hw_uint<16> demosaic_byb_rd38_res = demosaic_byb_rd38_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<608, 768>(result, demosaic_byb_rd38_res);
	hw_uint<16> demosaic_byb_rd39_res = demosaic_byb_rd39_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<624, 768>(result, demosaic_byb_rd39_res);
	hw_uint<16> demosaic_byb_rd40_res = demosaic_byb_rd40_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<640, 768>(result, demosaic_byb_rd40_res);
	hw_uint<16> demosaic_byb_rd41_res = demosaic_byb_rd41_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<656, 768>(result, demosaic_byb_rd41_res);
	hw_uint<16> demosaic_byb_rd42_res = demosaic_byb_rd42_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<672, 768>(result, demosaic_byb_rd42_res);
	hw_uint<16> demosaic_byb_rd43_res = demosaic_byb_rd43_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<688, 768>(result, demosaic_byb_rd43_res);
	hw_uint<16> demosaic_byb_rd44_res = demosaic_byb_rd44_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<704, 768>(result, demosaic_byb_rd44_res);
	hw_uint<16> demosaic_byb_rd45_res = demosaic_byb_rd45_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<720, 768>(result, demosaic_byb_rd45_res);
	hw_uint<16> demosaic_byb_rd46_res = demosaic_byb_rd46_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<736, 768>(result, demosaic_byb_rd46_res);
	hw_uint<16> demosaic_byb_rd47_res = demosaic_byb_rd47_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<752, 768>(result, demosaic_byb_rd47_res);
	return result;
}

struct demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0_cache {
	// RAM Box: {[0, 1904], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1_cache {
	// RAM Box: {[1, 1905], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write10_to_demosaic_bx_rd10_cache {
	// RAM Box: {[10, 1914], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write11_to_demosaic_bx_rd11_cache {
	// RAM Box: {[11, 1915], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write12_to_demosaic_bx_rd12_cache {
	// RAM Box: {[12, 1916], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write13_to_demosaic_bx_rd13_cache {
	// RAM Box: {[13, 1917], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write14_to_demosaic_bx_rd14_cache {
	// RAM Box: {[14, 1918], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write15_to_demosaic_bx_rd15_cache {
	// RAM Box: {[15, 1919], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2_cache {
	// RAM Box: {[2, 1906], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3_cache {
	// RAM Box: {[3, 1907], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write4_to_demosaic_bx_rd4_cache {
	// RAM Box: {[4, 1908], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write5_to_demosaic_bx_rd5_cache {
	// RAM Box: {[5, 1909], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write6_to_demosaic_bx_rd6_cache {
	// RAM Box: {[6, 1910], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write7_to_demosaic_bx_rd7_cache {
	// RAM Box: {[7, 1911], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write8_to_demosaic_bx_rd8_cache {
	// RAM Box: {[8, 1912], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write9_to_demosaic_bx_rd9_cache {
	// RAM Box: {[9, 1913], [0, 1081]}
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

struct demosaic_bxb_cache {
  // Reader addrs...
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // # of banks: 16
  demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0_cache demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0;
  demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1_cache demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1;
  demosaic_bxb_demosaic_bxb_update_0_write10_to_demosaic_bx_rd10_cache demosaic_bxb_demosaic_bxb_update_0_write10_to_demosaic_bx_rd10;
  demosaic_bxb_demosaic_bxb_update_0_write11_to_demosaic_bx_rd11_cache demosaic_bxb_demosaic_bxb_update_0_write11_to_demosaic_bx_rd11;
  demosaic_bxb_demosaic_bxb_update_0_write12_to_demosaic_bx_rd12_cache demosaic_bxb_demosaic_bxb_update_0_write12_to_demosaic_bx_rd12;
  demosaic_bxb_demosaic_bxb_update_0_write13_to_demosaic_bx_rd13_cache demosaic_bxb_demosaic_bxb_update_0_write13_to_demosaic_bx_rd13;
  demosaic_bxb_demosaic_bxb_update_0_write14_to_demosaic_bx_rd14_cache demosaic_bxb_demosaic_bxb_update_0_write14_to_demosaic_bx_rd14;
  demosaic_bxb_demosaic_bxb_update_0_write15_to_demosaic_bx_rd15_cache demosaic_bxb_demosaic_bxb_update_0_write15_to_demosaic_bx_rd15;
  demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2_cache demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2;
  demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3_cache demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3;
  demosaic_bxb_demosaic_bxb_update_0_write4_to_demosaic_bx_rd4_cache demosaic_bxb_demosaic_bxb_update_0_write4_to_demosaic_bx_rd4;
  demosaic_bxb_demosaic_bxb_update_0_write5_to_demosaic_bx_rd5_cache demosaic_bxb_demosaic_bxb_update_0_write5_to_demosaic_bx_rd5;
  demosaic_bxb_demosaic_bxb_update_0_write6_to_demosaic_bx_rd6_cache demosaic_bxb_demosaic_bxb_update_0_write6_to_demosaic_bx_rd6;
  demosaic_bxb_demosaic_bxb_update_0_write7_to_demosaic_bx_rd7_cache demosaic_bxb_demosaic_bxb_update_0_write7_to_demosaic_bx_rd7;
  demosaic_bxb_demosaic_bxb_update_0_write8_to_demosaic_bx_rd8_cache demosaic_bxb_demosaic_bxb_update_0_write8_to_demosaic_bx_rd8;
  demosaic_bxb_demosaic_bxb_update_0_write9_to_demosaic_bx_rd9_cache demosaic_bxb_demosaic_bxb_update_0_write9_to_demosaic_bx_rd9;
};



inline void demosaic_bxb_demosaic_bxb_update_0_write0_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write0, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0.push(demosaic_bxb_demosaic_bxb_update_0_write0);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write1_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write1, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1.push(demosaic_bxb_demosaic_bxb_update_0_write1);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write10_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write10, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write10_to_demosaic_bx_rd10.push(demosaic_bxb_demosaic_bxb_update_0_write10);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write11_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write11, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write11_to_demosaic_bx_rd11.push(demosaic_bxb_demosaic_bxb_update_0_write11);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write12_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write12, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write12_to_demosaic_bx_rd12.push(demosaic_bxb_demosaic_bxb_update_0_write12);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write13_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write13, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write13_to_demosaic_bx_rd13.push(demosaic_bxb_demosaic_bxb_update_0_write13);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write14_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write14, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write14_to_demosaic_bx_rd14.push(demosaic_bxb_demosaic_bxb_update_0_write14);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write15_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write15, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write15_to_demosaic_bx_rd15.push(demosaic_bxb_demosaic_bxb_update_0_write15);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write2_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write2, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2.push(demosaic_bxb_demosaic_bxb_update_0_write2);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write3_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write3, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3.push(demosaic_bxb_demosaic_bxb_update_0_write3);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write4_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write4, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write4_to_demosaic_bx_rd4.push(demosaic_bxb_demosaic_bxb_update_0_write4);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write5_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write5, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write5_to_demosaic_bx_rd5.push(demosaic_bxb_demosaic_bxb_update_0_write5);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write6_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write6, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write6_to_demosaic_bx_rd6.push(demosaic_bxb_demosaic_bxb_update_0_write6);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write7_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write7, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write7_to_demosaic_bx_rd7.push(demosaic_bxb_demosaic_bxb_update_0_write7);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write8_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write8, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write8_to_demosaic_bx_rd8.push(demosaic_bxb_demosaic_bxb_update_0_write8);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write9_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write9, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write9_to_demosaic_bx_rd9.push(demosaic_bxb_demosaic_bxb_update_0_write9);
}

inline hw_uint<16> demosaic_bx_rd0_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd0 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write0 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd1_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd1 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write1 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd10_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd10 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write10 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write10_to_demosaic_bx_rd10.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd11_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd11 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write11 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write11_to_demosaic_bx_rd11.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd12_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd12 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write12 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write12_to_demosaic_bx_rd12.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd13_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd13 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write13 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write13_to_demosaic_bx_rd13.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd14_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd14 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write14 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write14_to_demosaic_bx_rd14.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd15_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd15 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write15 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write15_to_demosaic_bx_rd15.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd2_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd2 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write2 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd3_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd3 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write3 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd4_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd4 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write4 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write4_to_demosaic_bx_rd4.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd5_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd5 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write5 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write5_to_demosaic_bx_rd5.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd6_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd6 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write6 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write6_to_demosaic_bx_rd6.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd7_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd7 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write7 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write7_to_demosaic_bx_rd7.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd8_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd8 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write8 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write8_to_demosaic_bx_rd8.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd9_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd9 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write9 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write9_to_demosaic_bx_rd9.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write9;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_read
//	demosaic_bx_rd0
//	demosaic_bx_rd1
//	demosaic_bx_rd2
//	demosaic_bx_rd3
//	demosaic_bx_rd4
//	demosaic_bx_rd5
//	demosaic_bx_rd6
//	demosaic_bx_rd7
//	demosaic_bx_rd8
//	demosaic_bx_rd9
//	demosaic_bx_rd10
//	demosaic_bx_rd11
//	demosaic_bx_rd12
//	demosaic_bx_rd13
//	demosaic_bx_rd14
//	demosaic_bx_rd15
inline hw_uint<256> demosaic_bxb_demosaic_bx_update_0_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // demosaic_bx_rd0
    // demosaic_bx_rd1
    // demosaic_bx_rd2
    // demosaic_bx_rd3
    // demosaic_bx_rd4
    // demosaic_bx_rd5
    // demosaic_bx_rd6
    // demosaic_bx_rd7
    // demosaic_bx_rd8
    // demosaic_bx_rd9
    // demosaic_bx_rd10
    // demosaic_bx_rd11
    // demosaic_bx_rd12
    // demosaic_bx_rd13
    // demosaic_bx_rd14
    // demosaic_bx_rd15

	hw_uint<256> result;
	hw_uint<16> demosaic_bx_rd0_res = demosaic_bx_rd0_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<0, 256>(result, demosaic_bx_rd0_res);
	hw_uint<16> demosaic_bx_rd1_res = demosaic_bx_rd1_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<16, 256>(result, demosaic_bx_rd1_res);
	hw_uint<16> demosaic_bx_rd2_res = demosaic_bx_rd2_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<32, 256>(result, demosaic_bx_rd2_res);
	hw_uint<16> demosaic_bx_rd3_res = demosaic_bx_rd3_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<48, 256>(result, demosaic_bx_rd3_res);
	hw_uint<16> demosaic_bx_rd4_res = demosaic_bx_rd4_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<64, 256>(result, demosaic_bx_rd4_res);
	hw_uint<16> demosaic_bx_rd5_res = demosaic_bx_rd5_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<80, 256>(result, demosaic_bx_rd5_res);
	hw_uint<16> demosaic_bx_rd6_res = demosaic_bx_rd6_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<96, 256>(result, demosaic_bx_rd6_res);
	hw_uint<16> demosaic_bx_rd7_res = demosaic_bx_rd7_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<112, 256>(result, demosaic_bx_rd7_res);
	hw_uint<16> demosaic_bx_rd8_res = demosaic_bx_rd8_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<128, 256>(result, demosaic_bx_rd8_res);
	hw_uint<16> demosaic_bx_rd9_res = demosaic_bx_rd9_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<144, 256>(result, demosaic_bx_rd9_res);
	hw_uint<16> demosaic_bx_rd10_res = demosaic_bx_rd10_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<160, 256>(result, demosaic_bx_rd10_res);
	hw_uint<16> demosaic_bx_rd11_res = demosaic_bx_rd11_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<176, 256>(result, demosaic_bx_rd11_res);
	hw_uint<16> demosaic_bx_rd12_res = demosaic_bx_rd12_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<192, 256>(result, demosaic_bx_rd12_res);
	hw_uint<16> demosaic_bx_rd13_res = demosaic_bx_rd13_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<208, 256>(result, demosaic_bx_rd13_res);
	hw_uint<16> demosaic_bx_rd14_res = demosaic_bx_rd14_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<224, 256>(result, demosaic_bx_rd14_res);
	hw_uint<16> demosaic_bx_rd15_res = demosaic_bx_rd15_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<240, 256>(result, demosaic_bx_rd15_res);
	return result;
}

// demosaic_bxb_update_0_write
//	demosaic_bxb_demosaic_bxb_update_0_write0
//	demosaic_bxb_demosaic_bxb_update_0_write1
//	demosaic_bxb_demosaic_bxb_update_0_write2
//	demosaic_bxb_demosaic_bxb_update_0_write3
//	demosaic_bxb_demosaic_bxb_update_0_write4
//	demosaic_bxb_demosaic_bxb_update_0_write5
//	demosaic_bxb_demosaic_bxb_update_0_write6
//	demosaic_bxb_demosaic_bxb_update_0_write7
//	demosaic_bxb_demosaic_bxb_update_0_write8
//	demosaic_bxb_demosaic_bxb_update_0_write9
//	demosaic_bxb_demosaic_bxb_update_0_write10
//	demosaic_bxb_demosaic_bxb_update_0_write11
//	demosaic_bxb_demosaic_bxb_update_0_write12
//	demosaic_bxb_demosaic_bxb_update_0_write13
//	demosaic_bxb_demosaic_bxb_update_0_write14
//	demosaic_bxb_demosaic_bxb_update_0_write15
inline void demosaic_bxb_demosaic_bxb_update_0_write_bundle_write(hw_uint<256>& demosaic_bxb_update_0_write, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write0_res = demosaic_bxb_update_0_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_write0_write(demosaic_bxb_demosaic_bxb_update_0_write0_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write1_res = demosaic_bxb_update_0_write.extract<16, 31>();
	demosaic_bxb_demosaic_bxb_update_0_write1_write(demosaic_bxb_demosaic_bxb_update_0_write1_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write2_res = demosaic_bxb_update_0_write.extract<32, 47>();
	demosaic_bxb_demosaic_bxb_update_0_write2_write(demosaic_bxb_demosaic_bxb_update_0_write2_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write3_res = demosaic_bxb_update_0_write.extract<48, 63>();
	demosaic_bxb_demosaic_bxb_update_0_write3_write(demosaic_bxb_demosaic_bxb_update_0_write3_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write4_res = demosaic_bxb_update_0_write.extract<64, 79>();
	demosaic_bxb_demosaic_bxb_update_0_write4_write(demosaic_bxb_demosaic_bxb_update_0_write4_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write5_res = demosaic_bxb_update_0_write.extract<80, 95>();
	demosaic_bxb_demosaic_bxb_update_0_write5_write(demosaic_bxb_demosaic_bxb_update_0_write5_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write6_res = demosaic_bxb_update_0_write.extract<96, 111>();
	demosaic_bxb_demosaic_bxb_update_0_write6_write(demosaic_bxb_demosaic_bxb_update_0_write6_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write7_res = demosaic_bxb_update_0_write.extract<112, 127>();
	demosaic_bxb_demosaic_bxb_update_0_write7_write(demosaic_bxb_demosaic_bxb_update_0_write7_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write8_res = demosaic_bxb_update_0_write.extract<128, 143>();
	demosaic_bxb_demosaic_bxb_update_0_write8_write(demosaic_bxb_demosaic_bxb_update_0_write8_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write9_res = demosaic_bxb_update_0_write.extract<144, 159>();
	demosaic_bxb_demosaic_bxb_update_0_write9_write(demosaic_bxb_demosaic_bxb_update_0_write9_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write10_res = demosaic_bxb_update_0_write.extract<160, 175>();
	demosaic_bxb_demosaic_bxb_update_0_write10_write(demosaic_bxb_demosaic_bxb_update_0_write10_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write11_res = demosaic_bxb_update_0_write.extract<176, 191>();
	demosaic_bxb_demosaic_bxb_update_0_write11_write(demosaic_bxb_demosaic_bxb_update_0_write11_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write12_res = demosaic_bxb_update_0_write.extract<192, 207>();
	demosaic_bxb_demosaic_bxb_update_0_write12_write(demosaic_bxb_demosaic_bxb_update_0_write12_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write13_res = demosaic_bxb_update_0_write.extract<208, 223>();
	demosaic_bxb_demosaic_bxb_update_0_write13_write(demosaic_bxb_demosaic_bxb_update_0_write13_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write14_res = demosaic_bxb_update_0_write.extract<224, 239>();
	demosaic_bxb_demosaic_bxb_update_0_write14_write(demosaic_bxb_demosaic_bxb_update_0_write14_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write15_res = demosaic_bxb_update_0_write.extract<240, 255>();
	demosaic_bxb_demosaic_bxb_update_0_write15_write(demosaic_bxb_demosaic_bxb_update_0_write15_res, demosaic_bxb, d0, d1, dynamic_address);
}

struct demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0_cache {
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

struct demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1_cache {
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

struct demosaic_by_demosaic_by_update_0_write10_to_demosaic_diff_rd10_cache {
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

struct demosaic_by_demosaic_by_update_0_write11_to_demosaic_diff_rd11_cache {
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

struct demosaic_by_demosaic_by_update_0_write12_to_demosaic_diff_rd12_cache {
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

struct demosaic_by_demosaic_by_update_0_write13_to_demosaic_diff_rd13_cache {
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

struct demosaic_by_demosaic_by_update_0_write14_to_demosaic_diff_rd14_cache {
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

struct demosaic_by_demosaic_by_update_0_write15_to_demosaic_diff_rd15_cache {
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

struct demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2_cache {
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

struct demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3_cache {
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

struct demosaic_by_demosaic_by_update_0_write4_to_demosaic_diff_rd4_cache {
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

struct demosaic_by_demosaic_by_update_0_write5_to_demosaic_diff_rd5_cache {
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

struct demosaic_by_demosaic_by_update_0_write6_to_demosaic_diff_rd6_cache {
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

struct demosaic_by_demosaic_by_update_0_write7_to_demosaic_diff_rd7_cache {
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

struct demosaic_by_demosaic_by_update_0_write8_to_demosaic_diff_rd8_cache {
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

struct demosaic_by_demosaic_by_update_0_write9_to_demosaic_diff_rd9_cache {
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

struct demosaic_by_cache {
  // Reader addrs...
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // # of banks: 16
  demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0_cache demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0;
  demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1_cache demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1;
  demosaic_by_demosaic_by_update_0_write10_to_demosaic_diff_rd10_cache demosaic_by_demosaic_by_update_0_write10_to_demosaic_diff_rd10;
  demosaic_by_demosaic_by_update_0_write11_to_demosaic_diff_rd11_cache demosaic_by_demosaic_by_update_0_write11_to_demosaic_diff_rd11;
  demosaic_by_demosaic_by_update_0_write12_to_demosaic_diff_rd12_cache demosaic_by_demosaic_by_update_0_write12_to_demosaic_diff_rd12;
  demosaic_by_demosaic_by_update_0_write13_to_demosaic_diff_rd13_cache demosaic_by_demosaic_by_update_0_write13_to_demosaic_diff_rd13;
  demosaic_by_demosaic_by_update_0_write14_to_demosaic_diff_rd14_cache demosaic_by_demosaic_by_update_0_write14_to_demosaic_diff_rd14;
  demosaic_by_demosaic_by_update_0_write15_to_demosaic_diff_rd15_cache demosaic_by_demosaic_by_update_0_write15_to_demosaic_diff_rd15;
  demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2_cache demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2;
  demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3_cache demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3;
  demosaic_by_demosaic_by_update_0_write4_to_demosaic_diff_rd4_cache demosaic_by_demosaic_by_update_0_write4_to_demosaic_diff_rd4;
  demosaic_by_demosaic_by_update_0_write5_to_demosaic_diff_rd5_cache demosaic_by_demosaic_by_update_0_write5_to_demosaic_diff_rd5;
  demosaic_by_demosaic_by_update_0_write6_to_demosaic_diff_rd6_cache demosaic_by_demosaic_by_update_0_write6_to_demosaic_diff_rd6;
  demosaic_by_demosaic_by_update_0_write7_to_demosaic_diff_rd7_cache demosaic_by_demosaic_by_update_0_write7_to_demosaic_diff_rd7;
  demosaic_by_demosaic_by_update_0_write8_to_demosaic_diff_rd8_cache demosaic_by_demosaic_by_update_0_write8_to_demosaic_diff_rd8;
  demosaic_by_demosaic_by_update_0_write9_to_demosaic_diff_rd9_cache demosaic_by_demosaic_by_update_0_write9_to_demosaic_diff_rd9;
};



inline void demosaic_by_demosaic_by_update_0_write0_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write0, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0.push(demosaic_by_demosaic_by_update_0_write0);
}

inline void demosaic_by_demosaic_by_update_0_write1_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write1, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1.push(demosaic_by_demosaic_by_update_0_write1);
}

inline void demosaic_by_demosaic_by_update_0_write10_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write10, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write10_to_demosaic_diff_rd10.push(demosaic_by_demosaic_by_update_0_write10);
}

inline void demosaic_by_demosaic_by_update_0_write11_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write11, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write11_to_demosaic_diff_rd11.push(demosaic_by_demosaic_by_update_0_write11);
}

inline void demosaic_by_demosaic_by_update_0_write12_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write12, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write12_to_demosaic_diff_rd12.push(demosaic_by_demosaic_by_update_0_write12);
}

inline void demosaic_by_demosaic_by_update_0_write13_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write13, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write13_to_demosaic_diff_rd13.push(demosaic_by_demosaic_by_update_0_write13);
}

inline void demosaic_by_demosaic_by_update_0_write14_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write14, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write14_to_demosaic_diff_rd14.push(demosaic_by_demosaic_by_update_0_write14);
}

inline void demosaic_by_demosaic_by_update_0_write15_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write15, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write15_to_demosaic_diff_rd15.push(demosaic_by_demosaic_by_update_0_write15);
}

inline void demosaic_by_demosaic_by_update_0_write2_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write2, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2.push(demosaic_by_demosaic_by_update_0_write2);
}

inline void demosaic_by_demosaic_by_update_0_write3_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write3, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3.push(demosaic_by_demosaic_by_update_0_write3);
}

inline void demosaic_by_demosaic_by_update_0_write4_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write4, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write4_to_demosaic_diff_rd4.push(demosaic_by_demosaic_by_update_0_write4);
}

inline void demosaic_by_demosaic_by_update_0_write5_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write5, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write5_to_demosaic_diff_rd5.push(demosaic_by_demosaic_by_update_0_write5);
}

inline void demosaic_by_demosaic_by_update_0_write6_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write6, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write6_to_demosaic_diff_rd6.push(demosaic_by_demosaic_by_update_0_write6);
}

inline void demosaic_by_demosaic_by_update_0_write7_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write7, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write7_to_demosaic_diff_rd7.push(demosaic_by_demosaic_by_update_0_write7);
}

inline void demosaic_by_demosaic_by_update_0_write8_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write8, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write8_to_demosaic_diff_rd8.push(demosaic_by_demosaic_by_update_0_write8);
}

inline void demosaic_by_demosaic_by_update_0_write9_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write9, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write9_to_demosaic_diff_rd9.push(demosaic_by_demosaic_by_update_0_write9);
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write0 = demosaic_by.demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd1_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd1 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write1 = demosaic_by.demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd10_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd10 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write10 = demosaic_by.demosaic_by_demosaic_by_update_0_write10_to_demosaic_diff_rd10.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd11_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd11 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write11 = demosaic_by.demosaic_by_demosaic_by_update_0_write11_to_demosaic_diff_rd11.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd12_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd12 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write12 = demosaic_by.demosaic_by_demosaic_by_update_0_write12_to_demosaic_diff_rd12.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd13_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd13 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write13 = demosaic_by.demosaic_by_demosaic_by_update_0_write13_to_demosaic_diff_rd13.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd14_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd14 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write14 = demosaic_by.demosaic_by_demosaic_by_update_0_write14_to_demosaic_diff_rd14.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd15_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd15 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write15 = demosaic_by.demosaic_by_demosaic_by_update_0_write15_to_demosaic_diff_rd15.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd2_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd2 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write2 = demosaic_by.demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd3_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd3 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write3 = demosaic_by.demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd4_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd4 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write4 = demosaic_by.demosaic_by_demosaic_by_update_0_write4_to_demosaic_diff_rd4.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd5_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd5 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write5 = demosaic_by.demosaic_by_demosaic_by_update_0_write5_to_demosaic_diff_rd5.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd6_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd6 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write6 = demosaic_by.demosaic_by_demosaic_by_update_0_write6_to_demosaic_diff_rd6.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd7_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd7 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write7 = demosaic_by.demosaic_by_demosaic_by_update_0_write7_to_demosaic_diff_rd7.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd8_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd8 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write8 = demosaic_by.demosaic_by_demosaic_by_update_0_write8_to_demosaic_diff_rd8.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd9_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd9 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write9 = demosaic_by.demosaic_by_demosaic_by_update_0_write9_to_demosaic_diff_rd9.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write9;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_write
//	demosaic_by_demosaic_by_update_0_write0
//	demosaic_by_demosaic_by_update_0_write1
//	demosaic_by_demosaic_by_update_0_write2
//	demosaic_by_demosaic_by_update_0_write3
//	demosaic_by_demosaic_by_update_0_write4
//	demosaic_by_demosaic_by_update_0_write5
//	demosaic_by_demosaic_by_update_0_write6
//	demosaic_by_demosaic_by_update_0_write7
//	demosaic_by_demosaic_by_update_0_write8
//	demosaic_by_demosaic_by_update_0_write9
//	demosaic_by_demosaic_by_update_0_write10
//	demosaic_by_demosaic_by_update_0_write11
//	demosaic_by_demosaic_by_update_0_write12
//	demosaic_by_demosaic_by_update_0_write13
//	demosaic_by_demosaic_by_update_0_write14
//	demosaic_by_demosaic_by_update_0_write15
inline void demosaic_by_demosaic_by_update_0_write_bundle_write(hw_uint<256>& demosaic_by_update_0_write, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_write0_res = demosaic_by_update_0_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_write0_write(demosaic_by_demosaic_by_update_0_write0_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write1_res = demosaic_by_update_0_write.extract<16, 31>();
	demosaic_by_demosaic_by_update_0_write1_write(demosaic_by_demosaic_by_update_0_write1_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write2_res = demosaic_by_update_0_write.extract<32, 47>();
	demosaic_by_demosaic_by_update_0_write2_write(demosaic_by_demosaic_by_update_0_write2_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write3_res = demosaic_by_update_0_write.extract<48, 63>();
	demosaic_by_demosaic_by_update_0_write3_write(demosaic_by_demosaic_by_update_0_write3_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write4_res = demosaic_by_update_0_write.extract<64, 79>();
	demosaic_by_demosaic_by_update_0_write4_write(demosaic_by_demosaic_by_update_0_write4_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write5_res = demosaic_by_update_0_write.extract<80, 95>();
	demosaic_by_demosaic_by_update_0_write5_write(demosaic_by_demosaic_by_update_0_write5_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write6_res = demosaic_by_update_0_write.extract<96, 111>();
	demosaic_by_demosaic_by_update_0_write6_write(demosaic_by_demosaic_by_update_0_write6_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write7_res = demosaic_by_update_0_write.extract<112, 127>();
	demosaic_by_demosaic_by_update_0_write7_write(demosaic_by_demosaic_by_update_0_write7_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write8_res = demosaic_by_update_0_write.extract<128, 143>();
	demosaic_by_demosaic_by_update_0_write8_write(demosaic_by_demosaic_by_update_0_write8_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write9_res = demosaic_by_update_0_write.extract<144, 159>();
	demosaic_by_demosaic_by_update_0_write9_write(demosaic_by_demosaic_by_update_0_write9_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write10_res = demosaic_by_update_0_write.extract<160, 175>();
	demosaic_by_demosaic_by_update_0_write10_write(demosaic_by_demosaic_by_update_0_write10_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write11_res = demosaic_by_update_0_write.extract<176, 191>();
	demosaic_by_demosaic_by_update_0_write11_write(demosaic_by_demosaic_by_update_0_write11_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write12_res = demosaic_by_update_0_write.extract<192, 207>();
	demosaic_by_demosaic_by_update_0_write12_write(demosaic_by_demosaic_by_update_0_write12_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write13_res = demosaic_by_update_0_write.extract<208, 223>();
	demosaic_by_demosaic_by_update_0_write13_write(demosaic_by_demosaic_by_update_0_write13_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write14_res = demosaic_by_update_0_write.extract<224, 239>();
	demosaic_by_demosaic_by_update_0_write14_write(demosaic_by_demosaic_by_update_0_write14_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write15_res = demosaic_by_update_0_write.extract<240, 255>();
	demosaic_by_demosaic_by_update_0_write15_write(demosaic_by_demosaic_by_update_0_write15_res, demosaic_by, d0, d1, dynamic_address);
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
//	demosaic_diff_rd1
//	demosaic_diff_rd2
//	demosaic_diff_rd3
//	demosaic_diff_rd4
//	demosaic_diff_rd5
//	demosaic_diff_rd6
//	demosaic_diff_rd7
//	demosaic_diff_rd8
//	demosaic_diff_rd9
//	demosaic_diff_rd10
//	demosaic_diff_rd11
//	demosaic_diff_rd12
//	demosaic_diff_rd13
//	demosaic_diff_rd14
//	demosaic_diff_rd15
inline hw_uint<256> demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // demosaic_diff_rd0
    // demosaic_diff_rd1
    // demosaic_diff_rd2
    // demosaic_diff_rd3
    // demosaic_diff_rd4
    // demosaic_diff_rd5
    // demosaic_diff_rd6
    // demosaic_diff_rd7
    // demosaic_diff_rd8
    // demosaic_diff_rd9
    // demosaic_diff_rd10
    // demosaic_diff_rd11
    // demosaic_diff_rd12
    // demosaic_diff_rd13
    // demosaic_diff_rd14
    // demosaic_diff_rd15

	hw_uint<256> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic_by, d0, d1, dynamic_address);
	set_at<0, 256>(result, demosaic_diff_rd0_res);
	hw_uint<16> demosaic_diff_rd1_res = demosaic_diff_rd1_select(demosaic_by, d0, d1, dynamic_address);
	set_at<16, 256>(result, demosaic_diff_rd1_res);
	hw_uint<16> demosaic_diff_rd2_res = demosaic_diff_rd2_select(demosaic_by, d0, d1, dynamic_address);
	set_at<32, 256>(result, demosaic_diff_rd2_res);
	hw_uint<16> demosaic_diff_rd3_res = demosaic_diff_rd3_select(demosaic_by, d0, d1, dynamic_address);
	set_at<48, 256>(result, demosaic_diff_rd3_res);
	hw_uint<16> demosaic_diff_rd4_res = demosaic_diff_rd4_select(demosaic_by, d0, d1, dynamic_address);
	set_at<64, 256>(result, demosaic_diff_rd4_res);
	hw_uint<16> demosaic_diff_rd5_res = demosaic_diff_rd5_select(demosaic_by, d0, d1, dynamic_address);
	set_at<80, 256>(result, demosaic_diff_rd5_res);
	hw_uint<16> demosaic_diff_rd6_res = demosaic_diff_rd6_select(demosaic_by, d0, d1, dynamic_address);
	set_at<96, 256>(result, demosaic_diff_rd6_res);
	hw_uint<16> demosaic_diff_rd7_res = demosaic_diff_rd7_select(demosaic_by, d0, d1, dynamic_address);
	set_at<112, 256>(result, demosaic_diff_rd7_res);
	hw_uint<16> demosaic_diff_rd8_res = demosaic_diff_rd8_select(demosaic_by, d0, d1, dynamic_address);
	set_at<128, 256>(result, demosaic_diff_rd8_res);
	hw_uint<16> demosaic_diff_rd9_res = demosaic_diff_rd9_select(demosaic_by, d0, d1, dynamic_address);
	set_at<144, 256>(result, demosaic_diff_rd9_res);
	hw_uint<16> demosaic_diff_rd10_res = demosaic_diff_rd10_select(demosaic_by, d0, d1, dynamic_address);
	set_at<160, 256>(result, demosaic_diff_rd10_res);
	hw_uint<16> demosaic_diff_rd11_res = demosaic_diff_rd11_select(demosaic_by, d0, d1, dynamic_address);
	set_at<176, 256>(result, demosaic_diff_rd11_res);
	hw_uint<16> demosaic_diff_rd12_res = demosaic_diff_rd12_select(demosaic_by, d0, d1, dynamic_address);
	set_at<192, 256>(result, demosaic_diff_rd12_res);
	hw_uint<16> demosaic_diff_rd13_res = demosaic_diff_rd13_select(demosaic_by, d0, d1, dynamic_address);
	set_at<208, 256>(result, demosaic_diff_rd13_res);
	hw_uint<16> demosaic_diff_rd14_res = demosaic_diff_rd14_select(demosaic_by, d0, d1, dynamic_address);
	set_at<224, 256>(result, demosaic_diff_rd14_res);
	hw_uint<16> demosaic_diff_rd15_res = demosaic_diff_rd15_select(demosaic_by, d0, d1, dynamic_address);
	set_at<240, 256>(result, demosaic_diff_rd15_res);
	return result;
}

struct demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write10_to_demosaic_by_rd10_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write11_to_demosaic_by_rd11_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write12_to_demosaic_by_rd12_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write13_to_demosaic_by_rd13_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write14_to_demosaic_by_rd14_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write15_to_demosaic_by_rd15_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write4_to_demosaic_by_rd4_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write5_to_demosaic_by_rd5_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write6_to_demosaic_by_rd6_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write7_to_demosaic_by_rd7_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write8_to_demosaic_by_rd8_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write9_to_demosaic_by_rd9_cache {
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

struct demosaic_byb_cache {
  // Reader addrs...
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // # of banks: 16
  demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0_cache demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0;
  demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1_cache demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1;
  demosaic_byb_demosaic_byb_update_0_write10_to_demosaic_by_rd10_cache demosaic_byb_demosaic_byb_update_0_write10_to_demosaic_by_rd10;
  demosaic_byb_demosaic_byb_update_0_write11_to_demosaic_by_rd11_cache demosaic_byb_demosaic_byb_update_0_write11_to_demosaic_by_rd11;
  demosaic_byb_demosaic_byb_update_0_write12_to_demosaic_by_rd12_cache demosaic_byb_demosaic_byb_update_0_write12_to_demosaic_by_rd12;
  demosaic_byb_demosaic_byb_update_0_write13_to_demosaic_by_rd13_cache demosaic_byb_demosaic_byb_update_0_write13_to_demosaic_by_rd13;
  demosaic_byb_demosaic_byb_update_0_write14_to_demosaic_by_rd14_cache demosaic_byb_demosaic_byb_update_0_write14_to_demosaic_by_rd14;
  demosaic_byb_demosaic_byb_update_0_write15_to_demosaic_by_rd15_cache demosaic_byb_demosaic_byb_update_0_write15_to_demosaic_by_rd15;
  demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2_cache demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2;
  demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3_cache demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3;
  demosaic_byb_demosaic_byb_update_0_write4_to_demosaic_by_rd4_cache demosaic_byb_demosaic_byb_update_0_write4_to_demosaic_by_rd4;
  demosaic_byb_demosaic_byb_update_0_write5_to_demosaic_by_rd5_cache demosaic_byb_demosaic_byb_update_0_write5_to_demosaic_by_rd5;
  demosaic_byb_demosaic_byb_update_0_write6_to_demosaic_by_rd6_cache demosaic_byb_demosaic_byb_update_0_write6_to_demosaic_by_rd6;
  demosaic_byb_demosaic_byb_update_0_write7_to_demosaic_by_rd7_cache demosaic_byb_demosaic_byb_update_0_write7_to_demosaic_by_rd7;
  demosaic_byb_demosaic_byb_update_0_write8_to_demosaic_by_rd8_cache demosaic_byb_demosaic_byb_update_0_write8_to_demosaic_by_rd8;
  demosaic_byb_demosaic_byb_update_0_write9_to_demosaic_by_rd9_cache demosaic_byb_demosaic_byb_update_0_write9_to_demosaic_by_rd9;
};



inline void demosaic_byb_demosaic_byb_update_0_write0_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write0, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0.push(demosaic_byb_demosaic_byb_update_0_write0);
}

inline void demosaic_byb_demosaic_byb_update_0_write1_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write1, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1.push(demosaic_byb_demosaic_byb_update_0_write1);
}

inline void demosaic_byb_demosaic_byb_update_0_write10_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write10, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write10_to_demosaic_by_rd10.push(demosaic_byb_demosaic_byb_update_0_write10);
}

inline void demosaic_byb_demosaic_byb_update_0_write11_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write11, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write11_to_demosaic_by_rd11.push(demosaic_byb_demosaic_byb_update_0_write11);
}

inline void demosaic_byb_demosaic_byb_update_0_write12_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write12, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write12_to_demosaic_by_rd12.push(demosaic_byb_demosaic_byb_update_0_write12);
}

inline void demosaic_byb_demosaic_byb_update_0_write13_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write13, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write13_to_demosaic_by_rd13.push(demosaic_byb_demosaic_byb_update_0_write13);
}

inline void demosaic_byb_demosaic_byb_update_0_write14_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write14, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write14_to_demosaic_by_rd14.push(demosaic_byb_demosaic_byb_update_0_write14);
}

inline void demosaic_byb_demosaic_byb_update_0_write15_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write15, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write15_to_demosaic_by_rd15.push(demosaic_byb_demosaic_byb_update_0_write15);
}

inline void demosaic_byb_demosaic_byb_update_0_write2_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write2, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2.push(demosaic_byb_demosaic_byb_update_0_write2);
}

inline void demosaic_byb_demosaic_byb_update_0_write3_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write3, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3.push(demosaic_byb_demosaic_byb_update_0_write3);
}

inline void demosaic_byb_demosaic_byb_update_0_write4_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write4, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write4_to_demosaic_by_rd4.push(demosaic_byb_demosaic_byb_update_0_write4);
}

inline void demosaic_byb_demosaic_byb_update_0_write5_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write5, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write5_to_demosaic_by_rd5.push(demosaic_byb_demosaic_byb_update_0_write5);
}

inline void demosaic_byb_demosaic_byb_update_0_write6_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write6, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write6_to_demosaic_by_rd6.push(demosaic_byb_demosaic_byb_update_0_write6);
}

inline void demosaic_byb_demosaic_byb_update_0_write7_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write7, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write7_to_demosaic_by_rd7.push(demosaic_byb_demosaic_byb_update_0_write7);
}

inline void demosaic_byb_demosaic_byb_update_0_write8_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write8, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write8_to_demosaic_by_rd8.push(demosaic_byb_demosaic_byb_update_0_write8);
}

inline void demosaic_byb_demosaic_byb_update_0_write9_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write9, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write9_to_demosaic_by_rd9.push(demosaic_byb_demosaic_byb_update_0_write9);
}

inline hw_uint<16> demosaic_by_rd0_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd0 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write0 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_by_rd1_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd1 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write1 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_by_rd10_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd10 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write10 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write10_to_demosaic_by_rd10.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_by_rd11_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd11 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write11 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write11_to_demosaic_by_rd11.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_by_rd12_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd12 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write12 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write12_to_demosaic_by_rd12.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_by_rd13_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd13 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write13 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write13_to_demosaic_by_rd13.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_by_rd14_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd14 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write14 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write14_to_demosaic_by_rd14.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_by_rd15_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd15 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write15 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write15_to_demosaic_by_rd15.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_by_rd2_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd2 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write2 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_by_rd3_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd3 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write3 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_by_rd4_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd4 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write4 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write4_to_demosaic_by_rd4.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_by_rd5_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd5 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write5 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write5_to_demosaic_by_rd5.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_by_rd6_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd6 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write6 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write6_to_demosaic_by_rd6.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_by_rd7_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd7 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write7 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write7_to_demosaic_by_rd7.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_by_rd8_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd8 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write8 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write8_to_demosaic_by_rd8.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_by_rd9_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd9 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write9 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write9_to_demosaic_by_rd9.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write9;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_read
//	demosaic_by_rd0
//	demosaic_by_rd1
//	demosaic_by_rd2
//	demosaic_by_rd3
//	demosaic_by_rd4
//	demosaic_by_rd5
//	demosaic_by_rd6
//	demosaic_by_rd7
//	demosaic_by_rd8
//	demosaic_by_rd9
//	demosaic_by_rd10
//	demosaic_by_rd11
//	demosaic_by_rd12
//	demosaic_by_rd13
//	demosaic_by_rd14
//	demosaic_by_rd15
inline hw_uint<256> demosaic_byb_demosaic_by_update_0_read_bundle_read(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // demosaic_by_rd0
    // demosaic_by_rd1
    // demosaic_by_rd2
    // demosaic_by_rd3
    // demosaic_by_rd4
    // demosaic_by_rd5
    // demosaic_by_rd6
    // demosaic_by_rd7
    // demosaic_by_rd8
    // demosaic_by_rd9
    // demosaic_by_rd10
    // demosaic_by_rd11
    // demosaic_by_rd12
    // demosaic_by_rd13
    // demosaic_by_rd14
    // demosaic_by_rd15

	hw_uint<256> result;
	hw_uint<16> demosaic_by_rd0_res = demosaic_by_rd0_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<0, 256>(result, demosaic_by_rd0_res);
	hw_uint<16> demosaic_by_rd1_res = demosaic_by_rd1_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<16, 256>(result, demosaic_by_rd1_res);
	hw_uint<16> demosaic_by_rd2_res = demosaic_by_rd2_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<32, 256>(result, demosaic_by_rd2_res);
	hw_uint<16> demosaic_by_rd3_res = demosaic_by_rd3_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<48, 256>(result, demosaic_by_rd3_res);
	hw_uint<16> demosaic_by_rd4_res = demosaic_by_rd4_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<64, 256>(result, demosaic_by_rd4_res);
	hw_uint<16> demosaic_by_rd5_res = demosaic_by_rd5_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<80, 256>(result, demosaic_by_rd5_res);
	hw_uint<16> demosaic_by_rd6_res = demosaic_by_rd6_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<96, 256>(result, demosaic_by_rd6_res);
	hw_uint<16> demosaic_by_rd7_res = demosaic_by_rd7_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<112, 256>(result, demosaic_by_rd7_res);
	hw_uint<16> demosaic_by_rd8_res = demosaic_by_rd8_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<128, 256>(result, demosaic_by_rd8_res);
	hw_uint<16> demosaic_by_rd9_res = demosaic_by_rd9_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<144, 256>(result, demosaic_by_rd9_res);
	hw_uint<16> demosaic_by_rd10_res = demosaic_by_rd10_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<160, 256>(result, demosaic_by_rd10_res);
	hw_uint<16> demosaic_by_rd11_res = demosaic_by_rd11_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<176, 256>(result, demosaic_by_rd11_res);
	hw_uint<16> demosaic_by_rd12_res = demosaic_by_rd12_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<192, 256>(result, demosaic_by_rd12_res);
	hw_uint<16> demosaic_by_rd13_res = demosaic_by_rd13_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<208, 256>(result, demosaic_by_rd13_res);
	hw_uint<16> demosaic_by_rd14_res = demosaic_by_rd14_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<224, 256>(result, demosaic_by_rd14_res);
	hw_uint<16> demosaic_by_rd15_res = demosaic_by_rd15_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<240, 256>(result, demosaic_by_rd15_res);
	return result;
}

// demosaic_byb_update_0_write
//	demosaic_byb_demosaic_byb_update_0_write0
//	demosaic_byb_demosaic_byb_update_0_write1
//	demosaic_byb_demosaic_byb_update_0_write2
//	demosaic_byb_demosaic_byb_update_0_write3
//	demosaic_byb_demosaic_byb_update_0_write4
//	demosaic_byb_demosaic_byb_update_0_write5
//	demosaic_byb_demosaic_byb_update_0_write6
//	demosaic_byb_demosaic_byb_update_0_write7
//	demosaic_byb_demosaic_byb_update_0_write8
//	demosaic_byb_demosaic_byb_update_0_write9
//	demosaic_byb_demosaic_byb_update_0_write10
//	demosaic_byb_demosaic_byb_update_0_write11
//	demosaic_byb_demosaic_byb_update_0_write12
//	demosaic_byb_demosaic_byb_update_0_write13
//	demosaic_byb_demosaic_byb_update_0_write14
//	demosaic_byb_demosaic_byb_update_0_write15
inline void demosaic_byb_demosaic_byb_update_0_write_bundle_write(hw_uint<256>& demosaic_byb_update_0_write, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write0_res = demosaic_byb_update_0_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_write0_write(demosaic_byb_demosaic_byb_update_0_write0_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write1_res = demosaic_byb_update_0_write.extract<16, 31>();
	demosaic_byb_demosaic_byb_update_0_write1_write(demosaic_byb_demosaic_byb_update_0_write1_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write2_res = demosaic_byb_update_0_write.extract<32, 47>();
	demosaic_byb_demosaic_byb_update_0_write2_write(demosaic_byb_demosaic_byb_update_0_write2_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write3_res = demosaic_byb_update_0_write.extract<48, 63>();
	demosaic_byb_demosaic_byb_update_0_write3_write(demosaic_byb_demosaic_byb_update_0_write3_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write4_res = demosaic_byb_update_0_write.extract<64, 79>();
	demosaic_byb_demosaic_byb_update_0_write4_write(demosaic_byb_demosaic_byb_update_0_write4_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write5_res = demosaic_byb_update_0_write.extract<80, 95>();
	demosaic_byb_demosaic_byb_update_0_write5_write(demosaic_byb_demosaic_byb_update_0_write5_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write6_res = demosaic_byb_update_0_write.extract<96, 111>();
	demosaic_byb_demosaic_byb_update_0_write6_write(demosaic_byb_demosaic_byb_update_0_write6_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write7_res = demosaic_byb_update_0_write.extract<112, 127>();
	demosaic_byb_demosaic_byb_update_0_write7_write(demosaic_byb_demosaic_byb_update_0_write7_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write8_res = demosaic_byb_update_0_write.extract<128, 143>();
	demosaic_byb_demosaic_byb_update_0_write8_write(demosaic_byb_demosaic_byb_update_0_write8_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write9_res = demosaic_byb_update_0_write.extract<144, 159>();
	demosaic_byb_demosaic_byb_update_0_write9_write(demosaic_byb_demosaic_byb_update_0_write9_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write10_res = demosaic_byb_update_0_write.extract<160, 175>();
	demosaic_byb_demosaic_byb_update_0_write10_write(demosaic_byb_demosaic_byb_update_0_write10_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write11_res = demosaic_byb_update_0_write.extract<176, 191>();
	demosaic_byb_demosaic_byb_update_0_write11_write(demosaic_byb_demosaic_byb_update_0_write11_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write12_res = demosaic_byb_update_0_write.extract<192, 207>();
	demosaic_byb_demosaic_byb_update_0_write12_write(demosaic_byb_demosaic_byb_update_0_write12_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write13_res = demosaic_byb_update_0_write.extract<208, 223>();
	demosaic_byb_demosaic_byb_update_0_write13_write(demosaic_byb_demosaic_byb_update_0_write13_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write14_res = demosaic_byb_update_0_write.extract<224, 239>();
	demosaic_byb_demosaic_byb_update_0_write14_write(demosaic_byb_demosaic_byb_update_0_write14_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write15_res = demosaic_byb_update_0_write.extract<240, 255>();
	demosaic_byb_demosaic_byb_update_0_write15_write(demosaic_byb_demosaic_byb_update_0_write15_res, demosaic_byb, d0, d1, dynamic_address);
}

struct demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_16_rd0_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_16_rd1_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write10_to_cp_noinit_ln1_16_rd10_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write11_to_cp_noinit_ln1_16_rd11_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write12_to_cp_noinit_ln1_16_rd12_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write13_to_cp_noinit_ln1_16_rd13_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write14_to_cp_noinit_ln1_16_rd14_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write15_to_cp_noinit_ln1_16_rd15_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_16_rd2_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_16_rd3_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write4_to_cp_noinit_ln1_16_rd4_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write5_to_cp_noinit_ln1_16_rd5_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write6_to_cp_noinit_ln1_16_rd6_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write7_to_cp_noinit_ln1_16_rd7_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write8_to_cp_noinit_ln1_16_rd8_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write9_to_cp_noinit_ln1_16_rd9_cache {
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

struct demosaic_diff_cache {
  // Reader addrs...
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // # of banks: 16
  demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_16_rd0_cache demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_16_rd0;
  demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_16_rd1_cache demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_16_rd1;
  demosaic_diff_demosaic_diff_update_0_write10_to_cp_noinit_ln1_16_rd10_cache demosaic_diff_demosaic_diff_update_0_write10_to_cp_noinit_ln1_16_rd10;
  demosaic_diff_demosaic_diff_update_0_write11_to_cp_noinit_ln1_16_rd11_cache demosaic_diff_demosaic_diff_update_0_write11_to_cp_noinit_ln1_16_rd11;
  demosaic_diff_demosaic_diff_update_0_write12_to_cp_noinit_ln1_16_rd12_cache demosaic_diff_demosaic_diff_update_0_write12_to_cp_noinit_ln1_16_rd12;
  demosaic_diff_demosaic_diff_update_0_write13_to_cp_noinit_ln1_16_rd13_cache demosaic_diff_demosaic_diff_update_0_write13_to_cp_noinit_ln1_16_rd13;
  demosaic_diff_demosaic_diff_update_0_write14_to_cp_noinit_ln1_16_rd14_cache demosaic_diff_demosaic_diff_update_0_write14_to_cp_noinit_ln1_16_rd14;
  demosaic_diff_demosaic_diff_update_0_write15_to_cp_noinit_ln1_16_rd15_cache demosaic_diff_demosaic_diff_update_0_write15_to_cp_noinit_ln1_16_rd15;
  demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_16_rd2_cache demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_16_rd2;
  demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_16_rd3_cache demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_16_rd3;
  demosaic_diff_demosaic_diff_update_0_write4_to_cp_noinit_ln1_16_rd4_cache demosaic_diff_demosaic_diff_update_0_write4_to_cp_noinit_ln1_16_rd4;
  demosaic_diff_demosaic_diff_update_0_write5_to_cp_noinit_ln1_16_rd5_cache demosaic_diff_demosaic_diff_update_0_write5_to_cp_noinit_ln1_16_rd5;
  demosaic_diff_demosaic_diff_update_0_write6_to_cp_noinit_ln1_16_rd6_cache demosaic_diff_demosaic_diff_update_0_write6_to_cp_noinit_ln1_16_rd6;
  demosaic_diff_demosaic_diff_update_0_write7_to_cp_noinit_ln1_16_rd7_cache demosaic_diff_demosaic_diff_update_0_write7_to_cp_noinit_ln1_16_rd7;
  demosaic_diff_demosaic_diff_update_0_write8_to_cp_noinit_ln1_16_rd8_cache demosaic_diff_demosaic_diff_update_0_write8_to_cp_noinit_ln1_16_rd8;
  demosaic_diff_demosaic_diff_update_0_write9_to_cp_noinit_ln1_16_rd9_cache demosaic_diff_demosaic_diff_update_0_write9_to_cp_noinit_ln1_16_rd9;
};



inline void demosaic_diff_demosaic_diff_update_0_write0_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write0, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_16_rd0.push(demosaic_diff_demosaic_diff_update_0_write0);
}

inline void demosaic_diff_demosaic_diff_update_0_write1_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write1, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_16_rd1.push(demosaic_diff_demosaic_diff_update_0_write1);
}

inline void demosaic_diff_demosaic_diff_update_0_write10_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write10, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write10_to_cp_noinit_ln1_16_rd10.push(demosaic_diff_demosaic_diff_update_0_write10);
}

inline void demosaic_diff_demosaic_diff_update_0_write11_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write11, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write11_to_cp_noinit_ln1_16_rd11.push(demosaic_diff_demosaic_diff_update_0_write11);
}

inline void demosaic_diff_demosaic_diff_update_0_write12_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write12, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write12_to_cp_noinit_ln1_16_rd12.push(demosaic_diff_demosaic_diff_update_0_write12);
}

inline void demosaic_diff_demosaic_diff_update_0_write13_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write13, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write13_to_cp_noinit_ln1_16_rd13.push(demosaic_diff_demosaic_diff_update_0_write13);
}

inline void demosaic_diff_demosaic_diff_update_0_write14_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write14, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write14_to_cp_noinit_ln1_16_rd14.push(demosaic_diff_demosaic_diff_update_0_write14);
}

inline void demosaic_diff_demosaic_diff_update_0_write15_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write15, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write15_to_cp_noinit_ln1_16_rd15.push(demosaic_diff_demosaic_diff_update_0_write15);
}

inline void demosaic_diff_demosaic_diff_update_0_write2_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write2, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_16_rd2.push(demosaic_diff_demosaic_diff_update_0_write2);
}

inline void demosaic_diff_demosaic_diff_update_0_write3_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write3, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_16_rd3.push(demosaic_diff_demosaic_diff_update_0_write3);
}

inline void demosaic_diff_demosaic_diff_update_0_write4_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write4, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write4_to_cp_noinit_ln1_16_rd4.push(demosaic_diff_demosaic_diff_update_0_write4);
}

inline void demosaic_diff_demosaic_diff_update_0_write5_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write5, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write5_to_cp_noinit_ln1_16_rd5.push(demosaic_diff_demosaic_diff_update_0_write5);
}

inline void demosaic_diff_demosaic_diff_update_0_write6_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write6, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write6_to_cp_noinit_ln1_16_rd6.push(demosaic_diff_demosaic_diff_update_0_write6);
}

inline void demosaic_diff_demosaic_diff_update_0_write7_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write7, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write7_to_cp_noinit_ln1_16_rd7.push(demosaic_diff_demosaic_diff_update_0_write7);
}

inline void demosaic_diff_demosaic_diff_update_0_write8_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write8, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write8_to_cp_noinit_ln1_16_rd8.push(demosaic_diff_demosaic_diff_update_0_write8);
}

inline void demosaic_diff_demosaic_diff_update_0_write9_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write9, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write9_to_cp_noinit_ln1_16_rd9.push(demosaic_diff_demosaic_diff_update_0_write9);
}

inline hw_uint<16> cp_noinit_ln1_16_rd0_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd0 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write0 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_16_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write0;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd1_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd1 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write1 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_16_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write1;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd10_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd10 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write10 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write10_to_cp_noinit_ln1_16_rd10.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write10;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd11_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd11 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write11 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write11_to_cp_noinit_ln1_16_rd11.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write11;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd12_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd12 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write12 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write12_to_cp_noinit_ln1_16_rd12.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write12;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd13_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd13 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write13 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write13_to_cp_noinit_ln1_16_rd13.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write13;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd14_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd14 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write14 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write14_to_cp_noinit_ln1_16_rd14.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write14;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd15_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd15 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write15 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write15_to_cp_noinit_ln1_16_rd15.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write15;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd2_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd2 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write2 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_16_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write2;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd3_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd3 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write3 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_16_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write3;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd4_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd4 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write4 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write4_to_cp_noinit_ln1_16_rd4.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write4;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd5_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd5 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write5 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write5_to_cp_noinit_ln1_16_rd5.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write5;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd6_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd6 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write6 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write6_to_cp_noinit_ln1_16_rd6.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write6;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd7_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd7 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write7 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write7_to_cp_noinit_ln1_16_rd7.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write7;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd8_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd8 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write8 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write8_to_cp_noinit_ln1_16_rd8.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write8;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_16_rd9_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_ln1_16_rd9 read pattern: { cp_noinit_ln1_16_update_0[d0, d1] -> demosaic_diff[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write9 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write9_to_cp_noinit_ln1_16_rd9.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write9;
  return 0;
}

// # of bundles = 2
// cp_noinit_ln1_16_update_0_read
//	cp_noinit_ln1_16_rd0
//	cp_noinit_ln1_16_rd1
//	cp_noinit_ln1_16_rd2
//	cp_noinit_ln1_16_rd3
//	cp_noinit_ln1_16_rd4
//	cp_noinit_ln1_16_rd5
//	cp_noinit_ln1_16_rd6
//	cp_noinit_ln1_16_rd7
//	cp_noinit_ln1_16_rd8
//	cp_noinit_ln1_16_rd9
//	cp_noinit_ln1_16_rd10
//	cp_noinit_ln1_16_rd11
//	cp_noinit_ln1_16_rd12
//	cp_noinit_ln1_16_rd13
//	cp_noinit_ln1_16_rd14
//	cp_noinit_ln1_16_rd15
inline hw_uint<256> demosaic_diff_cp_noinit_ln1_16_update_0_read_bundle_read(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // cp_noinit_ln1_16_rd0
    // cp_noinit_ln1_16_rd1
    // cp_noinit_ln1_16_rd2
    // cp_noinit_ln1_16_rd3
    // cp_noinit_ln1_16_rd4
    // cp_noinit_ln1_16_rd5
    // cp_noinit_ln1_16_rd6
    // cp_noinit_ln1_16_rd7
    // cp_noinit_ln1_16_rd8
    // cp_noinit_ln1_16_rd9
    // cp_noinit_ln1_16_rd10
    // cp_noinit_ln1_16_rd11
    // cp_noinit_ln1_16_rd12
    // cp_noinit_ln1_16_rd13
    // cp_noinit_ln1_16_rd14
    // cp_noinit_ln1_16_rd15

	hw_uint<256> result;
	hw_uint<16> cp_noinit_ln1_16_rd0_res = cp_noinit_ln1_16_rd0_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<0, 256>(result, cp_noinit_ln1_16_rd0_res);
	hw_uint<16> cp_noinit_ln1_16_rd1_res = cp_noinit_ln1_16_rd1_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<16, 256>(result, cp_noinit_ln1_16_rd1_res);
	hw_uint<16> cp_noinit_ln1_16_rd2_res = cp_noinit_ln1_16_rd2_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<32, 256>(result, cp_noinit_ln1_16_rd2_res);
	hw_uint<16> cp_noinit_ln1_16_rd3_res = cp_noinit_ln1_16_rd3_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<48, 256>(result, cp_noinit_ln1_16_rd3_res);
	hw_uint<16> cp_noinit_ln1_16_rd4_res = cp_noinit_ln1_16_rd4_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<64, 256>(result, cp_noinit_ln1_16_rd4_res);
	hw_uint<16> cp_noinit_ln1_16_rd5_res = cp_noinit_ln1_16_rd5_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<80, 256>(result, cp_noinit_ln1_16_rd5_res);
	hw_uint<16> cp_noinit_ln1_16_rd6_res = cp_noinit_ln1_16_rd6_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<96, 256>(result, cp_noinit_ln1_16_rd6_res);
	hw_uint<16> cp_noinit_ln1_16_rd7_res = cp_noinit_ln1_16_rd7_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<112, 256>(result, cp_noinit_ln1_16_rd7_res);
	hw_uint<16> cp_noinit_ln1_16_rd8_res = cp_noinit_ln1_16_rd8_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<128, 256>(result, cp_noinit_ln1_16_rd8_res);
	hw_uint<16> cp_noinit_ln1_16_rd9_res = cp_noinit_ln1_16_rd9_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<144, 256>(result, cp_noinit_ln1_16_rd9_res);
	hw_uint<16> cp_noinit_ln1_16_rd10_res = cp_noinit_ln1_16_rd10_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<160, 256>(result, cp_noinit_ln1_16_rd10_res);
	hw_uint<16> cp_noinit_ln1_16_rd11_res = cp_noinit_ln1_16_rd11_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<176, 256>(result, cp_noinit_ln1_16_rd11_res);
	hw_uint<16> cp_noinit_ln1_16_rd12_res = cp_noinit_ln1_16_rd12_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<192, 256>(result, cp_noinit_ln1_16_rd12_res);
	hw_uint<16> cp_noinit_ln1_16_rd13_res = cp_noinit_ln1_16_rd13_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<208, 256>(result, cp_noinit_ln1_16_rd13_res);
	hw_uint<16> cp_noinit_ln1_16_rd14_res = cp_noinit_ln1_16_rd14_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<224, 256>(result, cp_noinit_ln1_16_rd14_res);
	hw_uint<16> cp_noinit_ln1_16_rd15_res = cp_noinit_ln1_16_rd15_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<240, 256>(result, cp_noinit_ln1_16_rd15_res);
	return result;
}

// demosaic_diff_update_0_write
//	demosaic_diff_demosaic_diff_update_0_write0
//	demosaic_diff_demosaic_diff_update_0_write1
//	demosaic_diff_demosaic_diff_update_0_write2
//	demosaic_diff_demosaic_diff_update_0_write3
//	demosaic_diff_demosaic_diff_update_0_write4
//	demosaic_diff_demosaic_diff_update_0_write5
//	demosaic_diff_demosaic_diff_update_0_write6
//	demosaic_diff_demosaic_diff_update_0_write7
//	demosaic_diff_demosaic_diff_update_0_write8
//	demosaic_diff_demosaic_diff_update_0_write9
//	demosaic_diff_demosaic_diff_update_0_write10
//	demosaic_diff_demosaic_diff_update_0_write11
//	demosaic_diff_demosaic_diff_update_0_write12
//	demosaic_diff_demosaic_diff_update_0_write13
//	demosaic_diff_demosaic_diff_update_0_write14
//	demosaic_diff_demosaic_diff_update_0_write15
inline void demosaic_diff_demosaic_diff_update_0_write_bundle_write(hw_uint<256>& demosaic_diff_update_0_write, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write0_res = demosaic_diff_update_0_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_write0_write(demosaic_diff_demosaic_diff_update_0_write0_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write1_res = demosaic_diff_update_0_write.extract<16, 31>();
	demosaic_diff_demosaic_diff_update_0_write1_write(demosaic_diff_demosaic_diff_update_0_write1_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write2_res = demosaic_diff_update_0_write.extract<32, 47>();
	demosaic_diff_demosaic_diff_update_0_write2_write(demosaic_diff_demosaic_diff_update_0_write2_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write3_res = demosaic_diff_update_0_write.extract<48, 63>();
	demosaic_diff_demosaic_diff_update_0_write3_write(demosaic_diff_demosaic_diff_update_0_write3_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write4_res = demosaic_diff_update_0_write.extract<64, 79>();
	demosaic_diff_demosaic_diff_update_0_write4_write(demosaic_diff_demosaic_diff_update_0_write4_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write5_res = demosaic_diff_update_0_write.extract<80, 95>();
	demosaic_diff_demosaic_diff_update_0_write5_write(demosaic_diff_demosaic_diff_update_0_write5_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write6_res = demosaic_diff_update_0_write.extract<96, 111>();
	demosaic_diff_demosaic_diff_update_0_write6_write(demosaic_diff_demosaic_diff_update_0_write6_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write7_res = demosaic_diff_update_0_write.extract<112, 127>();
	demosaic_diff_demosaic_diff_update_0_write7_write(demosaic_diff_demosaic_diff_update_0_write7_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write8_res = demosaic_diff_update_0_write.extract<128, 143>();
	demosaic_diff_demosaic_diff_update_0_write8_write(demosaic_diff_demosaic_diff_update_0_write8_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write9_res = demosaic_diff_update_0_write.extract<144, 159>();
	demosaic_diff_demosaic_diff_update_0_write9_write(demosaic_diff_demosaic_diff_update_0_write9_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write10_res = demosaic_diff_update_0_write.extract<160, 175>();
	demosaic_diff_demosaic_diff_update_0_write10_write(demosaic_diff_demosaic_diff_update_0_write10_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write11_res = demosaic_diff_update_0_write.extract<176, 191>();
	demosaic_diff_demosaic_diff_update_0_write11_write(demosaic_diff_demosaic_diff_update_0_write11_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write12_res = demosaic_diff_update_0_write.extract<192, 207>();
	demosaic_diff_demosaic_diff_update_0_write12_write(demosaic_diff_demosaic_diff_update_0_write12_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write13_res = demosaic_diff_update_0_write.extract<208, 223>();
	demosaic_diff_demosaic_diff_update_0_write13_write(demosaic_diff_demosaic_diff_update_0_write13_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write14_res = demosaic_diff_update_0_write.extract<224, 239>();
	demosaic_diff_demosaic_diff_update_0_write14_write(demosaic_diff_demosaic_diff_update_0_write14_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write15_res = demosaic_diff_update_0_write.extract<240, 255>();
	demosaic_diff_demosaic_diff_update_0_write15_write(demosaic_diff_demosaic_diff_update_0_write15_res, demosaic_diff, d0, d1, dynamic_address);
}

struct demosaicb_demosaicb_update_0_write0_to_demosaic_rd0_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write1_to_demosaic_rd1_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write10_to_demosaic_rd10_cache {
	// RAM Box: {[10, 1930], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write11_to_demosaic_rd11_cache {
	// RAM Box: {[11, 1931], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write12_to_demosaic_rd12_cache {
	// RAM Box: {[12, 1932], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write13_to_demosaic_rd13_cache {
	// RAM Box: {[13, 1933], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write14_to_demosaic_rd14_cache {
	// RAM Box: {[14, 1934], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write15_to_demosaic_rd15_cache {
	// RAM Box: {[15, 1935], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write2_to_demosaic_rd2_cache {
	// RAM Box: {[2, 1922], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write3_to_demosaic_rd3_cache {
	// RAM Box: {[3, 1923], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write4_to_demosaic_rd4_cache {
	// RAM Box: {[4, 1924], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write5_to_demosaic_rd5_cache {
	// RAM Box: {[5, 1925], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write6_to_demosaic_rd6_cache {
	// RAM Box: {[6, 1926], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write7_to_demosaic_rd7_cache {
	// RAM Box: {[7, 1927], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write8_to_demosaic_rd8_cache {
	// RAM Box: {[8, 1928], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write9_to_demosaic_rd9_cache {
	// RAM Box: {[9, 1929], [0, 1081]}
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

struct demosaicb_cache {
  // Reader addrs...
    // { demosaic_update_0[d0, d1] -> demosaicb[16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[15 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // # of banks: 16
  demosaicb_demosaicb_update_0_write0_to_demosaic_rd0_cache demosaicb_demosaicb_update_0_write0_to_demosaic_rd0;
  demosaicb_demosaicb_update_0_write1_to_demosaic_rd1_cache demosaicb_demosaicb_update_0_write1_to_demosaic_rd1;
  demosaicb_demosaicb_update_0_write10_to_demosaic_rd10_cache demosaicb_demosaicb_update_0_write10_to_demosaic_rd10;
  demosaicb_demosaicb_update_0_write11_to_demosaic_rd11_cache demosaicb_demosaicb_update_0_write11_to_demosaic_rd11;
  demosaicb_demosaicb_update_0_write12_to_demosaic_rd12_cache demosaicb_demosaicb_update_0_write12_to_demosaic_rd12;
  demosaicb_demosaicb_update_0_write13_to_demosaic_rd13_cache demosaicb_demosaicb_update_0_write13_to_demosaic_rd13;
  demosaicb_demosaicb_update_0_write14_to_demosaic_rd14_cache demosaicb_demosaicb_update_0_write14_to_demosaic_rd14;
  demosaicb_demosaicb_update_0_write15_to_demosaic_rd15_cache demosaicb_demosaicb_update_0_write15_to_demosaic_rd15;
  demosaicb_demosaicb_update_0_write2_to_demosaic_rd2_cache demosaicb_demosaicb_update_0_write2_to_demosaic_rd2;
  demosaicb_demosaicb_update_0_write3_to_demosaic_rd3_cache demosaicb_demosaicb_update_0_write3_to_demosaic_rd3;
  demosaicb_demosaicb_update_0_write4_to_demosaic_rd4_cache demosaicb_demosaicb_update_0_write4_to_demosaic_rd4;
  demosaicb_demosaicb_update_0_write5_to_demosaic_rd5_cache demosaicb_demosaicb_update_0_write5_to_demosaic_rd5;
  demosaicb_demosaicb_update_0_write6_to_demosaic_rd6_cache demosaicb_demosaicb_update_0_write6_to_demosaic_rd6;
  demosaicb_demosaicb_update_0_write7_to_demosaic_rd7_cache demosaicb_demosaicb_update_0_write7_to_demosaic_rd7;
  demosaicb_demosaicb_update_0_write8_to_demosaic_rd8_cache demosaicb_demosaicb_update_0_write8_to_demosaic_rd8;
  demosaicb_demosaicb_update_0_write9_to_demosaic_rd9_cache demosaicb_demosaicb_update_0_write9_to_demosaic_rd9;
};



inline void demosaicb_demosaicb_update_0_write0_write(hw_uint<16>& demosaicb_demosaicb_update_0_write0, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write0_to_demosaic_rd0.push(demosaicb_demosaicb_update_0_write0);
}

inline void demosaicb_demosaicb_update_0_write1_write(hw_uint<16>& demosaicb_demosaicb_update_0_write1, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write1_to_demosaic_rd1.push(demosaicb_demosaicb_update_0_write1);
}

inline void demosaicb_demosaicb_update_0_write10_write(hw_uint<16>& demosaicb_demosaicb_update_0_write10, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write10_to_demosaic_rd10.push(demosaicb_demosaicb_update_0_write10);
}

inline void demosaicb_demosaicb_update_0_write11_write(hw_uint<16>& demosaicb_demosaicb_update_0_write11, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write11_to_demosaic_rd11.push(demosaicb_demosaicb_update_0_write11);
}

inline void demosaicb_demosaicb_update_0_write12_write(hw_uint<16>& demosaicb_demosaicb_update_0_write12, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write12_to_demosaic_rd12.push(demosaicb_demosaicb_update_0_write12);
}

inline void demosaicb_demosaicb_update_0_write13_write(hw_uint<16>& demosaicb_demosaicb_update_0_write13, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write13_to_demosaic_rd13.push(demosaicb_demosaicb_update_0_write13);
}

inline void demosaicb_demosaicb_update_0_write14_write(hw_uint<16>& demosaicb_demosaicb_update_0_write14, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write14_to_demosaic_rd14.push(demosaicb_demosaicb_update_0_write14);
}

inline void demosaicb_demosaicb_update_0_write15_write(hw_uint<16>& demosaicb_demosaicb_update_0_write15, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write15_to_demosaic_rd15.push(demosaicb_demosaicb_update_0_write15);
}

inline void demosaicb_demosaicb_update_0_write2_write(hw_uint<16>& demosaicb_demosaicb_update_0_write2, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write2_to_demosaic_rd2.push(demosaicb_demosaicb_update_0_write2);
}

inline void demosaicb_demosaicb_update_0_write3_write(hw_uint<16>& demosaicb_demosaicb_update_0_write3, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write3_to_demosaic_rd3.push(demosaicb_demosaicb_update_0_write3);
}

inline void demosaicb_demosaicb_update_0_write4_write(hw_uint<16>& demosaicb_demosaicb_update_0_write4, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write4_to_demosaic_rd4.push(demosaicb_demosaicb_update_0_write4);
}

inline void demosaicb_demosaicb_update_0_write5_write(hw_uint<16>& demosaicb_demosaicb_update_0_write5, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write5_to_demosaic_rd5.push(demosaicb_demosaicb_update_0_write5);
}

inline void demosaicb_demosaicb_update_0_write6_write(hw_uint<16>& demosaicb_demosaicb_update_0_write6, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write6_to_demosaic_rd6.push(demosaicb_demosaicb_update_0_write6);
}

inline void demosaicb_demosaicb_update_0_write7_write(hw_uint<16>& demosaicb_demosaicb_update_0_write7, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write7_to_demosaic_rd7.push(demosaicb_demosaicb_update_0_write7);
}

inline void demosaicb_demosaicb_update_0_write8_write(hw_uint<16>& demosaicb_demosaicb_update_0_write8, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write8_to_demosaic_rd8.push(demosaicb_demosaicb_update_0_write8);
}

inline void demosaicb_demosaicb_update_0_write9_write(hw_uint<16>& demosaicb_demosaicb_update_0_write9, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write9_to_demosaic_rd9.push(demosaicb_demosaicb_update_0_write9);
}

inline hw_uint<16> demosaic_rd0_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd0 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write0 = demosaicb.demosaicb_demosaicb_update_0_write0_to_demosaic_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_rd1_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd1 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write1 = demosaicb.demosaicb_demosaicb_update_0_write1_to_demosaic_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_rd10_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd10 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write10 = demosaicb.demosaicb_demosaicb_update_0_write10_to_demosaic_rd10.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaic_rd11_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd11 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write11 = demosaicb.demosaicb_demosaicb_update_0_write11_to_demosaic_rd11.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaic_rd12_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd12 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write12 = demosaicb.demosaicb_demosaicb_update_0_write12_to_demosaic_rd12.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaic_rd13_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd13 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write13 = demosaicb.demosaicb_demosaicb_update_0_write13_to_demosaic_rd13.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaic_rd14_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd14 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write14 = demosaicb.demosaicb_demosaicb_update_0_write14_to_demosaic_rd14.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaic_rd15_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd15 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[15 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write15 = demosaicb.demosaicb_demosaicb_update_0_write15_to_demosaic_rd15.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaic_rd2_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd2 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write2 = demosaicb.demosaicb_demosaicb_update_0_write2_to_demosaic_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_rd3_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd3 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write3 = demosaicb.demosaicb_demosaicb_update_0_write3_to_demosaic_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_rd4_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd4 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write4 = demosaicb.demosaicb_demosaicb_update_0_write4_to_demosaic_rd4.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaic_rd5_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd5 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write5 = demosaicb.demosaicb_demosaicb_update_0_write5_to_demosaic_rd5.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaic_rd6_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd6 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write6 = demosaicb.demosaicb_demosaicb_update_0_write6_to_demosaic_rd6.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaic_rd7_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd7 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write7 = demosaicb.demosaicb_demosaicb_update_0_write7_to_demosaic_rd7.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaic_rd8_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd8 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write8 = demosaicb.demosaicb_demosaicb_update_0_write8_to_demosaic_rd8.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaic_rd9_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd9 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write9 = demosaicb.demosaicb_demosaicb_update_0_write9_to_demosaic_rd9.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write9;
  return 0;
}

// # of bundles = 2
// demosaic_update_0_read
//	demosaic_rd0
//	demosaic_rd1
//	demosaic_rd2
//	demosaic_rd3
//	demosaic_rd4
//	demosaic_rd5
//	demosaic_rd6
//	demosaic_rd7
//	demosaic_rd8
//	demosaic_rd9
//	demosaic_rd10
//	demosaic_rd11
//	demosaic_rd12
//	demosaic_rd13
//	demosaic_rd14
//	demosaic_rd15
inline hw_uint<256> demosaicb_demosaic_update_0_read_bundle_read(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // demosaic_rd0
    // demosaic_rd1
    // demosaic_rd2
    // demosaic_rd3
    // demosaic_rd4
    // demosaic_rd5
    // demosaic_rd6
    // demosaic_rd7
    // demosaic_rd8
    // demosaic_rd9
    // demosaic_rd10
    // demosaic_rd11
    // demosaic_rd12
    // demosaic_rd13
    // demosaic_rd14
    // demosaic_rd15

	hw_uint<256> result;
	hw_uint<16> demosaic_rd0_res = demosaic_rd0_select(demosaicb, d0, d1, dynamic_address);
	set_at<0, 256>(result, demosaic_rd0_res);
	hw_uint<16> demosaic_rd1_res = demosaic_rd1_select(demosaicb, d0, d1, dynamic_address);
	set_at<16, 256>(result, demosaic_rd1_res);
	hw_uint<16> demosaic_rd2_res = demosaic_rd2_select(demosaicb, d0, d1, dynamic_address);
	set_at<32, 256>(result, demosaic_rd2_res);
	hw_uint<16> demosaic_rd3_res = demosaic_rd3_select(demosaicb, d0, d1, dynamic_address);
	set_at<48, 256>(result, demosaic_rd3_res);
	hw_uint<16> demosaic_rd4_res = demosaic_rd4_select(demosaicb, d0, d1, dynamic_address);
	set_at<64, 256>(result, demosaic_rd4_res);
	hw_uint<16> demosaic_rd5_res = demosaic_rd5_select(demosaicb, d0, d1, dynamic_address);
	set_at<80, 256>(result, demosaic_rd5_res);
	hw_uint<16> demosaic_rd6_res = demosaic_rd6_select(demosaicb, d0, d1, dynamic_address);
	set_at<96, 256>(result, demosaic_rd6_res);
	hw_uint<16> demosaic_rd7_res = demosaic_rd7_select(demosaicb, d0, d1, dynamic_address);
	set_at<112, 256>(result, demosaic_rd7_res);
	hw_uint<16> demosaic_rd8_res = demosaic_rd8_select(demosaicb, d0, d1, dynamic_address);
	set_at<128, 256>(result, demosaic_rd8_res);
	hw_uint<16> demosaic_rd9_res = demosaic_rd9_select(demosaicb, d0, d1, dynamic_address);
	set_at<144, 256>(result, demosaic_rd9_res);
	hw_uint<16> demosaic_rd10_res = demosaic_rd10_select(demosaicb, d0, d1, dynamic_address);
	set_at<160, 256>(result, demosaic_rd10_res);
	hw_uint<16> demosaic_rd11_res = demosaic_rd11_select(demosaicb, d0, d1, dynamic_address);
	set_at<176, 256>(result, demosaic_rd11_res);
	hw_uint<16> demosaic_rd12_res = demosaic_rd12_select(demosaicb, d0, d1, dynamic_address);
	set_at<192, 256>(result, demosaic_rd12_res);
	hw_uint<16> demosaic_rd13_res = demosaic_rd13_select(demosaicb, d0, d1, dynamic_address);
	set_at<208, 256>(result, demosaic_rd13_res);
	hw_uint<16> demosaic_rd14_res = demosaic_rd14_select(demosaicb, d0, d1, dynamic_address);
	set_at<224, 256>(result, demosaic_rd14_res);
	hw_uint<16> demosaic_rd15_res = demosaic_rd15_select(demosaicb, d0, d1, dynamic_address);
	set_at<240, 256>(result, demosaic_rd15_res);
	return result;
}

// demosaicb_update_0_write
//	demosaicb_demosaicb_update_0_write0
//	demosaicb_demosaicb_update_0_write1
//	demosaicb_demosaicb_update_0_write2
//	demosaicb_demosaicb_update_0_write3
//	demosaicb_demosaicb_update_0_write4
//	demosaicb_demosaicb_update_0_write5
//	demosaicb_demosaicb_update_0_write6
//	demosaicb_demosaicb_update_0_write7
//	demosaicb_demosaicb_update_0_write8
//	demosaicb_demosaicb_update_0_write9
//	demosaicb_demosaicb_update_0_write10
//	demosaicb_demosaicb_update_0_write11
//	demosaicb_demosaicb_update_0_write12
//	demosaicb_demosaicb_update_0_write13
//	demosaicb_demosaicb_update_0_write14
//	demosaicb_demosaicb_update_0_write15
inline void demosaicb_demosaicb_update_0_write_bundle_write(hw_uint<256>& demosaicb_update_0_write, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaicb_demosaicb_update_0_write0_res = demosaicb_update_0_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_write0_write(demosaicb_demosaicb_update_0_write0_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write1_res = demosaicb_update_0_write.extract<16, 31>();
	demosaicb_demosaicb_update_0_write1_write(demosaicb_demosaicb_update_0_write1_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write2_res = demosaicb_update_0_write.extract<32, 47>();
	demosaicb_demosaicb_update_0_write2_write(demosaicb_demosaicb_update_0_write2_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write3_res = demosaicb_update_0_write.extract<48, 63>();
	demosaicb_demosaicb_update_0_write3_write(demosaicb_demosaicb_update_0_write3_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write4_res = demosaicb_update_0_write.extract<64, 79>();
	demosaicb_demosaicb_update_0_write4_write(demosaicb_demosaicb_update_0_write4_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write5_res = demosaicb_update_0_write.extract<80, 95>();
	demosaicb_demosaicb_update_0_write5_write(demosaicb_demosaicb_update_0_write5_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write6_res = demosaicb_update_0_write.extract<96, 111>();
	demosaicb_demosaicb_update_0_write6_write(demosaicb_demosaicb_update_0_write6_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write7_res = demosaicb_update_0_write.extract<112, 127>();
	demosaicb_demosaicb_update_0_write7_write(demosaicb_demosaicb_update_0_write7_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write8_res = demosaicb_update_0_write.extract<128, 143>();
	demosaicb_demosaicb_update_0_write8_write(demosaicb_demosaicb_update_0_write8_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write9_res = demosaicb_update_0_write.extract<144, 159>();
	demosaicb_demosaicb_update_0_write9_write(demosaicb_demosaicb_update_0_write9_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write10_res = demosaicb_update_0_write.extract<160, 175>();
	demosaicb_demosaicb_update_0_write10_write(demosaicb_demosaicb_update_0_write10_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write11_res = demosaicb_update_0_write.extract<176, 191>();
	demosaicb_demosaicb_update_0_write11_write(demosaicb_demosaicb_update_0_write11_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write12_res = demosaicb_update_0_write.extract<192, 207>();
	demosaicb_demosaicb_update_0_write12_write(demosaicb_demosaicb_update_0_write12_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write13_res = demosaicb_update_0_write.extract<208, 223>();
	demosaicb_demosaicb_update_0_write13_write(demosaicb_demosaicb_update_0_write13_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write14_res = demosaicb_update_0_write.extract<224, 239>();
	demosaicb_demosaicb_update_0_write14_write(demosaicb_demosaicb_update_0_write14_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write15_res = demosaicb_update_0_write.extract<240, 255>();
	demosaicb_demosaicb_update_0_write15_write(demosaicb_demosaicb_update_0_write15_res, demosaicb, d0, d1, dynamic_address);
}

struct denoise_denoise_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 1936], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 6
  // 0, 1, 123, 124, 246, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 121> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_124() {
		return f6;
	}

	inline hw_uint<16> peek_245() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_246() {
		return f8;
	}

	inline hw_uint<16> peek_247() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct denoise_denoise_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[1, 1921], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write10_merged_banks_9_cache {
	// RAM Box: {[10, 1930], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write11_merged_banks_9_cache {
	// RAM Box: {[11, 1931], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write12_merged_banks_9_cache {
	// RAM Box: {[12, 1932], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write13_merged_banks_9_cache {
	// RAM Box: {[13, 1933], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write14_merged_banks_9_cache {
	// RAM Box: {[14, 1934], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write15_merged_banks_9_cache {
	// RAM Box: {[-1, 1935], [-1, 1082]}
	// Capacity: 249
	// # of read delays: 7
  // 0, 1, 2, 124, 125, 247, 248
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 121> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 121> f9;
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

	inline hw_uint<16> peek_123() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_124() {
		return f6;
	}

	inline hw_uint<16> peek_125() {
		return f8;
	}

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_247() {
		return f10;
	}

	inline hw_uint<16> peek_248() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
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

struct denoise_denoise_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[2, 1922], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[3, 1923], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[4, 1924], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[5, 1925], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[6, 1926], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[7, 1927], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write8_merged_banks_9_cache {
	// RAM Box: {[8, 1928], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_denoise_update_0_write9_merged_banks_9_cache {
	// RAM Box: {[9, 1929], [-1, 1082]}
	// Capacity: 248
	// # of read delays: 4
  // 0, 1, 124, 247
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_246() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_247() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct denoise_cache {
  // Reader addrs...
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // # of banks: 16
  denoise_denoise_update_0_write0_merged_banks_9_cache denoise_denoise_update_0_write0_merged_banks_9;
  denoise_denoise_update_0_write1_merged_banks_9_cache denoise_denoise_update_0_write1_merged_banks_9;
  denoise_denoise_update_0_write10_merged_banks_9_cache denoise_denoise_update_0_write10_merged_banks_9;
  denoise_denoise_update_0_write11_merged_banks_9_cache denoise_denoise_update_0_write11_merged_banks_9;
  denoise_denoise_update_0_write12_merged_banks_9_cache denoise_denoise_update_0_write12_merged_banks_9;
  denoise_denoise_update_0_write13_merged_banks_9_cache denoise_denoise_update_0_write13_merged_banks_9;
  denoise_denoise_update_0_write14_merged_banks_9_cache denoise_denoise_update_0_write14_merged_banks_9;
  denoise_denoise_update_0_write15_merged_banks_9_cache denoise_denoise_update_0_write15_merged_banks_9;
  denoise_denoise_update_0_write2_merged_banks_9_cache denoise_denoise_update_0_write2_merged_banks_9;
  denoise_denoise_update_0_write3_merged_banks_9_cache denoise_denoise_update_0_write3_merged_banks_9;
  denoise_denoise_update_0_write4_merged_banks_9_cache denoise_denoise_update_0_write4_merged_banks_9;
  denoise_denoise_update_0_write5_merged_banks_9_cache denoise_denoise_update_0_write5_merged_banks_9;
  denoise_denoise_update_0_write6_merged_banks_9_cache denoise_denoise_update_0_write6_merged_banks_9;
  denoise_denoise_update_0_write7_merged_banks_9_cache denoise_denoise_update_0_write7_merged_banks_9;
  denoise_denoise_update_0_write8_merged_banks_9_cache denoise_denoise_update_0_write8_merged_banks_9;
  denoise_denoise_update_0_write9_merged_banks_9_cache denoise_denoise_update_0_write9_merged_banks_9;
};



inline void denoise_denoise_update_0_write0_write(hw_uint<16>& denoise_denoise_update_0_write0, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write0_merged_banks_9.push(denoise_denoise_update_0_write0);
}

inline void denoise_denoise_update_0_write1_write(hw_uint<16>& denoise_denoise_update_0_write1, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write1_merged_banks_9.push(denoise_denoise_update_0_write1);
}

inline void denoise_denoise_update_0_write10_write(hw_uint<16>& denoise_denoise_update_0_write10, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write10_merged_banks_9.push(denoise_denoise_update_0_write10);
}

inline void denoise_denoise_update_0_write11_write(hw_uint<16>& denoise_denoise_update_0_write11, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write11_merged_banks_9.push(denoise_denoise_update_0_write11);
}

inline void denoise_denoise_update_0_write12_write(hw_uint<16>& denoise_denoise_update_0_write12, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write12_merged_banks_9.push(denoise_denoise_update_0_write12);
}

inline void denoise_denoise_update_0_write13_write(hw_uint<16>& denoise_denoise_update_0_write13, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write13_merged_banks_9.push(denoise_denoise_update_0_write13);
}

inline void denoise_denoise_update_0_write14_write(hw_uint<16>& denoise_denoise_update_0_write14, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write14_merged_banks_9.push(denoise_denoise_update_0_write14);
}

inline void denoise_denoise_update_0_write15_write(hw_uint<16>& denoise_denoise_update_0_write15, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write15_merged_banks_9.push(denoise_denoise_update_0_write15);
}

inline void denoise_denoise_update_0_write2_write(hw_uint<16>& denoise_denoise_update_0_write2, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write2_merged_banks_9.push(denoise_denoise_update_0_write2);
}

inline void denoise_denoise_update_0_write3_write(hw_uint<16>& denoise_denoise_update_0_write3, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write3_merged_banks_9.push(denoise_denoise_update_0_write3);
}

inline void denoise_denoise_update_0_write4_write(hw_uint<16>& denoise_denoise_update_0_write4, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write4_merged_banks_9.push(denoise_denoise_update_0_write4);
}

inline void denoise_denoise_update_0_write5_write(hw_uint<16>& denoise_denoise_update_0_write5, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write5_merged_banks_9.push(denoise_denoise_update_0_write5);
}

inline void denoise_denoise_update_0_write6_write(hw_uint<16>& denoise_denoise_update_0_write6, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write6_merged_banks_9.push(denoise_denoise_update_0_write6);
}

inline void denoise_denoise_update_0_write7_write(hw_uint<16>& denoise_denoise_update_0_write7, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write7_merged_banks_9.push(denoise_denoise_update_0_write7);
}

inline void denoise_denoise_update_0_write8_write(hw_uint<16>& denoise_denoise_update_0_write8, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write8_merged_banks_9.push(denoise_denoise_update_0_write8);
}

inline void denoise_denoise_update_0_write9_write(hw_uint<16>& denoise_denoise_update_0_write9, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write9_merged_banks_9.push(denoise_denoise_update_0_write9);
}

inline hw_uint<16> demosaicb_rd0_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd0 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_248();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd1_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd1 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_125();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd10_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd10 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd100_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd100 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaicb_rd101_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd101 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaicb_rd102_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd102 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd103_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd103 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd104_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd104 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd105_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd105 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd106_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd106 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd107_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd107 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd108_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd108 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd109_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd109 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd11_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd11 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd110_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd110 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd111_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd111 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd112_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd112 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd113_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd113 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd114_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd114 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd115_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd115 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd116_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd116 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd117_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd117 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd118_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd118 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd119_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd119 read pattern: { demosaicb_update_0[d0, d1] -> denoise[12 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write12 = denoise.denoise_denoise_update_0_write12_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write12;
  return 0;
}

inline hw_uint<16> demosaicb_rd12_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd12 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd120_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd120 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd121_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd121 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd122_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd122 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd123_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd123 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd124_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd124 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd125_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd125 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd126_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd126 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd127_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd127 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd128_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd128 read pattern: { demosaicb_update_0[d0, d1] -> denoise[13 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write13 = denoise.denoise_denoise_update_0_write13_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write13;
  return 0;
}

inline hw_uint<16> demosaicb_rd129_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd129 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd13_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd13 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd130_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd130 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd131_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd131 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd132_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd132 read pattern: { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd133_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd133 read pattern: { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd134_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd134 read pattern: { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd135_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd135 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd136_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd136 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd137_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd137 read pattern: { demosaicb_update_0[d0, d1] -> denoise[14 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write14 = denoise.denoise_denoise_update_0_write14_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write14;
  return 0;
}

inline hw_uint<16> demosaicb_rd138_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd138 read pattern: { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd139_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd139 read pattern: { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd14_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd14 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd140_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd140 read pattern: { demosaicb_update_0[d0, d1] -> denoise[15 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd141_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd141 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_246();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd142_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd142 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_123();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd143_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd143 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_0();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd15_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd15 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd16_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd16 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd17_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd17 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd18_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd18 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd19_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd19 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd2_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd2 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write15 = denoise.denoise_denoise_update_0_write15_merged_banks_9.peek_2();
  return value_denoise_denoise_update_0_write15;
  return 0;
}

inline hw_uint<16> demosaicb_rd20_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd20 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd21_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd21 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd22_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd22 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd23_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd23 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd24_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd24 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd25_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd25 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd26_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd26 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd27_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd27 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd28_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd28 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd29_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd29 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd3_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd3 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd30_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd30 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd31_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd31 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd32_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd32 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd33_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd33 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd34_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd34 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd35_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd35 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd36_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd36 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd37_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd37 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd38_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd38 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd39_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd39 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd4_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd4 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd40_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd40 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd41_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd41 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd42_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd42 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd43_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd43 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd44_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd44 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd45_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd45 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd46_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd46 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd47_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd47 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write4 = denoise.denoise_denoise_update_0_write4_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write4;
  return 0;
}

inline hw_uint<16> demosaicb_rd48_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd48 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd49_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd49 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd5_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd5 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd50_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd50 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd51_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd51 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd52_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd52 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd53_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd53 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd54_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd54 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd55_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd55 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd56_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd56 read pattern: { demosaicb_update_0[d0, d1] -> denoise[5 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write5 = denoise.denoise_denoise_update_0_write5_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write5;
  return 0;
}

inline hw_uint<16> demosaicb_rd57_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd57 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd58_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd58 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd59_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd59 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd6_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd6 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd60_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd60 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd61_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd61 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd62_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd62 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd63_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd63 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd64_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd64 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd65_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd65 read pattern: { demosaicb_update_0[d0, d1] -> denoise[6 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write6 = denoise.denoise_denoise_update_0_write6_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write6;
  return 0;
}

inline hw_uint<16> demosaicb_rd66_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd66 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd67_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd67 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd68_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd68 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd69_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd69 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd7_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd7 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd70_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd70 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd71_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd71 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd72_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd72 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd73_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd73 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd74_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd74 read pattern: { demosaicb_update_0[d0, d1] -> denoise[7 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write7 = denoise.denoise_denoise_update_0_write7_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write7;
  return 0;
}

inline hw_uint<16> demosaicb_rd75_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd75 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd76_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd76 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd77_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd77 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd78_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd78 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd79_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd79 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd8_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd8 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd80_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd80 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd81_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd81 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd82_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd82 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd83_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd83 read pattern: { demosaicb_update_0[d0, d1] -> denoise[8 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write8 = denoise.denoise_denoise_update_0_write8_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write8;
  return 0;
}

inline hw_uint<16> demosaicb_rd84_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd84 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd85_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd85 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd86_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd86 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd87_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd87 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaicb_rd88_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd88 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaicb_rd89_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd89 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaicb_rd9_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd9 read pattern: { demosaicb_update_0[d0, d1] -> denoise[16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd90_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd90 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd91_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd91 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd92_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd92 read pattern: { demosaicb_update_0[d0, d1] -> denoise[9 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write9 = denoise.denoise_denoise_update_0_write9_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write9;
  return 0;
}

inline hw_uint<16> demosaicb_rd93_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd93 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaicb_rd94_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd94 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaicb_rd95_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd95 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

inline hw_uint<16> demosaicb_rd96_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd96 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd97_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd97 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_124();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd98_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd98 read pattern: { demosaicb_update_0[d0, d1] -> denoise[11 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write11 = denoise.denoise_denoise_update_0_write11_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write11;
  return 0;
}

inline hw_uint<16> demosaicb_rd99_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd99 read pattern: { demosaicb_update_0[d0, d1] -> denoise[10 + 16d0, -1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write10 = denoise.denoise_denoise_update_0_write10_merged_banks_9.peek_247();
  return value_denoise_denoise_update_0_write10;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_read
//	demosaicb_rd0
//	demosaicb_rd1
//	demosaicb_rd2
//	demosaicb_rd3
//	demosaicb_rd4
//	demosaicb_rd5
//	demosaicb_rd6
//	demosaicb_rd7
//	demosaicb_rd8
//	demosaicb_rd9
//	demosaicb_rd10
//	demosaicb_rd11
//	demosaicb_rd12
//	demosaicb_rd13
//	demosaicb_rd14
//	demosaicb_rd15
//	demosaicb_rd16
//	demosaicb_rd17
//	demosaicb_rd18
//	demosaicb_rd19
//	demosaicb_rd20
//	demosaicb_rd21
//	demosaicb_rd22
//	demosaicb_rd23
//	demosaicb_rd24
//	demosaicb_rd25
//	demosaicb_rd26
//	demosaicb_rd27
//	demosaicb_rd28
//	demosaicb_rd29
//	demosaicb_rd30
//	demosaicb_rd31
//	demosaicb_rd32
//	demosaicb_rd33
//	demosaicb_rd34
//	demosaicb_rd35
//	demosaicb_rd36
//	demosaicb_rd37
//	demosaicb_rd38
//	demosaicb_rd39
//	demosaicb_rd40
//	demosaicb_rd41
//	demosaicb_rd42
//	demosaicb_rd43
//	demosaicb_rd44
//	demosaicb_rd45
//	demosaicb_rd46
//	demosaicb_rd47
//	demosaicb_rd48
//	demosaicb_rd49
//	demosaicb_rd50
//	demosaicb_rd51
//	demosaicb_rd52
//	demosaicb_rd53
//	demosaicb_rd54
//	demosaicb_rd55
//	demosaicb_rd56
//	demosaicb_rd57
//	demosaicb_rd58
//	demosaicb_rd59
//	demosaicb_rd60
//	demosaicb_rd61
//	demosaicb_rd62
//	demosaicb_rd63
//	demosaicb_rd64
//	demosaicb_rd65
//	demosaicb_rd66
//	demosaicb_rd67
//	demosaicb_rd68
//	demosaicb_rd69
//	demosaicb_rd70
//	demosaicb_rd71
//	demosaicb_rd72
//	demosaicb_rd73
//	demosaicb_rd74
//	demosaicb_rd75
//	demosaicb_rd76
//	demosaicb_rd77
//	demosaicb_rd78
//	demosaicb_rd79
//	demosaicb_rd80
//	demosaicb_rd81
//	demosaicb_rd82
//	demosaicb_rd83
//	demosaicb_rd84
//	demosaicb_rd85
//	demosaicb_rd86
//	demosaicb_rd87
//	demosaicb_rd88
//	demosaicb_rd89
//	demosaicb_rd90
//	demosaicb_rd91
//	demosaicb_rd92
//	demosaicb_rd93
//	demosaicb_rd94
//	demosaicb_rd95
//	demosaicb_rd96
//	demosaicb_rd97
//	demosaicb_rd98
//	demosaicb_rd99
//	demosaicb_rd100
//	demosaicb_rd101
//	demosaicb_rd102
//	demosaicb_rd103
//	demosaicb_rd104
//	demosaicb_rd105
//	demosaicb_rd106
//	demosaicb_rd107
//	demosaicb_rd108
//	demosaicb_rd109
//	demosaicb_rd110
//	demosaicb_rd111
//	demosaicb_rd112
//	demosaicb_rd113
//	demosaicb_rd114
//	demosaicb_rd115
//	demosaicb_rd116
//	demosaicb_rd117
//	demosaicb_rd118
//	demosaicb_rd119
//	demosaicb_rd120
//	demosaicb_rd121
//	demosaicb_rd122
//	demosaicb_rd123
//	demosaicb_rd124
//	demosaicb_rd125
//	demosaicb_rd126
//	demosaicb_rd127
//	demosaicb_rd128
//	demosaicb_rd129
//	demosaicb_rd130
//	demosaicb_rd131
//	demosaicb_rd132
//	demosaicb_rd133
//	demosaicb_rd134
//	demosaicb_rd135
//	demosaicb_rd136
//	demosaicb_rd137
//	demosaicb_rd138
//	demosaicb_rd139
//	demosaicb_rd140
//	demosaicb_rd141
//	demosaicb_rd142
//	demosaicb_rd143
inline hw_uint<2304> denoise_demosaicb_update_0_read_bundle_read(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 144
    // demosaicb_rd0
    // demosaicb_rd1
    // demosaicb_rd2
    // demosaicb_rd3
    // demosaicb_rd4
    // demosaicb_rd5
    // demosaicb_rd6
    // demosaicb_rd7
    // demosaicb_rd8
    // demosaicb_rd9
    // demosaicb_rd10
    // demosaicb_rd11
    // demosaicb_rd12
    // demosaicb_rd13
    // demosaicb_rd14
    // demosaicb_rd15
    // demosaicb_rd16
    // demosaicb_rd17
    // demosaicb_rd18
    // demosaicb_rd19
    // demosaicb_rd20
    // demosaicb_rd21
    // demosaicb_rd22
    // demosaicb_rd23
    // demosaicb_rd24
    // demosaicb_rd25
    // demosaicb_rd26
    // demosaicb_rd27
    // demosaicb_rd28
    // demosaicb_rd29
    // demosaicb_rd30
    // demosaicb_rd31
    // demosaicb_rd32
    // demosaicb_rd33
    // demosaicb_rd34
    // demosaicb_rd35
    // demosaicb_rd36
    // demosaicb_rd37
    // demosaicb_rd38
    // demosaicb_rd39
    // demosaicb_rd40
    // demosaicb_rd41
    // demosaicb_rd42
    // demosaicb_rd43
    // demosaicb_rd44
    // demosaicb_rd45
    // demosaicb_rd46
    // demosaicb_rd47
    // demosaicb_rd48
    // demosaicb_rd49
    // demosaicb_rd50
    // demosaicb_rd51
    // demosaicb_rd52
    // demosaicb_rd53
    // demosaicb_rd54
    // demosaicb_rd55
    // demosaicb_rd56
    // demosaicb_rd57
    // demosaicb_rd58
    // demosaicb_rd59
    // demosaicb_rd60
    // demosaicb_rd61
    // demosaicb_rd62
    // demosaicb_rd63
    // demosaicb_rd64
    // demosaicb_rd65
    // demosaicb_rd66
    // demosaicb_rd67
    // demosaicb_rd68
    // demosaicb_rd69
    // demosaicb_rd70
    // demosaicb_rd71
    // demosaicb_rd72
    // demosaicb_rd73
    // demosaicb_rd74
    // demosaicb_rd75
    // demosaicb_rd76
    // demosaicb_rd77
    // demosaicb_rd78
    // demosaicb_rd79
    // demosaicb_rd80
    // demosaicb_rd81
    // demosaicb_rd82
    // demosaicb_rd83
    // demosaicb_rd84
    // demosaicb_rd85
    // demosaicb_rd86
    // demosaicb_rd87
    // demosaicb_rd88
    // demosaicb_rd89
    // demosaicb_rd90
    // demosaicb_rd91
    // demosaicb_rd92
    // demosaicb_rd93
    // demosaicb_rd94
    // demosaicb_rd95
    // demosaicb_rd96
    // demosaicb_rd97
    // demosaicb_rd98
    // demosaicb_rd99
    // demosaicb_rd100
    // demosaicb_rd101
    // demosaicb_rd102
    // demosaicb_rd103
    // demosaicb_rd104
    // demosaicb_rd105
    // demosaicb_rd106
    // demosaicb_rd107
    // demosaicb_rd108
    // demosaicb_rd109
    // demosaicb_rd110
    // demosaicb_rd111
    // demosaicb_rd112
    // demosaicb_rd113
    // demosaicb_rd114
    // demosaicb_rd115
    // demosaicb_rd116
    // demosaicb_rd117
    // demosaicb_rd118
    // demosaicb_rd119
    // demosaicb_rd120
    // demosaicb_rd121
    // demosaicb_rd122
    // demosaicb_rd123
    // demosaicb_rd124
    // demosaicb_rd125
    // demosaicb_rd126
    // demosaicb_rd127
    // demosaicb_rd128
    // demosaicb_rd129
    // demosaicb_rd130
    // demosaicb_rd131
    // demosaicb_rd132
    // demosaicb_rd133
    // demosaicb_rd134
    // demosaicb_rd135
    // demosaicb_rd136
    // demosaicb_rd137
    // demosaicb_rd138
    // demosaicb_rd139
    // demosaicb_rd140
    // demosaicb_rd141
    // demosaicb_rd142
    // demosaicb_rd143

	hw_uint<2304> result;
	hw_uint<16> demosaicb_rd0_res = demosaicb_rd0_select(denoise, d0, d1, dynamic_address);
	set_at<0, 2304>(result, demosaicb_rd0_res);
	hw_uint<16> demosaicb_rd1_res = demosaicb_rd1_select(denoise, d0, d1, dynamic_address);
	set_at<16, 2304>(result, demosaicb_rd1_res);
	hw_uint<16> demosaicb_rd2_res = demosaicb_rd2_select(denoise, d0, d1, dynamic_address);
	set_at<32, 2304>(result, demosaicb_rd2_res);
	hw_uint<16> demosaicb_rd3_res = demosaicb_rd3_select(denoise, d0, d1, dynamic_address);
	set_at<48, 2304>(result, demosaicb_rd3_res);
	hw_uint<16> demosaicb_rd4_res = demosaicb_rd4_select(denoise, d0, d1, dynamic_address);
	set_at<64, 2304>(result, demosaicb_rd4_res);
	hw_uint<16> demosaicb_rd5_res = demosaicb_rd5_select(denoise, d0, d1, dynamic_address);
	set_at<80, 2304>(result, demosaicb_rd5_res);
	hw_uint<16> demosaicb_rd6_res = demosaicb_rd6_select(denoise, d0, d1, dynamic_address);
	set_at<96, 2304>(result, demosaicb_rd6_res);
	hw_uint<16> demosaicb_rd7_res = demosaicb_rd7_select(denoise, d0, d1, dynamic_address);
	set_at<112, 2304>(result, demosaicb_rd7_res);
	hw_uint<16> demosaicb_rd8_res = demosaicb_rd8_select(denoise, d0, d1, dynamic_address);
	set_at<128, 2304>(result, demosaicb_rd8_res);
	hw_uint<16> demosaicb_rd9_res = demosaicb_rd9_select(denoise, d0, d1, dynamic_address);
	set_at<144, 2304>(result, demosaicb_rd9_res);
	hw_uint<16> demosaicb_rd10_res = demosaicb_rd10_select(denoise, d0, d1, dynamic_address);
	set_at<160, 2304>(result, demosaicb_rd10_res);
	hw_uint<16> demosaicb_rd11_res = demosaicb_rd11_select(denoise, d0, d1, dynamic_address);
	set_at<176, 2304>(result, demosaicb_rd11_res);
	hw_uint<16> demosaicb_rd12_res = demosaicb_rd12_select(denoise, d0, d1, dynamic_address);
	set_at<192, 2304>(result, demosaicb_rd12_res);
	hw_uint<16> demosaicb_rd13_res = demosaicb_rd13_select(denoise, d0, d1, dynamic_address);
	set_at<208, 2304>(result, demosaicb_rd13_res);
	hw_uint<16> demosaicb_rd14_res = demosaicb_rd14_select(denoise, d0, d1, dynamic_address);
	set_at<224, 2304>(result, demosaicb_rd14_res);
	hw_uint<16> demosaicb_rd15_res = demosaicb_rd15_select(denoise, d0, d1, dynamic_address);
	set_at<240, 2304>(result, demosaicb_rd15_res);
	hw_uint<16> demosaicb_rd16_res = demosaicb_rd16_select(denoise, d0, d1, dynamic_address);
	set_at<256, 2304>(result, demosaicb_rd16_res);
	hw_uint<16> demosaicb_rd17_res = demosaicb_rd17_select(denoise, d0, d1, dynamic_address);
	set_at<272, 2304>(result, demosaicb_rd17_res);
	hw_uint<16> demosaicb_rd18_res = demosaicb_rd18_select(denoise, d0, d1, dynamic_address);
	set_at<288, 2304>(result, demosaicb_rd18_res);
	hw_uint<16> demosaicb_rd19_res = demosaicb_rd19_select(denoise, d0, d1, dynamic_address);
	set_at<304, 2304>(result, demosaicb_rd19_res);
	hw_uint<16> demosaicb_rd20_res = demosaicb_rd20_select(denoise, d0, d1, dynamic_address);
	set_at<320, 2304>(result, demosaicb_rd20_res);
	hw_uint<16> demosaicb_rd21_res = demosaicb_rd21_select(denoise, d0, d1, dynamic_address);
	set_at<336, 2304>(result, demosaicb_rd21_res);
	hw_uint<16> demosaicb_rd22_res = demosaicb_rd22_select(denoise, d0, d1, dynamic_address);
	set_at<352, 2304>(result, demosaicb_rd22_res);
	hw_uint<16> demosaicb_rd23_res = demosaicb_rd23_select(denoise, d0, d1, dynamic_address);
	set_at<368, 2304>(result, demosaicb_rd23_res);
	hw_uint<16> demosaicb_rd24_res = demosaicb_rd24_select(denoise, d0, d1, dynamic_address);
	set_at<384, 2304>(result, demosaicb_rd24_res);
	hw_uint<16> demosaicb_rd25_res = demosaicb_rd25_select(denoise, d0, d1, dynamic_address);
	set_at<400, 2304>(result, demosaicb_rd25_res);
	hw_uint<16> demosaicb_rd26_res = demosaicb_rd26_select(denoise, d0, d1, dynamic_address);
	set_at<416, 2304>(result, demosaicb_rd26_res);
	hw_uint<16> demosaicb_rd27_res = demosaicb_rd27_select(denoise, d0, d1, dynamic_address);
	set_at<432, 2304>(result, demosaicb_rd27_res);
	hw_uint<16> demosaicb_rd28_res = demosaicb_rd28_select(denoise, d0, d1, dynamic_address);
	set_at<448, 2304>(result, demosaicb_rd28_res);
	hw_uint<16> demosaicb_rd29_res = demosaicb_rd29_select(denoise, d0, d1, dynamic_address);
	set_at<464, 2304>(result, demosaicb_rd29_res);
	hw_uint<16> demosaicb_rd30_res = demosaicb_rd30_select(denoise, d0, d1, dynamic_address);
	set_at<480, 2304>(result, demosaicb_rd30_res);
	hw_uint<16> demosaicb_rd31_res = demosaicb_rd31_select(denoise, d0, d1, dynamic_address);
	set_at<496, 2304>(result, demosaicb_rd31_res);
	hw_uint<16> demosaicb_rd32_res = demosaicb_rd32_select(denoise, d0, d1, dynamic_address);
	set_at<512, 2304>(result, demosaicb_rd32_res);
	hw_uint<16> demosaicb_rd33_res = demosaicb_rd33_select(denoise, d0, d1, dynamic_address);
	set_at<528, 2304>(result, demosaicb_rd33_res);
	hw_uint<16> demosaicb_rd34_res = demosaicb_rd34_select(denoise, d0, d1, dynamic_address);
	set_at<544, 2304>(result, demosaicb_rd34_res);
	hw_uint<16> demosaicb_rd35_res = demosaicb_rd35_select(denoise, d0, d1, dynamic_address);
	set_at<560, 2304>(result, demosaicb_rd35_res);
	hw_uint<16> demosaicb_rd36_res = demosaicb_rd36_select(denoise, d0, d1, dynamic_address);
	set_at<576, 2304>(result, demosaicb_rd36_res);
	hw_uint<16> demosaicb_rd37_res = demosaicb_rd37_select(denoise, d0, d1, dynamic_address);
	set_at<592, 2304>(result, demosaicb_rd37_res);
	hw_uint<16> demosaicb_rd38_res = demosaicb_rd38_select(denoise, d0, d1, dynamic_address);
	set_at<608, 2304>(result, demosaicb_rd38_res);
	hw_uint<16> demosaicb_rd39_res = demosaicb_rd39_select(denoise, d0, d1, dynamic_address);
	set_at<624, 2304>(result, demosaicb_rd39_res);
	hw_uint<16> demosaicb_rd40_res = demosaicb_rd40_select(denoise, d0, d1, dynamic_address);
	set_at<640, 2304>(result, demosaicb_rd40_res);
	hw_uint<16> demosaicb_rd41_res = demosaicb_rd41_select(denoise, d0, d1, dynamic_address);
	set_at<656, 2304>(result, demosaicb_rd41_res);
	hw_uint<16> demosaicb_rd42_res = demosaicb_rd42_select(denoise, d0, d1, dynamic_address);
	set_at<672, 2304>(result, demosaicb_rd42_res);
	hw_uint<16> demosaicb_rd43_res = demosaicb_rd43_select(denoise, d0, d1, dynamic_address);
	set_at<688, 2304>(result, demosaicb_rd43_res);
	hw_uint<16> demosaicb_rd44_res = demosaicb_rd44_select(denoise, d0, d1, dynamic_address);
	set_at<704, 2304>(result, demosaicb_rd44_res);
	hw_uint<16> demosaicb_rd45_res = demosaicb_rd45_select(denoise, d0, d1, dynamic_address);
	set_at<720, 2304>(result, demosaicb_rd45_res);
	hw_uint<16> demosaicb_rd46_res = demosaicb_rd46_select(denoise, d0, d1, dynamic_address);
	set_at<736, 2304>(result, demosaicb_rd46_res);
	hw_uint<16> demosaicb_rd47_res = demosaicb_rd47_select(denoise, d0, d1, dynamic_address);
	set_at<752, 2304>(result, demosaicb_rd47_res);
	hw_uint<16> demosaicb_rd48_res = demosaicb_rd48_select(denoise, d0, d1, dynamic_address);
	set_at<768, 2304>(result, demosaicb_rd48_res);
	hw_uint<16> demosaicb_rd49_res = demosaicb_rd49_select(denoise, d0, d1, dynamic_address);
	set_at<784, 2304>(result, demosaicb_rd49_res);
	hw_uint<16> demosaicb_rd50_res = demosaicb_rd50_select(denoise, d0, d1, dynamic_address);
	set_at<800, 2304>(result, demosaicb_rd50_res);
	hw_uint<16> demosaicb_rd51_res = demosaicb_rd51_select(denoise, d0, d1, dynamic_address);
	set_at<816, 2304>(result, demosaicb_rd51_res);
	hw_uint<16> demosaicb_rd52_res = demosaicb_rd52_select(denoise, d0, d1, dynamic_address);
	set_at<832, 2304>(result, demosaicb_rd52_res);
	hw_uint<16> demosaicb_rd53_res = demosaicb_rd53_select(denoise, d0, d1, dynamic_address);
	set_at<848, 2304>(result, demosaicb_rd53_res);
	hw_uint<16> demosaicb_rd54_res = demosaicb_rd54_select(denoise, d0, d1, dynamic_address);
	set_at<864, 2304>(result, demosaicb_rd54_res);
	hw_uint<16> demosaicb_rd55_res = demosaicb_rd55_select(denoise, d0, d1, dynamic_address);
	set_at<880, 2304>(result, demosaicb_rd55_res);
	hw_uint<16> demosaicb_rd56_res = demosaicb_rd56_select(denoise, d0, d1, dynamic_address);
	set_at<896, 2304>(result, demosaicb_rd56_res);
	hw_uint<16> demosaicb_rd57_res = demosaicb_rd57_select(denoise, d0, d1, dynamic_address);
	set_at<912, 2304>(result, demosaicb_rd57_res);
	hw_uint<16> demosaicb_rd58_res = demosaicb_rd58_select(denoise, d0, d1, dynamic_address);
	set_at<928, 2304>(result, demosaicb_rd58_res);
	hw_uint<16> demosaicb_rd59_res = demosaicb_rd59_select(denoise, d0, d1, dynamic_address);
	set_at<944, 2304>(result, demosaicb_rd59_res);
	hw_uint<16> demosaicb_rd60_res = demosaicb_rd60_select(denoise, d0, d1, dynamic_address);
	set_at<960, 2304>(result, demosaicb_rd60_res);
	hw_uint<16> demosaicb_rd61_res = demosaicb_rd61_select(denoise, d0, d1, dynamic_address);
	set_at<976, 2304>(result, demosaicb_rd61_res);
	hw_uint<16> demosaicb_rd62_res = demosaicb_rd62_select(denoise, d0, d1, dynamic_address);
	set_at<992, 2304>(result, demosaicb_rd62_res);
	hw_uint<16> demosaicb_rd63_res = demosaicb_rd63_select(denoise, d0, d1, dynamic_address);
	set_at<1008, 2304>(result, demosaicb_rd63_res);
	hw_uint<16> demosaicb_rd64_res = demosaicb_rd64_select(denoise, d0, d1, dynamic_address);
	set_at<1024, 2304>(result, demosaicb_rd64_res);
	hw_uint<16> demosaicb_rd65_res = demosaicb_rd65_select(denoise, d0, d1, dynamic_address);
	set_at<1040, 2304>(result, demosaicb_rd65_res);
	hw_uint<16> demosaicb_rd66_res = demosaicb_rd66_select(denoise, d0, d1, dynamic_address);
	set_at<1056, 2304>(result, demosaicb_rd66_res);
	hw_uint<16> demosaicb_rd67_res = demosaicb_rd67_select(denoise, d0, d1, dynamic_address);
	set_at<1072, 2304>(result, demosaicb_rd67_res);
	hw_uint<16> demosaicb_rd68_res = demosaicb_rd68_select(denoise, d0, d1, dynamic_address);
	set_at<1088, 2304>(result, demosaicb_rd68_res);
	hw_uint<16> demosaicb_rd69_res = demosaicb_rd69_select(denoise, d0, d1, dynamic_address);
	set_at<1104, 2304>(result, demosaicb_rd69_res);
	hw_uint<16> demosaicb_rd70_res = demosaicb_rd70_select(denoise, d0, d1, dynamic_address);
	set_at<1120, 2304>(result, demosaicb_rd70_res);
	hw_uint<16> demosaicb_rd71_res = demosaicb_rd71_select(denoise, d0, d1, dynamic_address);
	set_at<1136, 2304>(result, demosaicb_rd71_res);
	hw_uint<16> demosaicb_rd72_res = demosaicb_rd72_select(denoise, d0, d1, dynamic_address);
	set_at<1152, 2304>(result, demosaicb_rd72_res);
	hw_uint<16> demosaicb_rd73_res = demosaicb_rd73_select(denoise, d0, d1, dynamic_address);
	set_at<1168, 2304>(result, demosaicb_rd73_res);
	hw_uint<16> demosaicb_rd74_res = demosaicb_rd74_select(denoise, d0, d1, dynamic_address);
	set_at<1184, 2304>(result, demosaicb_rd74_res);
	hw_uint<16> demosaicb_rd75_res = demosaicb_rd75_select(denoise, d0, d1, dynamic_address);
	set_at<1200, 2304>(result, demosaicb_rd75_res);
	hw_uint<16> demosaicb_rd76_res = demosaicb_rd76_select(denoise, d0, d1, dynamic_address);
	set_at<1216, 2304>(result, demosaicb_rd76_res);
	hw_uint<16> demosaicb_rd77_res = demosaicb_rd77_select(denoise, d0, d1, dynamic_address);
	set_at<1232, 2304>(result, demosaicb_rd77_res);
	hw_uint<16> demosaicb_rd78_res = demosaicb_rd78_select(denoise, d0, d1, dynamic_address);
	set_at<1248, 2304>(result, demosaicb_rd78_res);
	hw_uint<16> demosaicb_rd79_res = demosaicb_rd79_select(denoise, d0, d1, dynamic_address);
	set_at<1264, 2304>(result, demosaicb_rd79_res);
	hw_uint<16> demosaicb_rd80_res = demosaicb_rd80_select(denoise, d0, d1, dynamic_address);
	set_at<1280, 2304>(result, demosaicb_rd80_res);
	hw_uint<16> demosaicb_rd81_res = demosaicb_rd81_select(denoise, d0, d1, dynamic_address);
	set_at<1296, 2304>(result, demosaicb_rd81_res);
	hw_uint<16> demosaicb_rd82_res = demosaicb_rd82_select(denoise, d0, d1, dynamic_address);
	set_at<1312, 2304>(result, demosaicb_rd82_res);
	hw_uint<16> demosaicb_rd83_res = demosaicb_rd83_select(denoise, d0, d1, dynamic_address);
	set_at<1328, 2304>(result, demosaicb_rd83_res);
	hw_uint<16> demosaicb_rd84_res = demosaicb_rd84_select(denoise, d0, d1, dynamic_address);
	set_at<1344, 2304>(result, demosaicb_rd84_res);
	hw_uint<16> demosaicb_rd85_res = demosaicb_rd85_select(denoise, d0, d1, dynamic_address);
	set_at<1360, 2304>(result, demosaicb_rd85_res);
	hw_uint<16> demosaicb_rd86_res = demosaicb_rd86_select(denoise, d0, d1, dynamic_address);
	set_at<1376, 2304>(result, demosaicb_rd86_res);
	hw_uint<16> demosaicb_rd87_res = demosaicb_rd87_select(denoise, d0, d1, dynamic_address);
	set_at<1392, 2304>(result, demosaicb_rd87_res);
	hw_uint<16> demosaicb_rd88_res = demosaicb_rd88_select(denoise, d0, d1, dynamic_address);
	set_at<1408, 2304>(result, demosaicb_rd88_res);
	hw_uint<16> demosaicb_rd89_res = demosaicb_rd89_select(denoise, d0, d1, dynamic_address);
	set_at<1424, 2304>(result, demosaicb_rd89_res);
	hw_uint<16> demosaicb_rd90_res = demosaicb_rd90_select(denoise, d0, d1, dynamic_address);
	set_at<1440, 2304>(result, demosaicb_rd90_res);
	hw_uint<16> demosaicb_rd91_res = demosaicb_rd91_select(denoise, d0, d1, dynamic_address);
	set_at<1456, 2304>(result, demosaicb_rd91_res);
	hw_uint<16> demosaicb_rd92_res = demosaicb_rd92_select(denoise, d0, d1, dynamic_address);
	set_at<1472, 2304>(result, demosaicb_rd92_res);
	hw_uint<16> demosaicb_rd93_res = demosaicb_rd93_select(denoise, d0, d1, dynamic_address);
	set_at<1488, 2304>(result, demosaicb_rd93_res);
	hw_uint<16> demosaicb_rd94_res = demosaicb_rd94_select(denoise, d0, d1, dynamic_address);
	set_at<1504, 2304>(result, demosaicb_rd94_res);
	hw_uint<16> demosaicb_rd95_res = demosaicb_rd95_select(denoise, d0, d1, dynamic_address);
	set_at<1520, 2304>(result, demosaicb_rd95_res);
	hw_uint<16> demosaicb_rd96_res = demosaicb_rd96_select(denoise, d0, d1, dynamic_address);
	set_at<1536, 2304>(result, demosaicb_rd96_res);
	hw_uint<16> demosaicb_rd97_res = demosaicb_rd97_select(denoise, d0, d1, dynamic_address);
	set_at<1552, 2304>(result, demosaicb_rd97_res);
	hw_uint<16> demosaicb_rd98_res = demosaicb_rd98_select(denoise, d0, d1, dynamic_address);
	set_at<1568, 2304>(result, demosaicb_rd98_res);
	hw_uint<16> demosaicb_rd99_res = demosaicb_rd99_select(denoise, d0, d1, dynamic_address);
	set_at<1584, 2304>(result, demosaicb_rd99_res);
	hw_uint<16> demosaicb_rd100_res = demosaicb_rd100_select(denoise, d0, d1, dynamic_address);
	set_at<1600, 2304>(result, demosaicb_rd100_res);
	hw_uint<16> demosaicb_rd101_res = demosaicb_rd101_select(denoise, d0, d1, dynamic_address);
	set_at<1616, 2304>(result, demosaicb_rd101_res);
	hw_uint<16> demosaicb_rd102_res = demosaicb_rd102_select(denoise, d0, d1, dynamic_address);
	set_at<1632, 2304>(result, demosaicb_rd102_res);
	hw_uint<16> demosaicb_rd103_res = demosaicb_rd103_select(denoise, d0, d1, dynamic_address);
	set_at<1648, 2304>(result, demosaicb_rd103_res);
	hw_uint<16> demosaicb_rd104_res = demosaicb_rd104_select(denoise, d0, d1, dynamic_address);
	set_at<1664, 2304>(result, demosaicb_rd104_res);
	hw_uint<16> demosaicb_rd105_res = demosaicb_rd105_select(denoise, d0, d1, dynamic_address);
	set_at<1680, 2304>(result, demosaicb_rd105_res);
	hw_uint<16> demosaicb_rd106_res = demosaicb_rd106_select(denoise, d0, d1, dynamic_address);
	set_at<1696, 2304>(result, demosaicb_rd106_res);
	hw_uint<16> demosaicb_rd107_res = demosaicb_rd107_select(denoise, d0, d1, dynamic_address);
	set_at<1712, 2304>(result, demosaicb_rd107_res);
	hw_uint<16> demosaicb_rd108_res = demosaicb_rd108_select(denoise, d0, d1, dynamic_address);
	set_at<1728, 2304>(result, demosaicb_rd108_res);
	hw_uint<16> demosaicb_rd109_res = demosaicb_rd109_select(denoise, d0, d1, dynamic_address);
	set_at<1744, 2304>(result, demosaicb_rd109_res);
	hw_uint<16> demosaicb_rd110_res = demosaicb_rd110_select(denoise, d0, d1, dynamic_address);
	set_at<1760, 2304>(result, demosaicb_rd110_res);
	hw_uint<16> demosaicb_rd111_res = demosaicb_rd111_select(denoise, d0, d1, dynamic_address);
	set_at<1776, 2304>(result, demosaicb_rd111_res);
	hw_uint<16> demosaicb_rd112_res = demosaicb_rd112_select(denoise, d0, d1, dynamic_address);
	set_at<1792, 2304>(result, demosaicb_rd112_res);
	hw_uint<16> demosaicb_rd113_res = demosaicb_rd113_select(denoise, d0, d1, dynamic_address);
	set_at<1808, 2304>(result, demosaicb_rd113_res);
	hw_uint<16> demosaicb_rd114_res = demosaicb_rd114_select(denoise, d0, d1, dynamic_address);
	set_at<1824, 2304>(result, demosaicb_rd114_res);
	hw_uint<16> demosaicb_rd115_res = demosaicb_rd115_select(denoise, d0, d1, dynamic_address);
	set_at<1840, 2304>(result, demosaicb_rd115_res);
	hw_uint<16> demosaicb_rd116_res = demosaicb_rd116_select(denoise, d0, d1, dynamic_address);
	set_at<1856, 2304>(result, demosaicb_rd116_res);
	hw_uint<16> demosaicb_rd117_res = demosaicb_rd117_select(denoise, d0, d1, dynamic_address);
	set_at<1872, 2304>(result, demosaicb_rd117_res);
	hw_uint<16> demosaicb_rd118_res = demosaicb_rd118_select(denoise, d0, d1, dynamic_address);
	set_at<1888, 2304>(result, demosaicb_rd118_res);
	hw_uint<16> demosaicb_rd119_res = demosaicb_rd119_select(denoise, d0, d1, dynamic_address);
	set_at<1904, 2304>(result, demosaicb_rd119_res);
	hw_uint<16> demosaicb_rd120_res = demosaicb_rd120_select(denoise, d0, d1, dynamic_address);
	set_at<1920, 2304>(result, demosaicb_rd120_res);
	hw_uint<16> demosaicb_rd121_res = demosaicb_rd121_select(denoise, d0, d1, dynamic_address);
	set_at<1936, 2304>(result, demosaicb_rd121_res);
	hw_uint<16> demosaicb_rd122_res = demosaicb_rd122_select(denoise, d0, d1, dynamic_address);
	set_at<1952, 2304>(result, demosaicb_rd122_res);
	hw_uint<16> demosaicb_rd123_res = demosaicb_rd123_select(denoise, d0, d1, dynamic_address);
	set_at<1968, 2304>(result, demosaicb_rd123_res);
	hw_uint<16> demosaicb_rd124_res = demosaicb_rd124_select(denoise, d0, d1, dynamic_address);
	set_at<1984, 2304>(result, demosaicb_rd124_res);
	hw_uint<16> demosaicb_rd125_res = demosaicb_rd125_select(denoise, d0, d1, dynamic_address);
	set_at<2000, 2304>(result, demosaicb_rd125_res);
	hw_uint<16> demosaicb_rd126_res = demosaicb_rd126_select(denoise, d0, d1, dynamic_address);
	set_at<2016, 2304>(result, demosaicb_rd126_res);
	hw_uint<16> demosaicb_rd127_res = demosaicb_rd127_select(denoise, d0, d1, dynamic_address);
	set_at<2032, 2304>(result, demosaicb_rd127_res);
	hw_uint<16> demosaicb_rd128_res = demosaicb_rd128_select(denoise, d0, d1, dynamic_address);
	set_at<2048, 2304>(result, demosaicb_rd128_res);
	hw_uint<16> demosaicb_rd129_res = demosaicb_rd129_select(denoise, d0, d1, dynamic_address);
	set_at<2064, 2304>(result, demosaicb_rd129_res);
	hw_uint<16> demosaicb_rd130_res = demosaicb_rd130_select(denoise, d0, d1, dynamic_address);
	set_at<2080, 2304>(result, demosaicb_rd130_res);
	hw_uint<16> demosaicb_rd131_res = demosaicb_rd131_select(denoise, d0, d1, dynamic_address);
	set_at<2096, 2304>(result, demosaicb_rd131_res);
	hw_uint<16> demosaicb_rd132_res = demosaicb_rd132_select(denoise, d0, d1, dynamic_address);
	set_at<2112, 2304>(result, demosaicb_rd132_res);
	hw_uint<16> demosaicb_rd133_res = demosaicb_rd133_select(denoise, d0, d1, dynamic_address);
	set_at<2128, 2304>(result, demosaicb_rd133_res);
	hw_uint<16> demosaicb_rd134_res = demosaicb_rd134_select(denoise, d0, d1, dynamic_address);
	set_at<2144, 2304>(result, demosaicb_rd134_res);
	hw_uint<16> demosaicb_rd135_res = demosaicb_rd135_select(denoise, d0, d1, dynamic_address);
	set_at<2160, 2304>(result, demosaicb_rd135_res);
	hw_uint<16> demosaicb_rd136_res = demosaicb_rd136_select(denoise, d0, d1, dynamic_address);
	set_at<2176, 2304>(result, demosaicb_rd136_res);
	hw_uint<16> demosaicb_rd137_res = demosaicb_rd137_select(denoise, d0, d1, dynamic_address);
	set_at<2192, 2304>(result, demosaicb_rd137_res);
	hw_uint<16> demosaicb_rd138_res = demosaicb_rd138_select(denoise, d0, d1, dynamic_address);
	set_at<2208, 2304>(result, demosaicb_rd138_res);
	hw_uint<16> demosaicb_rd139_res = demosaicb_rd139_select(denoise, d0, d1, dynamic_address);
	set_at<2224, 2304>(result, demosaicb_rd139_res);
	hw_uint<16> demosaicb_rd140_res = demosaicb_rd140_select(denoise, d0, d1, dynamic_address);
	set_at<2240, 2304>(result, demosaicb_rd140_res);
	hw_uint<16> demosaicb_rd141_res = demosaicb_rd141_select(denoise, d0, d1, dynamic_address);
	set_at<2256, 2304>(result, demosaicb_rd141_res);
	hw_uint<16> demosaicb_rd142_res = demosaicb_rd142_select(denoise, d0, d1, dynamic_address);
	set_at<2272, 2304>(result, demosaicb_rd142_res);
	hw_uint<16> demosaicb_rd143_res = demosaicb_rd143_select(denoise, d0, d1, dynamic_address);
	set_at<2288, 2304>(result, demosaicb_rd143_res);
	return result;
}

// denoise_update_0_write
//	denoise_denoise_update_0_write0
//	denoise_denoise_update_0_write1
//	denoise_denoise_update_0_write2
//	denoise_denoise_update_0_write3
//	denoise_denoise_update_0_write4
//	denoise_denoise_update_0_write5
//	denoise_denoise_update_0_write6
//	denoise_denoise_update_0_write7
//	denoise_denoise_update_0_write8
//	denoise_denoise_update_0_write9
//	denoise_denoise_update_0_write10
//	denoise_denoise_update_0_write11
//	denoise_denoise_update_0_write12
//	denoise_denoise_update_0_write13
//	denoise_denoise_update_0_write14
//	denoise_denoise_update_0_write15
inline void denoise_denoise_update_0_write_bundle_write(hw_uint<256>& denoise_update_0_write, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
	hw_uint<16> denoise_denoise_update_0_write0_res = denoise_update_0_write.extract<0, 15>();
	denoise_denoise_update_0_write0_write(denoise_denoise_update_0_write0_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write1_res = denoise_update_0_write.extract<16, 31>();
	denoise_denoise_update_0_write1_write(denoise_denoise_update_0_write1_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write2_res = denoise_update_0_write.extract<32, 47>();
	denoise_denoise_update_0_write2_write(denoise_denoise_update_0_write2_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write3_res = denoise_update_0_write.extract<48, 63>();
	denoise_denoise_update_0_write3_write(denoise_denoise_update_0_write3_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write4_res = denoise_update_0_write.extract<64, 79>();
	denoise_denoise_update_0_write4_write(denoise_denoise_update_0_write4_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write5_res = denoise_update_0_write.extract<80, 95>();
	denoise_denoise_update_0_write5_write(denoise_denoise_update_0_write5_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write6_res = denoise_update_0_write.extract<96, 111>();
	denoise_denoise_update_0_write6_write(denoise_denoise_update_0_write6_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write7_res = denoise_update_0_write.extract<112, 127>();
	denoise_denoise_update_0_write7_write(denoise_denoise_update_0_write7_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write8_res = denoise_update_0_write.extract<128, 143>();
	denoise_denoise_update_0_write8_write(denoise_denoise_update_0_write8_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write9_res = denoise_update_0_write.extract<144, 159>();
	denoise_denoise_update_0_write9_write(denoise_denoise_update_0_write9_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write10_res = denoise_update_0_write.extract<160, 175>();
	denoise_denoise_update_0_write10_write(denoise_denoise_update_0_write10_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write11_res = denoise_update_0_write.extract<176, 191>();
	denoise_denoise_update_0_write11_write(denoise_denoise_update_0_write11_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write12_res = denoise_update_0_write.extract<192, 207>();
	denoise_denoise_update_0_write12_write(denoise_denoise_update_0_write12_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write13_res = denoise_update_0_write.extract<208, 223>();
	denoise_denoise_update_0_write13_write(denoise_denoise_update_0_write13_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write14_res = denoise_update_0_write.extract<224, 239>();
	denoise_denoise_update_0_write14_write(denoise_denoise_update_0_write14_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write15_res = denoise_update_0_write.extract<240, 255>();
	denoise_denoise_update_0_write15_write(denoise_denoise_update_0_write15_res, denoise, d0, d1, dynamic_address);
}

struct denoiseb_denoiseb_update_0_write0_to_denoise_rd0_cache {
	// RAM Box: {[-16, 1936], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write1_to_denoise_rd1_cache {
	// RAM Box: {[-15, 1937], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write10_to_denoise_rd10_cache {
	// RAM Box: {[-6, 1946], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write11_to_denoise_rd11_cache {
	// RAM Box: {[-5, 1947], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write12_to_denoise_rd12_cache {
	// RAM Box: {[-4, 1948], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write13_to_denoise_rd13_cache {
	// RAM Box: {[-3, 1949], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write14_to_denoise_rd14_cache {
	// RAM Box: {[-2, 1950], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write15_to_denoise_rd15_cache {
	// RAM Box: {[-1, 1951], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write2_to_denoise_rd2_cache {
	// RAM Box: {[-14, 1938], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write3_to_denoise_rd3_cache {
	// RAM Box: {[-13, 1939], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write4_to_denoise_rd4_cache {
	// RAM Box: {[-12, 1940], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write5_to_denoise_rd5_cache {
	// RAM Box: {[-11, 1941], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write6_to_denoise_rd6_cache {
	// RAM Box: {[-10, 1942], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write7_to_denoise_rd7_cache {
	// RAM Box: {[-9, 1943], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write8_to_denoise_rd8_cache {
	// RAM Box: {[-8, 1944], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write9_to_denoise_rd9_cache {
	// RAM Box: {[-7, 1945], [-1, 1082]}
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

struct denoiseb_cache {
  // Reader addrs...
    // { denoise_update_0[d0, d1] -> denoiseb[16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[15 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // # of banks: 16
  denoiseb_denoiseb_update_0_write0_to_denoise_rd0_cache denoiseb_denoiseb_update_0_write0_to_denoise_rd0;
  denoiseb_denoiseb_update_0_write1_to_denoise_rd1_cache denoiseb_denoiseb_update_0_write1_to_denoise_rd1;
  denoiseb_denoiseb_update_0_write10_to_denoise_rd10_cache denoiseb_denoiseb_update_0_write10_to_denoise_rd10;
  denoiseb_denoiseb_update_0_write11_to_denoise_rd11_cache denoiseb_denoiseb_update_0_write11_to_denoise_rd11;
  denoiseb_denoiseb_update_0_write12_to_denoise_rd12_cache denoiseb_denoiseb_update_0_write12_to_denoise_rd12;
  denoiseb_denoiseb_update_0_write13_to_denoise_rd13_cache denoiseb_denoiseb_update_0_write13_to_denoise_rd13;
  denoiseb_denoiseb_update_0_write14_to_denoise_rd14_cache denoiseb_denoiseb_update_0_write14_to_denoise_rd14;
  denoiseb_denoiseb_update_0_write15_to_denoise_rd15_cache denoiseb_denoiseb_update_0_write15_to_denoise_rd15;
  denoiseb_denoiseb_update_0_write2_to_denoise_rd2_cache denoiseb_denoiseb_update_0_write2_to_denoise_rd2;
  denoiseb_denoiseb_update_0_write3_to_denoise_rd3_cache denoiseb_denoiseb_update_0_write3_to_denoise_rd3;
  denoiseb_denoiseb_update_0_write4_to_denoise_rd4_cache denoiseb_denoiseb_update_0_write4_to_denoise_rd4;
  denoiseb_denoiseb_update_0_write5_to_denoise_rd5_cache denoiseb_denoiseb_update_0_write5_to_denoise_rd5;
  denoiseb_denoiseb_update_0_write6_to_denoise_rd6_cache denoiseb_denoiseb_update_0_write6_to_denoise_rd6;
  denoiseb_denoiseb_update_0_write7_to_denoise_rd7_cache denoiseb_denoiseb_update_0_write7_to_denoise_rd7;
  denoiseb_denoiseb_update_0_write8_to_denoise_rd8_cache denoiseb_denoiseb_update_0_write8_to_denoise_rd8;
  denoiseb_denoiseb_update_0_write9_to_denoise_rd9_cache denoiseb_denoiseb_update_0_write9_to_denoise_rd9;
};



inline void denoiseb_denoiseb_update_0_write0_write(hw_uint<16>& denoiseb_denoiseb_update_0_write0, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write0_to_denoise_rd0.push(denoiseb_denoiseb_update_0_write0);
}

inline void denoiseb_denoiseb_update_0_write1_write(hw_uint<16>& denoiseb_denoiseb_update_0_write1, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write1_to_denoise_rd1.push(denoiseb_denoiseb_update_0_write1);
}

inline void denoiseb_denoiseb_update_0_write10_write(hw_uint<16>& denoiseb_denoiseb_update_0_write10, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write10_to_denoise_rd10.push(denoiseb_denoiseb_update_0_write10);
}

inline void denoiseb_denoiseb_update_0_write11_write(hw_uint<16>& denoiseb_denoiseb_update_0_write11, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write11_to_denoise_rd11.push(denoiseb_denoiseb_update_0_write11);
}

inline void denoiseb_denoiseb_update_0_write12_write(hw_uint<16>& denoiseb_denoiseb_update_0_write12, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write12_to_denoise_rd12.push(denoiseb_denoiseb_update_0_write12);
}

inline void denoiseb_denoiseb_update_0_write13_write(hw_uint<16>& denoiseb_denoiseb_update_0_write13, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write13_to_denoise_rd13.push(denoiseb_denoiseb_update_0_write13);
}

inline void denoiseb_denoiseb_update_0_write14_write(hw_uint<16>& denoiseb_denoiseb_update_0_write14, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write14_to_denoise_rd14.push(denoiseb_denoiseb_update_0_write14);
}

inline void denoiseb_denoiseb_update_0_write15_write(hw_uint<16>& denoiseb_denoiseb_update_0_write15, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write15_to_denoise_rd15.push(denoiseb_denoiseb_update_0_write15);
}

inline void denoiseb_denoiseb_update_0_write2_write(hw_uint<16>& denoiseb_denoiseb_update_0_write2, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write2_to_denoise_rd2.push(denoiseb_denoiseb_update_0_write2);
}

inline void denoiseb_denoiseb_update_0_write3_write(hw_uint<16>& denoiseb_denoiseb_update_0_write3, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write3_to_denoise_rd3.push(denoiseb_denoiseb_update_0_write3);
}

inline void denoiseb_denoiseb_update_0_write4_write(hw_uint<16>& denoiseb_denoiseb_update_0_write4, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write4_to_denoise_rd4.push(denoiseb_denoiseb_update_0_write4);
}

inline void denoiseb_denoiseb_update_0_write5_write(hw_uint<16>& denoiseb_denoiseb_update_0_write5, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write5_to_denoise_rd5.push(denoiseb_denoiseb_update_0_write5);
}

inline void denoiseb_denoiseb_update_0_write6_write(hw_uint<16>& denoiseb_denoiseb_update_0_write6, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write6_to_denoise_rd6.push(denoiseb_denoiseb_update_0_write6);
}

inline void denoiseb_denoiseb_update_0_write7_write(hw_uint<16>& denoiseb_denoiseb_update_0_write7, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write7_to_denoise_rd7.push(denoiseb_denoiseb_update_0_write7);
}

inline void denoiseb_denoiseb_update_0_write8_write(hw_uint<16>& denoiseb_denoiseb_update_0_write8, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write8_to_denoise_rd8.push(denoiseb_denoiseb_update_0_write8);
}

inline void denoiseb_denoiseb_update_0_write9_write(hw_uint<16>& denoiseb_denoiseb_update_0_write9, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write9_to_denoise_rd9.push(denoiseb_denoiseb_update_0_write9);
}

inline hw_uint<16> denoise_rd0_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd0 read pattern: { denoise_update_0[d0, d1] -> denoiseb[16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write0 = denoiseb.denoiseb_denoiseb_update_0_write0_to_denoise_rd0.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write0;
  return 0;
}

inline hw_uint<16> denoise_rd1_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd1 read pattern: { denoise_update_0[d0, d1] -> denoiseb[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write1 = denoiseb.denoiseb_denoiseb_update_0_write1_to_denoise_rd1.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write1;
  return 0;
}

inline hw_uint<16> denoise_rd10_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd10 read pattern: { denoise_update_0[d0, d1] -> denoiseb[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write10 = denoiseb.denoiseb_denoiseb_update_0_write10_to_denoise_rd10.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write10;
  return 0;
}

inline hw_uint<16> denoise_rd11_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd11 read pattern: { denoise_update_0[d0, d1] -> denoiseb[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write11 = denoiseb.denoiseb_denoiseb_update_0_write11_to_denoise_rd11.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write11;
  return 0;
}

inline hw_uint<16> denoise_rd12_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd12 read pattern: { denoise_update_0[d0, d1] -> denoiseb[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write12 = denoiseb.denoiseb_denoiseb_update_0_write12_to_denoise_rd12.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write12;
  return 0;
}

inline hw_uint<16> denoise_rd13_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd13 read pattern: { denoise_update_0[d0, d1] -> denoiseb[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write13 = denoiseb.denoiseb_denoiseb_update_0_write13_to_denoise_rd13.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write13;
  return 0;
}

inline hw_uint<16> denoise_rd14_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd14 read pattern: { denoise_update_0[d0, d1] -> denoiseb[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write14 = denoiseb.denoiseb_denoiseb_update_0_write14_to_denoise_rd14.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write14;
  return 0;
}

inline hw_uint<16> denoise_rd15_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd15 read pattern: { denoise_update_0[d0, d1] -> denoiseb[15 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write15 = denoiseb.denoiseb_denoiseb_update_0_write15_to_denoise_rd15.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write15;
  return 0;
}

inline hw_uint<16> denoise_rd2_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd2 read pattern: { denoise_update_0[d0, d1] -> denoiseb[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write2 = denoiseb.denoiseb_denoiseb_update_0_write2_to_denoise_rd2.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write2;
  return 0;
}

inline hw_uint<16> denoise_rd3_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd3 read pattern: { denoise_update_0[d0, d1] -> denoiseb[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write3 = denoiseb.denoiseb_denoiseb_update_0_write3_to_denoise_rd3.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write3;
  return 0;
}

inline hw_uint<16> denoise_rd4_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd4 read pattern: { denoise_update_0[d0, d1] -> denoiseb[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write4 = denoiseb.denoiseb_denoiseb_update_0_write4_to_denoise_rd4.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write4;
  return 0;
}

inline hw_uint<16> denoise_rd5_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd5 read pattern: { denoise_update_0[d0, d1] -> denoiseb[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write5 = denoiseb.denoiseb_denoiseb_update_0_write5_to_denoise_rd5.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write5;
  return 0;
}

inline hw_uint<16> denoise_rd6_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd6 read pattern: { denoise_update_0[d0, d1] -> denoiseb[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write6 = denoiseb.denoiseb_denoiseb_update_0_write6_to_denoise_rd6.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write6;
  return 0;
}

inline hw_uint<16> denoise_rd7_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd7 read pattern: { denoise_update_0[d0, d1] -> denoiseb[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write7 = denoiseb.denoiseb_denoiseb_update_0_write7_to_denoise_rd7.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write7;
  return 0;
}

inline hw_uint<16> denoise_rd8_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd8 read pattern: { denoise_update_0[d0, d1] -> denoiseb[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write8 = denoiseb.denoiseb_denoiseb_update_0_write8_to_denoise_rd8.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write8;
  return 0;
}

inline hw_uint<16> denoise_rd9_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd9 read pattern: { denoise_update_0[d0, d1] -> denoiseb[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write9 = denoiseb.denoiseb_denoiseb_update_0_write9_to_denoise_rd9.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write9;
  return 0;
}

// # of bundles = 2
// denoise_update_0_read
//	denoise_rd0
//	denoise_rd1
//	denoise_rd2
//	denoise_rd3
//	denoise_rd4
//	denoise_rd5
//	denoise_rd6
//	denoise_rd7
//	denoise_rd8
//	denoise_rd9
//	denoise_rd10
//	denoise_rd11
//	denoise_rd12
//	denoise_rd13
//	denoise_rd14
//	denoise_rd15
inline hw_uint<256> denoiseb_denoise_update_0_read_bundle_read(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // denoise_rd0
    // denoise_rd1
    // denoise_rd2
    // denoise_rd3
    // denoise_rd4
    // denoise_rd5
    // denoise_rd6
    // denoise_rd7
    // denoise_rd8
    // denoise_rd9
    // denoise_rd10
    // denoise_rd11
    // denoise_rd12
    // denoise_rd13
    // denoise_rd14
    // denoise_rd15

	hw_uint<256> result;
	hw_uint<16> denoise_rd0_res = denoise_rd0_select(denoiseb, d0, d1, dynamic_address);
	set_at<0, 256>(result, denoise_rd0_res);
	hw_uint<16> denoise_rd1_res = denoise_rd1_select(denoiseb, d0, d1, dynamic_address);
	set_at<16, 256>(result, denoise_rd1_res);
	hw_uint<16> denoise_rd2_res = denoise_rd2_select(denoiseb, d0, d1, dynamic_address);
	set_at<32, 256>(result, denoise_rd2_res);
	hw_uint<16> denoise_rd3_res = denoise_rd3_select(denoiseb, d0, d1, dynamic_address);
	set_at<48, 256>(result, denoise_rd3_res);
	hw_uint<16> denoise_rd4_res = denoise_rd4_select(denoiseb, d0, d1, dynamic_address);
	set_at<64, 256>(result, denoise_rd4_res);
	hw_uint<16> denoise_rd5_res = denoise_rd5_select(denoiseb, d0, d1, dynamic_address);
	set_at<80, 256>(result, denoise_rd5_res);
	hw_uint<16> denoise_rd6_res = denoise_rd6_select(denoiseb, d0, d1, dynamic_address);
	set_at<96, 256>(result, denoise_rd6_res);
	hw_uint<16> denoise_rd7_res = denoise_rd7_select(denoiseb, d0, d1, dynamic_address);
	set_at<112, 256>(result, denoise_rd7_res);
	hw_uint<16> denoise_rd8_res = denoise_rd8_select(denoiseb, d0, d1, dynamic_address);
	set_at<128, 256>(result, denoise_rd8_res);
	hw_uint<16> denoise_rd9_res = denoise_rd9_select(denoiseb, d0, d1, dynamic_address);
	set_at<144, 256>(result, denoise_rd9_res);
	hw_uint<16> denoise_rd10_res = denoise_rd10_select(denoiseb, d0, d1, dynamic_address);
	set_at<160, 256>(result, denoise_rd10_res);
	hw_uint<16> denoise_rd11_res = denoise_rd11_select(denoiseb, d0, d1, dynamic_address);
	set_at<176, 256>(result, denoise_rd11_res);
	hw_uint<16> denoise_rd12_res = denoise_rd12_select(denoiseb, d0, d1, dynamic_address);
	set_at<192, 256>(result, denoise_rd12_res);
	hw_uint<16> denoise_rd13_res = denoise_rd13_select(denoiseb, d0, d1, dynamic_address);
	set_at<208, 256>(result, denoise_rd13_res);
	hw_uint<16> denoise_rd14_res = denoise_rd14_select(denoiseb, d0, d1, dynamic_address);
	set_at<224, 256>(result, denoise_rd14_res);
	hw_uint<16> denoise_rd15_res = denoise_rd15_select(denoiseb, d0, d1, dynamic_address);
	set_at<240, 256>(result, denoise_rd15_res);
	return result;
}

// denoiseb_update_0_write
//	denoiseb_denoiseb_update_0_write0
//	denoiseb_denoiseb_update_0_write1
//	denoiseb_denoiseb_update_0_write2
//	denoiseb_denoiseb_update_0_write3
//	denoiseb_denoiseb_update_0_write4
//	denoiseb_denoiseb_update_0_write5
//	denoiseb_denoiseb_update_0_write6
//	denoiseb_denoiseb_update_0_write7
//	denoiseb_denoiseb_update_0_write8
//	denoiseb_denoiseb_update_0_write9
//	denoiseb_denoiseb_update_0_write10
//	denoiseb_denoiseb_update_0_write11
//	denoiseb_denoiseb_update_0_write12
//	denoiseb_denoiseb_update_0_write13
//	denoiseb_denoiseb_update_0_write14
//	denoiseb_denoiseb_update_0_write15
inline void denoiseb_denoiseb_update_0_write_bundle_write(hw_uint<256>& denoiseb_update_0_write, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
	hw_uint<16> denoiseb_denoiseb_update_0_write0_res = denoiseb_update_0_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_write0_write(denoiseb_denoiseb_update_0_write0_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write1_res = denoiseb_update_0_write.extract<16, 31>();
	denoiseb_denoiseb_update_0_write1_write(denoiseb_denoiseb_update_0_write1_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write2_res = denoiseb_update_0_write.extract<32, 47>();
	denoiseb_denoiseb_update_0_write2_write(denoiseb_denoiseb_update_0_write2_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write3_res = denoiseb_update_0_write.extract<48, 63>();
	denoiseb_denoiseb_update_0_write3_write(denoiseb_denoiseb_update_0_write3_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write4_res = denoiseb_update_0_write.extract<64, 79>();
	denoiseb_denoiseb_update_0_write4_write(denoiseb_denoiseb_update_0_write4_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write5_res = denoiseb_update_0_write.extract<80, 95>();
	denoiseb_denoiseb_update_0_write5_write(denoiseb_denoiseb_update_0_write5_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write6_res = denoiseb_update_0_write.extract<96, 111>();
	denoiseb_denoiseb_update_0_write6_write(denoiseb_denoiseb_update_0_write6_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write7_res = denoiseb_update_0_write.extract<112, 127>();
	denoiseb_denoiseb_update_0_write7_write(denoiseb_denoiseb_update_0_write7_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write8_res = denoiseb_update_0_write.extract<128, 143>();
	denoiseb_denoiseb_update_0_write8_write(denoiseb_denoiseb_update_0_write8_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write9_res = denoiseb_update_0_write.extract<144, 159>();
	denoiseb_denoiseb_update_0_write9_write(denoiseb_denoiseb_update_0_write9_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write10_res = denoiseb_update_0_write.extract<160, 175>();
	denoiseb_denoiseb_update_0_write10_write(denoiseb_denoiseb_update_0_write10_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write11_res = denoiseb_update_0_write.extract<176, 191>();
	denoiseb_denoiseb_update_0_write11_write(denoiseb_denoiseb_update_0_write11_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write12_res = denoiseb_update_0_write.extract<192, 207>();
	denoiseb_denoiseb_update_0_write12_write(denoiseb_denoiseb_update_0_write12_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write13_res = denoiseb_update_0_write.extract<208, 223>();
	denoiseb_denoiseb_update_0_write13_write(denoiseb_denoiseb_update_0_write13_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write14_res = denoiseb_update_0_write.extract<224, 239>();
	denoiseb_denoiseb_update_0_write14_write(denoiseb_denoiseb_update_0_write14_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write15_res = denoiseb_update_0_write.extract<240, 255>();
	denoiseb_denoiseb_update_0_write15_write(denoiseb_denoiseb_update_0_write15_res, denoiseb, d0, d1, dynamic_address);
}

struct raw_raw_update_0_write0_merged_banks_25_cache {
	// RAM Box: {[-16, 1952], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 10
  // 0, 1, 125, 126, 250, 251, 375, 376, 500, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 123> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 123> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	fifo<hw_uint<16>, 123> f15;
	hw_uint<16> f16;
	hw_uint<16> f18;


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

	inline hw_uint<16> peek_126() {
		return f6;
	}

	inline hw_uint<16> peek_249() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_250() {
		return f8;
	}

	inline hw_uint<16> peek_251() {
		return f10;
	}

	inline hw_uint<16> peek_374() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_375() {
		return f12;
	}

	inline hw_uint<16> peek_376() {
		return f14;
	}

	inline hw_uint<16> peek_499() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f15.back();
	}

	inline hw_uint<16> peek_500() {
		return f16;
	}

	inline hw_uint<16> peek_501() {
		return f18;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f16 = f15.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f15.push(f14);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct raw_raw_update_0_write1_merged_banks_25_cache {
	// RAM Box: {[-15, 1953], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 10
  // 0, 1, 125, 126, 250, 251, 375, 376, 500, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 123> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 123> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	fifo<hw_uint<16>, 123> f15;
	hw_uint<16> f16;
	hw_uint<16> f18;


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

	inline hw_uint<16> peek_126() {
		return f6;
	}

	inline hw_uint<16> peek_249() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_250() {
		return f8;
	}

	inline hw_uint<16> peek_251() {
		return f10;
	}

	inline hw_uint<16> peek_374() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_375() {
		return f12;
	}

	inline hw_uint<16> peek_376() {
		return f14;
	}

	inline hw_uint<16> peek_499() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f15.back();
	}

	inline hw_uint<16> peek_500() {
		return f16;
	}

	inline hw_uint<16> peek_501() {
		return f18;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f16 = f15.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f15.push(f14);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct raw_raw_update_0_write10_merged_banks_25_cache {
	// RAM Box: {[-6, 1946], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write11_merged_banks_25_cache {
	// RAM Box: {[-5, 1947], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write12_merged_banks_25_cache {
	// RAM Box: {[-4, 1948], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write13_merged_banks_25_cache {
	// RAM Box: {[-3, 1949], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write14_merged_banks_25_cache {
	// RAM Box: {[-18, 1950], [-3, 1084]}
	// Capacity: 503
	// # of read delays: 11
  // 0, 1, 2, 126, 127, 251, 252, 376, 377, 501, 502
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 123> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 123> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	fifo<hw_uint<16>, 123> f13;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 123> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_125() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_126() {
		return f6;
	}

	inline hw_uint<16> peek_127() {
		return f8;
	}

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_251() {
		return f10;
	}

	inline hw_uint<16> peek_252() {
		return f12;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<16> peek_376() {
		return f14;
	}

	inline hw_uint<16> peek_377() {
		return f16;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f17.back();
	}

	inline hw_uint<16> peek_501() {
		return f18;
	}

	inline hw_uint<16> peek_502() {
		return f20;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f18 = f17.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f17.push(f16);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
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

struct raw_raw_update_0_write15_merged_banks_25_cache {
	// RAM Box: {[-17, 1951], [-3, 1084]}
	// Capacity: 503
	// # of read delays: 11
  // 0, 1, 2, 126, 127, 251, 252, 376, 377, 501, 502
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 123> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 123> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	fifo<hw_uint<16>, 123> f13;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 123> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_125() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_126() {
		return f6;
	}

	inline hw_uint<16> peek_127() {
		return f8;
	}

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_251() {
		return f10;
	}

	inline hw_uint<16> peek_252() {
		return f12;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<16> peek_376() {
		return f14;
	}

	inline hw_uint<16> peek_377() {
		return f16;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f17.back();
	}

	inline hw_uint<16> peek_501() {
		return f18;
	}

	inline hw_uint<16> peek_502() {
		return f20;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f18 = f17.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f17.push(f16);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
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

struct raw_raw_update_0_write2_merged_banks_25_cache {
	// RAM Box: {[-14, 1938], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write3_merged_banks_25_cache {
	// RAM Box: {[-13, 1939], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write4_merged_banks_25_cache {
	// RAM Box: {[-12, 1940], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write5_merged_banks_25_cache {
	// RAM Box: {[-11, 1941], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write6_merged_banks_25_cache {
	// RAM Box: {[-10, 1942], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write7_merged_banks_25_cache {
	// RAM Box: {[-9, 1943], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write8_merged_banks_25_cache {
	// RAM Box: {[-8, 1944], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_raw_update_0_write9_merged_banks_25_cache {
	// RAM Box: {[-7, 1945], [-3, 1084]}
	// Capacity: 502
	// # of read delays: 6
  // 0, 1, 126, 251, 376, 501
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_250() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_251() {
		return f6;
	}

	inline hw_uint<16> peek_375() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_376() {
		return f8;
	}

	inline hw_uint<16> peek_500() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_501() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct raw_cache {
  // Reader addrs...
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // # of banks: 16
  raw_raw_update_0_write0_merged_banks_25_cache raw_raw_update_0_write0_merged_banks_25;
  raw_raw_update_0_write1_merged_banks_25_cache raw_raw_update_0_write1_merged_banks_25;
  raw_raw_update_0_write10_merged_banks_25_cache raw_raw_update_0_write10_merged_banks_25;
  raw_raw_update_0_write11_merged_banks_25_cache raw_raw_update_0_write11_merged_banks_25;
  raw_raw_update_0_write12_merged_banks_25_cache raw_raw_update_0_write12_merged_banks_25;
  raw_raw_update_0_write13_merged_banks_25_cache raw_raw_update_0_write13_merged_banks_25;
  raw_raw_update_0_write14_merged_banks_25_cache raw_raw_update_0_write14_merged_banks_25;
  raw_raw_update_0_write15_merged_banks_25_cache raw_raw_update_0_write15_merged_banks_25;
  raw_raw_update_0_write2_merged_banks_25_cache raw_raw_update_0_write2_merged_banks_25;
  raw_raw_update_0_write3_merged_banks_25_cache raw_raw_update_0_write3_merged_banks_25;
  raw_raw_update_0_write4_merged_banks_25_cache raw_raw_update_0_write4_merged_banks_25;
  raw_raw_update_0_write5_merged_banks_25_cache raw_raw_update_0_write5_merged_banks_25;
  raw_raw_update_0_write6_merged_banks_25_cache raw_raw_update_0_write6_merged_banks_25;
  raw_raw_update_0_write7_merged_banks_25_cache raw_raw_update_0_write7_merged_banks_25;
  raw_raw_update_0_write8_merged_banks_25_cache raw_raw_update_0_write8_merged_banks_25;
  raw_raw_update_0_write9_merged_banks_25_cache raw_raw_update_0_write9_merged_banks_25;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write0_merged_banks_25.push(raw_raw_update_0_write0);
}

inline void raw_raw_update_0_write1_write(hw_uint<16>& raw_raw_update_0_write1, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write1_merged_banks_25.push(raw_raw_update_0_write1);
}

inline void raw_raw_update_0_write10_write(hw_uint<16>& raw_raw_update_0_write10, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write10_merged_banks_25.push(raw_raw_update_0_write10);
}

inline void raw_raw_update_0_write11_write(hw_uint<16>& raw_raw_update_0_write11, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write11_merged_banks_25.push(raw_raw_update_0_write11);
}

inline void raw_raw_update_0_write12_write(hw_uint<16>& raw_raw_update_0_write12, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write12_merged_banks_25.push(raw_raw_update_0_write12);
}

inline void raw_raw_update_0_write13_write(hw_uint<16>& raw_raw_update_0_write13, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write13_merged_banks_25.push(raw_raw_update_0_write13);
}

inline void raw_raw_update_0_write14_write(hw_uint<16>& raw_raw_update_0_write14, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write14_merged_banks_25.push(raw_raw_update_0_write14);
}

inline void raw_raw_update_0_write15_write(hw_uint<16>& raw_raw_update_0_write15, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write15_merged_banks_25.push(raw_raw_update_0_write15);
}

inline void raw_raw_update_0_write2_write(hw_uint<16>& raw_raw_update_0_write2, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write2_merged_banks_25.push(raw_raw_update_0_write2);
}

inline void raw_raw_update_0_write3_write(hw_uint<16>& raw_raw_update_0_write3, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write3_merged_banks_25.push(raw_raw_update_0_write3);
}

inline void raw_raw_update_0_write4_write(hw_uint<16>& raw_raw_update_0_write4, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write4_merged_banks_25.push(raw_raw_update_0_write4);
}

inline void raw_raw_update_0_write5_write(hw_uint<16>& raw_raw_update_0_write5, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write5_merged_banks_25.push(raw_raw_update_0_write5);
}

inline void raw_raw_update_0_write6_write(hw_uint<16>& raw_raw_update_0_write6, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write6_merged_banks_25.push(raw_raw_update_0_write6);
}

inline void raw_raw_update_0_write7_write(hw_uint<16>& raw_raw_update_0_write7, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write7_merged_banks_25.push(raw_raw_update_0_write7);
}

inline void raw_raw_update_0_write8_write(hw_uint<16>& raw_raw_update_0_write8, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write8_merged_banks_25.push(raw_raw_update_0_write8);
}

inline void raw_raw_update_0_write9_write(hw_uint<16>& raw_raw_update_0_write9, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write9_merged_banks_25.push(raw_raw_update_0_write9);
}

inline hw_uint<16> denoiseb_rd0_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd0 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_502();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd1_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd1 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_377();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd10_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd10 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd100_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd100 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd101_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd101 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd102_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd102 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd103_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd103 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd104_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd104 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd105_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd105 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd106_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd106 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd107_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd107 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd108_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd108 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd109_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd109 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd11_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd11 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd110_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd110 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd111_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd111 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd112_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd112 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd113_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd113 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd114_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd114 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd115_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd115 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd116_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd116 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd117_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd117 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd118_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd118 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd119_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd119 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd12_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd12 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd120_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd120 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd121_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd121 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd122_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd122 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd123_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd123 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd124_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd124 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd125_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd125 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd126_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd126 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd127_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd127 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd128_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd128 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd129_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd129 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd13_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd13 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd130_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd130 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd131_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd131 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd132_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd132 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd133_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd133 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd134_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd134 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd135_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd135 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd136_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd136 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd137_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd137 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd138_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd138 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd139_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd139 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd14_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd14 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd140_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd140 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd141_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd141 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd142_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd142 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd143_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd143 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd144_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd144 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd145_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd145 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd146_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd146 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd147_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd147 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd148_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd148 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd149_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd149 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd15_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd15 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd150_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd150 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd151_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd151 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd152_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd152 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd153_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd153 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd154_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd154 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd155_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd155 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd156_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd156 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd157_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd157 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd158_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd158 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd159_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd159 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd16_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd16 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd160_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd160 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd161_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd161 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd162_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd162 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd163_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd163 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd164_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd164 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd165_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd165 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd166_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd166 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd167_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd167 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd168_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd168 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd169_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd169 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd17_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd17 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd170_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd170 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd171_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd171 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd172_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd172 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd173_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd173 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd174_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd174 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd175_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd175 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd176_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd176 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd177_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd177 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd178_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd178 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd179_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd179 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd18_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd18 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd180_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd180 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd181_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd181 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd182_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd182 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd183_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd183 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd184_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd184 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd185_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd185 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd186_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd186 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd187_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd187 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd188_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd188 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd189_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd189 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd19_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd19 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd190_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd190 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd191_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd191 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd192_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd192 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd193_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd193 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd194_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd194 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd195_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd195 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd196_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd196 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd197_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd197 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd198_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd198 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd199_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd199 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd2_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd2 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_252();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd20_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd20 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd200_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd200 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd201_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd201 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd202_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd202 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd203_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd203 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd204_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd204 read pattern: { denoiseb_update_0[d0, d1] -> raw[6 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write6 = raw.raw_raw_update_0_write6_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write6;
  return 0;
}

inline hw_uint<16> denoiseb_rd205_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd205 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd206_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd206 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd207_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd207 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd208_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd208 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd209_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd209 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd21_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd21 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd210_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd210 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd211_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd211 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd212_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd212 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd213_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd213 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd214_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd214 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd215_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd215 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd216_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd216 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd217_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd217 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd218_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd218 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd219_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd219 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd22_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd22 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd220_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd220 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd221_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd221 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd222_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd222 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd223_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd223 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd224_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd224 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd225_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd225 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd226_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd226 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd227_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd227 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd228_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd228 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd229_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd229 read pattern: { denoiseb_update_0[d0, d1] -> raw[7 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write7 = raw.raw_raw_update_0_write7_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write7;
  return 0;
}

inline hw_uint<16> denoiseb_rd23_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd23 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd230_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd230 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd231_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd231 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd232_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd232 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd233_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd233 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd234_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd234 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd235_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd235 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd236_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd236 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd237_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd237 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd238_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd238 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd239_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd239 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd24_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd24 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd240_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd240 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd241_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd241 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd242_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd242 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd243_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd243 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd244_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd244 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd245_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd245 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd246_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd246 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd247_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd247 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd248_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd248 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd249_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd249 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd25_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd25 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_502();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd250_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd250 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd251_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd251 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd252_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd252 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd253_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd253 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd254_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd254 read pattern: { denoiseb_update_0[d0, d1] -> raw[8 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write8 = raw.raw_raw_update_0_write8_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write8;
  return 0;
}

inline hw_uint<16> denoiseb_rd255_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd255 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd256_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd256 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd257_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd257 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd258_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd258 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd259_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd259 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd26_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd26 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_377();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd260_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd260 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd261_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd261 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd262_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd262 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd263_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd263 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd264_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd264 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd265_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd265 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd266_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd266 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd267_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd267 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd268_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd268 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd269_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd269 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd27_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd27 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_252();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd270_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd270 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd271_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd271 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd272_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd272 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd273_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd273 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd274_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd274 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd275_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd275 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd276_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd276 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd277_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd277 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd278_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd278 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd279_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd279 read pattern: { denoiseb_update_0[d0, d1] -> raw[9 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write9 = raw.raw_raw_update_0_write9_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write9;
  return 0;
}

inline hw_uint<16> denoiseb_rd28_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd28 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_127();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd280_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd280 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd281_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd281 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd282_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd282 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd283_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd283 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd284_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd284 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd285_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd285 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd286_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd286 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd287_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd287 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd288_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd288 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd289_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd289 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd29_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd29 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd290_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd290 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd291_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd291 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd292_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd292 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd293_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd293 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd294_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd294 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd295_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd295 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd296_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd296 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd297_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd297 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd298_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd298 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd299_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd299 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd3_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd3 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_127();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd30_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd30 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd300_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd300 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd301_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd301 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd302_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd302 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd303_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd303 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd304_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd304 read pattern: { denoiseb_update_0[d0, d1] -> raw[10 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write10 = raw.raw_raw_update_0_write10_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write10;
  return 0;
}

inline hw_uint<16> denoiseb_rd305_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd305 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd306_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd306 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd307_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd307 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd308_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd308 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd309_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd309 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd31_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd31 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd310_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd310 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd311_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd311 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd312_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd312 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd313_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd313 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd314_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd314 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd315_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd315 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd316_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd316 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd317_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd317 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd318_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd318 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd319_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd319 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd32_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd32 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd320_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd320 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd321_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd321 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd322_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd322 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd323_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd323 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd324_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd324 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd325_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd325 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd326_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd326 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd327_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd327 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd328_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd328 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd329_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd329 read pattern: { denoiseb_update_0[d0, d1] -> raw[11 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write11 = raw.raw_raw_update_0_write11_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write11;
  return 0;
}

inline hw_uint<16> denoiseb_rd33_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd33 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd330_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd330 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd331_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd331 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd332_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd332 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd333_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd333 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd334_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd334 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd335_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd335 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd336_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd336 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd337_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd337 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd338_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd338 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd339_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd339 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd34_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd34 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd340_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd340 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd341_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd341 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd342_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd342 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd343_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd343 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd344_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd344 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd345_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd345 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd346_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd346 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd347_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd347 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd348_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd348 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd349_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd349 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd35_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd35 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd350_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd350 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd351_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd351 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd352_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd352 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd353_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd353 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd354_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd354 read pattern: { denoiseb_update_0[d0, d1] -> raw[12 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write12 = raw.raw_raw_update_0_write12_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write12;
  return 0;
}

inline hw_uint<16> denoiseb_rd355_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd355 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd356_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd356 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd357_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd357 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd358_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd358 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd359_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd359 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd36_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd36 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd360_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd360 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd361_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd361 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd362_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd362 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd363_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd363 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd364_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd364 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd365_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd365 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd366_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd366 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd367_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd367 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd368_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd368 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd369_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd369 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd37_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd37 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd370_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd370 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_500();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd371_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd371 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_375();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd372_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd372 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_250();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd373_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd373 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_125();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd374_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd374 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd375_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd375 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd376_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd376 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd377_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd377 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd378_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd378 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd379_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd379 read pattern: { denoiseb_update_0[d0, d1] -> raw[13 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write13 = raw.raw_raw_update_0_write13_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write13;
  return 0;
}

inline hw_uint<16> denoiseb_rd38_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd38 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd380_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd380 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd381_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd381 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd382_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd382 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd383_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd383 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd384_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd384 read pattern: { denoiseb_update_0[d0, d1] -> raw[14 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd385_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd385 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd386_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd386 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd387_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd387 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd388_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd388 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd389_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd389 read pattern: { denoiseb_update_0[d0, d1] -> raw[15 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd39_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd39 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd390_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd390 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_500();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd391_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd391 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_375();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd392_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd392 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_250();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd393_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd393 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_125();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd394_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd394 read pattern: { denoiseb_update_0[d0, d1] -> raw[16 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd395_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd395 read pattern: { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_500();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd396_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd396 read pattern: { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_375();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd397_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd397 read pattern: { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_250();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd398_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd398 read pattern: { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_125();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd399_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd399 read pattern: { denoiseb_update_0[d0, d1] -> raw[17 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd4_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd4 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write14 = raw.raw_raw_update_0_write14_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write14;
  return 0;
}

inline hw_uint<16> denoiseb_rd40_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd40 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd41_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd41 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd42_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd42 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd43_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd43 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd44_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd44 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd45_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd45 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd46_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd46 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd47_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd47 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd48_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd48 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd49_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd49 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd5_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd5 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_502();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd50_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd50 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd51_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd51 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd52_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd52 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd53_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd53 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd54_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd54 read pattern: { denoiseb_update_0[d0, d1] -> raw[16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd55_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd55 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd56_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd56 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd57_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd57 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd58_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd58 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd59_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd59 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd6_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd6 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_377();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd60_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd60 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd61_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd61 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd62_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd62 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd63_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd63 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd64_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd64 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd65_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd65 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd66_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd66 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd67_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd67 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd68_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd68 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd69_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd69 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd7_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd7 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_252();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd70_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd70 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd71_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd71 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd72_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd72 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd73_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd73 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd74_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd74 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd75_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd75 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd76_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd76 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd77_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd77 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd78_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd78 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd79_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd79 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd8_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd8 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_127();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd80_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd80 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd81_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd81 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd82_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd82 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd83_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd83 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd84_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd84 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd85_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd85 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd86_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd86 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd87_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd87 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd88_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd88 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd89_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd89 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd9_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd9 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write15 = raw.raw_raw_update_0_write15_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write15;
  return 0;
}

inline hw_uint<16> denoiseb_rd90_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd90 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd91_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd91 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd92_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd92 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd93_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd93 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd94_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd94 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write4 = raw.raw_raw_update_0_write4_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write4;
  return 0;
}

inline hw_uint<16> denoiseb_rd95_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd95 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_501();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd96_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd96 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, -1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_376();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd97_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd97 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_251();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd98_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd98 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 1 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_126();
  return value_raw_raw_update_0_write5;
  return 0;
}

inline hw_uint<16> denoiseb_rd99_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd99 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 16d0, 2 + d1] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write5 = raw.raw_raw_update_0_write5_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write5;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_read
//	denoiseb_rd0
//	denoiseb_rd1
//	denoiseb_rd2
//	denoiseb_rd3
//	denoiseb_rd4
//	denoiseb_rd5
//	denoiseb_rd6
//	denoiseb_rd7
//	denoiseb_rd8
//	denoiseb_rd9
//	denoiseb_rd10
//	denoiseb_rd11
//	denoiseb_rd12
//	denoiseb_rd13
//	denoiseb_rd14
//	denoiseb_rd15
//	denoiseb_rd16
//	denoiseb_rd17
//	denoiseb_rd18
//	denoiseb_rd19
//	denoiseb_rd20
//	denoiseb_rd21
//	denoiseb_rd22
//	denoiseb_rd23
//	denoiseb_rd24
//	denoiseb_rd25
//	denoiseb_rd26
//	denoiseb_rd27
//	denoiseb_rd28
//	denoiseb_rd29
//	denoiseb_rd30
//	denoiseb_rd31
//	denoiseb_rd32
//	denoiseb_rd33
//	denoiseb_rd34
//	denoiseb_rd35
//	denoiseb_rd36
//	denoiseb_rd37
//	denoiseb_rd38
//	denoiseb_rd39
//	denoiseb_rd40
//	denoiseb_rd41
//	denoiseb_rd42
//	denoiseb_rd43
//	denoiseb_rd44
//	denoiseb_rd45
//	denoiseb_rd46
//	denoiseb_rd47
//	denoiseb_rd48
//	denoiseb_rd49
//	denoiseb_rd50
//	denoiseb_rd51
//	denoiseb_rd52
//	denoiseb_rd53
//	denoiseb_rd54
//	denoiseb_rd55
//	denoiseb_rd56
//	denoiseb_rd57
//	denoiseb_rd58
//	denoiseb_rd59
//	denoiseb_rd60
//	denoiseb_rd61
//	denoiseb_rd62
//	denoiseb_rd63
//	denoiseb_rd64
//	denoiseb_rd65
//	denoiseb_rd66
//	denoiseb_rd67
//	denoiseb_rd68
//	denoiseb_rd69
//	denoiseb_rd70
//	denoiseb_rd71
//	denoiseb_rd72
//	denoiseb_rd73
//	denoiseb_rd74
//	denoiseb_rd75
//	denoiseb_rd76
//	denoiseb_rd77
//	denoiseb_rd78
//	denoiseb_rd79
//	denoiseb_rd80
//	denoiseb_rd81
//	denoiseb_rd82
//	denoiseb_rd83
//	denoiseb_rd84
//	denoiseb_rd85
//	denoiseb_rd86
//	denoiseb_rd87
//	denoiseb_rd88
//	denoiseb_rd89
//	denoiseb_rd90
//	denoiseb_rd91
//	denoiseb_rd92
//	denoiseb_rd93
//	denoiseb_rd94
//	denoiseb_rd95
//	denoiseb_rd96
//	denoiseb_rd97
//	denoiseb_rd98
//	denoiseb_rd99
//	denoiseb_rd100
//	denoiseb_rd101
//	denoiseb_rd102
//	denoiseb_rd103
//	denoiseb_rd104
//	denoiseb_rd105
//	denoiseb_rd106
//	denoiseb_rd107
//	denoiseb_rd108
//	denoiseb_rd109
//	denoiseb_rd110
//	denoiseb_rd111
//	denoiseb_rd112
//	denoiseb_rd113
//	denoiseb_rd114
//	denoiseb_rd115
//	denoiseb_rd116
//	denoiseb_rd117
//	denoiseb_rd118
//	denoiseb_rd119
//	denoiseb_rd120
//	denoiseb_rd121
//	denoiseb_rd122
//	denoiseb_rd123
//	denoiseb_rd124
//	denoiseb_rd125
//	denoiseb_rd126
//	denoiseb_rd127
//	denoiseb_rd128
//	denoiseb_rd129
//	denoiseb_rd130
//	denoiseb_rd131
//	denoiseb_rd132
//	denoiseb_rd133
//	denoiseb_rd134
//	denoiseb_rd135
//	denoiseb_rd136
//	denoiseb_rd137
//	denoiseb_rd138
//	denoiseb_rd139
//	denoiseb_rd140
//	denoiseb_rd141
//	denoiseb_rd142
//	denoiseb_rd143
//	denoiseb_rd144
//	denoiseb_rd145
//	denoiseb_rd146
//	denoiseb_rd147
//	denoiseb_rd148
//	denoiseb_rd149
//	denoiseb_rd150
//	denoiseb_rd151
//	denoiseb_rd152
//	denoiseb_rd153
//	denoiseb_rd154
//	denoiseb_rd155
//	denoiseb_rd156
//	denoiseb_rd157
//	denoiseb_rd158
//	denoiseb_rd159
//	denoiseb_rd160
//	denoiseb_rd161
//	denoiseb_rd162
//	denoiseb_rd163
//	denoiseb_rd164
//	denoiseb_rd165
//	denoiseb_rd166
//	denoiseb_rd167
//	denoiseb_rd168
//	denoiseb_rd169
//	denoiseb_rd170
//	denoiseb_rd171
//	denoiseb_rd172
//	denoiseb_rd173
//	denoiseb_rd174
//	denoiseb_rd175
//	denoiseb_rd176
//	denoiseb_rd177
//	denoiseb_rd178
//	denoiseb_rd179
//	denoiseb_rd180
//	denoiseb_rd181
//	denoiseb_rd182
//	denoiseb_rd183
//	denoiseb_rd184
//	denoiseb_rd185
//	denoiseb_rd186
//	denoiseb_rd187
//	denoiseb_rd188
//	denoiseb_rd189
//	denoiseb_rd190
//	denoiseb_rd191
//	denoiseb_rd192
//	denoiseb_rd193
//	denoiseb_rd194
//	denoiseb_rd195
//	denoiseb_rd196
//	denoiseb_rd197
//	denoiseb_rd198
//	denoiseb_rd199
//	denoiseb_rd200
//	denoiseb_rd201
//	denoiseb_rd202
//	denoiseb_rd203
//	denoiseb_rd204
//	denoiseb_rd205
//	denoiseb_rd206
//	denoiseb_rd207
//	denoiseb_rd208
//	denoiseb_rd209
//	denoiseb_rd210
//	denoiseb_rd211
//	denoiseb_rd212
//	denoiseb_rd213
//	denoiseb_rd214
//	denoiseb_rd215
//	denoiseb_rd216
//	denoiseb_rd217
//	denoiseb_rd218
//	denoiseb_rd219
//	denoiseb_rd220
//	denoiseb_rd221
//	denoiseb_rd222
//	denoiseb_rd223
//	denoiseb_rd224
//	denoiseb_rd225
//	denoiseb_rd226
//	denoiseb_rd227
//	denoiseb_rd228
//	denoiseb_rd229
//	denoiseb_rd230
//	denoiseb_rd231
//	denoiseb_rd232
//	denoiseb_rd233
//	denoiseb_rd234
//	denoiseb_rd235
//	denoiseb_rd236
//	denoiseb_rd237
//	denoiseb_rd238
//	denoiseb_rd239
//	denoiseb_rd240
//	denoiseb_rd241
//	denoiseb_rd242
//	denoiseb_rd243
//	denoiseb_rd244
//	denoiseb_rd245
//	denoiseb_rd246
//	denoiseb_rd247
//	denoiseb_rd248
//	denoiseb_rd249
//	denoiseb_rd250
//	denoiseb_rd251
//	denoiseb_rd252
//	denoiseb_rd253
//	denoiseb_rd254
//	denoiseb_rd255
//	denoiseb_rd256
//	denoiseb_rd257
//	denoiseb_rd258
//	denoiseb_rd259
//	denoiseb_rd260
//	denoiseb_rd261
//	denoiseb_rd262
//	denoiseb_rd263
//	denoiseb_rd264
//	denoiseb_rd265
//	denoiseb_rd266
//	denoiseb_rd267
//	denoiseb_rd268
//	denoiseb_rd269
//	denoiseb_rd270
//	denoiseb_rd271
//	denoiseb_rd272
//	denoiseb_rd273
//	denoiseb_rd274
//	denoiseb_rd275
//	denoiseb_rd276
//	denoiseb_rd277
//	denoiseb_rd278
//	denoiseb_rd279
//	denoiseb_rd280
//	denoiseb_rd281
//	denoiseb_rd282
//	denoiseb_rd283
//	denoiseb_rd284
//	denoiseb_rd285
//	denoiseb_rd286
//	denoiseb_rd287
//	denoiseb_rd288
//	denoiseb_rd289
//	denoiseb_rd290
//	denoiseb_rd291
//	denoiseb_rd292
//	denoiseb_rd293
//	denoiseb_rd294
//	denoiseb_rd295
//	denoiseb_rd296
//	denoiseb_rd297
//	denoiseb_rd298
//	denoiseb_rd299
//	denoiseb_rd300
//	denoiseb_rd301
//	denoiseb_rd302
//	denoiseb_rd303
//	denoiseb_rd304
//	denoiseb_rd305
//	denoiseb_rd306
//	denoiseb_rd307
//	denoiseb_rd308
//	denoiseb_rd309
//	denoiseb_rd310
//	denoiseb_rd311
//	denoiseb_rd312
//	denoiseb_rd313
//	denoiseb_rd314
//	denoiseb_rd315
//	denoiseb_rd316
//	denoiseb_rd317
//	denoiseb_rd318
//	denoiseb_rd319
//	denoiseb_rd320
//	denoiseb_rd321
//	denoiseb_rd322
//	denoiseb_rd323
//	denoiseb_rd324
//	denoiseb_rd325
//	denoiseb_rd326
//	denoiseb_rd327
//	denoiseb_rd328
//	denoiseb_rd329
//	denoiseb_rd330
//	denoiseb_rd331
//	denoiseb_rd332
//	denoiseb_rd333
//	denoiseb_rd334
//	denoiseb_rd335
//	denoiseb_rd336
//	denoiseb_rd337
//	denoiseb_rd338
//	denoiseb_rd339
//	denoiseb_rd340
//	denoiseb_rd341
//	denoiseb_rd342
//	denoiseb_rd343
//	denoiseb_rd344
//	denoiseb_rd345
//	denoiseb_rd346
//	denoiseb_rd347
//	denoiseb_rd348
//	denoiseb_rd349
//	denoiseb_rd350
//	denoiseb_rd351
//	denoiseb_rd352
//	denoiseb_rd353
//	denoiseb_rd354
//	denoiseb_rd355
//	denoiseb_rd356
//	denoiseb_rd357
//	denoiseb_rd358
//	denoiseb_rd359
//	denoiseb_rd360
//	denoiseb_rd361
//	denoiseb_rd362
//	denoiseb_rd363
//	denoiseb_rd364
//	denoiseb_rd365
//	denoiseb_rd366
//	denoiseb_rd367
//	denoiseb_rd368
//	denoiseb_rd369
//	denoiseb_rd370
//	denoiseb_rd371
//	denoiseb_rd372
//	denoiseb_rd373
//	denoiseb_rd374
//	denoiseb_rd375
//	denoiseb_rd376
//	denoiseb_rd377
//	denoiseb_rd378
//	denoiseb_rd379
//	denoiseb_rd380
//	denoiseb_rd381
//	denoiseb_rd382
//	denoiseb_rd383
//	denoiseb_rd384
//	denoiseb_rd385
//	denoiseb_rd386
//	denoiseb_rd387
//	denoiseb_rd388
//	denoiseb_rd389
//	denoiseb_rd390
//	denoiseb_rd391
//	denoiseb_rd392
//	denoiseb_rd393
//	denoiseb_rd394
//	denoiseb_rd395
//	denoiseb_rd396
//	denoiseb_rd397
//	denoiseb_rd398
//	denoiseb_rd399
inline hw_uint<6400> raw_denoiseb_update_0_read_bundle_read(raw_cache& raw, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 400
    // denoiseb_rd0
    // denoiseb_rd1
    // denoiseb_rd2
    // denoiseb_rd3
    // denoiseb_rd4
    // denoiseb_rd5
    // denoiseb_rd6
    // denoiseb_rd7
    // denoiseb_rd8
    // denoiseb_rd9
    // denoiseb_rd10
    // denoiseb_rd11
    // denoiseb_rd12
    // denoiseb_rd13
    // denoiseb_rd14
    // denoiseb_rd15
    // denoiseb_rd16
    // denoiseb_rd17
    // denoiseb_rd18
    // denoiseb_rd19
    // denoiseb_rd20
    // denoiseb_rd21
    // denoiseb_rd22
    // denoiseb_rd23
    // denoiseb_rd24
    // denoiseb_rd25
    // denoiseb_rd26
    // denoiseb_rd27
    // denoiseb_rd28
    // denoiseb_rd29
    // denoiseb_rd30
    // denoiseb_rd31
    // denoiseb_rd32
    // denoiseb_rd33
    // denoiseb_rd34
    // denoiseb_rd35
    // denoiseb_rd36
    // denoiseb_rd37
    // denoiseb_rd38
    // denoiseb_rd39
    // denoiseb_rd40
    // denoiseb_rd41
    // denoiseb_rd42
    // denoiseb_rd43
    // denoiseb_rd44
    // denoiseb_rd45
    // denoiseb_rd46
    // denoiseb_rd47
    // denoiseb_rd48
    // denoiseb_rd49
    // denoiseb_rd50
    // denoiseb_rd51
    // denoiseb_rd52
    // denoiseb_rd53
    // denoiseb_rd54
    // denoiseb_rd55
    // denoiseb_rd56
    // denoiseb_rd57
    // denoiseb_rd58
    // denoiseb_rd59
    // denoiseb_rd60
    // denoiseb_rd61
    // denoiseb_rd62
    // denoiseb_rd63
    // denoiseb_rd64
    // denoiseb_rd65
    // denoiseb_rd66
    // denoiseb_rd67
    // denoiseb_rd68
    // denoiseb_rd69
    // denoiseb_rd70
    // denoiseb_rd71
    // denoiseb_rd72
    // denoiseb_rd73
    // denoiseb_rd74
    // denoiseb_rd75
    // denoiseb_rd76
    // denoiseb_rd77
    // denoiseb_rd78
    // denoiseb_rd79
    // denoiseb_rd80
    // denoiseb_rd81
    // denoiseb_rd82
    // denoiseb_rd83
    // denoiseb_rd84
    // denoiseb_rd85
    // denoiseb_rd86
    // denoiseb_rd87
    // denoiseb_rd88
    // denoiseb_rd89
    // denoiseb_rd90
    // denoiseb_rd91
    // denoiseb_rd92
    // denoiseb_rd93
    // denoiseb_rd94
    // denoiseb_rd95
    // denoiseb_rd96
    // denoiseb_rd97
    // denoiseb_rd98
    // denoiseb_rd99
    // denoiseb_rd100
    // denoiseb_rd101
    // denoiseb_rd102
    // denoiseb_rd103
    // denoiseb_rd104
    // denoiseb_rd105
    // denoiseb_rd106
    // denoiseb_rd107
    // denoiseb_rd108
    // denoiseb_rd109
    // denoiseb_rd110
    // denoiseb_rd111
    // denoiseb_rd112
    // denoiseb_rd113
    // denoiseb_rd114
    // denoiseb_rd115
    // denoiseb_rd116
    // denoiseb_rd117
    // denoiseb_rd118
    // denoiseb_rd119
    // denoiseb_rd120
    // denoiseb_rd121
    // denoiseb_rd122
    // denoiseb_rd123
    // denoiseb_rd124
    // denoiseb_rd125
    // denoiseb_rd126
    // denoiseb_rd127
    // denoiseb_rd128
    // denoiseb_rd129
    // denoiseb_rd130
    // denoiseb_rd131
    // denoiseb_rd132
    // denoiseb_rd133
    // denoiseb_rd134
    // denoiseb_rd135
    // denoiseb_rd136
    // denoiseb_rd137
    // denoiseb_rd138
    // denoiseb_rd139
    // denoiseb_rd140
    // denoiseb_rd141
    // denoiseb_rd142
    // denoiseb_rd143
    // denoiseb_rd144
    // denoiseb_rd145
    // denoiseb_rd146
    // denoiseb_rd147
    // denoiseb_rd148
    // denoiseb_rd149
    // denoiseb_rd150
    // denoiseb_rd151
    // denoiseb_rd152
    // denoiseb_rd153
    // denoiseb_rd154
    // denoiseb_rd155
    // denoiseb_rd156
    // denoiseb_rd157
    // denoiseb_rd158
    // denoiseb_rd159
    // denoiseb_rd160
    // denoiseb_rd161
    // denoiseb_rd162
    // denoiseb_rd163
    // denoiseb_rd164
    // denoiseb_rd165
    // denoiseb_rd166
    // denoiseb_rd167
    // denoiseb_rd168
    // denoiseb_rd169
    // denoiseb_rd170
    // denoiseb_rd171
    // denoiseb_rd172
    // denoiseb_rd173
    // denoiseb_rd174
    // denoiseb_rd175
    // denoiseb_rd176
    // denoiseb_rd177
    // denoiseb_rd178
    // denoiseb_rd179
    // denoiseb_rd180
    // denoiseb_rd181
    // denoiseb_rd182
    // denoiseb_rd183
    // denoiseb_rd184
    // denoiseb_rd185
    // denoiseb_rd186
    // denoiseb_rd187
    // denoiseb_rd188
    // denoiseb_rd189
    // denoiseb_rd190
    // denoiseb_rd191
    // denoiseb_rd192
    // denoiseb_rd193
    // denoiseb_rd194
    // denoiseb_rd195
    // denoiseb_rd196
    // denoiseb_rd197
    // denoiseb_rd198
    // denoiseb_rd199
    // denoiseb_rd200
    // denoiseb_rd201
    // denoiseb_rd202
    // denoiseb_rd203
    // denoiseb_rd204
    // denoiseb_rd205
    // denoiseb_rd206
    // denoiseb_rd207
    // denoiseb_rd208
    // denoiseb_rd209
    // denoiseb_rd210
    // denoiseb_rd211
    // denoiseb_rd212
    // denoiseb_rd213
    // denoiseb_rd214
    // denoiseb_rd215
    // denoiseb_rd216
    // denoiseb_rd217
    // denoiseb_rd218
    // denoiseb_rd219
    // denoiseb_rd220
    // denoiseb_rd221
    // denoiseb_rd222
    // denoiseb_rd223
    // denoiseb_rd224
    // denoiseb_rd225
    // denoiseb_rd226
    // denoiseb_rd227
    // denoiseb_rd228
    // denoiseb_rd229
    // denoiseb_rd230
    // denoiseb_rd231
    // denoiseb_rd232
    // denoiseb_rd233
    // denoiseb_rd234
    // denoiseb_rd235
    // denoiseb_rd236
    // denoiseb_rd237
    // denoiseb_rd238
    // denoiseb_rd239
    // denoiseb_rd240
    // denoiseb_rd241
    // denoiseb_rd242
    // denoiseb_rd243
    // denoiseb_rd244
    // denoiseb_rd245
    // denoiseb_rd246
    // denoiseb_rd247
    // denoiseb_rd248
    // denoiseb_rd249
    // denoiseb_rd250
    // denoiseb_rd251
    // denoiseb_rd252
    // denoiseb_rd253
    // denoiseb_rd254
    // denoiseb_rd255
    // denoiseb_rd256
    // denoiseb_rd257
    // denoiseb_rd258
    // denoiseb_rd259
    // denoiseb_rd260
    // denoiseb_rd261
    // denoiseb_rd262
    // denoiseb_rd263
    // denoiseb_rd264
    // denoiseb_rd265
    // denoiseb_rd266
    // denoiseb_rd267
    // denoiseb_rd268
    // denoiseb_rd269
    // denoiseb_rd270
    // denoiseb_rd271
    // denoiseb_rd272
    // denoiseb_rd273
    // denoiseb_rd274
    // denoiseb_rd275
    // denoiseb_rd276
    // denoiseb_rd277
    // denoiseb_rd278
    // denoiseb_rd279
    // denoiseb_rd280
    // denoiseb_rd281
    // denoiseb_rd282
    // denoiseb_rd283
    // denoiseb_rd284
    // denoiseb_rd285
    // denoiseb_rd286
    // denoiseb_rd287
    // denoiseb_rd288
    // denoiseb_rd289
    // denoiseb_rd290
    // denoiseb_rd291
    // denoiseb_rd292
    // denoiseb_rd293
    // denoiseb_rd294
    // denoiseb_rd295
    // denoiseb_rd296
    // denoiseb_rd297
    // denoiseb_rd298
    // denoiseb_rd299
    // denoiseb_rd300
    // denoiseb_rd301
    // denoiseb_rd302
    // denoiseb_rd303
    // denoiseb_rd304
    // denoiseb_rd305
    // denoiseb_rd306
    // denoiseb_rd307
    // denoiseb_rd308
    // denoiseb_rd309
    // denoiseb_rd310
    // denoiseb_rd311
    // denoiseb_rd312
    // denoiseb_rd313
    // denoiseb_rd314
    // denoiseb_rd315
    // denoiseb_rd316
    // denoiseb_rd317
    // denoiseb_rd318
    // denoiseb_rd319
    // denoiseb_rd320
    // denoiseb_rd321
    // denoiseb_rd322
    // denoiseb_rd323
    // denoiseb_rd324
    // denoiseb_rd325
    // denoiseb_rd326
    // denoiseb_rd327
    // denoiseb_rd328
    // denoiseb_rd329
    // denoiseb_rd330
    // denoiseb_rd331
    // denoiseb_rd332
    // denoiseb_rd333
    // denoiseb_rd334
    // denoiseb_rd335
    // denoiseb_rd336
    // denoiseb_rd337
    // denoiseb_rd338
    // denoiseb_rd339
    // denoiseb_rd340
    // denoiseb_rd341
    // denoiseb_rd342
    // denoiseb_rd343
    // denoiseb_rd344
    // denoiseb_rd345
    // denoiseb_rd346
    // denoiseb_rd347
    // denoiseb_rd348
    // denoiseb_rd349
    // denoiseb_rd350
    // denoiseb_rd351
    // denoiseb_rd352
    // denoiseb_rd353
    // denoiseb_rd354
    // denoiseb_rd355
    // denoiseb_rd356
    // denoiseb_rd357
    // denoiseb_rd358
    // denoiseb_rd359
    // denoiseb_rd360
    // denoiseb_rd361
    // denoiseb_rd362
    // denoiseb_rd363
    // denoiseb_rd364
    // denoiseb_rd365
    // denoiseb_rd366
    // denoiseb_rd367
    // denoiseb_rd368
    // denoiseb_rd369
    // denoiseb_rd370
    // denoiseb_rd371
    // denoiseb_rd372
    // denoiseb_rd373
    // denoiseb_rd374
    // denoiseb_rd375
    // denoiseb_rd376
    // denoiseb_rd377
    // denoiseb_rd378
    // denoiseb_rd379
    // denoiseb_rd380
    // denoiseb_rd381
    // denoiseb_rd382
    // denoiseb_rd383
    // denoiseb_rd384
    // denoiseb_rd385
    // denoiseb_rd386
    // denoiseb_rd387
    // denoiseb_rd388
    // denoiseb_rd389
    // denoiseb_rd390
    // denoiseb_rd391
    // denoiseb_rd392
    // denoiseb_rd393
    // denoiseb_rd394
    // denoiseb_rd395
    // denoiseb_rd396
    // denoiseb_rd397
    // denoiseb_rd398
    // denoiseb_rd399

	hw_uint<6400> result;
	hw_uint<16> denoiseb_rd0_res = denoiseb_rd0_select(raw, d0, d1, dynamic_address);
	set_at<0, 6400>(result, denoiseb_rd0_res);
	hw_uint<16> denoiseb_rd1_res = denoiseb_rd1_select(raw, d0, d1, dynamic_address);
	set_at<16, 6400>(result, denoiseb_rd1_res);
	hw_uint<16> denoiseb_rd2_res = denoiseb_rd2_select(raw, d0, d1, dynamic_address);
	set_at<32, 6400>(result, denoiseb_rd2_res);
	hw_uint<16> denoiseb_rd3_res = denoiseb_rd3_select(raw, d0, d1, dynamic_address);
	set_at<48, 6400>(result, denoiseb_rd3_res);
	hw_uint<16> denoiseb_rd4_res = denoiseb_rd4_select(raw, d0, d1, dynamic_address);
	set_at<64, 6400>(result, denoiseb_rd4_res);
	hw_uint<16> denoiseb_rd5_res = denoiseb_rd5_select(raw, d0, d1, dynamic_address);
	set_at<80, 6400>(result, denoiseb_rd5_res);
	hw_uint<16> denoiseb_rd6_res = denoiseb_rd6_select(raw, d0, d1, dynamic_address);
	set_at<96, 6400>(result, denoiseb_rd6_res);
	hw_uint<16> denoiseb_rd7_res = denoiseb_rd7_select(raw, d0, d1, dynamic_address);
	set_at<112, 6400>(result, denoiseb_rd7_res);
	hw_uint<16> denoiseb_rd8_res = denoiseb_rd8_select(raw, d0, d1, dynamic_address);
	set_at<128, 6400>(result, denoiseb_rd8_res);
	hw_uint<16> denoiseb_rd9_res = denoiseb_rd9_select(raw, d0, d1, dynamic_address);
	set_at<144, 6400>(result, denoiseb_rd9_res);
	hw_uint<16> denoiseb_rd10_res = denoiseb_rd10_select(raw, d0, d1, dynamic_address);
	set_at<160, 6400>(result, denoiseb_rd10_res);
	hw_uint<16> denoiseb_rd11_res = denoiseb_rd11_select(raw, d0, d1, dynamic_address);
	set_at<176, 6400>(result, denoiseb_rd11_res);
	hw_uint<16> denoiseb_rd12_res = denoiseb_rd12_select(raw, d0, d1, dynamic_address);
	set_at<192, 6400>(result, denoiseb_rd12_res);
	hw_uint<16> denoiseb_rd13_res = denoiseb_rd13_select(raw, d0, d1, dynamic_address);
	set_at<208, 6400>(result, denoiseb_rd13_res);
	hw_uint<16> denoiseb_rd14_res = denoiseb_rd14_select(raw, d0, d1, dynamic_address);
	set_at<224, 6400>(result, denoiseb_rd14_res);
	hw_uint<16> denoiseb_rd15_res = denoiseb_rd15_select(raw, d0, d1, dynamic_address);
	set_at<240, 6400>(result, denoiseb_rd15_res);
	hw_uint<16> denoiseb_rd16_res = denoiseb_rd16_select(raw, d0, d1, dynamic_address);
	set_at<256, 6400>(result, denoiseb_rd16_res);
	hw_uint<16> denoiseb_rd17_res = denoiseb_rd17_select(raw, d0, d1, dynamic_address);
	set_at<272, 6400>(result, denoiseb_rd17_res);
	hw_uint<16> denoiseb_rd18_res = denoiseb_rd18_select(raw, d0, d1, dynamic_address);
	set_at<288, 6400>(result, denoiseb_rd18_res);
	hw_uint<16> denoiseb_rd19_res = denoiseb_rd19_select(raw, d0, d1, dynamic_address);
	set_at<304, 6400>(result, denoiseb_rd19_res);
	hw_uint<16> denoiseb_rd20_res = denoiseb_rd20_select(raw, d0, d1, dynamic_address);
	set_at<320, 6400>(result, denoiseb_rd20_res);
	hw_uint<16> denoiseb_rd21_res = denoiseb_rd21_select(raw, d0, d1, dynamic_address);
	set_at<336, 6400>(result, denoiseb_rd21_res);
	hw_uint<16> denoiseb_rd22_res = denoiseb_rd22_select(raw, d0, d1, dynamic_address);
	set_at<352, 6400>(result, denoiseb_rd22_res);
	hw_uint<16> denoiseb_rd23_res = denoiseb_rd23_select(raw, d0, d1, dynamic_address);
	set_at<368, 6400>(result, denoiseb_rd23_res);
	hw_uint<16> denoiseb_rd24_res = denoiseb_rd24_select(raw, d0, d1, dynamic_address);
	set_at<384, 6400>(result, denoiseb_rd24_res);
	hw_uint<16> denoiseb_rd25_res = denoiseb_rd25_select(raw, d0, d1, dynamic_address);
	set_at<400, 6400>(result, denoiseb_rd25_res);
	hw_uint<16> denoiseb_rd26_res = denoiseb_rd26_select(raw, d0, d1, dynamic_address);
	set_at<416, 6400>(result, denoiseb_rd26_res);
	hw_uint<16> denoiseb_rd27_res = denoiseb_rd27_select(raw, d0, d1, dynamic_address);
	set_at<432, 6400>(result, denoiseb_rd27_res);
	hw_uint<16> denoiseb_rd28_res = denoiseb_rd28_select(raw, d0, d1, dynamic_address);
	set_at<448, 6400>(result, denoiseb_rd28_res);
	hw_uint<16> denoiseb_rd29_res = denoiseb_rd29_select(raw, d0, d1, dynamic_address);
	set_at<464, 6400>(result, denoiseb_rd29_res);
	hw_uint<16> denoiseb_rd30_res = denoiseb_rd30_select(raw, d0, d1, dynamic_address);
	set_at<480, 6400>(result, denoiseb_rd30_res);
	hw_uint<16> denoiseb_rd31_res = denoiseb_rd31_select(raw, d0, d1, dynamic_address);
	set_at<496, 6400>(result, denoiseb_rd31_res);
	hw_uint<16> denoiseb_rd32_res = denoiseb_rd32_select(raw, d0, d1, dynamic_address);
	set_at<512, 6400>(result, denoiseb_rd32_res);
	hw_uint<16> denoiseb_rd33_res = denoiseb_rd33_select(raw, d0, d1, dynamic_address);
	set_at<528, 6400>(result, denoiseb_rd33_res);
	hw_uint<16> denoiseb_rd34_res = denoiseb_rd34_select(raw, d0, d1, dynamic_address);
	set_at<544, 6400>(result, denoiseb_rd34_res);
	hw_uint<16> denoiseb_rd35_res = denoiseb_rd35_select(raw, d0, d1, dynamic_address);
	set_at<560, 6400>(result, denoiseb_rd35_res);
	hw_uint<16> denoiseb_rd36_res = denoiseb_rd36_select(raw, d0, d1, dynamic_address);
	set_at<576, 6400>(result, denoiseb_rd36_res);
	hw_uint<16> denoiseb_rd37_res = denoiseb_rd37_select(raw, d0, d1, dynamic_address);
	set_at<592, 6400>(result, denoiseb_rd37_res);
	hw_uint<16> denoiseb_rd38_res = denoiseb_rd38_select(raw, d0, d1, dynamic_address);
	set_at<608, 6400>(result, denoiseb_rd38_res);
	hw_uint<16> denoiseb_rd39_res = denoiseb_rd39_select(raw, d0, d1, dynamic_address);
	set_at<624, 6400>(result, denoiseb_rd39_res);
	hw_uint<16> denoiseb_rd40_res = denoiseb_rd40_select(raw, d0, d1, dynamic_address);
	set_at<640, 6400>(result, denoiseb_rd40_res);
	hw_uint<16> denoiseb_rd41_res = denoiseb_rd41_select(raw, d0, d1, dynamic_address);
	set_at<656, 6400>(result, denoiseb_rd41_res);
	hw_uint<16> denoiseb_rd42_res = denoiseb_rd42_select(raw, d0, d1, dynamic_address);
	set_at<672, 6400>(result, denoiseb_rd42_res);
	hw_uint<16> denoiseb_rd43_res = denoiseb_rd43_select(raw, d0, d1, dynamic_address);
	set_at<688, 6400>(result, denoiseb_rd43_res);
	hw_uint<16> denoiseb_rd44_res = denoiseb_rd44_select(raw, d0, d1, dynamic_address);
	set_at<704, 6400>(result, denoiseb_rd44_res);
	hw_uint<16> denoiseb_rd45_res = denoiseb_rd45_select(raw, d0, d1, dynamic_address);
	set_at<720, 6400>(result, denoiseb_rd45_res);
	hw_uint<16> denoiseb_rd46_res = denoiseb_rd46_select(raw, d0, d1, dynamic_address);
	set_at<736, 6400>(result, denoiseb_rd46_res);
	hw_uint<16> denoiseb_rd47_res = denoiseb_rd47_select(raw, d0, d1, dynamic_address);
	set_at<752, 6400>(result, denoiseb_rd47_res);
	hw_uint<16> denoiseb_rd48_res = denoiseb_rd48_select(raw, d0, d1, dynamic_address);
	set_at<768, 6400>(result, denoiseb_rd48_res);
	hw_uint<16> denoiseb_rd49_res = denoiseb_rd49_select(raw, d0, d1, dynamic_address);
	set_at<784, 6400>(result, denoiseb_rd49_res);
	hw_uint<16> denoiseb_rd50_res = denoiseb_rd50_select(raw, d0, d1, dynamic_address);
	set_at<800, 6400>(result, denoiseb_rd50_res);
	hw_uint<16> denoiseb_rd51_res = denoiseb_rd51_select(raw, d0, d1, dynamic_address);
	set_at<816, 6400>(result, denoiseb_rd51_res);
	hw_uint<16> denoiseb_rd52_res = denoiseb_rd52_select(raw, d0, d1, dynamic_address);
	set_at<832, 6400>(result, denoiseb_rd52_res);
	hw_uint<16> denoiseb_rd53_res = denoiseb_rd53_select(raw, d0, d1, dynamic_address);
	set_at<848, 6400>(result, denoiseb_rd53_res);
	hw_uint<16> denoiseb_rd54_res = denoiseb_rd54_select(raw, d0, d1, dynamic_address);
	set_at<864, 6400>(result, denoiseb_rd54_res);
	hw_uint<16> denoiseb_rd55_res = denoiseb_rd55_select(raw, d0, d1, dynamic_address);
	set_at<880, 6400>(result, denoiseb_rd55_res);
	hw_uint<16> denoiseb_rd56_res = denoiseb_rd56_select(raw, d0, d1, dynamic_address);
	set_at<896, 6400>(result, denoiseb_rd56_res);
	hw_uint<16> denoiseb_rd57_res = denoiseb_rd57_select(raw, d0, d1, dynamic_address);
	set_at<912, 6400>(result, denoiseb_rd57_res);
	hw_uint<16> denoiseb_rd58_res = denoiseb_rd58_select(raw, d0, d1, dynamic_address);
	set_at<928, 6400>(result, denoiseb_rd58_res);
	hw_uint<16> denoiseb_rd59_res = denoiseb_rd59_select(raw, d0, d1, dynamic_address);
	set_at<944, 6400>(result, denoiseb_rd59_res);
	hw_uint<16> denoiseb_rd60_res = denoiseb_rd60_select(raw, d0, d1, dynamic_address);
	set_at<960, 6400>(result, denoiseb_rd60_res);
	hw_uint<16> denoiseb_rd61_res = denoiseb_rd61_select(raw, d0, d1, dynamic_address);
	set_at<976, 6400>(result, denoiseb_rd61_res);
	hw_uint<16> denoiseb_rd62_res = denoiseb_rd62_select(raw, d0, d1, dynamic_address);
	set_at<992, 6400>(result, denoiseb_rd62_res);
	hw_uint<16> denoiseb_rd63_res = denoiseb_rd63_select(raw, d0, d1, dynamic_address);
	set_at<1008, 6400>(result, denoiseb_rd63_res);
	hw_uint<16> denoiseb_rd64_res = denoiseb_rd64_select(raw, d0, d1, dynamic_address);
	set_at<1024, 6400>(result, denoiseb_rd64_res);
	hw_uint<16> denoiseb_rd65_res = denoiseb_rd65_select(raw, d0, d1, dynamic_address);
	set_at<1040, 6400>(result, denoiseb_rd65_res);
	hw_uint<16> denoiseb_rd66_res = denoiseb_rd66_select(raw, d0, d1, dynamic_address);
	set_at<1056, 6400>(result, denoiseb_rd66_res);
	hw_uint<16> denoiseb_rd67_res = denoiseb_rd67_select(raw, d0, d1, dynamic_address);
	set_at<1072, 6400>(result, denoiseb_rd67_res);
	hw_uint<16> denoiseb_rd68_res = denoiseb_rd68_select(raw, d0, d1, dynamic_address);
	set_at<1088, 6400>(result, denoiseb_rd68_res);
	hw_uint<16> denoiseb_rd69_res = denoiseb_rd69_select(raw, d0, d1, dynamic_address);
	set_at<1104, 6400>(result, denoiseb_rd69_res);
	hw_uint<16> denoiseb_rd70_res = denoiseb_rd70_select(raw, d0, d1, dynamic_address);
	set_at<1120, 6400>(result, denoiseb_rd70_res);
	hw_uint<16> denoiseb_rd71_res = denoiseb_rd71_select(raw, d0, d1, dynamic_address);
	set_at<1136, 6400>(result, denoiseb_rd71_res);
	hw_uint<16> denoiseb_rd72_res = denoiseb_rd72_select(raw, d0, d1, dynamic_address);
	set_at<1152, 6400>(result, denoiseb_rd72_res);
	hw_uint<16> denoiseb_rd73_res = denoiseb_rd73_select(raw, d0, d1, dynamic_address);
	set_at<1168, 6400>(result, denoiseb_rd73_res);
	hw_uint<16> denoiseb_rd74_res = denoiseb_rd74_select(raw, d0, d1, dynamic_address);
	set_at<1184, 6400>(result, denoiseb_rd74_res);
	hw_uint<16> denoiseb_rd75_res = denoiseb_rd75_select(raw, d0, d1, dynamic_address);
	set_at<1200, 6400>(result, denoiseb_rd75_res);
	hw_uint<16> denoiseb_rd76_res = denoiseb_rd76_select(raw, d0, d1, dynamic_address);
	set_at<1216, 6400>(result, denoiseb_rd76_res);
	hw_uint<16> denoiseb_rd77_res = denoiseb_rd77_select(raw, d0, d1, dynamic_address);
	set_at<1232, 6400>(result, denoiseb_rd77_res);
	hw_uint<16> denoiseb_rd78_res = denoiseb_rd78_select(raw, d0, d1, dynamic_address);
	set_at<1248, 6400>(result, denoiseb_rd78_res);
	hw_uint<16> denoiseb_rd79_res = denoiseb_rd79_select(raw, d0, d1, dynamic_address);
	set_at<1264, 6400>(result, denoiseb_rd79_res);
	hw_uint<16> denoiseb_rd80_res = denoiseb_rd80_select(raw, d0, d1, dynamic_address);
	set_at<1280, 6400>(result, denoiseb_rd80_res);
	hw_uint<16> denoiseb_rd81_res = denoiseb_rd81_select(raw, d0, d1, dynamic_address);
	set_at<1296, 6400>(result, denoiseb_rd81_res);
	hw_uint<16> denoiseb_rd82_res = denoiseb_rd82_select(raw, d0, d1, dynamic_address);
	set_at<1312, 6400>(result, denoiseb_rd82_res);
	hw_uint<16> denoiseb_rd83_res = denoiseb_rd83_select(raw, d0, d1, dynamic_address);
	set_at<1328, 6400>(result, denoiseb_rd83_res);
	hw_uint<16> denoiseb_rd84_res = denoiseb_rd84_select(raw, d0, d1, dynamic_address);
	set_at<1344, 6400>(result, denoiseb_rd84_res);
	hw_uint<16> denoiseb_rd85_res = denoiseb_rd85_select(raw, d0, d1, dynamic_address);
	set_at<1360, 6400>(result, denoiseb_rd85_res);
	hw_uint<16> denoiseb_rd86_res = denoiseb_rd86_select(raw, d0, d1, dynamic_address);
	set_at<1376, 6400>(result, denoiseb_rd86_res);
	hw_uint<16> denoiseb_rd87_res = denoiseb_rd87_select(raw, d0, d1, dynamic_address);
	set_at<1392, 6400>(result, denoiseb_rd87_res);
	hw_uint<16> denoiseb_rd88_res = denoiseb_rd88_select(raw, d0, d1, dynamic_address);
	set_at<1408, 6400>(result, denoiseb_rd88_res);
	hw_uint<16> denoiseb_rd89_res = denoiseb_rd89_select(raw, d0, d1, dynamic_address);
	set_at<1424, 6400>(result, denoiseb_rd89_res);
	hw_uint<16> denoiseb_rd90_res = denoiseb_rd90_select(raw, d0, d1, dynamic_address);
	set_at<1440, 6400>(result, denoiseb_rd90_res);
	hw_uint<16> denoiseb_rd91_res = denoiseb_rd91_select(raw, d0, d1, dynamic_address);
	set_at<1456, 6400>(result, denoiseb_rd91_res);
	hw_uint<16> denoiseb_rd92_res = denoiseb_rd92_select(raw, d0, d1, dynamic_address);
	set_at<1472, 6400>(result, denoiseb_rd92_res);
	hw_uint<16> denoiseb_rd93_res = denoiseb_rd93_select(raw, d0, d1, dynamic_address);
	set_at<1488, 6400>(result, denoiseb_rd93_res);
	hw_uint<16> denoiseb_rd94_res = denoiseb_rd94_select(raw, d0, d1, dynamic_address);
	set_at<1504, 6400>(result, denoiseb_rd94_res);
	hw_uint<16> denoiseb_rd95_res = denoiseb_rd95_select(raw, d0, d1, dynamic_address);
	set_at<1520, 6400>(result, denoiseb_rd95_res);
	hw_uint<16> denoiseb_rd96_res = denoiseb_rd96_select(raw, d0, d1, dynamic_address);
	set_at<1536, 6400>(result, denoiseb_rd96_res);
	hw_uint<16> denoiseb_rd97_res = denoiseb_rd97_select(raw, d0, d1, dynamic_address);
	set_at<1552, 6400>(result, denoiseb_rd97_res);
	hw_uint<16> denoiseb_rd98_res = denoiseb_rd98_select(raw, d0, d1, dynamic_address);
	set_at<1568, 6400>(result, denoiseb_rd98_res);
	hw_uint<16> denoiseb_rd99_res = denoiseb_rd99_select(raw, d0, d1, dynamic_address);
	set_at<1584, 6400>(result, denoiseb_rd99_res);
	hw_uint<16> denoiseb_rd100_res = denoiseb_rd100_select(raw, d0, d1, dynamic_address);
	set_at<1600, 6400>(result, denoiseb_rd100_res);
	hw_uint<16> denoiseb_rd101_res = denoiseb_rd101_select(raw, d0, d1, dynamic_address);
	set_at<1616, 6400>(result, denoiseb_rd101_res);
	hw_uint<16> denoiseb_rd102_res = denoiseb_rd102_select(raw, d0, d1, dynamic_address);
	set_at<1632, 6400>(result, denoiseb_rd102_res);
	hw_uint<16> denoiseb_rd103_res = denoiseb_rd103_select(raw, d0, d1, dynamic_address);
	set_at<1648, 6400>(result, denoiseb_rd103_res);
	hw_uint<16> denoiseb_rd104_res = denoiseb_rd104_select(raw, d0, d1, dynamic_address);
	set_at<1664, 6400>(result, denoiseb_rd104_res);
	hw_uint<16> denoiseb_rd105_res = denoiseb_rd105_select(raw, d0, d1, dynamic_address);
	set_at<1680, 6400>(result, denoiseb_rd105_res);
	hw_uint<16> denoiseb_rd106_res = denoiseb_rd106_select(raw, d0, d1, dynamic_address);
	set_at<1696, 6400>(result, denoiseb_rd106_res);
	hw_uint<16> denoiseb_rd107_res = denoiseb_rd107_select(raw, d0, d1, dynamic_address);
	set_at<1712, 6400>(result, denoiseb_rd107_res);
	hw_uint<16> denoiseb_rd108_res = denoiseb_rd108_select(raw, d0, d1, dynamic_address);
	set_at<1728, 6400>(result, denoiseb_rd108_res);
	hw_uint<16> denoiseb_rd109_res = denoiseb_rd109_select(raw, d0, d1, dynamic_address);
	set_at<1744, 6400>(result, denoiseb_rd109_res);
	hw_uint<16> denoiseb_rd110_res = denoiseb_rd110_select(raw, d0, d1, dynamic_address);
	set_at<1760, 6400>(result, denoiseb_rd110_res);
	hw_uint<16> denoiseb_rd111_res = denoiseb_rd111_select(raw, d0, d1, dynamic_address);
	set_at<1776, 6400>(result, denoiseb_rd111_res);
	hw_uint<16> denoiseb_rd112_res = denoiseb_rd112_select(raw, d0, d1, dynamic_address);
	set_at<1792, 6400>(result, denoiseb_rd112_res);
	hw_uint<16> denoiseb_rd113_res = denoiseb_rd113_select(raw, d0, d1, dynamic_address);
	set_at<1808, 6400>(result, denoiseb_rd113_res);
	hw_uint<16> denoiseb_rd114_res = denoiseb_rd114_select(raw, d0, d1, dynamic_address);
	set_at<1824, 6400>(result, denoiseb_rd114_res);
	hw_uint<16> denoiseb_rd115_res = denoiseb_rd115_select(raw, d0, d1, dynamic_address);
	set_at<1840, 6400>(result, denoiseb_rd115_res);
	hw_uint<16> denoiseb_rd116_res = denoiseb_rd116_select(raw, d0, d1, dynamic_address);
	set_at<1856, 6400>(result, denoiseb_rd116_res);
	hw_uint<16> denoiseb_rd117_res = denoiseb_rd117_select(raw, d0, d1, dynamic_address);
	set_at<1872, 6400>(result, denoiseb_rd117_res);
	hw_uint<16> denoiseb_rd118_res = denoiseb_rd118_select(raw, d0, d1, dynamic_address);
	set_at<1888, 6400>(result, denoiseb_rd118_res);
	hw_uint<16> denoiseb_rd119_res = denoiseb_rd119_select(raw, d0, d1, dynamic_address);
	set_at<1904, 6400>(result, denoiseb_rd119_res);
	hw_uint<16> denoiseb_rd120_res = denoiseb_rd120_select(raw, d0, d1, dynamic_address);
	set_at<1920, 6400>(result, denoiseb_rd120_res);
	hw_uint<16> denoiseb_rd121_res = denoiseb_rd121_select(raw, d0, d1, dynamic_address);
	set_at<1936, 6400>(result, denoiseb_rd121_res);
	hw_uint<16> denoiseb_rd122_res = denoiseb_rd122_select(raw, d0, d1, dynamic_address);
	set_at<1952, 6400>(result, denoiseb_rd122_res);
	hw_uint<16> denoiseb_rd123_res = denoiseb_rd123_select(raw, d0, d1, dynamic_address);
	set_at<1968, 6400>(result, denoiseb_rd123_res);
	hw_uint<16> denoiseb_rd124_res = denoiseb_rd124_select(raw, d0, d1, dynamic_address);
	set_at<1984, 6400>(result, denoiseb_rd124_res);
	hw_uint<16> denoiseb_rd125_res = denoiseb_rd125_select(raw, d0, d1, dynamic_address);
	set_at<2000, 6400>(result, denoiseb_rd125_res);
	hw_uint<16> denoiseb_rd126_res = denoiseb_rd126_select(raw, d0, d1, dynamic_address);
	set_at<2016, 6400>(result, denoiseb_rd126_res);
	hw_uint<16> denoiseb_rd127_res = denoiseb_rd127_select(raw, d0, d1, dynamic_address);
	set_at<2032, 6400>(result, denoiseb_rd127_res);
	hw_uint<16> denoiseb_rd128_res = denoiseb_rd128_select(raw, d0, d1, dynamic_address);
	set_at<2048, 6400>(result, denoiseb_rd128_res);
	hw_uint<16> denoiseb_rd129_res = denoiseb_rd129_select(raw, d0, d1, dynamic_address);
	set_at<2064, 6400>(result, denoiseb_rd129_res);
	hw_uint<16> denoiseb_rd130_res = denoiseb_rd130_select(raw, d0, d1, dynamic_address);
	set_at<2080, 6400>(result, denoiseb_rd130_res);
	hw_uint<16> denoiseb_rd131_res = denoiseb_rd131_select(raw, d0, d1, dynamic_address);
	set_at<2096, 6400>(result, denoiseb_rd131_res);
	hw_uint<16> denoiseb_rd132_res = denoiseb_rd132_select(raw, d0, d1, dynamic_address);
	set_at<2112, 6400>(result, denoiseb_rd132_res);
	hw_uint<16> denoiseb_rd133_res = denoiseb_rd133_select(raw, d0, d1, dynamic_address);
	set_at<2128, 6400>(result, denoiseb_rd133_res);
	hw_uint<16> denoiseb_rd134_res = denoiseb_rd134_select(raw, d0, d1, dynamic_address);
	set_at<2144, 6400>(result, denoiseb_rd134_res);
	hw_uint<16> denoiseb_rd135_res = denoiseb_rd135_select(raw, d0, d1, dynamic_address);
	set_at<2160, 6400>(result, denoiseb_rd135_res);
	hw_uint<16> denoiseb_rd136_res = denoiseb_rd136_select(raw, d0, d1, dynamic_address);
	set_at<2176, 6400>(result, denoiseb_rd136_res);
	hw_uint<16> denoiseb_rd137_res = denoiseb_rd137_select(raw, d0, d1, dynamic_address);
	set_at<2192, 6400>(result, denoiseb_rd137_res);
	hw_uint<16> denoiseb_rd138_res = denoiseb_rd138_select(raw, d0, d1, dynamic_address);
	set_at<2208, 6400>(result, denoiseb_rd138_res);
	hw_uint<16> denoiseb_rd139_res = denoiseb_rd139_select(raw, d0, d1, dynamic_address);
	set_at<2224, 6400>(result, denoiseb_rd139_res);
	hw_uint<16> denoiseb_rd140_res = denoiseb_rd140_select(raw, d0, d1, dynamic_address);
	set_at<2240, 6400>(result, denoiseb_rd140_res);
	hw_uint<16> denoiseb_rd141_res = denoiseb_rd141_select(raw, d0, d1, dynamic_address);
	set_at<2256, 6400>(result, denoiseb_rd141_res);
	hw_uint<16> denoiseb_rd142_res = denoiseb_rd142_select(raw, d0, d1, dynamic_address);
	set_at<2272, 6400>(result, denoiseb_rd142_res);
	hw_uint<16> denoiseb_rd143_res = denoiseb_rd143_select(raw, d0, d1, dynamic_address);
	set_at<2288, 6400>(result, denoiseb_rd143_res);
	hw_uint<16> denoiseb_rd144_res = denoiseb_rd144_select(raw, d0, d1, dynamic_address);
	set_at<2304, 6400>(result, denoiseb_rd144_res);
	hw_uint<16> denoiseb_rd145_res = denoiseb_rd145_select(raw, d0, d1, dynamic_address);
	set_at<2320, 6400>(result, denoiseb_rd145_res);
	hw_uint<16> denoiseb_rd146_res = denoiseb_rd146_select(raw, d0, d1, dynamic_address);
	set_at<2336, 6400>(result, denoiseb_rd146_res);
	hw_uint<16> denoiseb_rd147_res = denoiseb_rd147_select(raw, d0, d1, dynamic_address);
	set_at<2352, 6400>(result, denoiseb_rd147_res);
	hw_uint<16> denoiseb_rd148_res = denoiseb_rd148_select(raw, d0, d1, dynamic_address);
	set_at<2368, 6400>(result, denoiseb_rd148_res);
	hw_uint<16> denoiseb_rd149_res = denoiseb_rd149_select(raw, d0, d1, dynamic_address);
	set_at<2384, 6400>(result, denoiseb_rd149_res);
	hw_uint<16> denoiseb_rd150_res = denoiseb_rd150_select(raw, d0, d1, dynamic_address);
	set_at<2400, 6400>(result, denoiseb_rd150_res);
	hw_uint<16> denoiseb_rd151_res = denoiseb_rd151_select(raw, d0, d1, dynamic_address);
	set_at<2416, 6400>(result, denoiseb_rd151_res);
	hw_uint<16> denoiseb_rd152_res = denoiseb_rd152_select(raw, d0, d1, dynamic_address);
	set_at<2432, 6400>(result, denoiseb_rd152_res);
	hw_uint<16> denoiseb_rd153_res = denoiseb_rd153_select(raw, d0, d1, dynamic_address);
	set_at<2448, 6400>(result, denoiseb_rd153_res);
	hw_uint<16> denoiseb_rd154_res = denoiseb_rd154_select(raw, d0, d1, dynamic_address);
	set_at<2464, 6400>(result, denoiseb_rd154_res);
	hw_uint<16> denoiseb_rd155_res = denoiseb_rd155_select(raw, d0, d1, dynamic_address);
	set_at<2480, 6400>(result, denoiseb_rd155_res);
	hw_uint<16> denoiseb_rd156_res = denoiseb_rd156_select(raw, d0, d1, dynamic_address);
	set_at<2496, 6400>(result, denoiseb_rd156_res);
	hw_uint<16> denoiseb_rd157_res = denoiseb_rd157_select(raw, d0, d1, dynamic_address);
	set_at<2512, 6400>(result, denoiseb_rd157_res);
	hw_uint<16> denoiseb_rd158_res = denoiseb_rd158_select(raw, d0, d1, dynamic_address);
	set_at<2528, 6400>(result, denoiseb_rd158_res);
	hw_uint<16> denoiseb_rd159_res = denoiseb_rd159_select(raw, d0, d1, dynamic_address);
	set_at<2544, 6400>(result, denoiseb_rd159_res);
	hw_uint<16> denoiseb_rd160_res = denoiseb_rd160_select(raw, d0, d1, dynamic_address);
	set_at<2560, 6400>(result, denoiseb_rd160_res);
	hw_uint<16> denoiseb_rd161_res = denoiseb_rd161_select(raw, d0, d1, dynamic_address);
	set_at<2576, 6400>(result, denoiseb_rd161_res);
	hw_uint<16> denoiseb_rd162_res = denoiseb_rd162_select(raw, d0, d1, dynamic_address);
	set_at<2592, 6400>(result, denoiseb_rd162_res);
	hw_uint<16> denoiseb_rd163_res = denoiseb_rd163_select(raw, d0, d1, dynamic_address);
	set_at<2608, 6400>(result, denoiseb_rd163_res);
	hw_uint<16> denoiseb_rd164_res = denoiseb_rd164_select(raw, d0, d1, dynamic_address);
	set_at<2624, 6400>(result, denoiseb_rd164_res);
	hw_uint<16> denoiseb_rd165_res = denoiseb_rd165_select(raw, d0, d1, dynamic_address);
	set_at<2640, 6400>(result, denoiseb_rd165_res);
	hw_uint<16> denoiseb_rd166_res = denoiseb_rd166_select(raw, d0, d1, dynamic_address);
	set_at<2656, 6400>(result, denoiseb_rd166_res);
	hw_uint<16> denoiseb_rd167_res = denoiseb_rd167_select(raw, d0, d1, dynamic_address);
	set_at<2672, 6400>(result, denoiseb_rd167_res);
	hw_uint<16> denoiseb_rd168_res = denoiseb_rd168_select(raw, d0, d1, dynamic_address);
	set_at<2688, 6400>(result, denoiseb_rd168_res);
	hw_uint<16> denoiseb_rd169_res = denoiseb_rd169_select(raw, d0, d1, dynamic_address);
	set_at<2704, 6400>(result, denoiseb_rd169_res);
	hw_uint<16> denoiseb_rd170_res = denoiseb_rd170_select(raw, d0, d1, dynamic_address);
	set_at<2720, 6400>(result, denoiseb_rd170_res);
	hw_uint<16> denoiseb_rd171_res = denoiseb_rd171_select(raw, d0, d1, dynamic_address);
	set_at<2736, 6400>(result, denoiseb_rd171_res);
	hw_uint<16> denoiseb_rd172_res = denoiseb_rd172_select(raw, d0, d1, dynamic_address);
	set_at<2752, 6400>(result, denoiseb_rd172_res);
	hw_uint<16> denoiseb_rd173_res = denoiseb_rd173_select(raw, d0, d1, dynamic_address);
	set_at<2768, 6400>(result, denoiseb_rd173_res);
	hw_uint<16> denoiseb_rd174_res = denoiseb_rd174_select(raw, d0, d1, dynamic_address);
	set_at<2784, 6400>(result, denoiseb_rd174_res);
	hw_uint<16> denoiseb_rd175_res = denoiseb_rd175_select(raw, d0, d1, dynamic_address);
	set_at<2800, 6400>(result, denoiseb_rd175_res);
	hw_uint<16> denoiseb_rd176_res = denoiseb_rd176_select(raw, d0, d1, dynamic_address);
	set_at<2816, 6400>(result, denoiseb_rd176_res);
	hw_uint<16> denoiseb_rd177_res = denoiseb_rd177_select(raw, d0, d1, dynamic_address);
	set_at<2832, 6400>(result, denoiseb_rd177_res);
	hw_uint<16> denoiseb_rd178_res = denoiseb_rd178_select(raw, d0, d1, dynamic_address);
	set_at<2848, 6400>(result, denoiseb_rd178_res);
	hw_uint<16> denoiseb_rd179_res = denoiseb_rd179_select(raw, d0, d1, dynamic_address);
	set_at<2864, 6400>(result, denoiseb_rd179_res);
	hw_uint<16> denoiseb_rd180_res = denoiseb_rd180_select(raw, d0, d1, dynamic_address);
	set_at<2880, 6400>(result, denoiseb_rd180_res);
	hw_uint<16> denoiseb_rd181_res = denoiseb_rd181_select(raw, d0, d1, dynamic_address);
	set_at<2896, 6400>(result, denoiseb_rd181_res);
	hw_uint<16> denoiseb_rd182_res = denoiseb_rd182_select(raw, d0, d1, dynamic_address);
	set_at<2912, 6400>(result, denoiseb_rd182_res);
	hw_uint<16> denoiseb_rd183_res = denoiseb_rd183_select(raw, d0, d1, dynamic_address);
	set_at<2928, 6400>(result, denoiseb_rd183_res);
	hw_uint<16> denoiseb_rd184_res = denoiseb_rd184_select(raw, d0, d1, dynamic_address);
	set_at<2944, 6400>(result, denoiseb_rd184_res);
	hw_uint<16> denoiseb_rd185_res = denoiseb_rd185_select(raw, d0, d1, dynamic_address);
	set_at<2960, 6400>(result, denoiseb_rd185_res);
	hw_uint<16> denoiseb_rd186_res = denoiseb_rd186_select(raw, d0, d1, dynamic_address);
	set_at<2976, 6400>(result, denoiseb_rd186_res);
	hw_uint<16> denoiseb_rd187_res = denoiseb_rd187_select(raw, d0, d1, dynamic_address);
	set_at<2992, 6400>(result, denoiseb_rd187_res);
	hw_uint<16> denoiseb_rd188_res = denoiseb_rd188_select(raw, d0, d1, dynamic_address);
	set_at<3008, 6400>(result, denoiseb_rd188_res);
	hw_uint<16> denoiseb_rd189_res = denoiseb_rd189_select(raw, d0, d1, dynamic_address);
	set_at<3024, 6400>(result, denoiseb_rd189_res);
	hw_uint<16> denoiseb_rd190_res = denoiseb_rd190_select(raw, d0, d1, dynamic_address);
	set_at<3040, 6400>(result, denoiseb_rd190_res);
	hw_uint<16> denoiseb_rd191_res = denoiseb_rd191_select(raw, d0, d1, dynamic_address);
	set_at<3056, 6400>(result, denoiseb_rd191_res);
	hw_uint<16> denoiseb_rd192_res = denoiseb_rd192_select(raw, d0, d1, dynamic_address);
	set_at<3072, 6400>(result, denoiseb_rd192_res);
	hw_uint<16> denoiseb_rd193_res = denoiseb_rd193_select(raw, d0, d1, dynamic_address);
	set_at<3088, 6400>(result, denoiseb_rd193_res);
	hw_uint<16> denoiseb_rd194_res = denoiseb_rd194_select(raw, d0, d1, dynamic_address);
	set_at<3104, 6400>(result, denoiseb_rd194_res);
	hw_uint<16> denoiseb_rd195_res = denoiseb_rd195_select(raw, d0, d1, dynamic_address);
	set_at<3120, 6400>(result, denoiseb_rd195_res);
	hw_uint<16> denoiseb_rd196_res = denoiseb_rd196_select(raw, d0, d1, dynamic_address);
	set_at<3136, 6400>(result, denoiseb_rd196_res);
	hw_uint<16> denoiseb_rd197_res = denoiseb_rd197_select(raw, d0, d1, dynamic_address);
	set_at<3152, 6400>(result, denoiseb_rd197_res);
	hw_uint<16> denoiseb_rd198_res = denoiseb_rd198_select(raw, d0, d1, dynamic_address);
	set_at<3168, 6400>(result, denoiseb_rd198_res);
	hw_uint<16> denoiseb_rd199_res = denoiseb_rd199_select(raw, d0, d1, dynamic_address);
	set_at<3184, 6400>(result, denoiseb_rd199_res);
	hw_uint<16> denoiseb_rd200_res = denoiseb_rd200_select(raw, d0, d1, dynamic_address);
	set_at<3200, 6400>(result, denoiseb_rd200_res);
	hw_uint<16> denoiseb_rd201_res = denoiseb_rd201_select(raw, d0, d1, dynamic_address);
	set_at<3216, 6400>(result, denoiseb_rd201_res);
	hw_uint<16> denoiseb_rd202_res = denoiseb_rd202_select(raw, d0, d1, dynamic_address);
	set_at<3232, 6400>(result, denoiseb_rd202_res);
	hw_uint<16> denoiseb_rd203_res = denoiseb_rd203_select(raw, d0, d1, dynamic_address);
	set_at<3248, 6400>(result, denoiseb_rd203_res);
	hw_uint<16> denoiseb_rd204_res = denoiseb_rd204_select(raw, d0, d1, dynamic_address);
	set_at<3264, 6400>(result, denoiseb_rd204_res);
	hw_uint<16> denoiseb_rd205_res = denoiseb_rd205_select(raw, d0, d1, dynamic_address);
	set_at<3280, 6400>(result, denoiseb_rd205_res);
	hw_uint<16> denoiseb_rd206_res = denoiseb_rd206_select(raw, d0, d1, dynamic_address);
	set_at<3296, 6400>(result, denoiseb_rd206_res);
	hw_uint<16> denoiseb_rd207_res = denoiseb_rd207_select(raw, d0, d1, dynamic_address);
	set_at<3312, 6400>(result, denoiseb_rd207_res);
	hw_uint<16> denoiseb_rd208_res = denoiseb_rd208_select(raw, d0, d1, dynamic_address);
	set_at<3328, 6400>(result, denoiseb_rd208_res);
	hw_uint<16> denoiseb_rd209_res = denoiseb_rd209_select(raw, d0, d1, dynamic_address);
	set_at<3344, 6400>(result, denoiseb_rd209_res);
	hw_uint<16> denoiseb_rd210_res = denoiseb_rd210_select(raw, d0, d1, dynamic_address);
	set_at<3360, 6400>(result, denoiseb_rd210_res);
	hw_uint<16> denoiseb_rd211_res = denoiseb_rd211_select(raw, d0, d1, dynamic_address);
	set_at<3376, 6400>(result, denoiseb_rd211_res);
	hw_uint<16> denoiseb_rd212_res = denoiseb_rd212_select(raw, d0, d1, dynamic_address);
	set_at<3392, 6400>(result, denoiseb_rd212_res);
	hw_uint<16> denoiseb_rd213_res = denoiseb_rd213_select(raw, d0, d1, dynamic_address);
	set_at<3408, 6400>(result, denoiseb_rd213_res);
	hw_uint<16> denoiseb_rd214_res = denoiseb_rd214_select(raw, d0, d1, dynamic_address);
	set_at<3424, 6400>(result, denoiseb_rd214_res);
	hw_uint<16> denoiseb_rd215_res = denoiseb_rd215_select(raw, d0, d1, dynamic_address);
	set_at<3440, 6400>(result, denoiseb_rd215_res);
	hw_uint<16> denoiseb_rd216_res = denoiseb_rd216_select(raw, d0, d1, dynamic_address);
	set_at<3456, 6400>(result, denoiseb_rd216_res);
	hw_uint<16> denoiseb_rd217_res = denoiseb_rd217_select(raw, d0, d1, dynamic_address);
	set_at<3472, 6400>(result, denoiseb_rd217_res);
	hw_uint<16> denoiseb_rd218_res = denoiseb_rd218_select(raw, d0, d1, dynamic_address);
	set_at<3488, 6400>(result, denoiseb_rd218_res);
	hw_uint<16> denoiseb_rd219_res = denoiseb_rd219_select(raw, d0, d1, dynamic_address);
	set_at<3504, 6400>(result, denoiseb_rd219_res);
	hw_uint<16> denoiseb_rd220_res = denoiseb_rd220_select(raw, d0, d1, dynamic_address);
	set_at<3520, 6400>(result, denoiseb_rd220_res);
	hw_uint<16> denoiseb_rd221_res = denoiseb_rd221_select(raw, d0, d1, dynamic_address);
	set_at<3536, 6400>(result, denoiseb_rd221_res);
	hw_uint<16> denoiseb_rd222_res = denoiseb_rd222_select(raw, d0, d1, dynamic_address);
	set_at<3552, 6400>(result, denoiseb_rd222_res);
	hw_uint<16> denoiseb_rd223_res = denoiseb_rd223_select(raw, d0, d1, dynamic_address);
	set_at<3568, 6400>(result, denoiseb_rd223_res);
	hw_uint<16> denoiseb_rd224_res = denoiseb_rd224_select(raw, d0, d1, dynamic_address);
	set_at<3584, 6400>(result, denoiseb_rd224_res);
	hw_uint<16> denoiseb_rd225_res = denoiseb_rd225_select(raw, d0, d1, dynamic_address);
	set_at<3600, 6400>(result, denoiseb_rd225_res);
	hw_uint<16> denoiseb_rd226_res = denoiseb_rd226_select(raw, d0, d1, dynamic_address);
	set_at<3616, 6400>(result, denoiseb_rd226_res);
	hw_uint<16> denoiseb_rd227_res = denoiseb_rd227_select(raw, d0, d1, dynamic_address);
	set_at<3632, 6400>(result, denoiseb_rd227_res);
	hw_uint<16> denoiseb_rd228_res = denoiseb_rd228_select(raw, d0, d1, dynamic_address);
	set_at<3648, 6400>(result, denoiseb_rd228_res);
	hw_uint<16> denoiseb_rd229_res = denoiseb_rd229_select(raw, d0, d1, dynamic_address);
	set_at<3664, 6400>(result, denoiseb_rd229_res);
	hw_uint<16> denoiseb_rd230_res = denoiseb_rd230_select(raw, d0, d1, dynamic_address);
	set_at<3680, 6400>(result, denoiseb_rd230_res);
	hw_uint<16> denoiseb_rd231_res = denoiseb_rd231_select(raw, d0, d1, dynamic_address);
	set_at<3696, 6400>(result, denoiseb_rd231_res);
	hw_uint<16> denoiseb_rd232_res = denoiseb_rd232_select(raw, d0, d1, dynamic_address);
	set_at<3712, 6400>(result, denoiseb_rd232_res);
	hw_uint<16> denoiseb_rd233_res = denoiseb_rd233_select(raw, d0, d1, dynamic_address);
	set_at<3728, 6400>(result, denoiseb_rd233_res);
	hw_uint<16> denoiseb_rd234_res = denoiseb_rd234_select(raw, d0, d1, dynamic_address);
	set_at<3744, 6400>(result, denoiseb_rd234_res);
	hw_uint<16> denoiseb_rd235_res = denoiseb_rd235_select(raw, d0, d1, dynamic_address);
	set_at<3760, 6400>(result, denoiseb_rd235_res);
	hw_uint<16> denoiseb_rd236_res = denoiseb_rd236_select(raw, d0, d1, dynamic_address);
	set_at<3776, 6400>(result, denoiseb_rd236_res);
	hw_uint<16> denoiseb_rd237_res = denoiseb_rd237_select(raw, d0, d1, dynamic_address);
	set_at<3792, 6400>(result, denoiseb_rd237_res);
	hw_uint<16> denoiseb_rd238_res = denoiseb_rd238_select(raw, d0, d1, dynamic_address);
	set_at<3808, 6400>(result, denoiseb_rd238_res);
	hw_uint<16> denoiseb_rd239_res = denoiseb_rd239_select(raw, d0, d1, dynamic_address);
	set_at<3824, 6400>(result, denoiseb_rd239_res);
	hw_uint<16> denoiseb_rd240_res = denoiseb_rd240_select(raw, d0, d1, dynamic_address);
	set_at<3840, 6400>(result, denoiseb_rd240_res);
	hw_uint<16> denoiseb_rd241_res = denoiseb_rd241_select(raw, d0, d1, dynamic_address);
	set_at<3856, 6400>(result, denoiseb_rd241_res);
	hw_uint<16> denoiseb_rd242_res = denoiseb_rd242_select(raw, d0, d1, dynamic_address);
	set_at<3872, 6400>(result, denoiseb_rd242_res);
	hw_uint<16> denoiseb_rd243_res = denoiseb_rd243_select(raw, d0, d1, dynamic_address);
	set_at<3888, 6400>(result, denoiseb_rd243_res);
	hw_uint<16> denoiseb_rd244_res = denoiseb_rd244_select(raw, d0, d1, dynamic_address);
	set_at<3904, 6400>(result, denoiseb_rd244_res);
	hw_uint<16> denoiseb_rd245_res = denoiseb_rd245_select(raw, d0, d1, dynamic_address);
	set_at<3920, 6400>(result, denoiseb_rd245_res);
	hw_uint<16> denoiseb_rd246_res = denoiseb_rd246_select(raw, d0, d1, dynamic_address);
	set_at<3936, 6400>(result, denoiseb_rd246_res);
	hw_uint<16> denoiseb_rd247_res = denoiseb_rd247_select(raw, d0, d1, dynamic_address);
	set_at<3952, 6400>(result, denoiseb_rd247_res);
	hw_uint<16> denoiseb_rd248_res = denoiseb_rd248_select(raw, d0, d1, dynamic_address);
	set_at<3968, 6400>(result, denoiseb_rd248_res);
	hw_uint<16> denoiseb_rd249_res = denoiseb_rd249_select(raw, d0, d1, dynamic_address);
	set_at<3984, 6400>(result, denoiseb_rd249_res);
	hw_uint<16> denoiseb_rd250_res = denoiseb_rd250_select(raw, d0, d1, dynamic_address);
	set_at<4000, 6400>(result, denoiseb_rd250_res);
	hw_uint<16> denoiseb_rd251_res = denoiseb_rd251_select(raw, d0, d1, dynamic_address);
	set_at<4016, 6400>(result, denoiseb_rd251_res);
	hw_uint<16> denoiseb_rd252_res = denoiseb_rd252_select(raw, d0, d1, dynamic_address);
	set_at<4032, 6400>(result, denoiseb_rd252_res);
	hw_uint<16> denoiseb_rd253_res = denoiseb_rd253_select(raw, d0, d1, dynamic_address);
	set_at<4048, 6400>(result, denoiseb_rd253_res);
	hw_uint<16> denoiseb_rd254_res = denoiseb_rd254_select(raw, d0, d1, dynamic_address);
	set_at<4064, 6400>(result, denoiseb_rd254_res);
	hw_uint<16> denoiseb_rd255_res = denoiseb_rd255_select(raw, d0, d1, dynamic_address);
	set_at<4080, 6400>(result, denoiseb_rd255_res);
	hw_uint<16> denoiseb_rd256_res = denoiseb_rd256_select(raw, d0, d1, dynamic_address);
	set_at<4096, 6400>(result, denoiseb_rd256_res);
	hw_uint<16> denoiseb_rd257_res = denoiseb_rd257_select(raw, d0, d1, dynamic_address);
	set_at<4112, 6400>(result, denoiseb_rd257_res);
	hw_uint<16> denoiseb_rd258_res = denoiseb_rd258_select(raw, d0, d1, dynamic_address);
	set_at<4128, 6400>(result, denoiseb_rd258_res);
	hw_uint<16> denoiseb_rd259_res = denoiseb_rd259_select(raw, d0, d1, dynamic_address);
	set_at<4144, 6400>(result, denoiseb_rd259_res);
	hw_uint<16> denoiseb_rd260_res = denoiseb_rd260_select(raw, d0, d1, dynamic_address);
	set_at<4160, 6400>(result, denoiseb_rd260_res);
	hw_uint<16> denoiseb_rd261_res = denoiseb_rd261_select(raw, d0, d1, dynamic_address);
	set_at<4176, 6400>(result, denoiseb_rd261_res);
	hw_uint<16> denoiseb_rd262_res = denoiseb_rd262_select(raw, d0, d1, dynamic_address);
	set_at<4192, 6400>(result, denoiseb_rd262_res);
	hw_uint<16> denoiseb_rd263_res = denoiseb_rd263_select(raw, d0, d1, dynamic_address);
	set_at<4208, 6400>(result, denoiseb_rd263_res);
	hw_uint<16> denoiseb_rd264_res = denoiseb_rd264_select(raw, d0, d1, dynamic_address);
	set_at<4224, 6400>(result, denoiseb_rd264_res);
	hw_uint<16> denoiseb_rd265_res = denoiseb_rd265_select(raw, d0, d1, dynamic_address);
	set_at<4240, 6400>(result, denoiseb_rd265_res);
	hw_uint<16> denoiseb_rd266_res = denoiseb_rd266_select(raw, d0, d1, dynamic_address);
	set_at<4256, 6400>(result, denoiseb_rd266_res);
	hw_uint<16> denoiseb_rd267_res = denoiseb_rd267_select(raw, d0, d1, dynamic_address);
	set_at<4272, 6400>(result, denoiseb_rd267_res);
	hw_uint<16> denoiseb_rd268_res = denoiseb_rd268_select(raw, d0, d1, dynamic_address);
	set_at<4288, 6400>(result, denoiseb_rd268_res);
	hw_uint<16> denoiseb_rd269_res = denoiseb_rd269_select(raw, d0, d1, dynamic_address);
	set_at<4304, 6400>(result, denoiseb_rd269_res);
	hw_uint<16> denoiseb_rd270_res = denoiseb_rd270_select(raw, d0, d1, dynamic_address);
	set_at<4320, 6400>(result, denoiseb_rd270_res);
	hw_uint<16> denoiseb_rd271_res = denoiseb_rd271_select(raw, d0, d1, dynamic_address);
	set_at<4336, 6400>(result, denoiseb_rd271_res);
	hw_uint<16> denoiseb_rd272_res = denoiseb_rd272_select(raw, d0, d1, dynamic_address);
	set_at<4352, 6400>(result, denoiseb_rd272_res);
	hw_uint<16> denoiseb_rd273_res = denoiseb_rd273_select(raw, d0, d1, dynamic_address);
	set_at<4368, 6400>(result, denoiseb_rd273_res);
	hw_uint<16> denoiseb_rd274_res = denoiseb_rd274_select(raw, d0, d1, dynamic_address);
	set_at<4384, 6400>(result, denoiseb_rd274_res);
	hw_uint<16> denoiseb_rd275_res = denoiseb_rd275_select(raw, d0, d1, dynamic_address);
	set_at<4400, 6400>(result, denoiseb_rd275_res);
	hw_uint<16> denoiseb_rd276_res = denoiseb_rd276_select(raw, d0, d1, dynamic_address);
	set_at<4416, 6400>(result, denoiseb_rd276_res);
	hw_uint<16> denoiseb_rd277_res = denoiseb_rd277_select(raw, d0, d1, dynamic_address);
	set_at<4432, 6400>(result, denoiseb_rd277_res);
	hw_uint<16> denoiseb_rd278_res = denoiseb_rd278_select(raw, d0, d1, dynamic_address);
	set_at<4448, 6400>(result, denoiseb_rd278_res);
	hw_uint<16> denoiseb_rd279_res = denoiseb_rd279_select(raw, d0, d1, dynamic_address);
	set_at<4464, 6400>(result, denoiseb_rd279_res);
	hw_uint<16> denoiseb_rd280_res = denoiseb_rd280_select(raw, d0, d1, dynamic_address);
	set_at<4480, 6400>(result, denoiseb_rd280_res);
	hw_uint<16> denoiseb_rd281_res = denoiseb_rd281_select(raw, d0, d1, dynamic_address);
	set_at<4496, 6400>(result, denoiseb_rd281_res);
	hw_uint<16> denoiseb_rd282_res = denoiseb_rd282_select(raw, d0, d1, dynamic_address);
	set_at<4512, 6400>(result, denoiseb_rd282_res);
	hw_uint<16> denoiseb_rd283_res = denoiseb_rd283_select(raw, d0, d1, dynamic_address);
	set_at<4528, 6400>(result, denoiseb_rd283_res);
	hw_uint<16> denoiseb_rd284_res = denoiseb_rd284_select(raw, d0, d1, dynamic_address);
	set_at<4544, 6400>(result, denoiseb_rd284_res);
	hw_uint<16> denoiseb_rd285_res = denoiseb_rd285_select(raw, d0, d1, dynamic_address);
	set_at<4560, 6400>(result, denoiseb_rd285_res);
	hw_uint<16> denoiseb_rd286_res = denoiseb_rd286_select(raw, d0, d1, dynamic_address);
	set_at<4576, 6400>(result, denoiseb_rd286_res);
	hw_uint<16> denoiseb_rd287_res = denoiseb_rd287_select(raw, d0, d1, dynamic_address);
	set_at<4592, 6400>(result, denoiseb_rd287_res);
	hw_uint<16> denoiseb_rd288_res = denoiseb_rd288_select(raw, d0, d1, dynamic_address);
	set_at<4608, 6400>(result, denoiseb_rd288_res);
	hw_uint<16> denoiseb_rd289_res = denoiseb_rd289_select(raw, d0, d1, dynamic_address);
	set_at<4624, 6400>(result, denoiseb_rd289_res);
	hw_uint<16> denoiseb_rd290_res = denoiseb_rd290_select(raw, d0, d1, dynamic_address);
	set_at<4640, 6400>(result, denoiseb_rd290_res);
	hw_uint<16> denoiseb_rd291_res = denoiseb_rd291_select(raw, d0, d1, dynamic_address);
	set_at<4656, 6400>(result, denoiseb_rd291_res);
	hw_uint<16> denoiseb_rd292_res = denoiseb_rd292_select(raw, d0, d1, dynamic_address);
	set_at<4672, 6400>(result, denoiseb_rd292_res);
	hw_uint<16> denoiseb_rd293_res = denoiseb_rd293_select(raw, d0, d1, dynamic_address);
	set_at<4688, 6400>(result, denoiseb_rd293_res);
	hw_uint<16> denoiseb_rd294_res = denoiseb_rd294_select(raw, d0, d1, dynamic_address);
	set_at<4704, 6400>(result, denoiseb_rd294_res);
	hw_uint<16> denoiseb_rd295_res = denoiseb_rd295_select(raw, d0, d1, dynamic_address);
	set_at<4720, 6400>(result, denoiseb_rd295_res);
	hw_uint<16> denoiseb_rd296_res = denoiseb_rd296_select(raw, d0, d1, dynamic_address);
	set_at<4736, 6400>(result, denoiseb_rd296_res);
	hw_uint<16> denoiseb_rd297_res = denoiseb_rd297_select(raw, d0, d1, dynamic_address);
	set_at<4752, 6400>(result, denoiseb_rd297_res);
	hw_uint<16> denoiseb_rd298_res = denoiseb_rd298_select(raw, d0, d1, dynamic_address);
	set_at<4768, 6400>(result, denoiseb_rd298_res);
	hw_uint<16> denoiseb_rd299_res = denoiseb_rd299_select(raw, d0, d1, dynamic_address);
	set_at<4784, 6400>(result, denoiseb_rd299_res);
	hw_uint<16> denoiseb_rd300_res = denoiseb_rd300_select(raw, d0, d1, dynamic_address);
	set_at<4800, 6400>(result, denoiseb_rd300_res);
	hw_uint<16> denoiseb_rd301_res = denoiseb_rd301_select(raw, d0, d1, dynamic_address);
	set_at<4816, 6400>(result, denoiseb_rd301_res);
	hw_uint<16> denoiseb_rd302_res = denoiseb_rd302_select(raw, d0, d1, dynamic_address);
	set_at<4832, 6400>(result, denoiseb_rd302_res);
	hw_uint<16> denoiseb_rd303_res = denoiseb_rd303_select(raw, d0, d1, dynamic_address);
	set_at<4848, 6400>(result, denoiseb_rd303_res);
	hw_uint<16> denoiseb_rd304_res = denoiseb_rd304_select(raw, d0, d1, dynamic_address);
	set_at<4864, 6400>(result, denoiseb_rd304_res);
	hw_uint<16> denoiseb_rd305_res = denoiseb_rd305_select(raw, d0, d1, dynamic_address);
	set_at<4880, 6400>(result, denoiseb_rd305_res);
	hw_uint<16> denoiseb_rd306_res = denoiseb_rd306_select(raw, d0, d1, dynamic_address);
	set_at<4896, 6400>(result, denoiseb_rd306_res);
	hw_uint<16> denoiseb_rd307_res = denoiseb_rd307_select(raw, d0, d1, dynamic_address);
	set_at<4912, 6400>(result, denoiseb_rd307_res);
	hw_uint<16> denoiseb_rd308_res = denoiseb_rd308_select(raw, d0, d1, dynamic_address);
	set_at<4928, 6400>(result, denoiseb_rd308_res);
	hw_uint<16> denoiseb_rd309_res = denoiseb_rd309_select(raw, d0, d1, dynamic_address);
	set_at<4944, 6400>(result, denoiseb_rd309_res);
	hw_uint<16> denoiseb_rd310_res = denoiseb_rd310_select(raw, d0, d1, dynamic_address);
	set_at<4960, 6400>(result, denoiseb_rd310_res);
	hw_uint<16> denoiseb_rd311_res = denoiseb_rd311_select(raw, d0, d1, dynamic_address);
	set_at<4976, 6400>(result, denoiseb_rd311_res);
	hw_uint<16> denoiseb_rd312_res = denoiseb_rd312_select(raw, d0, d1, dynamic_address);
	set_at<4992, 6400>(result, denoiseb_rd312_res);
	hw_uint<16> denoiseb_rd313_res = denoiseb_rd313_select(raw, d0, d1, dynamic_address);
	set_at<5008, 6400>(result, denoiseb_rd313_res);
	hw_uint<16> denoiseb_rd314_res = denoiseb_rd314_select(raw, d0, d1, dynamic_address);
	set_at<5024, 6400>(result, denoiseb_rd314_res);
	hw_uint<16> denoiseb_rd315_res = denoiseb_rd315_select(raw, d0, d1, dynamic_address);
	set_at<5040, 6400>(result, denoiseb_rd315_res);
	hw_uint<16> denoiseb_rd316_res = denoiseb_rd316_select(raw, d0, d1, dynamic_address);
	set_at<5056, 6400>(result, denoiseb_rd316_res);
	hw_uint<16> denoiseb_rd317_res = denoiseb_rd317_select(raw, d0, d1, dynamic_address);
	set_at<5072, 6400>(result, denoiseb_rd317_res);
	hw_uint<16> denoiseb_rd318_res = denoiseb_rd318_select(raw, d0, d1, dynamic_address);
	set_at<5088, 6400>(result, denoiseb_rd318_res);
	hw_uint<16> denoiseb_rd319_res = denoiseb_rd319_select(raw, d0, d1, dynamic_address);
	set_at<5104, 6400>(result, denoiseb_rd319_res);
	hw_uint<16> denoiseb_rd320_res = denoiseb_rd320_select(raw, d0, d1, dynamic_address);
	set_at<5120, 6400>(result, denoiseb_rd320_res);
	hw_uint<16> denoiseb_rd321_res = denoiseb_rd321_select(raw, d0, d1, dynamic_address);
	set_at<5136, 6400>(result, denoiseb_rd321_res);
	hw_uint<16> denoiseb_rd322_res = denoiseb_rd322_select(raw, d0, d1, dynamic_address);
	set_at<5152, 6400>(result, denoiseb_rd322_res);
	hw_uint<16> denoiseb_rd323_res = denoiseb_rd323_select(raw, d0, d1, dynamic_address);
	set_at<5168, 6400>(result, denoiseb_rd323_res);
	hw_uint<16> denoiseb_rd324_res = denoiseb_rd324_select(raw, d0, d1, dynamic_address);
	set_at<5184, 6400>(result, denoiseb_rd324_res);
	hw_uint<16> denoiseb_rd325_res = denoiseb_rd325_select(raw, d0, d1, dynamic_address);
	set_at<5200, 6400>(result, denoiseb_rd325_res);
	hw_uint<16> denoiseb_rd326_res = denoiseb_rd326_select(raw, d0, d1, dynamic_address);
	set_at<5216, 6400>(result, denoiseb_rd326_res);
	hw_uint<16> denoiseb_rd327_res = denoiseb_rd327_select(raw, d0, d1, dynamic_address);
	set_at<5232, 6400>(result, denoiseb_rd327_res);
	hw_uint<16> denoiseb_rd328_res = denoiseb_rd328_select(raw, d0, d1, dynamic_address);
	set_at<5248, 6400>(result, denoiseb_rd328_res);
	hw_uint<16> denoiseb_rd329_res = denoiseb_rd329_select(raw, d0, d1, dynamic_address);
	set_at<5264, 6400>(result, denoiseb_rd329_res);
	hw_uint<16> denoiseb_rd330_res = denoiseb_rd330_select(raw, d0, d1, dynamic_address);
	set_at<5280, 6400>(result, denoiseb_rd330_res);
	hw_uint<16> denoiseb_rd331_res = denoiseb_rd331_select(raw, d0, d1, dynamic_address);
	set_at<5296, 6400>(result, denoiseb_rd331_res);
	hw_uint<16> denoiseb_rd332_res = denoiseb_rd332_select(raw, d0, d1, dynamic_address);
	set_at<5312, 6400>(result, denoiseb_rd332_res);
	hw_uint<16> denoiseb_rd333_res = denoiseb_rd333_select(raw, d0, d1, dynamic_address);
	set_at<5328, 6400>(result, denoiseb_rd333_res);
	hw_uint<16> denoiseb_rd334_res = denoiseb_rd334_select(raw, d0, d1, dynamic_address);
	set_at<5344, 6400>(result, denoiseb_rd334_res);
	hw_uint<16> denoiseb_rd335_res = denoiseb_rd335_select(raw, d0, d1, dynamic_address);
	set_at<5360, 6400>(result, denoiseb_rd335_res);
	hw_uint<16> denoiseb_rd336_res = denoiseb_rd336_select(raw, d0, d1, dynamic_address);
	set_at<5376, 6400>(result, denoiseb_rd336_res);
	hw_uint<16> denoiseb_rd337_res = denoiseb_rd337_select(raw, d0, d1, dynamic_address);
	set_at<5392, 6400>(result, denoiseb_rd337_res);
	hw_uint<16> denoiseb_rd338_res = denoiseb_rd338_select(raw, d0, d1, dynamic_address);
	set_at<5408, 6400>(result, denoiseb_rd338_res);
	hw_uint<16> denoiseb_rd339_res = denoiseb_rd339_select(raw, d0, d1, dynamic_address);
	set_at<5424, 6400>(result, denoiseb_rd339_res);
	hw_uint<16> denoiseb_rd340_res = denoiseb_rd340_select(raw, d0, d1, dynamic_address);
	set_at<5440, 6400>(result, denoiseb_rd340_res);
	hw_uint<16> denoiseb_rd341_res = denoiseb_rd341_select(raw, d0, d1, dynamic_address);
	set_at<5456, 6400>(result, denoiseb_rd341_res);
	hw_uint<16> denoiseb_rd342_res = denoiseb_rd342_select(raw, d0, d1, dynamic_address);
	set_at<5472, 6400>(result, denoiseb_rd342_res);
	hw_uint<16> denoiseb_rd343_res = denoiseb_rd343_select(raw, d0, d1, dynamic_address);
	set_at<5488, 6400>(result, denoiseb_rd343_res);
	hw_uint<16> denoiseb_rd344_res = denoiseb_rd344_select(raw, d0, d1, dynamic_address);
	set_at<5504, 6400>(result, denoiseb_rd344_res);
	hw_uint<16> denoiseb_rd345_res = denoiseb_rd345_select(raw, d0, d1, dynamic_address);
	set_at<5520, 6400>(result, denoiseb_rd345_res);
	hw_uint<16> denoiseb_rd346_res = denoiseb_rd346_select(raw, d0, d1, dynamic_address);
	set_at<5536, 6400>(result, denoiseb_rd346_res);
	hw_uint<16> denoiseb_rd347_res = denoiseb_rd347_select(raw, d0, d1, dynamic_address);
	set_at<5552, 6400>(result, denoiseb_rd347_res);
	hw_uint<16> denoiseb_rd348_res = denoiseb_rd348_select(raw, d0, d1, dynamic_address);
	set_at<5568, 6400>(result, denoiseb_rd348_res);
	hw_uint<16> denoiseb_rd349_res = denoiseb_rd349_select(raw, d0, d1, dynamic_address);
	set_at<5584, 6400>(result, denoiseb_rd349_res);
	hw_uint<16> denoiseb_rd350_res = denoiseb_rd350_select(raw, d0, d1, dynamic_address);
	set_at<5600, 6400>(result, denoiseb_rd350_res);
	hw_uint<16> denoiseb_rd351_res = denoiseb_rd351_select(raw, d0, d1, dynamic_address);
	set_at<5616, 6400>(result, denoiseb_rd351_res);
	hw_uint<16> denoiseb_rd352_res = denoiseb_rd352_select(raw, d0, d1, dynamic_address);
	set_at<5632, 6400>(result, denoiseb_rd352_res);
	hw_uint<16> denoiseb_rd353_res = denoiseb_rd353_select(raw, d0, d1, dynamic_address);
	set_at<5648, 6400>(result, denoiseb_rd353_res);
	hw_uint<16> denoiseb_rd354_res = denoiseb_rd354_select(raw, d0, d1, dynamic_address);
	set_at<5664, 6400>(result, denoiseb_rd354_res);
	hw_uint<16> denoiseb_rd355_res = denoiseb_rd355_select(raw, d0, d1, dynamic_address);
	set_at<5680, 6400>(result, denoiseb_rd355_res);
	hw_uint<16> denoiseb_rd356_res = denoiseb_rd356_select(raw, d0, d1, dynamic_address);
	set_at<5696, 6400>(result, denoiseb_rd356_res);
	hw_uint<16> denoiseb_rd357_res = denoiseb_rd357_select(raw, d0, d1, dynamic_address);
	set_at<5712, 6400>(result, denoiseb_rd357_res);
	hw_uint<16> denoiseb_rd358_res = denoiseb_rd358_select(raw, d0, d1, dynamic_address);
	set_at<5728, 6400>(result, denoiseb_rd358_res);
	hw_uint<16> denoiseb_rd359_res = denoiseb_rd359_select(raw, d0, d1, dynamic_address);
	set_at<5744, 6400>(result, denoiseb_rd359_res);
	hw_uint<16> denoiseb_rd360_res = denoiseb_rd360_select(raw, d0, d1, dynamic_address);
	set_at<5760, 6400>(result, denoiseb_rd360_res);
	hw_uint<16> denoiseb_rd361_res = denoiseb_rd361_select(raw, d0, d1, dynamic_address);
	set_at<5776, 6400>(result, denoiseb_rd361_res);
	hw_uint<16> denoiseb_rd362_res = denoiseb_rd362_select(raw, d0, d1, dynamic_address);
	set_at<5792, 6400>(result, denoiseb_rd362_res);
	hw_uint<16> denoiseb_rd363_res = denoiseb_rd363_select(raw, d0, d1, dynamic_address);
	set_at<5808, 6400>(result, denoiseb_rd363_res);
	hw_uint<16> denoiseb_rd364_res = denoiseb_rd364_select(raw, d0, d1, dynamic_address);
	set_at<5824, 6400>(result, denoiseb_rd364_res);
	hw_uint<16> denoiseb_rd365_res = denoiseb_rd365_select(raw, d0, d1, dynamic_address);
	set_at<5840, 6400>(result, denoiseb_rd365_res);
	hw_uint<16> denoiseb_rd366_res = denoiseb_rd366_select(raw, d0, d1, dynamic_address);
	set_at<5856, 6400>(result, denoiseb_rd366_res);
	hw_uint<16> denoiseb_rd367_res = denoiseb_rd367_select(raw, d0, d1, dynamic_address);
	set_at<5872, 6400>(result, denoiseb_rd367_res);
	hw_uint<16> denoiseb_rd368_res = denoiseb_rd368_select(raw, d0, d1, dynamic_address);
	set_at<5888, 6400>(result, denoiseb_rd368_res);
	hw_uint<16> denoiseb_rd369_res = denoiseb_rd369_select(raw, d0, d1, dynamic_address);
	set_at<5904, 6400>(result, denoiseb_rd369_res);
	hw_uint<16> denoiseb_rd370_res = denoiseb_rd370_select(raw, d0, d1, dynamic_address);
	set_at<5920, 6400>(result, denoiseb_rd370_res);
	hw_uint<16> denoiseb_rd371_res = denoiseb_rd371_select(raw, d0, d1, dynamic_address);
	set_at<5936, 6400>(result, denoiseb_rd371_res);
	hw_uint<16> denoiseb_rd372_res = denoiseb_rd372_select(raw, d0, d1, dynamic_address);
	set_at<5952, 6400>(result, denoiseb_rd372_res);
	hw_uint<16> denoiseb_rd373_res = denoiseb_rd373_select(raw, d0, d1, dynamic_address);
	set_at<5968, 6400>(result, denoiseb_rd373_res);
	hw_uint<16> denoiseb_rd374_res = denoiseb_rd374_select(raw, d0, d1, dynamic_address);
	set_at<5984, 6400>(result, denoiseb_rd374_res);
	hw_uint<16> denoiseb_rd375_res = denoiseb_rd375_select(raw, d0, d1, dynamic_address);
	set_at<6000, 6400>(result, denoiseb_rd375_res);
	hw_uint<16> denoiseb_rd376_res = denoiseb_rd376_select(raw, d0, d1, dynamic_address);
	set_at<6016, 6400>(result, denoiseb_rd376_res);
	hw_uint<16> denoiseb_rd377_res = denoiseb_rd377_select(raw, d0, d1, dynamic_address);
	set_at<6032, 6400>(result, denoiseb_rd377_res);
	hw_uint<16> denoiseb_rd378_res = denoiseb_rd378_select(raw, d0, d1, dynamic_address);
	set_at<6048, 6400>(result, denoiseb_rd378_res);
	hw_uint<16> denoiseb_rd379_res = denoiseb_rd379_select(raw, d0, d1, dynamic_address);
	set_at<6064, 6400>(result, denoiseb_rd379_res);
	hw_uint<16> denoiseb_rd380_res = denoiseb_rd380_select(raw, d0, d1, dynamic_address);
	set_at<6080, 6400>(result, denoiseb_rd380_res);
	hw_uint<16> denoiseb_rd381_res = denoiseb_rd381_select(raw, d0, d1, dynamic_address);
	set_at<6096, 6400>(result, denoiseb_rd381_res);
	hw_uint<16> denoiseb_rd382_res = denoiseb_rd382_select(raw, d0, d1, dynamic_address);
	set_at<6112, 6400>(result, denoiseb_rd382_res);
	hw_uint<16> denoiseb_rd383_res = denoiseb_rd383_select(raw, d0, d1, dynamic_address);
	set_at<6128, 6400>(result, denoiseb_rd383_res);
	hw_uint<16> denoiseb_rd384_res = denoiseb_rd384_select(raw, d0, d1, dynamic_address);
	set_at<6144, 6400>(result, denoiseb_rd384_res);
	hw_uint<16> denoiseb_rd385_res = denoiseb_rd385_select(raw, d0, d1, dynamic_address);
	set_at<6160, 6400>(result, denoiseb_rd385_res);
	hw_uint<16> denoiseb_rd386_res = denoiseb_rd386_select(raw, d0, d1, dynamic_address);
	set_at<6176, 6400>(result, denoiseb_rd386_res);
	hw_uint<16> denoiseb_rd387_res = denoiseb_rd387_select(raw, d0, d1, dynamic_address);
	set_at<6192, 6400>(result, denoiseb_rd387_res);
	hw_uint<16> denoiseb_rd388_res = denoiseb_rd388_select(raw, d0, d1, dynamic_address);
	set_at<6208, 6400>(result, denoiseb_rd388_res);
	hw_uint<16> denoiseb_rd389_res = denoiseb_rd389_select(raw, d0, d1, dynamic_address);
	set_at<6224, 6400>(result, denoiseb_rd389_res);
	hw_uint<16> denoiseb_rd390_res = denoiseb_rd390_select(raw, d0, d1, dynamic_address);
	set_at<6240, 6400>(result, denoiseb_rd390_res);
	hw_uint<16> denoiseb_rd391_res = denoiseb_rd391_select(raw, d0, d1, dynamic_address);
	set_at<6256, 6400>(result, denoiseb_rd391_res);
	hw_uint<16> denoiseb_rd392_res = denoiseb_rd392_select(raw, d0, d1, dynamic_address);
	set_at<6272, 6400>(result, denoiseb_rd392_res);
	hw_uint<16> denoiseb_rd393_res = denoiseb_rd393_select(raw, d0, d1, dynamic_address);
	set_at<6288, 6400>(result, denoiseb_rd393_res);
	hw_uint<16> denoiseb_rd394_res = denoiseb_rd394_select(raw, d0, d1, dynamic_address);
	set_at<6304, 6400>(result, denoiseb_rd394_res);
	hw_uint<16> denoiseb_rd395_res = denoiseb_rd395_select(raw, d0, d1, dynamic_address);
	set_at<6320, 6400>(result, denoiseb_rd395_res);
	hw_uint<16> denoiseb_rd396_res = denoiseb_rd396_select(raw, d0, d1, dynamic_address);
	set_at<6336, 6400>(result, denoiseb_rd396_res);
	hw_uint<16> denoiseb_rd397_res = denoiseb_rd397_select(raw, d0, d1, dynamic_address);
	set_at<6352, 6400>(result, denoiseb_rd397_res);
	hw_uint<16> denoiseb_rd398_res = denoiseb_rd398_select(raw, d0, d1, dynamic_address);
	set_at<6368, 6400>(result, denoiseb_rd398_res);
	hw_uint<16> denoiseb_rd399_res = denoiseb_rd399_select(raw, d0, d1, dynamic_address);
	set_at<6384, 6400>(result, denoiseb_rd399_res);
	return result;
}

// raw_update_0_write
//	raw_raw_update_0_write0
//	raw_raw_update_0_write1
//	raw_raw_update_0_write2
//	raw_raw_update_0_write3
//	raw_raw_update_0_write4
//	raw_raw_update_0_write5
//	raw_raw_update_0_write6
//	raw_raw_update_0_write7
//	raw_raw_update_0_write8
//	raw_raw_update_0_write9
//	raw_raw_update_0_write10
//	raw_raw_update_0_write11
//	raw_raw_update_0_write12
//	raw_raw_update_0_write13
//	raw_raw_update_0_write14
//	raw_raw_update_0_write15
inline void raw_raw_update_0_write_bundle_write(hw_uint<256>& raw_update_0_write, raw_cache& raw, int d0, int d1, int dynamic_address) {
	hw_uint<16> raw_raw_update_0_write0_res = raw_update_0_write.extract<0, 15>();
	raw_raw_update_0_write0_write(raw_raw_update_0_write0_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write1_res = raw_update_0_write.extract<16, 31>();
	raw_raw_update_0_write1_write(raw_raw_update_0_write1_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write2_res = raw_update_0_write.extract<32, 47>();
	raw_raw_update_0_write2_write(raw_raw_update_0_write2_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write3_res = raw_update_0_write.extract<48, 63>();
	raw_raw_update_0_write3_write(raw_raw_update_0_write3_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write4_res = raw_update_0_write.extract<64, 79>();
	raw_raw_update_0_write4_write(raw_raw_update_0_write4_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write5_res = raw_update_0_write.extract<80, 95>();
	raw_raw_update_0_write5_write(raw_raw_update_0_write5_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write6_res = raw_update_0_write.extract<96, 111>();
	raw_raw_update_0_write6_write(raw_raw_update_0_write6_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write7_res = raw_update_0_write.extract<112, 127>();
	raw_raw_update_0_write7_write(raw_raw_update_0_write7_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write8_res = raw_update_0_write.extract<128, 143>();
	raw_raw_update_0_write8_write(raw_raw_update_0_write8_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write9_res = raw_update_0_write.extract<144, 159>();
	raw_raw_update_0_write9_write(raw_raw_update_0_write9_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write10_res = raw_update_0_write.extract<160, 175>();
	raw_raw_update_0_write10_write(raw_raw_update_0_write10_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write11_res = raw_update_0_write.extract<176, 191>();
	raw_raw_update_0_write11_write(raw_raw_update_0_write11_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write12_res = raw_update_0_write.extract<192, 207>();
	raw_raw_update_0_write12_write(raw_raw_update_0_write12_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write13_res = raw_update_0_write.extract<208, 223>();
	raw_raw_update_0_write13_write(raw_raw_update_0_write13_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write14_res = raw_update_0_write.extract<224, 239>();
	raw_raw_update_0_write14_write(raw_raw_update_0_write14_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write15_res = raw_update_0_write.extract<240, 255>();
	raw_raw_update_0_write15_write(raw_raw_update_0_write15_res, raw, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 315184 bits


// Operation logic
inline void raw_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */raw_oc, raw_cache& raw, int d0, int d1) {
  // Dynamic address computation

	// Consume: raw_oc
	auto raw_oc_1_m_raw_1__p__0_c__1_m_raw_0__p__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_16(raw_oc_1_m_raw_1__p__0_c__1_m_raw_0__p__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(/* arg names */compute_result, raw, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoiseb_update_0(raw_cache& raw, denoiseb_cache& denoiseb, int d0, int d1) {
  // Dynamic address computation

	// Consume: raw
	auto raw_1_m_denoiseb_1__p___m_2_c__1_m_denoiseb_0__p___m_2_value = raw_denoiseb_update_0_read_bundle_read(raw/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoiseb_generated_compute_unrolled_16(raw_1_m_denoiseb_1__p___m_2_c__1_m_denoiseb_0__p___m_2_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_write_bundle_write(/* arg names */compute_result, denoiseb, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoise_update_0(denoiseb_cache& denoiseb, denoise_cache& denoise, int d0, int d1) {
  // Dynamic address computation

	// Consume: denoiseb
	auto denoiseb_1_m_denoise_1__p__0_c__1_m_denoise_0__p__0_value = denoiseb_denoise_update_0_read_bundle_read(denoiseb/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoise_generated_compute_unrolled_16(denoiseb_1_m_denoise_1__p__0_c__1_m_denoise_0__p__0_value);
	// Produce: denoise
	denoise_denoise_update_0_write_bundle_write(/* arg names */compute_result, denoise, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaicb_update_0(denoise_cache& denoise, demosaicb_cache& demosaicb, int d0, int d1) {
  // Dynamic address computation

	// Consume: denoise
	auto denoise_1_m_demosaicb_1__p___m_1_c__1_m_demosaicb_0__p___m_1_value = denoise_demosaicb_update_0_read_bundle_read(denoise/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaicb_generated_compute_unrolled_16(denoise_1_m_demosaicb_1__p___m_1_c__1_m_demosaicb_0__p___m_1_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_write_bundle_write(/* arg names */compute_result, demosaicb, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_update_0(demosaicb_cache& demosaicb, demosaic_cache& demosaic, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaicb
	auto demosaicb_1_m_demosaic_1__p__0_c__1_m_demosaic_0__p__0_value = demosaicb_demosaic_update_0_read_bundle_read(demosaicb/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_generated_compute_unrolled_16(demosaicb_1_m_demosaic_1__p__0_c__1_m_demosaic_0__p__0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_write_bundle_write(/* arg names */compute_result, demosaic, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bxb_update_0(demosaic_cache& demosaic, demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic_1_m_demosaic_bxb_1__p__0_c__1_m_demosaic_bxb_0__p__0_value = demosaic_demosaic_bxb_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_16(demosaic_1_m_demosaic_bxb_1__p__0_c__1_m_demosaic_bxb_0__p__0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_write_bundle_write(/* arg names */compute_result, demosaic_bxb, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bx_update_0(demosaic_bxb_cache& demosaic_bxb, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_bxb
	auto demosaic_bxb_1_m_demosaic_bx_1__p__0_c__1_m_demosaic_bx_0__p__0_value = demosaic_bxb_demosaic_bx_update_0_read_bundle_read(demosaic_bxb/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bx_generated_compute_unrolled_16(demosaic_bxb_1_m_demosaic_bx_1__p__0_c__1_m_demosaic_bx_0__p__0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_write_bundle_write(/* arg names */compute_result, demosaic_bx, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_byb_update_0(demosaic_bx_cache& demosaic_bx, demosaic_byb_cache& demosaic_byb, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_bx
	auto demosaic_bx_1_m_demosaic_byb_1__p__0_c__1_m_demosaic_byb_0__p__0_value = demosaic_bx_demosaic_byb_update_0_read_bundle_read(demosaic_bx/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_byb_generated_compute_unrolled_16(demosaic_bx_1_m_demosaic_byb_1__p__0_c__1_m_demosaic_byb_0__p__0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_write_bundle_write(/* arg names */compute_result, demosaic_byb, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_by_update_0(demosaic_byb_cache& demosaic_byb, demosaic_by_cache& demosaic_by, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_byb
	auto demosaic_byb_1_m_demosaic_by_1__p__0_c__1_m_demosaic_by_0__p__0_value = demosaic_byb_demosaic_by_update_0_read_bundle_read(demosaic_byb/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_by_generated_compute_unrolled_16(demosaic_byb_1_m_demosaic_by_1__p__0_c__1_m_demosaic_by_0__p__0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_write_bundle_write(/* arg names */compute_result, demosaic_by, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_diff_update_0(demosaic_cache& demosaic, demosaic_by_cache& demosaic_by, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value = demosaic_demosaic_diff_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: demosaic_by
	auto demosaic_by_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value = demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_diff_generated_compute_unrolled_16(demosaic_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value, demosaic_by_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_write_bundle_write(/* arg names */compute_result, demosaic_diff, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void cp_noinit_ln1_16_update_0(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */cp_noinit_ln1_16, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_diff
	auto demosaic_diff_1_m_cp_noinit_ln1_16_1__p__0_c__1_m_cp_noinit_ln1_16_0__p__0_value = demosaic_diff_cp_noinit_ln1_16_update_0_read_bundle_read(demosaic_diff/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = cp_noinit_ln1_16_generated_compute_unrolled_16(demosaic_diff_1_m_cp_noinit_ln1_16_1__p__0_c__1_m_cp_noinit_ln1_16_0__p__0_value);
	// Produce: cp_noinit_ln1_16
	cp_noinit_ln1_16.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void cp_noinit_ln1_16_opt(HWStream<hw_uint<256> >& /* get_args num ports = 16 */raw_oc, HWStream<hw_uint<256> >& /* get_args num ports = 16 */cp_noinit_ln1_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp_noinit_ln1_16_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_cache demosaic;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bx_cache demosaic_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_cache demosaic_bxb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_by_cache demosaic_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_cache demosaic_byb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_diff_cache demosaic_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaicb_cache demosaicb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoise_cache denoise;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoiseb_cache denoiseb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081; denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082; cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079; raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084; demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081; demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081; demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081; demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079; demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079; denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
//   { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
// Condition for demosaic_update_0(((((-5 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
// Condition for denoise_update_0(((((-3 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { cp_noinit_ln1_16_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for cp_noinit_ln1_16_update_0(((((-11 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 122 and -3 <= d1 <= 1084 }
// Condition for raw_update_0(((((-1 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
// Condition for demosaic_bxb_update_0(((((-6 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 1081 }
// Condition for demosaic_bx_update_0(((((-7 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
// Condition for demosaicb_update_0(((((-4 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for demosaic_by_update_0(((((-9 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for demosaic_byb_update_0(((((-8 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for demosaic_diff_update_0(((((-10 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 121 and -1 <= d1 <= 1082 }
// Condition for denoiseb_update_0(((((-2 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((122 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))

	  // Schedules...
	    // cp_noinit_ln1_16_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*11]
	    // demosaic_bx_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*7]
	    // demosaic_bxb_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*6]
	    // demosaic_by_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*9]
	    // demosaic_byb_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*8]
	    // demosaic_diff_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*10]
	    // demosaic_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*2,1*5]
	    // demosaicb_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*2,1*4]
	    // denoise_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*3]
	    // denoiseb_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*2]
	    // raw_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // raw_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -3; c0 <= 1084; c0++) {
	  for (int c1 = -2; c1 <= 122; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-2 <= c1 && c1 <= 122) && ((c1 - 0) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
	      raw_update_0(raw_oc /* buf name */, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 122) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      denoiseb_update_0(raw /* buf name */, denoiseb, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 122) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      denoise_update_0(denoiseb /* buf name */, denoise, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 122) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaicb_update_0(denoise /* buf name */, demosaicb, (c1 - 2) / 1, (c0 - 3) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 122) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_update_0(demosaicb /* buf name */, demosaic, (c1 - 2) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_bxb_update_0(demosaic /* buf name */, demosaic_bxb, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_bx_update_0(demosaic_bxb /* buf name */, demosaic_bx, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_byb_update_0(demosaic_bx /* buf name */, demosaic_byb, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_by_update_0(demosaic_byb /* buf name */, demosaic_by, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_diff_update_0(demosaic /* buf name */, demosaic_by /* buf name */, demosaic_diff, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      cp_noinit_ln1_16_update_0(demosaic_diff /* buf name */, cp_noinit_ln1_16, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cp_noinit_ln1_16_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 16 */raw_oc, HWStream<hw_uint<256> >& /* get_args num ports = 16 */cp_noinit_ln1_16, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cp_noinit_ln1_16_opt(raw_oc, cp_noinit_ln1_16);
  }
}
#ifdef __VIVADO_SYNTH__
  // { cp_noinit_ln1_16_update_0[root = 0, cp_noinit_ln1_16_0, cp_noinit_ln1_16_1] -> cp_noinit_ln1_16[cp_noinit_ln1_16_1, cp_noinit_ln1_16_0] : 0 <= cp_noinit_ln1_16_0 <= 1079 and 0 <= cp_noinit_ln1_16_1 <= 119 }
const int cp_noinit_ln1_16_update_0_write_pipe0_num_transfers = 129600;
  // { raw_update_0[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : -3 <= raw_0 <= 1084 and -2 <= raw_1 <= 122 }
const int raw_update_0_read_pipe0_num_transfers = 136000;


extern "C" {

void cp_noinit_ln1_16_opt_accel(hw_uint<256>* raw_update_0_read_pipe0, hw_uint<256>* cp_noinit_ln1_16_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp_noinit_ln1_16_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = cp_noinit_ln1_16_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > raw_update_0_read_pipe0_channel;
  static HWStream<hw_uint<256> > cp_noinit_ln1_16_update_0_write_pipe0_channel;

  burst_read<256>(raw_update_0_read_pipe0, raw_update_0_read_pipe0_channel, raw_update_0_read_pipe0_num_transfers*30);

  cp_noinit_ln1_16_opt_wrapper(raw_update_0_read_pipe0_channel, cp_noinit_ln1_16_update_0_write_pipe0_channel, size);

  burst_write<256>(cp_noinit_ln1_16_update_0_write_pipe0, cp_noinit_ln1_16_update_0_write_pipe0_channel, cp_noinit_ln1_16_update_0_write_pipe0_num_transfers*30);
}

}
extern "C" {

void cp_noinit_ln1_16_opt_rdai(HWStream<hw_uint<256> >& raw_update_0_read_pipe0, HWStream<hw_uint<256> >&  cp_noinit_ln1_16_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = raw_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = cp_noinit_ln1_16_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cp_noinit_ln1_16_opt(raw_update_0_read_pipe0, cp_noinit_ln1_16_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

