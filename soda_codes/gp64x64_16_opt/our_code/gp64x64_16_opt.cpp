#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: gp64x64_16_opt_compute_units.h
#include "gp64x64_16_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 1072], [0, 1038]}
	// Capacity: 138
	// # of read delays: 6
  // 0, 1, 68, 69, 136, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 66> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}

	inline hw_uint<16> peek_135() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_136() {
		return f8;
	}

	inline hw_uint<16> peek_137() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1057], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write10_merged_banks_6_cache {
	// RAM Box: {[10, 1066], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write11_merged_banks_3_cache {
	// RAM Box: {[11, 1067], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write12_merged_banks_6_cache {
	// RAM Box: {[12, 1068], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write13_merged_banks_3_cache {
	// RAM Box: {[13, 1069], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write14_merged_banks_6_cache {
	// RAM Box: {[14, 1070], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write15_merged_banks_3_cache {
	// RAM Box: {[15, 1071], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write2_merged_banks_6_cache {
	// RAM Box: {[2, 1058], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1059], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write4_merged_banks_6_cache {
	// RAM Box: {[4, 1060], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[5, 1061], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write6_merged_banks_6_cache {
	// RAM Box: {[6, 1062], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[7, 1063], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write8_merged_banks_6_cache {
	// RAM Box: {[8, 1064], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write9_merged_banks_3_cache {
	// RAM Box: {[9, 1065], [0, 1038]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
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
  in_in_update_0_write0_merged_banks_6_cache in_in_update_0_write0_merged_banks_6;
  in_in_update_0_write1_merged_banks_3_cache in_in_update_0_write1_merged_banks_3;
  in_in_update_0_write10_merged_banks_6_cache in_in_update_0_write10_merged_banks_6;
  in_in_update_0_write11_merged_banks_3_cache in_in_update_0_write11_merged_banks_3;
  in_in_update_0_write12_merged_banks_6_cache in_in_update_0_write12_merged_banks_6;
  in_in_update_0_write13_merged_banks_3_cache in_in_update_0_write13_merged_banks_3;
  in_in_update_0_write14_merged_banks_6_cache in_in_update_0_write14_merged_banks_6;
  in_in_update_0_write15_merged_banks_3_cache in_in_update_0_write15_merged_banks_3;
  in_in_update_0_write2_merged_banks_6_cache in_in_update_0_write2_merged_banks_6;
  in_in_update_0_write3_merged_banks_3_cache in_in_update_0_write3_merged_banks_3;
  in_in_update_0_write4_merged_banks_6_cache in_in_update_0_write4_merged_banks_6;
  in_in_update_0_write5_merged_banks_3_cache in_in_update_0_write5_merged_banks_3;
  in_in_update_0_write6_merged_banks_6_cache in_in_update_0_write6_merged_banks_6;
  in_in_update_0_write7_merged_banks_3_cache in_in_update_0_write7_merged_banks_3;
  in_in_update_0_write8_merged_banks_6_cache in_in_update_0_write8_merged_banks_6;
  in_in_update_0_write9_merged_banks_3_cache in_in_update_0_write9_merged_banks_3;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_6.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_3.push(in_in_update_0_write1);
}

inline void in_in_update_0_write10_write(hw_uint<16>& in_in_update_0_write10, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write10_merged_banks_6.push(in_in_update_0_write10);
}

inline void in_in_update_0_write11_write(hw_uint<16>& in_in_update_0_write11, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write11_merged_banks_3.push(in_in_update_0_write11);
}

inline void in_in_update_0_write12_write(hw_uint<16>& in_in_update_0_write12, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write12_merged_banks_6.push(in_in_update_0_write12);
}

inline void in_in_update_0_write13_write(hw_uint<16>& in_in_update_0_write13, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write13_merged_banks_3.push(in_in_update_0_write13);
}

inline void in_in_update_0_write14_write(hw_uint<16>& in_in_update_0_write14, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write14_merged_banks_6.push(in_in_update_0_write14);
}

inline void in_in_update_0_write15_write(hw_uint<16>& in_in_update_0_write15, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write15_merged_banks_3.push(in_in_update_0_write15);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_6.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_3.push(in_in_update_0_write3);
}

inline void in_in_update_0_write4_write(hw_uint<16>& in_in_update_0_write4, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write4_merged_banks_6.push(in_in_update_0_write4);
}

inline void in_in_update_0_write5_write(hw_uint<16>& in_in_update_0_write5, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write5_merged_banks_3.push(in_in_update_0_write5);
}

inline void in_in_update_0_write6_write(hw_uint<16>& in_in_update_0_write6, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write6_merged_banks_6.push(in_in_update_0_write6);
}

inline void in_in_update_0_write7_write(hw_uint<16>& in_in_update_0_write7, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write7_merged_banks_3.push(in_in_update_0_write7);
}

inline void in_in_update_0_write8_write(hw_uint<16>& in_in_update_0_write8, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write8_merged_banks_6.push(in_in_update_0_write8);
}

inline void in_in_update_0_write9_write(hw_uint<16>& in_in_update_0_write9, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write9_merged_banks_3.push(in_in_update_0_write9);
}

