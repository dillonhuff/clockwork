#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mpr16b_32_16_opt_compute_units.h
#include "mpr16b_32_16_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 112], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 113], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write10_merged_banks_2_cache {
	// RAM Box: {[10, 122], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write11_merged_banks_2_cache {
	// RAM Box: {[11, 123], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write12_merged_banks_2_cache {
	// RAM Box: {[12, 124], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write13_merged_banks_2_cache {
	// RAM Box: {[13, 125], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write14_merged_banks_2_cache {
	// RAM Box: {[14, 126], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write15_merged_banks_2_cache {
	// RAM Box: {[15, 127], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 114], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 115], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write4_merged_banks_2_cache {
	// RAM Box: {[4, 116], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write5_merged_banks_2_cache {
	// RAM Box: {[5, 117], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write6_merged_banks_2_cache {
	// RAM Box: {[6, 118], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write7_merged_banks_2_cache {
	// RAM Box: {[7, 119], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write8_merged_banks_2_cache {
	// RAM Box: {[8, 120], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write9_merged_banks_2_cache {
	// RAM Box: {[9, 121], [0, 127], [0, 63]}
	// Capacity: 9
	// # of read delays: 2
  // 0, 8
	hw_uint<16> f0;
	fifo<hw_uint<16>, 7> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_8() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  // # of banks: 16
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
  in_in_update_0_write10_merged_banks_2_cache in_in_update_0_write10_merged_banks_2;
  in_in_update_0_write11_merged_banks_2_cache in_in_update_0_write11_merged_banks_2;
  in_in_update_0_write12_merged_banks_2_cache in_in_update_0_write12_merged_banks_2;
  in_in_update_0_write13_merged_banks_2_cache in_in_update_0_write13_merged_banks_2;
  in_in_update_0_write14_merged_banks_2_cache in_in_update_0_write14_merged_banks_2;
  in_in_update_0_write15_merged_banks_2_cache in_in_update_0_write15_merged_banks_2;
  in_in_update_0_write2_merged_banks_2_cache in_in_update_0_write2_merged_banks_2;
  in_in_update_0_write3_merged_banks_2_cache in_in_update_0_write3_merged_banks_2;
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

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_2.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_2.push(in_in_update_0_write3);
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