inline hw_uint<16> level_0_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd0 read pattern: { level_0_update_0[d0, d1] -> in[16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_137();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd1 read pattern: { level_0_update_0[d0, d1] -> in[16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_69();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd10 read pattern: { level_0_update_0[d0, d1] -> in[2 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_69();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd11 read pattern: { level_0_update_0[d0, d1] -> in[2 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd12 read pattern: { level_0_update_0[d0, d1] -> in[3 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_137();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd13 read pattern: { level_0_update_0[d0, d1] -> in[3 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_69();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd14 read pattern: { level_0_update_0[d0, d1] -> in[3 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd15 read pattern: { level_0_update_0[d0, d1] -> in[4 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_137();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd16 read pattern: { level_0_update_0[d0, d1] -> in[4 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_69();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd17 read pattern: { level_0_update_0[d0, d1] -> in[4 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd18 read pattern: { level_0_update_0[d0, d1] -> in[4 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_137();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd19 read pattern: { level_0_update_0[d0, d1] -> in[4 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_69();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd2 read pattern: { level_0_update_0[d0, d1] -> in[16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd20 read pattern: { level_0_update_0[d0, d1] -> in[4 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd21 read pattern: { level_0_update_0[d0, d1] -> in[5 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_137();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd22 read pattern: { level_0_update_0[d0, d1] -> in[5 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_69();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd23 read pattern: { level_0_update_0[d0, d1] -> in[5 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd24 read pattern: { level_0_update_0[d0, d1] -> in[6 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_137();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd25 read pattern: { level_0_update_0[d0, d1] -> in[6 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_69();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd26 read pattern: { level_0_update_0[d0, d1] -> in[6 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd27 read pattern: { level_0_update_0[d0, d1] -> in[6 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_137();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd28 read pattern: { level_0_update_0[d0, d1] -> in[6 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_69();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd29 read pattern: { level_0_update_0[d0, d1] -> in[6 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd3 read pattern: { level_0_update_0[d0, d1] -> in[1 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_137();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd30 read pattern: { level_0_update_0[d0, d1] -> in[7 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_137();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd31 read pattern: { level_0_update_0[d0, d1] -> in[7 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_69();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd32 read pattern: { level_0_update_0[d0, d1] -> in[7 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd33 read pattern: { level_0_update_0[d0, d1] -> in[8 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_137();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd34 read pattern: { level_0_update_0[d0, d1] -> in[8 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_69();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd35 read pattern: { level_0_update_0[d0, d1] -> in[8 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd36_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd36 read pattern: { level_0_update_0[d0, d1] -> in[8 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_137();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd37_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd37 read pattern: { level_0_update_0[d0, d1] -> in[8 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_69();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd38_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd38 read pattern: { level_0_update_0[d0, d1] -> in[8 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd39_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd39 read pattern: { level_0_update_0[d0, d1] -> in[9 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_3.peek_137();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> level_0_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd4 read pattern: { level_0_update_0[d0, d1] -> in[1 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_69();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd40_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd40 read pattern: { level_0_update_0[d0, d1] -> in[9 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_3.peek_69();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> level_0_rd41_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd41 read pattern: { level_0_update_0[d0, d1] -> in[9 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_3.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> level_0_rd42_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd42 read pattern: { level_0_update_0[d0, d1] -> in[10 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_137();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd43_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd43 read pattern: { level_0_update_0[d0, d1] -> in[10 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_69();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd44_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd44 read pattern: { level_0_update_0[d0, d1] -> in[10 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd45_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd45 read pattern: { level_0_update_0[d0, d1] -> in[10 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_137();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd46_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd46 read pattern: { level_0_update_0[d0, d1] -> in[10 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_69();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd47_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd47 read pattern: { level_0_update_0[d0, d1] -> in[10 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd48_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd48 read pattern: { level_0_update_0[d0, d1] -> in[11 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_3.peek_137();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> level_0_rd49_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd49 read pattern: { level_0_update_0[d0, d1] -> in[11 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_3.peek_69();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> level_0_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd5 read pattern: { level_0_update_0[d0, d1] -> in[1 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd50_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd50 read pattern: { level_0_update_0[d0, d1] -> in[11 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_3.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> level_0_rd51_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd51 read pattern: { level_0_update_0[d0, d1] -> in[12 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_137();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd52_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd52 read pattern: { level_0_update_0[d0, d1] -> in[12 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_69();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd53_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd53 read pattern: { level_0_update_0[d0, d1] -> in[12 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd54_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd54 read pattern: { level_0_update_0[d0, d1] -> in[12 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_137();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd55_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd55 read pattern: { level_0_update_0[d0, d1] -> in[12 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_69();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd56_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd56 read pattern: { level_0_update_0[d0, d1] -> in[12 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd57_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd57 read pattern: { level_0_update_0[d0, d1] -> in[13 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_3.peek_137();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> level_0_rd58_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd58 read pattern: { level_0_update_0[d0, d1] -> in[13 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_3.peek_69();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> level_0_rd59_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd59 read pattern: { level_0_update_0[d0, d1] -> in[13 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_3.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> level_0_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd6 read pattern: { level_0_update_0[d0, d1] -> in[2 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_137();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd60_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd60 read pattern: { level_0_update_0[d0, d1] -> in[14 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_137();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd61_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd61 read pattern: { level_0_update_0[d0, d1] -> in[14 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_69();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd62_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd62 read pattern: { level_0_update_0[d0, d1] -> in[14 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd63_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd63 read pattern: { level_0_update_0[d0, d1] -> in[14 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_137();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd64_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd64 read pattern: { level_0_update_0[d0, d1] -> in[14 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_69();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd65_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd65 read pattern: { level_0_update_0[d0, d1] -> in[14 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd66_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd66 read pattern: { level_0_update_0[d0, d1] -> in[15 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_3.peek_137();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> level_0_rd67_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd67 read pattern: { level_0_update_0[d0, d1] -> in[15 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_3.peek_69();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> level_0_rd68_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd68 read pattern: { level_0_update_0[d0, d1] -> in[15 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_3.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> level_0_rd69_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd69 read pattern: { level_0_update_0[d0, d1] -> in[16 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_136();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd7 read pattern: { level_0_update_0[d0, d1] -> in[2 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_69();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd70_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd70 read pattern: { level_0_update_0[d0, d1] -> in[16 + 16d0, 1 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_68();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd71_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd71 read pattern: { level_0_update_0[d0, d1] -> in[16 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd8 read pattern: { level_0_update_0[d0, d1] -> in[2 + 16d0, 2 + 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd9 read pattern: { level_0_update_0[d0, d1] -> in[2 + 16d0, 2d1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_137();
  return value_in_in_update_0_write2;
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

// level_0_update_0_read
//	level_0_rd0
//	level_0_rd1
//	level_0_rd2
//	level_0_rd3
//	level_0_rd4
//	level_0_rd5
//	level_0_rd6
//	level_0_rd7
//	level_0_rd8
//	level_0_rd9
//	level_0_rd10
//	level_0_rd11
//	level_0_rd12
//	level_0_rd13
//	level_0_rd14
//	level_0_rd15
//	level_0_rd16
//	level_0_rd17
//	level_0_rd18
//	level_0_rd19
//	level_0_rd20
//	level_0_rd21
//	level_0_rd22
//	level_0_rd23
//	level_0_rd24
//	level_0_rd25
//	level_0_rd26
//	level_0_rd27
//	level_0_rd28
//	level_0_rd29
//	level_0_rd30
//	level_0_rd31
//	level_0_rd32
//	level_0_rd33
//	level_0_rd34
//	level_0_rd35
//	level_0_rd36
//	level_0_rd37
//	level_0_rd38
//	level_0_rd39
//	level_0_rd40
//	level_0_rd41
//	level_0_rd42
//	level_0_rd43
//	level_0_rd44
//	level_0_rd45
//	level_0_rd46
//	level_0_rd47
//	level_0_rd48
//	level_0_rd49
//	level_0_rd50
//	level_0_rd51
//	level_0_rd52
//	level_0_rd53
//	level_0_rd54
//	level_0_rd55
//	level_0_rd56
//	level_0_rd57
//	level_0_rd58
//	level_0_rd59
//	level_0_rd60
//	level_0_rd61
//	level_0_rd62
//	level_0_rd63
//	level_0_rd64
//	level_0_rd65
//	level_0_rd66
//	level_0_rd67
//	level_0_rd68
//	level_0_rd69
//	level_0_rd70
//	level_0_rd71
inline hw_uint<1152> in_level_0_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 72
    // level_0_rd0
    // level_0_rd1
    // level_0_rd2
    // level_0_rd3
    // level_0_rd4
    // level_0_rd5
    // level_0_rd6
    // level_0_rd7
    // level_0_rd8
    // level_0_rd9
    // level_0_rd10
    // level_0_rd11
    // level_0_rd12
    // level_0_rd13
    // level_0_rd14
    // level_0_rd15
    // level_0_rd16
    // level_0_rd17
    // level_0_rd18
    // level_0_rd19
    // level_0_rd20
    // level_0_rd21
    // level_0_rd22
    // level_0_rd23
    // level_0_rd24
    // level_0_rd25
    // level_0_rd26
    // level_0_rd27
    // level_0_rd28
    // level_0_rd29
    // level_0_rd30
    // level_0_rd31
    // level_0_rd32
    // level_0_rd33
    // level_0_rd34
    // level_0_rd35
    // level_0_rd36
    // level_0_rd37
    // level_0_rd38
    // level_0_rd39
    // level_0_rd40
    // level_0_rd41
    // level_0_rd42
    // level_0_rd43
    // level_0_rd44
    // level_0_rd45
    // level_0_rd46
    // level_0_rd47
    // level_0_rd48
    // level_0_rd49
    // level_0_rd50
    // level_0_rd51
    // level_0_rd52
    // level_0_rd53
    // level_0_rd54
    // level_0_rd55
    // level_0_rd56
    // level_0_rd57
    // level_0_rd58
    // level_0_rd59
    // level_0_rd60
    // level_0_rd61
    // level_0_rd62
    // level_0_rd63
    // level_0_rd64
    // level_0_rd65
    // level_0_rd66
    // level_0_rd67
    // level_0_rd68
    // level_0_rd69
    // level_0_rd70
    // level_0_rd71

	hw_uint<1152> result;
	hw_uint<16> level_0_rd0_res = level_0_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 1152>(result, level_0_rd0_res);
	hw_uint<16> level_0_rd1_res = level_0_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 1152>(result, level_0_rd1_res);
	hw_uint<16> level_0_rd2_res = level_0_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 1152>(result, level_0_rd2_res);
	hw_uint<16> level_0_rd3_res = level_0_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 1152>(result, level_0_rd3_res);
	hw_uint<16> level_0_rd4_res = level_0_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 1152>(result, level_0_rd4_res);
	hw_uint<16> level_0_rd5_res = level_0_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 1152>(result, level_0_rd5_res);
	hw_uint<16> level_0_rd6_res = level_0_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 1152>(result, level_0_rd6_res);
	hw_uint<16> level_0_rd7_res = level_0_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 1152>(result, level_0_rd7_res);
	hw_uint<16> level_0_rd8_res = level_0_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 1152>(result, level_0_rd8_res);
	hw_uint<16> level_0_rd9_res = level_0_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 1152>(result, level_0_rd9_res);
	hw_uint<16> level_0_rd10_res = level_0_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 1152>(result, level_0_rd10_res);
	hw_uint<16> level_0_rd11_res = level_0_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 1152>(result, level_0_rd11_res);
	hw_uint<16> level_0_rd12_res = level_0_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 1152>(result, level_0_rd12_res);
	hw_uint<16> level_0_rd13_res = level_0_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 1152>(result, level_0_rd13_res);
	hw_uint<16> level_0_rd14_res = level_0_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 1152>(result, level_0_rd14_res);
	hw_uint<16> level_0_rd15_res = level_0_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 1152>(result, level_0_rd15_res);
	hw_uint<16> level_0_rd16_res = level_0_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 1152>(result, level_0_rd16_res);
	hw_uint<16> level_0_rd17_res = level_0_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 1152>(result, level_0_rd17_res);
	hw_uint<16> level_0_rd18_res = level_0_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 1152>(result, level_0_rd18_res);
	hw_uint<16> level_0_rd19_res = level_0_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 1152>(result, level_0_rd19_res);
	hw_uint<16> level_0_rd20_res = level_0_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 1152>(result, level_0_rd20_res);
	hw_uint<16> level_0_rd21_res = level_0_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 1152>(result, level_0_rd21_res);
	hw_uint<16> level_0_rd22_res = level_0_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 1152>(result, level_0_rd22_res);
	hw_uint<16> level_0_rd23_res = level_0_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 1152>(result, level_0_rd23_res);
	hw_uint<16> level_0_rd24_res = level_0_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 1152>(result, level_0_rd24_res);
	hw_uint<16> level_0_rd25_res = level_0_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 1152>(result, level_0_rd25_res);
	hw_uint<16> level_0_rd26_res = level_0_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 1152>(result, level_0_rd26_res);
	hw_uint<16> level_0_rd27_res = level_0_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 1152>(result, level_0_rd27_res);
	hw_uint<16> level_0_rd28_res = level_0_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 1152>(result, level_0_rd28_res);
	hw_uint<16> level_0_rd29_res = level_0_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 1152>(result, level_0_rd29_res);
	hw_uint<16> level_0_rd30_res = level_0_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 1152>(result, level_0_rd30_res);
	hw_uint<16> level_0_rd31_res = level_0_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 1152>(result, level_0_rd31_res);
	hw_uint<16> level_0_rd32_res = level_0_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 1152>(result, level_0_rd32_res);
	hw_uint<16> level_0_rd33_res = level_0_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 1152>(result, level_0_rd33_res);
	hw_uint<16> level_0_rd34_res = level_0_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 1152>(result, level_0_rd34_res);
	hw_uint<16> level_0_rd35_res = level_0_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 1152>(result, level_0_rd35_res);
	hw_uint<16> level_0_rd36_res = level_0_rd36_select(in, d0, d1, dynamic_address);
	set_at<576, 1152>(result, level_0_rd36_res);
	hw_uint<16> level_0_rd37_res = level_0_rd37_select(in, d0, d1, dynamic_address);
	set_at<592, 1152>(result, level_0_rd37_res);
	hw_uint<16> level_0_rd38_res = level_0_rd38_select(in, d0, d1, dynamic_address);
	set_at<608, 1152>(result, level_0_rd38_res);
	hw_uint<16> level_0_rd39_res = level_0_rd39_select(in, d0, d1, dynamic_address);
	set_at<624, 1152>(result, level_0_rd39_res);
	hw_uint<16> level_0_rd40_res = level_0_rd40_select(in, d0, d1, dynamic_address);
	set_at<640, 1152>(result, level_0_rd40_res);
	hw_uint<16> level_0_rd41_res = level_0_rd41_select(in, d0, d1, dynamic_address);
	set_at<656, 1152>(result, level_0_rd41_res);
	hw_uint<16> level_0_rd42_res = level_0_rd42_select(in, d0, d1, dynamic_address);
	set_at<672, 1152>(result, level_0_rd42_res);
	hw_uint<16> level_0_rd43_res = level_0_rd43_select(in, d0, d1, dynamic_address);
	set_at<688, 1152>(result, level_0_rd43_res);
	hw_uint<16> level_0_rd44_res = level_0_rd44_select(in, d0, d1, dynamic_address);
	set_at<704, 1152>(result, level_0_rd44_res);
	hw_uint<16> level_0_rd45_res = level_0_rd45_select(in, d0, d1, dynamic_address);
	set_at<720, 1152>(result, level_0_rd45_res);
	hw_uint<16> level_0_rd46_res = level_0_rd46_select(in, d0, d1, dynamic_address);
	set_at<736, 1152>(result, level_0_rd46_res);
	hw_uint<16> level_0_rd47_res = level_0_rd47_select(in, d0, d1, dynamic_address);
	set_at<752, 1152>(result, level_0_rd47_res);
	hw_uint<16> level_0_rd48_res = level_0_rd48_select(in, d0, d1, dynamic_address);
	set_at<768, 1152>(result, level_0_rd48_res);
	hw_uint<16> level_0_rd49_res = level_0_rd49_select(in, d0, d1, dynamic_address);
	set_at<784, 1152>(result, level_0_rd49_res);
	hw_uint<16> level_0_rd50_res = level_0_rd50_select(in, d0, d1, dynamic_address);
	set_at<800, 1152>(result, level_0_rd50_res);
	hw_uint<16> level_0_rd51_res = level_0_rd51_select(in, d0, d1, dynamic_address);
	set_at<816, 1152>(result, level_0_rd51_res);
	hw_uint<16> level_0_rd52_res = level_0_rd52_select(in, d0, d1, dynamic_address);
	set_at<832, 1152>(result, level_0_rd52_res);
	hw_uint<16> level_0_rd53_res = level_0_rd53_select(in, d0, d1, dynamic_address);
	set_at<848, 1152>(result, level_0_rd53_res);
	hw_uint<16> level_0_rd54_res = level_0_rd54_select(in, d0, d1, dynamic_address);
	set_at<864, 1152>(result, level_0_rd54_res);
	hw_uint<16> level_0_rd55_res = level_0_rd55_select(in, d0, d1, dynamic_address);
	set_at<880, 1152>(result, level_0_rd55_res);
	hw_uint<16> level_0_rd56_res = level_0_rd56_select(in, d0, d1, dynamic_address);
	set_at<896, 1152>(result, level_0_rd56_res);
	hw_uint<16> level_0_rd57_res = level_0_rd57_select(in, d0, d1, dynamic_address);
	set_at<912, 1152>(result, level_0_rd57_res);
	hw_uint<16> level_0_rd58_res = level_0_rd58_select(in, d0, d1, dynamic_address);
	set_at<928, 1152>(result, level_0_rd58_res);
	hw_uint<16> level_0_rd59_res = level_0_rd59_select(in, d0, d1, dynamic_address);
	set_at<944, 1152>(result, level_0_rd59_res);
	hw_uint<16> level_0_rd60_res = level_0_rd60_select(in, d0, d1, dynamic_address);
	set_at<960, 1152>(result, level_0_rd60_res);
	hw_uint<16> level_0_rd61_res = level_0_rd61_select(in, d0, d1, dynamic_address);
	set_at<976, 1152>(result, level_0_rd61_res);
	hw_uint<16> level_0_rd62_res = level_0_rd62_select(in, d0, d1, dynamic_address);
	set_at<992, 1152>(result, level_0_rd62_res);
	hw_uint<16> level_0_rd63_res = level_0_rd63_select(in, d0, d1, dynamic_address);
	set_at<1008, 1152>(result, level_0_rd63_res);
	hw_uint<16> level_0_rd64_res = level_0_rd64_select(in, d0, d1, dynamic_address);
	set_at<1024, 1152>(result, level_0_rd64_res);
	hw_uint<16> level_0_rd65_res = level_0_rd65_select(in, d0, d1, dynamic_address);
	set_at<1040, 1152>(result, level_0_rd65_res);
	hw_uint<16> level_0_rd66_res = level_0_rd66_select(in, d0, d1, dynamic_address);
	set_at<1056, 1152>(result, level_0_rd66_res);
	hw_uint<16> level_0_rd67_res = level_0_rd67_select(in, d0, d1, dynamic_address);
	set_at<1072, 1152>(result, level_0_rd67_res);
	hw_uint<16> level_0_rd68_res = level_0_rd68_select(in, d0, d1, dynamic_address);
	set_at<1088, 1152>(result, level_0_rd68_res);
	hw_uint<16> level_0_rd69_res = level_0_rd69_select(in, d0, d1, dynamic_address);
	set_at<1104, 1152>(result, level_0_rd69_res);
	hw_uint<16> level_0_rd70_res = level_0_rd70_select(in, d0, d1, dynamic_address);
	set_at<1120, 1152>(result, level_0_rd70_res);
	hw_uint<16> level_0_rd71_res = level_0_rd71_select(in, d0, d1, dynamic_address);
	set_at<1136, 1152>(result, level_0_rd71_res);
	return result;
}

#include "hw_classes.h"

struct level_0_level_0_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 528], [0, 518]}
	// Capacity: 136
	// # of read delays: 6
  // 0, 1, 67, 68, 134, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 65> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_68() {
		return f6;
	}

	inline hw_uint<16> peek_133() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_134() {
		return f8;
	}

	inline hw_uint<16> peek_135() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct level_0_level_0_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 521], [0, 518]}
	// Capacity: 136
	// # of read delays: 4
  // 0, 1, 68, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 66> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_135() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write2_merged_banks_6_cache {
	// RAM Box: {[2, 522], [0, 518]}
	// Capacity: 136
	// # of read delays: 4
  // 0, 1, 68, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 66> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_135() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 523], [0, 518]}
	// Capacity: 136
	// # of read delays: 4
  // 0, 1, 68, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 66> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_135() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write4_merged_banks_6_cache {
	// RAM Box: {[4, 524], [0, 518]}
	// Capacity: 136
	// # of read delays: 4
  // 0, 1, 68, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 66> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_135() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[5, 525], [0, 518]}
	// Capacity: 136
	// # of read delays: 4
  // 0, 1, 68, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 66> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_135() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write6_merged_banks_6_cache {
	// RAM Box: {[6, 526], [0, 518]}
	// Capacity: 136
	// # of read delays: 4
  // 0, 1, 68, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 66> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_135() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[7, 527], [0, 518]}
	// Capacity: 136
	// # of read delays: 4
  // 0, 1, 68, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 66> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_135() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_cache {
  // # of banks: 8
  level_0_level_0_update_0_write0_merged_banks_6_cache level_0_level_0_update_0_write0_merged_banks_6;
  level_0_level_0_update_0_write1_merged_banks_3_cache level_0_level_0_update_0_write1_merged_banks_3;
  level_0_level_0_update_0_write2_merged_banks_6_cache level_0_level_0_update_0_write2_merged_banks_6;
  level_0_level_0_update_0_write3_merged_banks_3_cache level_0_level_0_update_0_write3_merged_banks_3;
  level_0_level_0_update_0_write4_merged_banks_6_cache level_0_level_0_update_0_write4_merged_banks_6;
  level_0_level_0_update_0_write5_merged_banks_3_cache level_0_level_0_update_0_write5_merged_banks_3;
  level_0_level_0_update_0_write6_merged_banks_6_cache level_0_level_0_update_0_write6_merged_banks_6;
  level_0_level_0_update_0_write7_merged_banks_3_cache level_0_level_0_update_0_write7_merged_banks_3;
};



inline void level_0_level_0_update_0_write0_write(hw_uint<16>& level_0_level_0_update_0_write0, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write0_merged_banks_6.push(level_0_level_0_update_0_write0);
}

inline void level_0_level_0_update_0_write1_write(hw_uint<16>& level_0_level_0_update_0_write1, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write1_merged_banks_3.push(level_0_level_0_update_0_write1);
}

inline void level_0_level_0_update_0_write2_write(hw_uint<16>& level_0_level_0_update_0_write2, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write2_merged_banks_6.push(level_0_level_0_update_0_write2);
}

inline void level_0_level_0_update_0_write3_write(hw_uint<16>& level_0_level_0_update_0_write3, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write3_merged_banks_3.push(level_0_level_0_update_0_write3);
}

inline void level_0_level_0_update_0_write4_write(hw_uint<16>& level_0_level_0_update_0_write4, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write4_merged_banks_6.push(level_0_level_0_update_0_write4);
}

inline void level_0_level_0_update_0_write5_write(hw_uint<16>& level_0_level_0_update_0_write5, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write5_merged_banks_3.push(level_0_level_0_update_0_write5);
}

inline void level_0_level_0_update_0_write6_write(hw_uint<16>& level_0_level_0_update_0_write6, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write6_merged_banks_6.push(level_0_level_0_update_0_write6);
}

inline void level_0_level_0_update_0_write7_write(hw_uint<16>& level_0_level_0_update_0_write7, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write7_merged_banks_3.push(level_0_level_0_update_0_write7);
}

inline hw_uint<16> level_1_rd0_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd0 read pattern: { level_1_update_0[d0, d1] -> level_0[8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_135();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd1_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd1 read pattern: { level_1_update_0[d0, d1] -> level_0[8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_68();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd10_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd10 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_68();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd11_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd11 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd12_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd12 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_135();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd13_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd13 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_68();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd14_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd14 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd15_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd15 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_135();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd16_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd16 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_68();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd17_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd17 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd18_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd18 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_135();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd19_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd19 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_68();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd2_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd2 read pattern: { level_1_update_0[d0, d1] -> level_0[8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd20_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd20 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd21_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd21 read pattern: { level_1_update_0[d0, d1] -> level_0[5 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write5 = level_0.level_0_level_0_update_0_write5_merged_banks_3.peek_135();
  return value_level_0_level_0_update_0_write5;
  return 0;
}

inline hw_uint<16> level_1_rd22_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd22 read pattern: { level_1_update_0[d0, d1] -> level_0[5 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write5 = level_0.level_0_level_0_update_0_write5_merged_banks_3.peek_68();
  return value_level_0_level_0_update_0_write5;
  return 0;
}

inline hw_uint<16> level_1_rd23_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd23 read pattern: { level_1_update_0[d0, d1] -> level_0[5 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write5 = level_0.level_0_level_0_update_0_write5_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write5;
  return 0;
}

inline hw_uint<16> level_1_rd24_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd24 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_135();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd25_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd25 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_68();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd26_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd26 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd27_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd27 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_135();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd28_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd28 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_68();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd29_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd29 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd3_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd3 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_135();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd30_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd30 read pattern: { level_1_update_0[d0, d1] -> level_0[7 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write7 = level_0.level_0_level_0_update_0_write7_merged_banks_3.peek_135();
  return value_level_0_level_0_update_0_write7;
  return 0;
}

inline hw_uint<16> level_1_rd31_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd31 read pattern: { level_1_update_0[d0, d1] -> level_0[7 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write7 = level_0.level_0_level_0_update_0_write7_merged_banks_3.peek_68();
  return value_level_0_level_0_update_0_write7;
  return 0;
}

inline hw_uint<16> level_1_rd32_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd32 read pattern: { level_1_update_0[d0, d1] -> level_0[7 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write7 = level_0.level_0_level_0_update_0_write7_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write7;
  return 0;
}

inline hw_uint<16> level_1_rd33_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd33 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_134();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd34_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd34 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_67();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd35_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd35 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_0();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd4_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd4 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_68();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd5_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd5 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd6_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd6 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_135();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd7_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd7 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 8d0, 1 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_68();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd8_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd8 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 8d0, 2 + 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd9_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd9 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_135();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

// # of bundles = 2
// level_0_update_0_write
//	level_0_level_0_update_0_write0
//	level_0_level_0_update_0_write1
//	level_0_level_0_update_0_write2
//	level_0_level_0_update_0_write3
//	level_0_level_0_update_0_write4
//	level_0_level_0_update_0_write5
//	level_0_level_0_update_0_write6
//	level_0_level_0_update_0_write7
inline void level_0_level_0_update_0_write_bundle_write(hw_uint<128>& level_0_update_0_write, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_0_level_0_update_0_write0_res = level_0_update_0_write.extract<0, 15>();
	level_0_level_0_update_0_write0_write(level_0_level_0_update_0_write0_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write1_res = level_0_update_0_write.extract<16, 31>();
	level_0_level_0_update_0_write1_write(level_0_level_0_update_0_write1_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write2_res = level_0_update_0_write.extract<32, 47>();
	level_0_level_0_update_0_write2_write(level_0_level_0_update_0_write2_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write3_res = level_0_update_0_write.extract<48, 63>();
	level_0_level_0_update_0_write3_write(level_0_level_0_update_0_write3_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write4_res = level_0_update_0_write.extract<64, 79>();
	level_0_level_0_update_0_write4_write(level_0_level_0_update_0_write4_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write5_res = level_0_update_0_write.extract<80, 95>();
	level_0_level_0_update_0_write5_write(level_0_level_0_update_0_write5_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write6_res = level_0_update_0_write.extract<96, 111>();
	level_0_level_0_update_0_write6_write(level_0_level_0_update_0_write6_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write7_res = level_0_update_0_write.extract<112, 127>();
	level_0_level_0_update_0_write7_write(level_0_level_0_update_0_write7_res, level_0, d0, d1, dynamic_address);
}

// level_1_update_0_read
//	level_1_rd0
//	level_1_rd1
//	level_1_rd2
//	level_1_rd3
//	level_1_rd4
//	level_1_rd5
//	level_1_rd6
//	level_1_rd7
//	level_1_rd8
//	level_1_rd9
//	level_1_rd10
//	level_1_rd11
//	level_1_rd12
//	level_1_rd13
//	level_1_rd14
//	level_1_rd15
//	level_1_rd16
//	level_1_rd17
//	level_1_rd18
//	level_1_rd19
//	level_1_rd20
//	level_1_rd21
//	level_1_rd22
//	level_1_rd23
//	level_1_rd24
//	level_1_rd25
//	level_1_rd26
//	level_1_rd27
//	level_1_rd28
//	level_1_rd29
//	level_1_rd30
//	level_1_rd31
//	level_1_rd32
//	level_1_rd33
//	level_1_rd34
//	level_1_rd35
inline hw_uint<576> level_0_level_1_update_0_read_bundle_read(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 36
    // level_1_rd0
    // level_1_rd1
    // level_1_rd2
    // level_1_rd3
    // level_1_rd4
    // level_1_rd5
    // level_1_rd6
    // level_1_rd7
    // level_1_rd8
    // level_1_rd9
    // level_1_rd10
    // level_1_rd11
    // level_1_rd12
    // level_1_rd13
    // level_1_rd14
    // level_1_rd15
    // level_1_rd16
    // level_1_rd17
    // level_1_rd18
    // level_1_rd19
    // level_1_rd20
    // level_1_rd21
    // level_1_rd22
    // level_1_rd23
    // level_1_rd24
    // level_1_rd25
    // level_1_rd26
    // level_1_rd27
    // level_1_rd28
    // level_1_rd29
    // level_1_rd30
    // level_1_rd31
    // level_1_rd32
    // level_1_rd33
    // level_1_rd34
    // level_1_rd35

	hw_uint<576> result;
	hw_uint<16> level_1_rd0_res = level_1_rd0_select(level_0, d0, d1, dynamic_address);
	set_at<0, 576>(result, level_1_rd0_res);
	hw_uint<16> level_1_rd1_res = level_1_rd1_select(level_0, d0, d1, dynamic_address);
	set_at<16, 576>(result, level_1_rd1_res);
	hw_uint<16> level_1_rd2_res = level_1_rd2_select(level_0, d0, d1, dynamic_address);
	set_at<32, 576>(result, level_1_rd2_res);
	hw_uint<16> level_1_rd3_res = level_1_rd3_select(level_0, d0, d1, dynamic_address);
	set_at<48, 576>(result, level_1_rd3_res);
	hw_uint<16> level_1_rd4_res = level_1_rd4_select(level_0, d0, d1, dynamic_address);
	set_at<64, 576>(result, level_1_rd4_res);
	hw_uint<16> level_1_rd5_res = level_1_rd5_select(level_0, d0, d1, dynamic_address);
	set_at<80, 576>(result, level_1_rd5_res);
	hw_uint<16> level_1_rd6_res = level_1_rd6_select(level_0, d0, d1, dynamic_address);
	set_at<96, 576>(result, level_1_rd6_res);
	hw_uint<16> level_1_rd7_res = level_1_rd7_select(level_0, d0, d1, dynamic_address);
	set_at<112, 576>(result, level_1_rd7_res);
	hw_uint<16> level_1_rd8_res = level_1_rd8_select(level_0, d0, d1, dynamic_address);
	set_at<128, 576>(result, level_1_rd8_res);
	hw_uint<16> level_1_rd9_res = level_1_rd9_select(level_0, d0, d1, dynamic_address);
	set_at<144, 576>(result, level_1_rd9_res);
	hw_uint<16> level_1_rd10_res = level_1_rd10_select(level_0, d0, d1, dynamic_address);
	set_at<160, 576>(result, level_1_rd10_res);
	hw_uint<16> level_1_rd11_res = level_1_rd11_select(level_0, d0, d1, dynamic_address);
	set_at<176, 576>(result, level_1_rd11_res);
	hw_uint<16> level_1_rd12_res = level_1_rd12_select(level_0, d0, d1, dynamic_address);
	set_at<192, 576>(result, level_1_rd12_res);
	hw_uint<16> level_1_rd13_res = level_1_rd13_select(level_0, d0, d1, dynamic_address);
	set_at<208, 576>(result, level_1_rd13_res);
	hw_uint<16> level_1_rd14_res = level_1_rd14_select(level_0, d0, d1, dynamic_address);
	set_at<224, 576>(result, level_1_rd14_res);
	hw_uint<16> level_1_rd15_res = level_1_rd15_select(level_0, d0, d1, dynamic_address);
	set_at<240, 576>(result, level_1_rd15_res);
	hw_uint<16> level_1_rd16_res = level_1_rd16_select(level_0, d0, d1, dynamic_address);
	set_at<256, 576>(result, level_1_rd16_res);
	hw_uint<16> level_1_rd17_res = level_1_rd17_select(level_0, d0, d1, dynamic_address);
	set_at<272, 576>(result, level_1_rd17_res);
	hw_uint<16> level_1_rd18_res = level_1_rd18_select(level_0, d0, d1, dynamic_address);
	set_at<288, 576>(result, level_1_rd18_res);
	hw_uint<16> level_1_rd19_res = level_1_rd19_select(level_0, d0, d1, dynamic_address);
	set_at<304, 576>(result, level_1_rd19_res);
	hw_uint<16> level_1_rd20_res = level_1_rd20_select(level_0, d0, d1, dynamic_address);
	set_at<320, 576>(result, level_1_rd20_res);
	hw_uint<16> level_1_rd21_res = level_1_rd21_select(level_0, d0, d1, dynamic_address);
	set_at<336, 576>(result, level_1_rd21_res);
	hw_uint<16> level_1_rd22_res = level_1_rd22_select(level_0, d0, d1, dynamic_address);
	set_at<352, 576>(result, level_1_rd22_res);
	hw_uint<16> level_1_rd23_res = level_1_rd23_select(level_0, d0, d1, dynamic_address);
	set_at<368, 576>(result, level_1_rd23_res);
	hw_uint<16> level_1_rd24_res = level_1_rd24_select(level_0, d0, d1, dynamic_address);
	set_at<384, 576>(result, level_1_rd24_res);
	hw_uint<16> level_1_rd25_res = level_1_rd25_select(level_0, d0, d1, dynamic_address);
	set_at<400, 576>(result, level_1_rd25_res);
	hw_uint<16> level_1_rd26_res = level_1_rd26_select(level_0, d0, d1, dynamic_address);
	set_at<416, 576>(result, level_1_rd26_res);
	hw_uint<16> level_1_rd27_res = level_1_rd27_select(level_0, d0, d1, dynamic_address);
	set_at<432, 576>(result, level_1_rd27_res);
	hw_uint<16> level_1_rd28_res = level_1_rd28_select(level_0, d0, d1, dynamic_address);
	set_at<448, 576>(result, level_1_rd28_res);
	hw_uint<16> level_1_rd29_res = level_1_rd29_select(level_0, d0, d1, dynamic_address);
	set_at<464, 576>(result, level_1_rd29_res);
	hw_uint<16> level_1_rd30_res = level_1_rd30_select(level_0, d0, d1, dynamic_address);
	set_at<480, 576>(result, level_1_rd30_res);
	hw_uint<16> level_1_rd31_res = level_1_rd31_select(level_0, d0, d1, dynamic_address);
	set_at<496, 576>(result, level_1_rd31_res);
	hw_uint<16> level_1_rd32_res = level_1_rd32_select(level_0, d0, d1, dynamic_address);
	set_at<512, 576>(result, level_1_rd32_res);
	hw_uint<16> level_1_rd33_res = level_1_rd33_select(level_0, d0, d1, dynamic_address);
	set_at<528, 576>(result, level_1_rd33_res);
	hw_uint<16> level_1_rd34_res = level_1_rd34_select(level_0, d0, d1, dynamic_address);
	set_at<544, 576>(result, level_1_rd34_res);
	hw_uint<16> level_1_rd35_res = level_1_rd35_select(level_0, d0, d1, dynamic_address);
	set_at<560, 576>(result, level_1_rd35_res);
	return result;
}

#include "hw_classes.h"

struct level_1_level_1_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 260], [0, 258]}
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

struct level_1_level_1_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 257], [0, 258]}
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

struct level_1_level_1_update_0_write2_merged_banks_6_cache {
	// RAM Box: {[2, 258], [0, 258]}
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

struct level_1_level_1_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 259], [0, 258]}
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

struct level_1_cache {
  // # of banks: 4
  level_1_level_1_update_0_write0_merged_banks_6_cache level_1_level_1_update_0_write0_merged_banks_6;
  level_1_level_1_update_0_write1_merged_banks_3_cache level_1_level_1_update_0_write1_merged_banks_3;
  level_1_level_1_update_0_write2_merged_banks_6_cache level_1_level_1_update_0_write2_merged_banks_6;
  level_1_level_1_update_0_write3_merged_banks_3_cache level_1_level_1_update_0_write3_merged_banks_3;
};



inline void level_1_level_1_update_0_write0_write(hw_uint<16>& level_1_level_1_update_0_write0, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write0_merged_banks_6.push(level_1_level_1_update_0_write0);
}

inline void level_1_level_1_update_0_write1_write(hw_uint<16>& level_1_level_1_update_0_write1, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write1_merged_banks_3.push(level_1_level_1_update_0_write1);
}

inline void level_1_level_1_update_0_write2_write(hw_uint<16>& level_1_level_1_update_0_write2, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write2_merged_banks_6.push(level_1_level_1_update_0_write2);
}

inline void level_1_level_1_update_0_write3_write(hw_uint<16>& level_1_level_1_update_0_write3, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write3_merged_banks_3.push(level_1_level_1_update_0_write3);
}

inline hw_uint<16> level_2_rd0_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd0 read pattern: { level_2_update_0[d0, d1] -> level_1[4d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_133();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd1_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd1 read pattern: { level_2_update_0[d0, d1] -> level_1[4d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_67();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd10_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd10 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 4d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_67();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd11_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd11 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 4d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd12_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd12 read pattern: { level_2_update_0[d0, d1] -> level_1[3 + 4d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write3 = level_1.level_1_level_1_update_0_write3_merged_banks_3.peek_133();
  return value_level_1_level_1_update_0_write3;
  return 0;
}

inline hw_uint<16> level_2_rd13_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd13 read pattern: { level_2_update_0[d0, d1] -> level_1[3 + 4d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write3 = level_1.level_1_level_1_update_0_write3_merged_banks_3.peek_67();
  return value_level_1_level_1_update_0_write3;
  return 0;
}

inline hw_uint<16> level_2_rd14_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd14 read pattern: { level_2_update_0[d0, d1] -> level_1[3 + 4d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write3 = level_1.level_1_level_1_update_0_write3_merged_banks_3.peek_1();
  return value_level_1_level_1_update_0_write3;
  return 0;
}

inline hw_uint<16> level_2_rd15_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd15 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 4d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_132();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd16_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd16 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 4d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_66();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd17_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd17 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 4d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_0();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd2_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd2 read pattern: { level_2_update_0[d0, d1] -> level_1[4d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd3_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd3 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 4d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_133();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd4_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd4 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 4d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_67();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd5_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd5 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 4d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_1();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd6_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd6 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 4d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_133();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd7_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd7 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 4d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_67();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd8_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd8 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 4d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd9_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd9 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 4d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_133();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

// # of bundles = 2
// level_1_update_0_write
//	level_1_level_1_update_0_write0
//	level_1_level_1_update_0_write1
//	level_1_level_1_update_0_write2
//	level_1_level_1_update_0_write3
inline void level_1_level_1_update_0_write_bundle_write(hw_uint<64>& level_1_update_0_write, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_1_level_1_update_0_write0_res = level_1_update_0_write.extract<0, 15>();
	level_1_level_1_update_0_write0_write(level_1_level_1_update_0_write0_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write1_res = level_1_update_0_write.extract<16, 31>();
	level_1_level_1_update_0_write1_write(level_1_level_1_update_0_write1_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write2_res = level_1_update_0_write.extract<32, 47>();
	level_1_level_1_update_0_write2_write(level_1_level_1_update_0_write2_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write3_res = level_1_update_0_write.extract<48, 63>();
	level_1_level_1_update_0_write3_write(level_1_level_1_update_0_write3_res, level_1, d0, d1, dynamic_address);
}

// level_2_update_0_read
//	level_2_rd0
//	level_2_rd1
//	level_2_rd2
//	level_2_rd3
//	level_2_rd4
//	level_2_rd5
//	level_2_rd6
//	level_2_rd7
//	level_2_rd8
//	level_2_rd9
//	level_2_rd10
//	level_2_rd11
//	level_2_rd12
//	level_2_rd13
//	level_2_rd14
//	level_2_rd15
//	level_2_rd16
//	level_2_rd17
inline hw_uint<288> level_1_level_2_update_0_read_bundle_read(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // level_2_rd0
    // level_2_rd1
    // level_2_rd2
    // level_2_rd3
    // level_2_rd4
    // level_2_rd5
    // level_2_rd6
    // level_2_rd7
    // level_2_rd8
    // level_2_rd9
    // level_2_rd10
    // level_2_rd11
    // level_2_rd12
    // level_2_rd13
    // level_2_rd14
    // level_2_rd15
    // level_2_rd16
    // level_2_rd17

	hw_uint<288> result;
	hw_uint<16> level_2_rd0_res = level_2_rd0_select(level_1, d0, d1, dynamic_address);
	set_at<0, 288>(result, level_2_rd0_res);
	hw_uint<16> level_2_rd1_res = level_2_rd1_select(level_1, d0, d1, dynamic_address);
	set_at<16, 288>(result, level_2_rd1_res);
	hw_uint<16> level_2_rd2_res = level_2_rd2_select(level_1, d0, d1, dynamic_address);
	set_at<32, 288>(result, level_2_rd2_res);
	hw_uint<16> level_2_rd3_res = level_2_rd3_select(level_1, d0, d1, dynamic_address);
	set_at<48, 288>(result, level_2_rd3_res);
	hw_uint<16> level_2_rd4_res = level_2_rd4_select(level_1, d0, d1, dynamic_address);
	set_at<64, 288>(result, level_2_rd4_res);
	hw_uint<16> level_2_rd5_res = level_2_rd5_select(level_1, d0, d1, dynamic_address);
	set_at<80, 288>(result, level_2_rd5_res);
	hw_uint<16> level_2_rd6_res = level_2_rd6_select(level_1, d0, d1, dynamic_address);
	set_at<96, 288>(result, level_2_rd6_res);
	hw_uint<16> level_2_rd7_res = level_2_rd7_select(level_1, d0, d1, dynamic_address);
	set_at<112, 288>(result, level_2_rd7_res);
	hw_uint<16> level_2_rd8_res = level_2_rd8_select(level_1, d0, d1, dynamic_address);
	set_at<128, 288>(result, level_2_rd8_res);
	hw_uint<16> level_2_rd9_res = level_2_rd9_select(level_1, d0, d1, dynamic_address);
	set_at<144, 288>(result, level_2_rd9_res);
	hw_uint<16> level_2_rd10_res = level_2_rd10_select(level_1, d0, d1, dynamic_address);
	set_at<160, 288>(result, level_2_rd10_res);
	hw_uint<16> level_2_rd11_res = level_2_rd11_select(level_1, d0, d1, dynamic_address);
	set_at<176, 288>(result, level_2_rd11_res);
	hw_uint<16> level_2_rd12_res = level_2_rd12_select(level_1, d0, d1, dynamic_address);
	set_at<192, 288>(result, level_2_rd12_res);
	hw_uint<16> level_2_rd13_res = level_2_rd13_select(level_1, d0, d1, dynamic_address);
	set_at<208, 288>(result, level_2_rd13_res);
	hw_uint<16> level_2_rd14_res = level_2_rd14_select(level_1, d0, d1, dynamic_address);
	set_at<224, 288>(result, level_2_rd14_res);
	hw_uint<16> level_2_rd15_res = level_2_rd15_select(level_1, d0, d1, dynamic_address);
	set_at<240, 288>(result, level_2_rd15_res);
	hw_uint<16> level_2_rd16_res = level_2_rd16_select(level_1, d0, d1, dynamic_address);
	set_at<256, 288>(result, level_2_rd16_res);
	hw_uint<16> level_2_rd17_res = level_2_rd17_select(level_1, d0, d1, dynamic_address);
	set_at<272, 288>(result, level_2_rd17_res);
	return result;
}

#include "hw_classes.h"

struct level_2_level_2_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 128], [0, 128]}
	// Capacity: 132
	// # of read delays: 6
  // 0, 1, 65, 66, 130, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 63> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_66() {
		return f6;
	}

	inline hw_uint<16> peek_129() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_130() {
		return f8;
	}

	inline hw_uint<16> peek_131() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct level_2_level_2_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 127], [0, 128]}
	// Capacity: 132
	// # of read delays: 4
  // 0, 1, 66, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 64> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 64> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_131() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct level_2_cache {
  // # of banks: 2
  level_2_level_2_update_0_write0_merged_banks_6_cache level_2_level_2_update_0_write0_merged_banks_6;
  level_2_level_2_update_0_write1_merged_banks_3_cache level_2_level_2_update_0_write1_merged_banks_3;
};



inline void level_2_level_2_update_0_write0_write(hw_uint<16>& level_2_level_2_update_0_write0, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  level_2.level_2_level_2_update_0_write0_merged_banks_6.push(level_2_level_2_update_0_write0);
}

inline void level_2_level_2_update_0_write1_write(hw_uint<16>& level_2_level_2_update_0_write1, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  level_2.level_2_level_2_update_0_write1_merged_banks_3.push(level_2_level_2_update_0_write1);
}

inline hw_uint<16> level_3_rd0_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd0 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_131();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd1_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd1 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 1 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_66();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd2_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd2 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 2 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_1();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd3_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd3 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write1 = level_2.level_2_level_2_update_0_write1_merged_banks_3.peek_131();
  return value_level_2_level_2_update_0_write1;
  return 0;
}

inline hw_uint<16> level_3_rd4_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd4 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write1 = level_2.level_2_level_2_update_0_write1_merged_banks_3.peek_66();
  return value_level_2_level_2_update_0_write1;
  return 0;
}

inline hw_uint<16> level_3_rd5_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd5 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write1 = level_2.level_2_level_2_update_0_write1_merged_banks_3.peek_1();
  return value_level_2_level_2_update_0_write1;
  return 0;
}

inline hw_uint<16> level_3_rd6_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd6 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_130();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd7_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd7 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_65();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd8_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd8 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_0();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// level_2_update_0_write
//	level_2_level_2_update_0_write0
//	level_2_level_2_update_0_write1
inline void level_2_level_2_update_0_write_bundle_write(hw_uint<32>& level_2_update_0_write, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_2_level_2_update_0_write0_res = level_2_update_0_write.extract<0, 15>();
	level_2_level_2_update_0_write0_write(level_2_level_2_update_0_write0_res, level_2, d0, d1, dynamic_address);
	hw_uint<16> level_2_level_2_update_0_write1_res = level_2_update_0_write.extract<16, 31>();
	level_2_level_2_update_0_write1_write(level_2_level_2_update_0_write1_res, level_2, d0, d1, dynamic_address);
}

// level_3_update_0_read
//	level_3_rd0
//	level_3_rd1
//	level_3_rd2
//	level_3_rd3
//	level_3_rd4
//	level_3_rd5
//	level_3_rd6
//	level_3_rd7
//	level_3_rd8
inline hw_uint<144> level_2_level_3_update_0_read_bundle_read(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // level_3_rd0
    // level_3_rd1
    // level_3_rd2
    // level_3_rd3
    // level_3_rd4
    // level_3_rd5
    // level_3_rd6
    // level_3_rd7
    // level_3_rd8

	hw_uint<144> result;
	hw_uint<16> level_3_rd0_res = level_3_rd0_select(level_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, level_3_rd0_res);
	hw_uint<16> level_3_rd1_res = level_3_rd1_select(level_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, level_3_rd1_res);
	hw_uint<16> level_3_rd2_res = level_3_rd2_select(level_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, level_3_rd2_res);
	hw_uint<16> level_3_rd3_res = level_3_rd3_select(level_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, level_3_rd3_res);
	hw_uint<16> level_3_rd4_res = level_3_rd4_select(level_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, level_3_rd4_res);
	hw_uint<16> level_3_rd5_res = level_3_rd5_select(level_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, level_3_rd5_res);
	hw_uint<16> level_3_rd6_res = level_3_rd6_select(level_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, level_3_rd6_res);
	hw_uint<16> level_3_rd7_res = level_3_rd7_select(level_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, level_3_rd7_res);
	hw_uint<16> level_3_rd8_res = level_3_rd8_select(level_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, level_3_rd8_res);
	return result;
}

#include "hw_classes.h"

struct level_3_level_3_update_0_write0_to_gp64x64_16_rd0_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct level_3_cache {
  // # of banks: 1
  level_3_level_3_update_0_write0_to_gp64x64_16_rd0_cache level_3_level_3_update_0_write0_to_gp64x64_16_rd0;
};



inline void level_3_level_3_update_0_write0_write(hw_uint<16>& level_3_level_3_update_0_write0, level_3_cache& level_3, int d0, int d1, int dynamic_address) {
  level_3.level_3_level_3_update_0_write0_to_gp64x64_16_rd0.push(level_3_level_3_update_0_write0);
}

inline hw_uint<16> gp64x64_16_rd0_select(level_3_cache& level_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp64x64_16_rd0 read pattern: { gp64x64_16_update_0[d0, d1] -> level_3[d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { gp64x64_16_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  auto value_level_3_level_3_update_0_write0 = level_3.level_3_level_3_update_0_write0_to_gp64x64_16_rd0.peek(/* one reader or all rams */ 0);
  return value_level_3_level_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// gp64x64_16_update_0_read
//	gp64x64_16_rd0
inline hw_uint<16> level_3_gp64x64_16_update_0_read_bundle_read(level_3_cache& level_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // gp64x64_16_rd0

	hw_uint<16> result;
	hw_uint<16> gp64x64_16_rd0_res = gp64x64_16_rd0_select(level_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, gp64x64_16_rd0_res);
	return result;
}

// level_3_update_0_write
//	level_3_level_3_update_0_write0
inline void level_3_level_3_update_0_write_bundle_write(hw_uint<16>& level_3_update_0_write, level_3_cache& level_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_3_level_3_update_0_write0_res = level_3_update_0_write.extract<0, 15>();
	level_3_level_3_update_0_write0_write(level_3_level_3_update_0_write0_res, level_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 65056 bits


// Operation logic
inline void level_1_update_0(level_0_cache& level_0, level_1_cache& level_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_0
	auto level_0_0_c__0_value = level_0_level_1_update_0_read_bundle_read(level_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(level_0_0_c__0_value);
	// Produce: level_1
	level_1_level_1_update_0_write_bundle_write(/* arg names */compute_result, level_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void level_2_update_0(level_1_cache& level_1, level_2_cache& level_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_1
	auto level_1_0_c__0_value = level_1_level_2_update_0_read_bundle_read(level_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(level_1_0_c__0_value);
	// Produce: level_2
	level_2_level_2_update_0_write_bundle_write(/* arg names */compute_result, level_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void level_3_update_0(level_2_cache& level_2, level_3_cache& level_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_2
	auto level_2_0_c__0_value = level_2_level_3_update_0_read_bundle_read(level_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(level_2_0_c__0_value);
	// Produce: level_3
	level_3_level_3_update_0_write_bundle_write(/* arg names */compute_result, level_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp64x64_16_update_0(level_3_cache& level_3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */gp64x64_16, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_3
	auto level_3_0_c__0_value = level_3_gp64x64_16_update_0_read_bundle_read(level_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(level_3_0_c__0_value);
	// Produce: gp64x64_16
	gp64x64_16.write(compute_result);

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

inline void level_0_update_0(in_cache& in, level_0_cache& level_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_level_0_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_8(in_0_c__0_value);
	// Produce: level_0
	level_0_level_0_update_0_write_bundle_write(/* arg names */compute_result, level_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void gp64x64_16_opt(HWStream<hw_uint<256> >& /* get_args num ports = 16 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp64x64_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gp64x64_16_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  level_0_cache level_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  level_1_cache level_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  level_2_cache level_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  level_3_cache level_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63; gp64x64_16_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 63; level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518; level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128; in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038; level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
//   { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
// Condition for level_3_update_0(((-2 - i0 + 16*floord(2 + i0, 16) == 0) && (-5 + i2 == 0) && (-4 + i1 >= 0) && (67 - i1 >= 0) && (-30 + i0 >= 0) && (1038 - i0 >= 0)))
//   { gp64x64_16_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
// Condition for gp64x64_16_update_0(((-2 - i0 + 16*floord(2 + i0, 16) == 0) && (-6 + i2 == 0) && (-4 + i1 >= 0) && (67 - i1 >= 0) && (-30 + i0 >= 0) && (1038 - i0 >= 0)))
//   { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
// Condition for level_0_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-2 + i2 == 0) && (-1 + i1 >= 0) && (67 - i1 >= 0) && (-2 + i0 >= 0) && (1038 - i0 >= 0)))
//   { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
// Condition for level_2_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-4 + i2 == 0) && (-3 + i1 >= 0) && (67 - i1 >= 0) && (-14 + i0 >= 0) && (1038 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 67 and 0 <= d1 <= 1038 }
// Condition for in_update_0(((-1 + i2 == 0) && (i1 >= 0) && (67 - i1 >= 0) && (i0 >= 0) && (1038 - i0 >= 0)))
//   { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
// Condition for level_1_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-3 + i2 == 0) && (-2 + i1 >= 0) && (67 - i1 >= 0) && (-6 + i0 >= 0) && (1038 - i0 >= 0)))

  /*
  // Schedules...
    // gp64x64_16_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*1 + 1*4,1*6]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // level_0_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*2]
    // level_1_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*3]
    // level_2_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*4]
    // level_3_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*1 + 1*4,1*5]
for (int c0 = 0; c0 <= 1038; c0++) {
  for (int c1 = 0; c1 <= 67; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 67) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1038) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 67) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1038) && ((c0 - 2) % 2 == 0)) {
      level_0_update_0((c1 - 1) / 1, (c0 - 2) / 2);
    }

    if ((2 <= c1 && c1 <= 67) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1038) && ((c0 - 6) % 4 == 0)) {
      level_1_update_0((c1 - 2) / 1, (c0 - 6) / 4);
    }

    if ((3 <= c1 && c1 <= 67) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 1038) && ((c0 - 14) % 8 == 0)) {
      level_2_update_0((c1 - 3) / 1, (c0 - 14) / 8);
    }

    if ((4 <= c1 && c1 <= 67) && ((c1 - 4) % 1 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
      level_3_update_0((c1 - 4) / 1, (c0 - 30) / 16);
    }

    if ((4 <= c1 && c1 <= 67) && ((c1 - 4) % 1 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
      gp64x64_16_update_0((c1 - 4) / 1, (c0 - 30) / 16);
    }

  }
}

  */
	  // Schedules...
	    // gp64x64_16_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*1 + 1*4,1*6]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // level_0_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*2]
	    // level_1_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*3]
	    // level_2_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*4]
	    // level_3_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*1 + 1*4,1*5]
	for (int c0 = 0; c0 <= 1038; c0++) {
	  for (int c1 = 0; c1 <= 67; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 67) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1038) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 67) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1038) && ((c0 - 2) % 2 == 0)) {
	      level_0_update_0(in /* buf name */, level_0, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 67) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1038) && ((c0 - 6) % 4 == 0)) {
	      level_1_update_0(level_0 /* buf name */, level_1, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 67) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 1038) && ((c0 - 14) % 8 == 0)) {
	      level_2_update_0(level_1 /* buf name */, level_2, (c1 - 3) / 1, (c0 - 14) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 67) && ((c1 - 4) % 1 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
	      level_3_update_0(level_2 /* buf name */, level_3, (c1 - 4) / 1, (c0 - 30) / 16);
	    }
	
	    if ((4 <= c1 && c1 <= 67) && ((c1 - 4) % 1 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
	      gp64x64_16_update_0(level_3 /* buf name */, gp64x64_16, (c1 - 4) / 1, (c0 - 30) / 16);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void gp64x64_16_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 16 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp64x64_16, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp64x64_16_opt(in_off_chip, gp64x64_16);
  }
}
#ifdef __VIVADO_SYNTH__
  // { gp64x64_16_update_0[root = 0, gp64x64_16_0, gp64x64_16_1] -> gp64x64_16[0, 0] : 0 <= gp64x64_16_0 <= 63 and 0 <= gp64x64_16_1 <= 63 }
const int gp64x64_16_update_0_write_pipe0_num_transfers = 4096;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 67 and 0 <= in_1 <= 1038 }
const int in_update_0_read_pipe0_num_transfers = 70652;


extern "C" {

void gp64x64_16_opt_accel(hw_uint<256>* in_update_0_read_pipe0, hw_uint<16>* gp64x64_16_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp64x64_16_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp64x64_16_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > gp64x64_16_update_0_write_pipe0_channel;

  burst_read<256>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp64x64_16_opt_wrapper(in_update_0_read_pipe0_channel, gp64x64_16_update_0_write_pipe0_channel, size);

  burst_write<16>(gp64x64_16_update_0_write_pipe0, gp64x64_16_update_0_write_pipe0_channel, gp64x64_16_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp64x64_16_opt_rdai(HWStream<hw_uint<256> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  gp64x64_16_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp64x64_16_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp64x64_16_opt(in_update_0_read_pipe0, gp64x64_16_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