inline hw_uint<16> mpr16b_32_16_rd0_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd0 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_8();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd1_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd1 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd10_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd10 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[5 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_8();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd11_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd11 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[5 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_0();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd12_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd12 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[6 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_8();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd13_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd13 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[6 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_0();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd14_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd14 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[7 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_8();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd15_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd15 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[7 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_0();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd16_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd16 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[8 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_2.peek_8();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd17_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd17 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[8 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_2.peek_0();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd18_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd18 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[9 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_2.peek_8();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd19_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd19 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[9 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_2.peek_0();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd2_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd2 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[1 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_8();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd20_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd20 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[10 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_2.peek_8();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd21_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd21 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[10 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_2.peek_0();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd22_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd22 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[11 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_2.peek_8();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd23_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd23 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[11 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_2.peek_0();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd24_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd24 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[12 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_2.peek_8();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd25_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd25 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[12 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_2.peek_0();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd26_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd26 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[13 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_2.peek_8();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd27_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd27 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[13 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_2.peek_0();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd28_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd28 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[14 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_2.peek_8();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd29_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd29 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[14 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_2.peek_0();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd3_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd3 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[1 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd30_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd30 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[15 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_2.peek_8();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd31_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd31 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[15 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_2.peek_0();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd4_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd4 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[2 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_8();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd5_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd5 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[2 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd6_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd6 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[3 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_8();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd7_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd7 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[3 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd8_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd8 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[4 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_2.peek_8();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> mpr16b_32_16_rd9_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_16_rd9 read pattern: { mpr16b_32_16_update_0[d0, d1, d2] -> in[4 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
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
inline void in_in_update_0_write_bundle_write(hw_uint<256>& in_update_0_write, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
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
}

// mpr16b_32_16_update_0_read
//	mpr16b_32_16_rd0
//	mpr16b_32_16_rd1
//	mpr16b_32_16_rd2
//	mpr16b_32_16_rd3
//	mpr16b_32_16_rd4
//	mpr16b_32_16_rd5
//	mpr16b_32_16_rd6
//	mpr16b_32_16_rd7
//	mpr16b_32_16_rd8
//	mpr16b_32_16_rd9
//	mpr16b_32_16_rd10
//	mpr16b_32_16_rd11
//	mpr16b_32_16_rd12
//	mpr16b_32_16_rd13
//	mpr16b_32_16_rd14
//	mpr16b_32_16_rd15
//	mpr16b_32_16_rd16
//	mpr16b_32_16_rd17
//	mpr16b_32_16_rd18
//	mpr16b_32_16_rd19
//	mpr16b_32_16_rd20
//	mpr16b_32_16_rd21
//	mpr16b_32_16_rd22
//	mpr16b_32_16_rd23
//	mpr16b_32_16_rd24
//	mpr16b_32_16_rd25
//	mpr16b_32_16_rd26
//	mpr16b_32_16_rd27
//	mpr16b_32_16_rd28
//	mpr16b_32_16_rd29
//	mpr16b_32_16_rd30
//	mpr16b_32_16_rd31
inline hw_uint<512> in_mpr16b_32_16_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 32
    // mpr16b_32_16_rd0
    // mpr16b_32_16_rd1
    // mpr16b_32_16_rd2
    // mpr16b_32_16_rd3
    // mpr16b_32_16_rd4
    // mpr16b_32_16_rd5
    // mpr16b_32_16_rd6
    // mpr16b_32_16_rd7
    // mpr16b_32_16_rd8
    // mpr16b_32_16_rd9
    // mpr16b_32_16_rd10
    // mpr16b_32_16_rd11
    // mpr16b_32_16_rd12
    // mpr16b_32_16_rd13
    // mpr16b_32_16_rd14
    // mpr16b_32_16_rd15
    // mpr16b_32_16_rd16
    // mpr16b_32_16_rd17
    // mpr16b_32_16_rd18
    // mpr16b_32_16_rd19
    // mpr16b_32_16_rd20
    // mpr16b_32_16_rd21
    // mpr16b_32_16_rd22
    // mpr16b_32_16_rd23
    // mpr16b_32_16_rd24
    // mpr16b_32_16_rd25
    // mpr16b_32_16_rd26
    // mpr16b_32_16_rd27
    // mpr16b_32_16_rd28
    // mpr16b_32_16_rd29
    // mpr16b_32_16_rd30
    // mpr16b_32_16_rd31

	hw_uint<512> result;
	hw_uint<16> mpr16b_32_16_rd0_res = mpr16b_32_16_rd0_select(in, d0, d1, d2, dynamic_address);
	set_at<0, 512>(result, mpr16b_32_16_rd0_res);
	hw_uint<16> mpr16b_32_16_rd1_res = mpr16b_32_16_rd1_select(in, d0, d1, d2, dynamic_address);
	set_at<16, 512>(result, mpr16b_32_16_rd1_res);
	hw_uint<16> mpr16b_32_16_rd2_res = mpr16b_32_16_rd2_select(in, d0, d1, d2, dynamic_address);
	set_at<32, 512>(result, mpr16b_32_16_rd2_res);
	hw_uint<16> mpr16b_32_16_rd3_res = mpr16b_32_16_rd3_select(in, d0, d1, d2, dynamic_address);
	set_at<48, 512>(result, mpr16b_32_16_rd3_res);
	hw_uint<16> mpr16b_32_16_rd4_res = mpr16b_32_16_rd4_select(in, d0, d1, d2, dynamic_address);
	set_at<64, 512>(result, mpr16b_32_16_rd4_res);
	hw_uint<16> mpr16b_32_16_rd5_res = mpr16b_32_16_rd5_select(in, d0, d1, d2, dynamic_address);
	set_at<80, 512>(result, mpr16b_32_16_rd5_res);
	hw_uint<16> mpr16b_32_16_rd6_res = mpr16b_32_16_rd6_select(in, d0, d1, d2, dynamic_address);
	set_at<96, 512>(result, mpr16b_32_16_rd6_res);
	hw_uint<16> mpr16b_32_16_rd7_res = mpr16b_32_16_rd7_select(in, d0, d1, d2, dynamic_address);
	set_at<112, 512>(result, mpr16b_32_16_rd7_res);
	hw_uint<16> mpr16b_32_16_rd8_res = mpr16b_32_16_rd8_select(in, d0, d1, d2, dynamic_address);
	set_at<128, 512>(result, mpr16b_32_16_rd8_res);
	hw_uint<16> mpr16b_32_16_rd9_res = mpr16b_32_16_rd9_select(in, d0, d1, d2, dynamic_address);
	set_at<144, 512>(result, mpr16b_32_16_rd9_res);
	hw_uint<16> mpr16b_32_16_rd10_res = mpr16b_32_16_rd10_select(in, d0, d1, d2, dynamic_address);
	set_at<160, 512>(result, mpr16b_32_16_rd10_res);
	hw_uint<16> mpr16b_32_16_rd11_res = mpr16b_32_16_rd11_select(in, d0, d1, d2, dynamic_address);
	set_at<176, 512>(result, mpr16b_32_16_rd11_res);
	hw_uint<16> mpr16b_32_16_rd12_res = mpr16b_32_16_rd12_select(in, d0, d1, d2, dynamic_address);
	set_at<192, 512>(result, mpr16b_32_16_rd12_res);
	hw_uint<16> mpr16b_32_16_rd13_res = mpr16b_32_16_rd13_select(in, d0, d1, d2, dynamic_address);
	set_at<208, 512>(result, mpr16b_32_16_rd13_res);
	hw_uint<16> mpr16b_32_16_rd14_res = mpr16b_32_16_rd14_select(in, d0, d1, d2, dynamic_address);
	set_at<224, 512>(result, mpr16b_32_16_rd14_res);
	hw_uint<16> mpr16b_32_16_rd15_res = mpr16b_32_16_rd15_select(in, d0, d1, d2, dynamic_address);
	set_at<240, 512>(result, mpr16b_32_16_rd15_res);
	hw_uint<16> mpr16b_32_16_rd16_res = mpr16b_32_16_rd16_select(in, d0, d1, d2, dynamic_address);
	set_at<256, 512>(result, mpr16b_32_16_rd16_res);
	hw_uint<16> mpr16b_32_16_rd17_res = mpr16b_32_16_rd17_select(in, d0, d1, d2, dynamic_address);
	set_at<272, 512>(result, mpr16b_32_16_rd17_res);
	hw_uint<16> mpr16b_32_16_rd18_res = mpr16b_32_16_rd18_select(in, d0, d1, d2, dynamic_address);
	set_at<288, 512>(result, mpr16b_32_16_rd18_res);
	hw_uint<16> mpr16b_32_16_rd19_res = mpr16b_32_16_rd19_select(in, d0, d1, d2, dynamic_address);
	set_at<304, 512>(result, mpr16b_32_16_rd19_res);
	hw_uint<16> mpr16b_32_16_rd20_res = mpr16b_32_16_rd20_select(in, d0, d1, d2, dynamic_address);
	set_at<320, 512>(result, mpr16b_32_16_rd20_res);
	hw_uint<16> mpr16b_32_16_rd21_res = mpr16b_32_16_rd21_select(in, d0, d1, d2, dynamic_address);
	set_at<336, 512>(result, mpr16b_32_16_rd21_res);
	hw_uint<16> mpr16b_32_16_rd22_res = mpr16b_32_16_rd22_select(in, d0, d1, d2, dynamic_address);
	set_at<352, 512>(result, mpr16b_32_16_rd22_res);
	hw_uint<16> mpr16b_32_16_rd23_res = mpr16b_32_16_rd23_select(in, d0, d1, d2, dynamic_address);
	set_at<368, 512>(result, mpr16b_32_16_rd23_res);
	hw_uint<16> mpr16b_32_16_rd24_res = mpr16b_32_16_rd24_select(in, d0, d1, d2, dynamic_address);
	set_at<384, 512>(result, mpr16b_32_16_rd24_res);
	hw_uint<16> mpr16b_32_16_rd25_res = mpr16b_32_16_rd25_select(in, d0, d1, d2, dynamic_address);
	set_at<400, 512>(result, mpr16b_32_16_rd25_res);
	hw_uint<16> mpr16b_32_16_rd26_res = mpr16b_32_16_rd26_select(in, d0, d1, d2, dynamic_address);
	set_at<416, 512>(result, mpr16b_32_16_rd26_res);
	hw_uint<16> mpr16b_32_16_rd27_res = mpr16b_32_16_rd27_select(in, d0, d1, d2, dynamic_address);
	set_at<432, 512>(result, mpr16b_32_16_rd27_res);
	hw_uint<16> mpr16b_32_16_rd28_res = mpr16b_32_16_rd28_select(in, d0, d1, d2, dynamic_address);
	set_at<448, 512>(result, mpr16b_32_16_rd28_res);
	hw_uint<16> mpr16b_32_16_rd29_res = mpr16b_32_16_rd29_select(in, d0, d1, d2, dynamic_address);
	set_at<464, 512>(result, mpr16b_32_16_rd29_res);
	hw_uint<16> mpr16b_32_16_rd30_res = mpr16b_32_16_rd30_select(in, d0, d1, d2, dynamic_address);
	set_at<480, 512>(result, mpr16b_32_16_rd30_res);
	hw_uint<16> mpr16b_32_16_rd31_res = mpr16b_32_16_rd31_select(in, d0, d1, d2, dynamic_address);
	set_at<496, 512>(result, mpr16b_32_16_rd31_res);
	return result;
}

// Total re-use buffer capacity: 2048 bits


// Operation logic
inline void mpr16b_32_16_update_0(in_cache& in, HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */mpr16b_32_16, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_mpr16b_32_16_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_8(in_0_c__0_value);
	// Produce: mpr16b_32_16
	mpr16b_32_16.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */in_oc, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc_0_c__0_value = in_oc.read();
	auto compute_result = id_unrolled_16(in_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mpr16b_32_16_opt(HWStream<hw_uint<256> >& /* get_args num ports = 16 */in_oc, HWStream<hw_uint<128> >& /* get_args num ports = 8 */mpr16b_32_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mpr16b_32_16_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63; mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
// Condition for in_update_0(((-1 + i3 == 0) && (i2 >= 0) && (7 - i2 >= 0) && (i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))
//   { mpr16b_32_16_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for mpr16b_32_16_update_0(((-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-2 + i3 == 0) && (i2 >= 0) && (7 - i2 >= 0) && (-1 + i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))

  /*
  // Schedules...
    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // mpr16b_32_16_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
for (int c0 = 0; c0 <= 63; c0++) {
  for (int c1 = 0; c1 <= 127; c1++) {
    for (int c2 = 0; c2 <= 7; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        in_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        mpr16b_32_16_update_0((c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mpr16b_32_16_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
	for (int c0 = 0; c0 <= 63; c0++) {
	  for (int c1 = 0; c1 <= 127; c1++) {
	    for (int c2 = 0; c2 <= 7; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        in_update_0(in_oc /* buf name */, in, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        mpr16b_32_16_update_0(in /* buf name */, mpr16b_32_16, (c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mpr16b_32_16_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 16 */in_oc, HWStream<hw_uint<128> >& /* get_args num ports = 8 */mpr16b_32_16, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mpr16b_32_16_opt(in_oc, mpr16b_32_16);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0[root = 0, in_0, in_1, in_2] -> in_oc[0, 0] : 0 <= in_0 <= 7 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
const int in_update_0_read_pipe0_num_transfers = 65536;
  // { mpr16b_32_16_update_0[root = 0, mpr16b_32_16_0, mpr16b_32_16_1, mpr16b_32_16_2] -> mpr16b_32_16[0, 0] : 0 <= mpr16b_32_16_0 <= 7 and 0 <= mpr16b_32_16_1 <= 63 and 0 <= mpr16b_32_16_2 <= 63 }
const int mpr16b_32_16_update_0_write_pipe0_num_transfers = 32768;


extern "C" {

void mpr16b_32_16_opt_accel(hw_uint<256>* in_update_0_read_pipe0, hw_uint<128>* mpr16b_32_16_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mpr16b_32_16_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = mpr16b_32_16_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<128> > mpr16b_32_16_update_0_write_pipe0_channel;

  burst_read<256>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  mpr16b_32_16_opt_wrapper(in_update_0_read_pipe0_channel, mpr16b_32_16_update_0_write_pipe0_channel, size);

  burst_write<128>(mpr16b_32_16_update_0_write_pipe0, mpr16b_32_16_update_0_write_pipe0_channel, mpr16b_32_16_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mpr16b_32_16_opt_rdai(HWStream<hw_uint<256> >& in_update_0_read_pipe0, HWStream<hw_uint<128> >&  mpr16b_32_16_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = mpr16b_32_16_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mpr16b_32_16_opt(in_update_0_read_pipe0, mpr16b_32_16_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

