#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: gp_sm_opt_compute_units.h
#include "gp_sm_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_9_cache {
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

struct in_in_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[1, 529], [0, 518]}
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

struct in_in_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[2, 530], [0, 518]}
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

struct in_in_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[3, 531], [0, 518]}
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

struct in_in_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[4, 532], [0, 518]}
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

struct in_in_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[5, 533], [0, 518]}
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

struct in_in_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[6, 534], [0, 518]}
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

struct in_in_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[7, 535], [0, 518]}
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

struct in_cache {
  // # of banks: 8
  in_in_update_0_write0_merged_banks_9_cache in_in_update_0_write0_merged_banks_9;
  in_in_update_0_write1_merged_banks_9_cache in_in_update_0_write1_merged_banks_9;
  in_in_update_0_write2_merged_banks_9_cache in_in_update_0_write2_merged_banks_9;
  in_in_update_0_write3_merged_banks_9_cache in_in_update_0_write3_merged_banks_9;
  in_in_update_0_write4_merged_banks_9_cache in_in_update_0_write4_merged_banks_9;
  in_in_update_0_write5_merged_banks_9_cache in_in_update_0_write5_merged_banks_9;
  in_in_update_0_write6_merged_banks_9_cache in_in_update_0_write6_merged_banks_9;
  in_in_update_0_write7_merged_banks_9_cache in_in_update_0_write7_merged_banks_9;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_9.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_9.push(in_in_update_0_write1);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_9.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_9.push(in_in_update_0_write3);
}

inline void in_in_update_0_write4_write(hw_uint<16>& in_in_update_0_write4, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write4_merged_banks_9.push(in_in_update_0_write4);
}

inline void in_in_update_0_write5_write(hw_uint<16>& in_in_update_0_write5, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write5_merged_banks_9.push(in_in_update_0_write5);
}

inline void in_in_update_0_write6_write(hw_uint<16>& in_in_update_0_write6, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write6_merged_banks_9.push(in_in_update_0_write6);
}

inline void in_in_update_0_write7_write(hw_uint<16>& in_in_update_0_write7, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write7_merged_banks_9.push(in_in_update_0_write7);
}

inline hw_uint<16> in_gauss_blur_1_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd0 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_135();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd1 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_68();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd10 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_68();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd11 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd12 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_135();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd13 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_68();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd14 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd15 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_135();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd16 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_68();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd17 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd18 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_135();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd19 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_68();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd2 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd20 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd21 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_135();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd22 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_68();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd23 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd24 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_135();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd25 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_68();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd26 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd27 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_135();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd28 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_68();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd29 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd3 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_135();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd30 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_135();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd31 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_68();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd32 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd33 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_135();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd34 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_68();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd35 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd36_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd36 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_135();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd37_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd37 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_68();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd38_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd38 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd39_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd39 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_135();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd4 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_68();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd40_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd40 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_68();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd41_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd41 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd42_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd42 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_135();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd43_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd43 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_68();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd44_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd44 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd45_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd45 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_135();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd46_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd46 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_68();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd47_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd47 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd48_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd48 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_135();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd49_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd49 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_68();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd5 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd50_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd50 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd51_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd51 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_135();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd52_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd52 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_68();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd53_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd53 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd54_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd54 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_135();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd55_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd55 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_68();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd56_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd56 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd57_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd57 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_135();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd58_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd58 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_68();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd59_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd59 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd6 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_135();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd60_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd60 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_134();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd61_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd61 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_67();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd62_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd62 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd63_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd63 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_135();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd64_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd64 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_68();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd65_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd65 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd66_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd66 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_134();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd67_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd67 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_67();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd68_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd68 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd69_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd69 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_134();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd7 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_68();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd70_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd70 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 8d0, 1 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_67();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd71_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd71 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd8 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 2 + d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd9 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, d1] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_135();
  return value_in_in_update_0_write1;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_read
//	in_gauss_blur_1_rd0
//	in_gauss_blur_1_rd1
//	in_gauss_blur_1_rd2
//	in_gauss_blur_1_rd3
//	in_gauss_blur_1_rd4
//	in_gauss_blur_1_rd5
//	in_gauss_blur_1_rd6
//	in_gauss_blur_1_rd7
//	in_gauss_blur_1_rd8
//	in_gauss_blur_1_rd9
//	in_gauss_blur_1_rd10
//	in_gauss_blur_1_rd11
//	in_gauss_blur_1_rd12
//	in_gauss_blur_1_rd13
//	in_gauss_blur_1_rd14
//	in_gauss_blur_1_rd15
//	in_gauss_blur_1_rd16
//	in_gauss_blur_1_rd17
//	in_gauss_blur_1_rd18
//	in_gauss_blur_1_rd19
//	in_gauss_blur_1_rd20
//	in_gauss_blur_1_rd21
//	in_gauss_blur_1_rd22
//	in_gauss_blur_1_rd23
//	in_gauss_blur_1_rd24
//	in_gauss_blur_1_rd25
//	in_gauss_blur_1_rd26
//	in_gauss_blur_1_rd27
//	in_gauss_blur_1_rd28
//	in_gauss_blur_1_rd29
//	in_gauss_blur_1_rd30
//	in_gauss_blur_1_rd31
//	in_gauss_blur_1_rd32
//	in_gauss_blur_1_rd33
//	in_gauss_blur_1_rd34
//	in_gauss_blur_1_rd35
//	in_gauss_blur_1_rd36
//	in_gauss_blur_1_rd37
//	in_gauss_blur_1_rd38
//	in_gauss_blur_1_rd39
//	in_gauss_blur_1_rd40
//	in_gauss_blur_1_rd41
//	in_gauss_blur_1_rd42
//	in_gauss_blur_1_rd43
//	in_gauss_blur_1_rd44
//	in_gauss_blur_1_rd45
//	in_gauss_blur_1_rd46
//	in_gauss_blur_1_rd47
//	in_gauss_blur_1_rd48
//	in_gauss_blur_1_rd49
//	in_gauss_blur_1_rd50
//	in_gauss_blur_1_rd51
//	in_gauss_blur_1_rd52
//	in_gauss_blur_1_rd53
//	in_gauss_blur_1_rd54
//	in_gauss_blur_1_rd55
//	in_gauss_blur_1_rd56
//	in_gauss_blur_1_rd57
//	in_gauss_blur_1_rd58
//	in_gauss_blur_1_rd59
//	in_gauss_blur_1_rd60
//	in_gauss_blur_1_rd61
//	in_gauss_blur_1_rd62
//	in_gauss_blur_1_rd63
//	in_gauss_blur_1_rd64
//	in_gauss_blur_1_rd65
//	in_gauss_blur_1_rd66
//	in_gauss_blur_1_rd67
//	in_gauss_blur_1_rd68
//	in_gauss_blur_1_rd69
//	in_gauss_blur_1_rd70
//	in_gauss_blur_1_rd71
inline hw_uint<1152> in_in_gauss_blur_1_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 72
    // in_gauss_blur_1_rd0
    // in_gauss_blur_1_rd1
    // in_gauss_blur_1_rd2
    // in_gauss_blur_1_rd3
    // in_gauss_blur_1_rd4
    // in_gauss_blur_1_rd5
    // in_gauss_blur_1_rd6
    // in_gauss_blur_1_rd7
    // in_gauss_blur_1_rd8
    // in_gauss_blur_1_rd9
    // in_gauss_blur_1_rd10
    // in_gauss_blur_1_rd11
    // in_gauss_blur_1_rd12
    // in_gauss_blur_1_rd13
    // in_gauss_blur_1_rd14
    // in_gauss_blur_1_rd15
    // in_gauss_blur_1_rd16
    // in_gauss_blur_1_rd17
    // in_gauss_blur_1_rd18
    // in_gauss_blur_1_rd19
    // in_gauss_blur_1_rd20
    // in_gauss_blur_1_rd21
    // in_gauss_blur_1_rd22
    // in_gauss_blur_1_rd23
    // in_gauss_blur_1_rd24
    // in_gauss_blur_1_rd25
    // in_gauss_blur_1_rd26
    // in_gauss_blur_1_rd27
    // in_gauss_blur_1_rd28
    // in_gauss_blur_1_rd29
    // in_gauss_blur_1_rd30
    // in_gauss_blur_1_rd31
    // in_gauss_blur_1_rd32
    // in_gauss_blur_1_rd33
    // in_gauss_blur_1_rd34
    // in_gauss_blur_1_rd35
    // in_gauss_blur_1_rd36
    // in_gauss_blur_1_rd37
    // in_gauss_blur_1_rd38
    // in_gauss_blur_1_rd39
    // in_gauss_blur_1_rd40
    // in_gauss_blur_1_rd41
    // in_gauss_blur_1_rd42
    // in_gauss_blur_1_rd43
    // in_gauss_blur_1_rd44
    // in_gauss_blur_1_rd45
    // in_gauss_blur_1_rd46
    // in_gauss_blur_1_rd47
    // in_gauss_blur_1_rd48
    // in_gauss_blur_1_rd49
    // in_gauss_blur_1_rd50
    // in_gauss_blur_1_rd51
    // in_gauss_blur_1_rd52
    // in_gauss_blur_1_rd53
    // in_gauss_blur_1_rd54
    // in_gauss_blur_1_rd55
    // in_gauss_blur_1_rd56
    // in_gauss_blur_1_rd57
    // in_gauss_blur_1_rd58
    // in_gauss_blur_1_rd59
    // in_gauss_blur_1_rd60
    // in_gauss_blur_1_rd61
    // in_gauss_blur_1_rd62
    // in_gauss_blur_1_rd63
    // in_gauss_blur_1_rd64
    // in_gauss_blur_1_rd65
    // in_gauss_blur_1_rd66
    // in_gauss_blur_1_rd67
    // in_gauss_blur_1_rd68
    // in_gauss_blur_1_rd69
    // in_gauss_blur_1_rd70
    // in_gauss_blur_1_rd71

	hw_uint<1152> result;
	hw_uint<16> in_gauss_blur_1_rd0_res = in_gauss_blur_1_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 1152>(result, in_gauss_blur_1_rd0_res);
	hw_uint<16> in_gauss_blur_1_rd1_res = in_gauss_blur_1_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 1152>(result, in_gauss_blur_1_rd1_res);
	hw_uint<16> in_gauss_blur_1_rd2_res = in_gauss_blur_1_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 1152>(result, in_gauss_blur_1_rd2_res);
	hw_uint<16> in_gauss_blur_1_rd3_res = in_gauss_blur_1_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 1152>(result, in_gauss_blur_1_rd3_res);
	hw_uint<16> in_gauss_blur_1_rd4_res = in_gauss_blur_1_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 1152>(result, in_gauss_blur_1_rd4_res);
	hw_uint<16> in_gauss_blur_1_rd5_res = in_gauss_blur_1_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 1152>(result, in_gauss_blur_1_rd5_res);
	hw_uint<16> in_gauss_blur_1_rd6_res = in_gauss_blur_1_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 1152>(result, in_gauss_blur_1_rd6_res);
	hw_uint<16> in_gauss_blur_1_rd7_res = in_gauss_blur_1_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 1152>(result, in_gauss_blur_1_rd7_res);
	hw_uint<16> in_gauss_blur_1_rd8_res = in_gauss_blur_1_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 1152>(result, in_gauss_blur_1_rd8_res);
	hw_uint<16> in_gauss_blur_1_rd9_res = in_gauss_blur_1_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 1152>(result, in_gauss_blur_1_rd9_res);
	hw_uint<16> in_gauss_blur_1_rd10_res = in_gauss_blur_1_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 1152>(result, in_gauss_blur_1_rd10_res);
	hw_uint<16> in_gauss_blur_1_rd11_res = in_gauss_blur_1_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 1152>(result, in_gauss_blur_1_rd11_res);
	hw_uint<16> in_gauss_blur_1_rd12_res = in_gauss_blur_1_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 1152>(result, in_gauss_blur_1_rd12_res);
	hw_uint<16> in_gauss_blur_1_rd13_res = in_gauss_blur_1_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 1152>(result, in_gauss_blur_1_rd13_res);
	hw_uint<16> in_gauss_blur_1_rd14_res = in_gauss_blur_1_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 1152>(result, in_gauss_blur_1_rd14_res);
	hw_uint<16> in_gauss_blur_1_rd15_res = in_gauss_blur_1_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 1152>(result, in_gauss_blur_1_rd15_res);
	hw_uint<16> in_gauss_blur_1_rd16_res = in_gauss_blur_1_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 1152>(result, in_gauss_blur_1_rd16_res);
	hw_uint<16> in_gauss_blur_1_rd17_res = in_gauss_blur_1_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 1152>(result, in_gauss_blur_1_rd17_res);
	hw_uint<16> in_gauss_blur_1_rd18_res = in_gauss_blur_1_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 1152>(result, in_gauss_blur_1_rd18_res);
	hw_uint<16> in_gauss_blur_1_rd19_res = in_gauss_blur_1_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 1152>(result, in_gauss_blur_1_rd19_res);
	hw_uint<16> in_gauss_blur_1_rd20_res = in_gauss_blur_1_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 1152>(result, in_gauss_blur_1_rd20_res);
	hw_uint<16> in_gauss_blur_1_rd21_res = in_gauss_blur_1_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 1152>(result, in_gauss_blur_1_rd21_res);
	hw_uint<16> in_gauss_blur_1_rd22_res = in_gauss_blur_1_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 1152>(result, in_gauss_blur_1_rd22_res);
	hw_uint<16> in_gauss_blur_1_rd23_res = in_gauss_blur_1_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 1152>(result, in_gauss_blur_1_rd23_res);
	hw_uint<16> in_gauss_blur_1_rd24_res = in_gauss_blur_1_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 1152>(result, in_gauss_blur_1_rd24_res);
	hw_uint<16> in_gauss_blur_1_rd25_res = in_gauss_blur_1_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 1152>(result, in_gauss_blur_1_rd25_res);
	hw_uint<16> in_gauss_blur_1_rd26_res = in_gauss_blur_1_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 1152>(result, in_gauss_blur_1_rd26_res);
	hw_uint<16> in_gauss_blur_1_rd27_res = in_gauss_blur_1_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 1152>(result, in_gauss_blur_1_rd27_res);
	hw_uint<16> in_gauss_blur_1_rd28_res = in_gauss_blur_1_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 1152>(result, in_gauss_blur_1_rd28_res);
	hw_uint<16> in_gauss_blur_1_rd29_res = in_gauss_blur_1_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 1152>(result, in_gauss_blur_1_rd29_res);
	hw_uint<16> in_gauss_blur_1_rd30_res = in_gauss_blur_1_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 1152>(result, in_gauss_blur_1_rd30_res);
	hw_uint<16> in_gauss_blur_1_rd31_res = in_gauss_blur_1_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 1152>(result, in_gauss_blur_1_rd31_res);
	hw_uint<16> in_gauss_blur_1_rd32_res = in_gauss_blur_1_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 1152>(result, in_gauss_blur_1_rd32_res);
	hw_uint<16> in_gauss_blur_1_rd33_res = in_gauss_blur_1_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 1152>(result, in_gauss_blur_1_rd33_res);
	hw_uint<16> in_gauss_blur_1_rd34_res = in_gauss_blur_1_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 1152>(result, in_gauss_blur_1_rd34_res);
	hw_uint<16> in_gauss_blur_1_rd35_res = in_gauss_blur_1_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 1152>(result, in_gauss_blur_1_rd35_res);
	hw_uint<16> in_gauss_blur_1_rd36_res = in_gauss_blur_1_rd36_select(in, d0, d1, dynamic_address);
	set_at<576, 1152>(result, in_gauss_blur_1_rd36_res);
	hw_uint<16> in_gauss_blur_1_rd37_res = in_gauss_blur_1_rd37_select(in, d0, d1, dynamic_address);
	set_at<592, 1152>(result, in_gauss_blur_1_rd37_res);
	hw_uint<16> in_gauss_blur_1_rd38_res = in_gauss_blur_1_rd38_select(in, d0, d1, dynamic_address);
	set_at<608, 1152>(result, in_gauss_blur_1_rd38_res);
	hw_uint<16> in_gauss_blur_1_rd39_res = in_gauss_blur_1_rd39_select(in, d0, d1, dynamic_address);
	set_at<624, 1152>(result, in_gauss_blur_1_rd39_res);
	hw_uint<16> in_gauss_blur_1_rd40_res = in_gauss_blur_1_rd40_select(in, d0, d1, dynamic_address);
	set_at<640, 1152>(result, in_gauss_blur_1_rd40_res);
	hw_uint<16> in_gauss_blur_1_rd41_res = in_gauss_blur_1_rd41_select(in, d0, d1, dynamic_address);
	set_at<656, 1152>(result, in_gauss_blur_1_rd41_res);
	hw_uint<16> in_gauss_blur_1_rd42_res = in_gauss_blur_1_rd42_select(in, d0, d1, dynamic_address);
	set_at<672, 1152>(result, in_gauss_blur_1_rd42_res);
	hw_uint<16> in_gauss_blur_1_rd43_res = in_gauss_blur_1_rd43_select(in, d0, d1, dynamic_address);
	set_at<688, 1152>(result, in_gauss_blur_1_rd43_res);
	hw_uint<16> in_gauss_blur_1_rd44_res = in_gauss_blur_1_rd44_select(in, d0, d1, dynamic_address);
	set_at<704, 1152>(result, in_gauss_blur_1_rd44_res);
	hw_uint<16> in_gauss_blur_1_rd45_res = in_gauss_blur_1_rd45_select(in, d0, d1, dynamic_address);
	set_at<720, 1152>(result, in_gauss_blur_1_rd45_res);
	hw_uint<16> in_gauss_blur_1_rd46_res = in_gauss_blur_1_rd46_select(in, d0, d1, dynamic_address);
	set_at<736, 1152>(result, in_gauss_blur_1_rd46_res);
	hw_uint<16> in_gauss_blur_1_rd47_res = in_gauss_blur_1_rd47_select(in, d0, d1, dynamic_address);
	set_at<752, 1152>(result, in_gauss_blur_1_rd47_res);
	hw_uint<16> in_gauss_blur_1_rd48_res = in_gauss_blur_1_rd48_select(in, d0, d1, dynamic_address);
	set_at<768, 1152>(result, in_gauss_blur_1_rd48_res);
	hw_uint<16> in_gauss_blur_1_rd49_res = in_gauss_blur_1_rd49_select(in, d0, d1, dynamic_address);
	set_at<784, 1152>(result, in_gauss_blur_1_rd49_res);
	hw_uint<16> in_gauss_blur_1_rd50_res = in_gauss_blur_1_rd50_select(in, d0, d1, dynamic_address);
	set_at<800, 1152>(result, in_gauss_blur_1_rd50_res);
	hw_uint<16> in_gauss_blur_1_rd51_res = in_gauss_blur_1_rd51_select(in, d0, d1, dynamic_address);
	set_at<816, 1152>(result, in_gauss_blur_1_rd51_res);
	hw_uint<16> in_gauss_blur_1_rd52_res = in_gauss_blur_1_rd52_select(in, d0, d1, dynamic_address);
	set_at<832, 1152>(result, in_gauss_blur_1_rd52_res);
	hw_uint<16> in_gauss_blur_1_rd53_res = in_gauss_blur_1_rd53_select(in, d0, d1, dynamic_address);
	set_at<848, 1152>(result, in_gauss_blur_1_rd53_res);
	hw_uint<16> in_gauss_blur_1_rd54_res = in_gauss_blur_1_rd54_select(in, d0, d1, dynamic_address);
	set_at<864, 1152>(result, in_gauss_blur_1_rd54_res);
	hw_uint<16> in_gauss_blur_1_rd55_res = in_gauss_blur_1_rd55_select(in, d0, d1, dynamic_address);
	set_at<880, 1152>(result, in_gauss_blur_1_rd55_res);
	hw_uint<16> in_gauss_blur_1_rd56_res = in_gauss_blur_1_rd56_select(in, d0, d1, dynamic_address);
	set_at<896, 1152>(result, in_gauss_blur_1_rd56_res);
	hw_uint<16> in_gauss_blur_1_rd57_res = in_gauss_blur_1_rd57_select(in, d0, d1, dynamic_address);
	set_at<912, 1152>(result, in_gauss_blur_1_rd57_res);
	hw_uint<16> in_gauss_blur_1_rd58_res = in_gauss_blur_1_rd58_select(in, d0, d1, dynamic_address);
	set_at<928, 1152>(result, in_gauss_blur_1_rd58_res);
	hw_uint<16> in_gauss_blur_1_rd59_res = in_gauss_blur_1_rd59_select(in, d0, d1, dynamic_address);
	set_at<944, 1152>(result, in_gauss_blur_1_rd59_res);
	hw_uint<16> in_gauss_blur_1_rd60_res = in_gauss_blur_1_rd60_select(in, d0, d1, dynamic_address);
	set_at<960, 1152>(result, in_gauss_blur_1_rd60_res);
	hw_uint<16> in_gauss_blur_1_rd61_res = in_gauss_blur_1_rd61_select(in, d0, d1, dynamic_address);
	set_at<976, 1152>(result, in_gauss_blur_1_rd61_res);
	hw_uint<16> in_gauss_blur_1_rd62_res = in_gauss_blur_1_rd62_select(in, d0, d1, dynamic_address);
	set_at<992, 1152>(result, in_gauss_blur_1_rd62_res);
	hw_uint<16> in_gauss_blur_1_rd63_res = in_gauss_blur_1_rd63_select(in, d0, d1, dynamic_address);
	set_at<1008, 1152>(result, in_gauss_blur_1_rd63_res);
	hw_uint<16> in_gauss_blur_1_rd64_res = in_gauss_blur_1_rd64_select(in, d0, d1, dynamic_address);
	set_at<1024, 1152>(result, in_gauss_blur_1_rd64_res);
	hw_uint<16> in_gauss_blur_1_rd65_res = in_gauss_blur_1_rd65_select(in, d0, d1, dynamic_address);
	set_at<1040, 1152>(result, in_gauss_blur_1_rd65_res);
	hw_uint<16> in_gauss_blur_1_rd66_res = in_gauss_blur_1_rd66_select(in, d0, d1, dynamic_address);
	set_at<1056, 1152>(result, in_gauss_blur_1_rd66_res);
	hw_uint<16> in_gauss_blur_1_rd67_res = in_gauss_blur_1_rd67_select(in, d0, d1, dynamic_address);
	set_at<1072, 1152>(result, in_gauss_blur_1_rd67_res);
	hw_uint<16> in_gauss_blur_1_rd68_res = in_gauss_blur_1_rd68_select(in, d0, d1, dynamic_address);
	set_at<1088, 1152>(result, in_gauss_blur_1_rd68_res);
	hw_uint<16> in_gauss_blur_1_rd69_res = in_gauss_blur_1_rd69_select(in, d0, d1, dynamic_address);
	set_at<1104, 1152>(result, in_gauss_blur_1_rd69_res);
	hw_uint<16> in_gauss_blur_1_rd70_res = in_gauss_blur_1_rd70_select(in, d0, d1, dynamic_address);
	set_at<1120, 1152>(result, in_gauss_blur_1_rd70_res);
	hw_uint<16> in_gauss_blur_1_rd71_res = in_gauss_blur_1_rd71_select(in, d0, d1, dynamic_address);
	set_at<1136, 1152>(result, in_gauss_blur_1_rd71_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
//	in_in_update_0_write2
//	in_in_update_0_write3
//	in_in_update_0_write4
//	in_in_update_0_write5
//	in_in_update_0_write6
//	in_in_update_0_write7
inline void in_in_update_0_write_bundle_write(hw_uint<128>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
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
}

#include "hw_classes.h"

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache {
	// RAM Box: {[0, 520], [0, 516]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1_cache {
	// RAM Box: {[2, 522], [0, 516]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2_cache {
	// RAM Box: {[4, 524], [0, 516]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3_cache {
	// RAM Box: {[6, 526], [0, 516]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_gauss_blur_1_cache {
  // # of banks: 4
  in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3;
};



inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write0, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write1_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write1, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write2_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write2, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write2);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write3_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write3, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write4_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write4, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write4);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write5_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write5, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write6_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write6, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write6);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write7_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write7, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_1_rd0_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd0 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd1_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd1 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[2 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write2 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd2_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd2 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[4 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write4 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd3_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd3 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[6 + 8d0, 2d1] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write6 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write6;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_write
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write0
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write1
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write2
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write3
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write4
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write5
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write6
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write7
inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(hw_uint<128>& in_gauss_blur_1_update_0_write, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res = in_gauss_blur_1_update_0_write.extract<0, 15>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write1_res = in_gauss_blur_1_update_0_write.extract<16, 31>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write1_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write1_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write2_res = in_gauss_blur_1_update_0_write.extract<32, 47>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write2_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write2_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write3_res = in_gauss_blur_1_update_0_write.extract<48, 63>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write3_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write3_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write4_res = in_gauss_blur_1_update_0_write.extract<64, 79>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write4_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write4_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write5_res = in_gauss_blur_1_update_0_write.extract<80, 95>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write5_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write5_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write6_res = in_gauss_blur_1_update_0_write.extract<96, 111>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write6_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write6_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write7_res = in_gauss_blur_1_update_0_write.extract<112, 127>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write7_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write7_res, in_gauss_blur_1, d0, d1, dynamic_address);
}

// in_gauss_ds_1_update_0_read
//	in_gauss_ds_1_rd0
//	in_gauss_ds_1_rd1
//	in_gauss_ds_1_rd2
//	in_gauss_ds_1_rd3
inline hw_uint<64> in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_gauss_ds_1_rd0
    // in_gauss_ds_1_rd1
    // in_gauss_ds_1_rd2
    // in_gauss_ds_1_rd3

	hw_uint<64> result;
	hw_uint<16> in_gauss_ds_1_rd0_res = in_gauss_ds_1_rd0_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 64>(result, in_gauss_ds_1_rd0_res);
	hw_uint<16> in_gauss_ds_1_rd1_res = in_gauss_ds_1_rd1_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<16, 64>(result, in_gauss_ds_1_rd1_res);
	hw_uint<16> in_gauss_ds_1_rd2_res = in_gauss_ds_1_rd2_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<32, 64>(result, in_gauss_ds_1_rd2_res);
	hw_uint<16> in_gauss_ds_1_rd3_res = in_gauss_ds_1_rd3_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<48, 64>(result, in_gauss_ds_1_rd3_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache {
	// RAM Box: {[0, 256], [0, 256]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1_cache {
	// RAM Box: {[2, 258], [0, 256]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_gauss_blur_2_cache {
  // # of banks: 2
  in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1;
};



inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write0, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write0);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write1_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write2_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write2, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write2);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write3_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write3, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_2_rd0_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd0 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[4d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd1_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd1 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[2 + 4d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write2 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write2;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_write
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write0
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write1
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write2
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write3
inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(hw_uint<64>& in_gauss_blur_2_update_0_write, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res = in_gauss_blur_2_update_0_write.extract<0, 15>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write1_res = in_gauss_blur_2_update_0_write.extract<16, 31>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write1_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write1_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write2_res = in_gauss_blur_2_update_0_write.extract<32, 47>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write2_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write2_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write3_res = in_gauss_blur_2_update_0_write.extract<48, 63>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write3_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write3_res, in_gauss_blur_2, d0, d1, dynamic_address);
}

// in_gauss_ds_2_update_0_read
//	in_gauss_ds_2_rd0
//	in_gauss_ds_2_rd1
inline hw_uint<32> in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // in_gauss_ds_2_rd0
    // in_gauss_ds_2_rd1

	hw_uint<32> result;
	hw_uint<16> in_gauss_ds_2_rd0_res = in_gauss_ds_2_rd0_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 32>(result, in_gauss_ds_2_rd0_res);
	hw_uint<16> in_gauss_ds_2_rd1_res = in_gauss_ds_2_rd1_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<16, 32>(result, in_gauss_ds_2_rd1_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 126], [0, 126]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_gauss_blur_3_cache {
  // # of banks: 1
  in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0;
};



inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write0, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.push(in_gauss_blur_3_in_gauss_blur_3_update_0_write0);
}

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write1_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write1, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_3_rd0_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_3_rd0 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 7] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_write
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write0
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write1
inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& in_gauss_blur_3_update_0_write, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res = in_gauss_blur_3_update_0_write.extract<0, 15>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write1_res = in_gauss_blur_3_update_0_write.extract<16, 31>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write1_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write1_res, in_gauss_blur_3, d0, d1, dynamic_address);
}

// in_gauss_ds_3_update_0_read
//	in_gauss_ds_3_rd0
inline hw_uint<16> in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> in_gauss_ds_3_rd0_res = in_gauss_ds_3_rd0_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, in_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache {
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[1, 261], [0, 258]}
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[2, 262], [0, 258]}
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[3, 263], [0, 258]}
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

struct in_gauss_ds_1_cache {
  // # of banks: 4
  in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9;
};



inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write0, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write0);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write1_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write1);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write2_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write2, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write2);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write3_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write3, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write3);
}

inline hw_uint<16> in_gauss_blur_2_rd0_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd0 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd1_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd1 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd10_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd10 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd11_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd11 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd12_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd12 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd13_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd13 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd14_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd14 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd15_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd15 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd16_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd16 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd17_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd17 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd18_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd18 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd19_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd19 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd2_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd2 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd20_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd20 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd21_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd21 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd22_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd22 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd23_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd23 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd24_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd24 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_132();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd25_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd25 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_66();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd26_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd26 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd27_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd27 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd28_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd28 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd29_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd29 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd3_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd3 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd30_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd30 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_132();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd31_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd31 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_66();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd32_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd32 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd33_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd33 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_132();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd34_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd34 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_66();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd35_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd35 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_0();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd4_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd4 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd5_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd5 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd6_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd6 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd7_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd7 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 1 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_67();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd8_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd8 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 2 + d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd9_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd9 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, d1] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_133();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_read
//	in_gauss_blur_2_rd0
//	in_gauss_blur_2_rd1
//	in_gauss_blur_2_rd2
//	in_gauss_blur_2_rd3
//	in_gauss_blur_2_rd4
//	in_gauss_blur_2_rd5
//	in_gauss_blur_2_rd6
//	in_gauss_blur_2_rd7
//	in_gauss_blur_2_rd8
//	in_gauss_blur_2_rd9
//	in_gauss_blur_2_rd10
//	in_gauss_blur_2_rd11
//	in_gauss_blur_2_rd12
//	in_gauss_blur_2_rd13
//	in_gauss_blur_2_rd14
//	in_gauss_blur_2_rd15
//	in_gauss_blur_2_rd16
//	in_gauss_blur_2_rd17
//	in_gauss_blur_2_rd18
//	in_gauss_blur_2_rd19
//	in_gauss_blur_2_rd20
//	in_gauss_blur_2_rd21
//	in_gauss_blur_2_rd22
//	in_gauss_blur_2_rd23
//	in_gauss_blur_2_rd24
//	in_gauss_blur_2_rd25
//	in_gauss_blur_2_rd26
//	in_gauss_blur_2_rd27
//	in_gauss_blur_2_rd28
//	in_gauss_blur_2_rd29
//	in_gauss_blur_2_rd30
//	in_gauss_blur_2_rd31
//	in_gauss_blur_2_rd32
//	in_gauss_blur_2_rd33
//	in_gauss_blur_2_rd34
//	in_gauss_blur_2_rd35
inline hw_uint<576> in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 36
    // in_gauss_blur_2_rd0
    // in_gauss_blur_2_rd1
    // in_gauss_blur_2_rd2
    // in_gauss_blur_2_rd3
    // in_gauss_blur_2_rd4
    // in_gauss_blur_2_rd5
    // in_gauss_blur_2_rd6
    // in_gauss_blur_2_rd7
    // in_gauss_blur_2_rd8
    // in_gauss_blur_2_rd9
    // in_gauss_blur_2_rd10
    // in_gauss_blur_2_rd11
    // in_gauss_blur_2_rd12
    // in_gauss_blur_2_rd13
    // in_gauss_blur_2_rd14
    // in_gauss_blur_2_rd15
    // in_gauss_blur_2_rd16
    // in_gauss_blur_2_rd17
    // in_gauss_blur_2_rd18
    // in_gauss_blur_2_rd19
    // in_gauss_blur_2_rd20
    // in_gauss_blur_2_rd21
    // in_gauss_blur_2_rd22
    // in_gauss_blur_2_rd23
    // in_gauss_blur_2_rd24
    // in_gauss_blur_2_rd25
    // in_gauss_blur_2_rd26
    // in_gauss_blur_2_rd27
    // in_gauss_blur_2_rd28
    // in_gauss_blur_2_rd29
    // in_gauss_blur_2_rd30
    // in_gauss_blur_2_rd31
    // in_gauss_blur_2_rd32
    // in_gauss_blur_2_rd33
    // in_gauss_blur_2_rd34
    // in_gauss_blur_2_rd35

	hw_uint<576> result;
	hw_uint<16> in_gauss_blur_2_rd0_res = in_gauss_blur_2_rd0_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 576>(result, in_gauss_blur_2_rd0_res);
	hw_uint<16> in_gauss_blur_2_rd1_res = in_gauss_blur_2_rd1_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 576>(result, in_gauss_blur_2_rd1_res);
	hw_uint<16> in_gauss_blur_2_rd2_res = in_gauss_blur_2_rd2_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 576>(result, in_gauss_blur_2_rd2_res);
	hw_uint<16> in_gauss_blur_2_rd3_res = in_gauss_blur_2_rd3_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 576>(result, in_gauss_blur_2_rd3_res);
	hw_uint<16> in_gauss_blur_2_rd4_res = in_gauss_blur_2_rd4_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 576>(result, in_gauss_blur_2_rd4_res);
	hw_uint<16> in_gauss_blur_2_rd5_res = in_gauss_blur_2_rd5_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 576>(result, in_gauss_blur_2_rd5_res);
	hw_uint<16> in_gauss_blur_2_rd6_res = in_gauss_blur_2_rd6_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 576>(result, in_gauss_blur_2_rd6_res);
	hw_uint<16> in_gauss_blur_2_rd7_res = in_gauss_blur_2_rd7_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 576>(result, in_gauss_blur_2_rd7_res);
	hw_uint<16> in_gauss_blur_2_rd8_res = in_gauss_blur_2_rd8_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 576>(result, in_gauss_blur_2_rd8_res);
	hw_uint<16> in_gauss_blur_2_rd9_res = in_gauss_blur_2_rd9_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<144, 576>(result, in_gauss_blur_2_rd9_res);
	hw_uint<16> in_gauss_blur_2_rd10_res = in_gauss_blur_2_rd10_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<160, 576>(result, in_gauss_blur_2_rd10_res);
	hw_uint<16> in_gauss_blur_2_rd11_res = in_gauss_blur_2_rd11_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<176, 576>(result, in_gauss_blur_2_rd11_res);
	hw_uint<16> in_gauss_blur_2_rd12_res = in_gauss_blur_2_rd12_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<192, 576>(result, in_gauss_blur_2_rd12_res);
	hw_uint<16> in_gauss_blur_2_rd13_res = in_gauss_blur_2_rd13_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<208, 576>(result, in_gauss_blur_2_rd13_res);
	hw_uint<16> in_gauss_blur_2_rd14_res = in_gauss_blur_2_rd14_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<224, 576>(result, in_gauss_blur_2_rd14_res);
	hw_uint<16> in_gauss_blur_2_rd15_res = in_gauss_blur_2_rd15_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<240, 576>(result, in_gauss_blur_2_rd15_res);
	hw_uint<16> in_gauss_blur_2_rd16_res = in_gauss_blur_2_rd16_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<256, 576>(result, in_gauss_blur_2_rd16_res);
	hw_uint<16> in_gauss_blur_2_rd17_res = in_gauss_blur_2_rd17_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<272, 576>(result, in_gauss_blur_2_rd17_res);
	hw_uint<16> in_gauss_blur_2_rd18_res = in_gauss_blur_2_rd18_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<288, 576>(result, in_gauss_blur_2_rd18_res);
	hw_uint<16> in_gauss_blur_2_rd19_res = in_gauss_blur_2_rd19_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<304, 576>(result, in_gauss_blur_2_rd19_res);
	hw_uint<16> in_gauss_blur_2_rd20_res = in_gauss_blur_2_rd20_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<320, 576>(result, in_gauss_blur_2_rd20_res);
	hw_uint<16> in_gauss_blur_2_rd21_res = in_gauss_blur_2_rd21_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<336, 576>(result, in_gauss_blur_2_rd21_res);
	hw_uint<16> in_gauss_blur_2_rd22_res = in_gauss_blur_2_rd22_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<352, 576>(result, in_gauss_blur_2_rd22_res);
	hw_uint<16> in_gauss_blur_2_rd23_res = in_gauss_blur_2_rd23_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<368, 576>(result, in_gauss_blur_2_rd23_res);
	hw_uint<16> in_gauss_blur_2_rd24_res = in_gauss_blur_2_rd24_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<384, 576>(result, in_gauss_blur_2_rd24_res);
	hw_uint<16> in_gauss_blur_2_rd25_res = in_gauss_blur_2_rd25_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<400, 576>(result, in_gauss_blur_2_rd25_res);
	hw_uint<16> in_gauss_blur_2_rd26_res = in_gauss_blur_2_rd26_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<416, 576>(result, in_gauss_blur_2_rd26_res);
	hw_uint<16> in_gauss_blur_2_rd27_res = in_gauss_blur_2_rd27_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<432, 576>(result, in_gauss_blur_2_rd27_res);
	hw_uint<16> in_gauss_blur_2_rd28_res = in_gauss_blur_2_rd28_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<448, 576>(result, in_gauss_blur_2_rd28_res);
	hw_uint<16> in_gauss_blur_2_rd29_res = in_gauss_blur_2_rd29_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<464, 576>(result, in_gauss_blur_2_rd29_res);
	hw_uint<16> in_gauss_blur_2_rd30_res = in_gauss_blur_2_rd30_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<480, 576>(result, in_gauss_blur_2_rd30_res);
	hw_uint<16> in_gauss_blur_2_rd31_res = in_gauss_blur_2_rd31_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<496, 576>(result, in_gauss_blur_2_rd31_res);
	hw_uint<16> in_gauss_blur_2_rd32_res = in_gauss_blur_2_rd32_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<512, 576>(result, in_gauss_blur_2_rd32_res);
	hw_uint<16> in_gauss_blur_2_rd33_res = in_gauss_blur_2_rd33_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<528, 576>(result, in_gauss_blur_2_rd33_res);
	hw_uint<16> in_gauss_blur_2_rd34_res = in_gauss_blur_2_rd34_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<544, 576>(result, in_gauss_blur_2_rd34_res);
	hw_uint<16> in_gauss_blur_2_rd35_res = in_gauss_blur_2_rd35_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<560, 576>(result, in_gauss_blur_2_rd35_res);
	return result;
}

// in_gauss_ds_1_update_0_write
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write0
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write1
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write2
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write3
inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(hw_uint<64>& in_gauss_ds_1_update_0_write, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res = in_gauss_ds_1_update_0_write.extract<0, 15>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write1_res = in_gauss_ds_1_update_0_write.extract<16, 31>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write1_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write1_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write2_res = in_gauss_ds_1_update_0_write.extract<32, 47>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write2_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write2_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write3_res = in_gauss_ds_1_update_0_write.extract<48, 63>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write3_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write3_res, in_gauss_ds_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache {
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[1, 129], [0, 128]}
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

struct in_gauss_ds_2_cache {
  // # of banks: 2
  in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9;
};



inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write0, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write0);
}

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write1_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write1, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write1);
}

inline hw_uint<16> in_gauss_blur_3_rd0_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd0 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_131();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd1_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd1 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_66();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd10_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd10 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_66();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd11_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd11 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, 2 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd12_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd12 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_130();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd13_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd13 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_65();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd14_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd14 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, 2 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd15_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd15 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 2d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_130();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd16_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd16 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 2d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_65();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd17_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd17 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 2d0, 2 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_0();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd2_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd2 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2d0, 2 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd3_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd3 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_131();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd4_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd4 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_66();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd5_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd5 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, 2 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd6_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd6 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_130();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd7_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd7 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_65();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd8_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd8 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, 2 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd9_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd9 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_131();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_read
//	in_gauss_blur_3_rd0
//	in_gauss_blur_3_rd1
//	in_gauss_blur_3_rd2
//	in_gauss_blur_3_rd3
//	in_gauss_blur_3_rd4
//	in_gauss_blur_3_rd5
//	in_gauss_blur_3_rd6
//	in_gauss_blur_3_rd7
//	in_gauss_blur_3_rd8
//	in_gauss_blur_3_rd9
//	in_gauss_blur_3_rd10
//	in_gauss_blur_3_rd11
//	in_gauss_blur_3_rd12
//	in_gauss_blur_3_rd13
//	in_gauss_blur_3_rd14
//	in_gauss_blur_3_rd15
//	in_gauss_blur_3_rd16
//	in_gauss_blur_3_rd17
inline hw_uint<288> in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // in_gauss_blur_3_rd0
    // in_gauss_blur_3_rd1
    // in_gauss_blur_3_rd2
    // in_gauss_blur_3_rd3
    // in_gauss_blur_3_rd4
    // in_gauss_blur_3_rd5
    // in_gauss_blur_3_rd6
    // in_gauss_blur_3_rd7
    // in_gauss_blur_3_rd8
    // in_gauss_blur_3_rd9
    // in_gauss_blur_3_rd10
    // in_gauss_blur_3_rd11
    // in_gauss_blur_3_rd12
    // in_gauss_blur_3_rd13
    // in_gauss_blur_3_rd14
    // in_gauss_blur_3_rd15
    // in_gauss_blur_3_rd16
    // in_gauss_blur_3_rd17

	hw_uint<288> result;
	hw_uint<16> in_gauss_blur_3_rd0_res = in_gauss_blur_3_rd0_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 288>(result, in_gauss_blur_3_rd0_res);
	hw_uint<16> in_gauss_blur_3_rd1_res = in_gauss_blur_3_rd1_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 288>(result, in_gauss_blur_3_rd1_res);
	hw_uint<16> in_gauss_blur_3_rd2_res = in_gauss_blur_3_rd2_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 288>(result, in_gauss_blur_3_rd2_res);
	hw_uint<16> in_gauss_blur_3_rd3_res = in_gauss_blur_3_rd3_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 288>(result, in_gauss_blur_3_rd3_res);
	hw_uint<16> in_gauss_blur_3_rd4_res = in_gauss_blur_3_rd4_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 288>(result, in_gauss_blur_3_rd4_res);
	hw_uint<16> in_gauss_blur_3_rd5_res = in_gauss_blur_3_rd5_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 288>(result, in_gauss_blur_3_rd5_res);
	hw_uint<16> in_gauss_blur_3_rd6_res = in_gauss_blur_3_rd6_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 288>(result, in_gauss_blur_3_rd6_res);
	hw_uint<16> in_gauss_blur_3_rd7_res = in_gauss_blur_3_rd7_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 288>(result, in_gauss_blur_3_rd7_res);
	hw_uint<16> in_gauss_blur_3_rd8_res = in_gauss_blur_3_rd8_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 288>(result, in_gauss_blur_3_rd8_res);
	hw_uint<16> in_gauss_blur_3_rd9_res = in_gauss_blur_3_rd9_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<144, 288>(result, in_gauss_blur_3_rd9_res);
	hw_uint<16> in_gauss_blur_3_rd10_res = in_gauss_blur_3_rd10_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<160, 288>(result, in_gauss_blur_3_rd10_res);
	hw_uint<16> in_gauss_blur_3_rd11_res = in_gauss_blur_3_rd11_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<176, 288>(result, in_gauss_blur_3_rd11_res);
	hw_uint<16> in_gauss_blur_3_rd12_res = in_gauss_blur_3_rd12_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<192, 288>(result, in_gauss_blur_3_rd12_res);
	hw_uint<16> in_gauss_blur_3_rd13_res = in_gauss_blur_3_rd13_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<208, 288>(result, in_gauss_blur_3_rd13_res);
	hw_uint<16> in_gauss_blur_3_rd14_res = in_gauss_blur_3_rd14_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<224, 288>(result, in_gauss_blur_3_rd14_res);
	hw_uint<16> in_gauss_blur_3_rd15_res = in_gauss_blur_3_rd15_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<240, 288>(result, in_gauss_blur_3_rd15_res);
	hw_uint<16> in_gauss_blur_3_rd16_res = in_gauss_blur_3_rd16_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<256, 288>(result, in_gauss_blur_3_rd16_res);
	hw_uint<16> in_gauss_blur_3_rd17_res = in_gauss_blur_3_rd17_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<272, 288>(result, in_gauss_blur_3_rd17_res);
	return result;
}

// in_gauss_ds_2_update_0_write
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write0
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write1
inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& in_gauss_ds_2_update_0_write, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res = in_gauss_ds_2_update_0_write.extract<0, 15>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write1_res = in_gauss_ds_2_update_0_write.extract<16, 31>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write1_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write1_res, in_gauss_ds_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_sm_rd0_cache {
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

struct in_gauss_ds_3_cache {
  // # of banks: 1
  in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_sm_rd0_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_sm_rd0;
};



inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write0, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_sm_rd0.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> gp_sm_rd0_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_sm_rd0 read pattern: { gp_sm_update_0[d0, d1] -> in_gauss_ds_3[d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { gp_sm_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 8] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 7] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_sm_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// gp_sm_update_0_read
//	gp_sm_rd0
inline hw_uint<16> in_gauss_ds_3_gp_sm_update_0_read_bundle_read(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_sm_rd0

	hw_uint<16> result;
	hw_uint<16> gp_sm_rd0_res = gp_sm_rd0_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, gp_sm_rd0_res);
	return result;
}

// in_gauss_ds_3_update_0_write
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write0
inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& in_gauss_ds_3_update_0_write, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res = in_gauss_ds_3_update_0_write.extract<0, 15>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res, in_gauss_ds_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 29984 bits


// Operation logic
inline void gp_sm_update_0(in_gauss_ds_3_cache& in_gauss_ds_3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */gp_sm, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_3
	auto in_gauss_ds_3_0_c__0_value = in_gauss_ds_3_gp_sm_update_0_read_bundle_read(in_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(in_gauss_ds_3_0_c__0_value);
	// Produce: gp_sm
	gp_sm.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_1_update_0(in_cache& in, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_in_gauss_blur_1_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_8(in_0_c__0_value);
	// Produce: in_gauss_blur_1
	in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_1_update_0(in_gauss_blur_1_cache& in_gauss_blur_1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_1
	auto in_gauss_blur_1_0_c__0_value = in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(in_gauss_blur_1_0_c__0_value);
	// Produce: in_gauss_ds_1
	in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_2_update_0(in_gauss_blur_2_cache& in_gauss_blur_2, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_2
	auto in_gauss_blur_2_0_c__0_value = in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(in_gauss_blur_2_0_c__0_value);
	// Produce: in_gauss_ds_2
	in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_3_update_0(in_gauss_ds_2_cache& in_gauss_ds_2, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_2
	auto in_gauss_ds_2_0_c__0_value = in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(in_gauss_ds_2_0_c__0_value);
	// Produce: in_gauss_blur_3
	in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_3_update_0(in_gauss_blur_3_cache& in_gauss_blur_3, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_3
	auto in_gauss_blur_3_0_c__0_value = in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(in_gauss_blur_3_0_c__0_value);
	// Produce: in_gauss_ds_3
	in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_8(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_2_update_0(in_gauss_ds_1_cache& in_gauss_ds_1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_1
	auto in_gauss_ds_1_0_c__0_value = in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(in_gauss_ds_1_0_c__0_value);
	// Produce: in_gauss_blur_2
	in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void gp_sm_opt(HWStream<hw_uint<128> >& /* get_args num ports = 8 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_sm) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gp_sm_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_1_cache in_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_2_cache in_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_3_cache in_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_1_cache in_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_2_cache in_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_3_cache in_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256; gp_sm_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 8] : 0 <= d0 <= 63 and 0 <= d1 <= 63; in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126; in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128; in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258; in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516; in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518; in_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 7] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
//   { in_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 4] : 0 <= d0 <= 64 and 0 <= d1 <= 256 }
// Condition for in_gauss_blur_2_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-4 + i2 == 0) && (-2 + i1 >= 0) && (66 - i1 >= 0) && (-6 + i0 >= 0) && (518 - i0 >= 0)))
//   { gp_sm_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 8] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
// Condition for gp_sm_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-8 + i2 == 0) && (-3 + i1 >= 0) && (66 - i1 >= 0) && (-14 + i0 >= 0) && (518 - i0 >= 0)))
//   { in_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 3 + d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 126 }
// Condition for in_gauss_blur_3_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-6 + i2 == 0) && (-3 + i1 >= 0) && (66 - i1 >= 0) && (-14 + i0 >= 0) && (518 - i0 >= 0)))
//   { in_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 5] : 0 <= d0 <= 64 and 0 <= d1 <= 128 }
// Condition for in_gauss_ds_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-5 + i2 == 0) && (-2 + i1 >= 0) && (66 - i1 >= 0) && (-6 + i0 >= 0) && (518 - i0 >= 0)))
//   { in_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 3] : 0 <= d0 <= 65 and 0 <= d1 <= 258 }
// Condition for in_gauss_ds_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-3 + i2 == 0) && (-1 + i1 >= 0) && (66 - i1 >= 0) && (-2 + i0 >= 0) && (518 - i0 >= 0)))
//   { in_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 65 and 0 <= d1 <= 516 }
// Condition for in_gauss_blur_1_update_0(((-2 + i2 == 0) && (-1 + i1 >= 0) && (66 - i1 >= 0) && (-2 + i0 >= 0) && (518 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 66 and 0 <= d1 <= 518 }
// Condition for in_update_0(((-1 + i2 == 0) && (i1 >= 0) && (66 - i1 >= 0) && (i0 >= 0) && (518 - i0 >= 0)))
//   { in_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 7] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
// Condition for in_gauss_ds_3_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-7 + i2 == 0) && (-3 + i1 >= 0) && (66 - i1 >= 0) && (-14 + i0 >= 0) && (518 - i0 >= 0)))

  /*
  // Schedules...
    // gp_sm_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*8]
    // in_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*2]
    // in_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*4]
    // in_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*3,1*6]
    // in_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*3]
    // in_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*5]
    // in_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*7]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = 0; c0 <= 518; c0++) {
  for (int c1 = 0; c1 <= 66; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 66) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 518) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 66) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 518) && ((c0 - 2) % 1 == 0)) {
      in_gauss_blur_1_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((1 <= c1 && c1 <= 66) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 518) && ((c0 - 2) % 2 == 0)) {
      in_gauss_ds_1_update_0((c1 - 1) / 1, (c0 - 2) / 2);
    }

    if ((2 <= c1 && c1 <= 66) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 518) && ((c0 - 6) % 2 == 0)) {
      in_gauss_blur_2_update_0((c1 - 2) / 1, (c0 - 6) / 2);
    }

    if ((2 <= c1 && c1 <= 66) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 518) && ((c0 - 6) % 4 == 0)) {
      in_gauss_ds_2_update_0((c1 - 2) / 1, (c0 - 6) / 4);
    }

    if ((3 <= c1 && c1 <= 66) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 518) && ((c0 - 14) % 4 == 0)) {
      in_gauss_blur_3_update_0((c1 - 3) / 1, (c0 - 14) / 4);
    }

    if ((3 <= c1 && c1 <= 66) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 518) && ((c0 - 14) % 8 == 0)) {
      in_gauss_ds_3_update_0((c1 - 3) / 1, (c0 - 14) / 8);
    }

    if ((3 <= c1 && c1 <= 66) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 518) && ((c0 - 14) % 8 == 0)) {
      gp_sm_update_0((c1 - 3) / 1, (c0 - 14) / 8);
    }

  }
}

  */
	  // Schedules...
	    // gp_sm_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*8]
	    // in_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*2]
	    // in_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*4]
	    // in_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*3,1*6]
	    // in_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*3]
	    // in_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*5]
	    // in_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*7]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = 0; c0 <= 518; c0++) {
	  for (int c1 = 0; c1 <= 66; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 66) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 518) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 66) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 518) && ((c0 - 2) % 1 == 0)) {
	      in_gauss_blur_1_update_0(in /* buf name */, in_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 66) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 518) && ((c0 - 2) % 2 == 0)) {
	      in_gauss_ds_1_update_0(in_gauss_blur_1 /* buf name */, in_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 66) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 518) && ((c0 - 6) % 2 == 0)) {
	      in_gauss_blur_2_update_0(in_gauss_ds_1 /* buf name */, in_gauss_blur_2, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 66) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 518) && ((c0 - 6) % 4 == 0)) {
	      in_gauss_ds_2_update_0(in_gauss_blur_2 /* buf name */, in_gauss_ds_2, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 66) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 518) && ((c0 - 14) % 4 == 0)) {
	      in_gauss_blur_3_update_0(in_gauss_ds_2 /* buf name */, in_gauss_blur_3, (c1 - 3) / 1, (c0 - 14) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 66) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 518) && ((c0 - 14) % 8 == 0)) {
	      in_gauss_ds_3_update_0(in_gauss_blur_3 /* buf name */, in_gauss_ds_3, (c1 - 3) / 1, (c0 - 14) / 8);
	    }
	
	    if ((3 <= c1 && c1 <= 66) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 518) && ((c0 - 14) % 8 == 0)) {
	      gp_sm_update_0(in_gauss_ds_3 /* buf name */, gp_sm, (c1 - 3) / 1, (c0 - 14) / 8);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void gp_sm_opt_wrapper(HWStream<hw_uint<128> >& /* get_args num ports = 8 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_sm, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp_sm_opt(in_off_chip, gp_sm);
  }
}
#ifdef __VIVADO_SYNTH__
  // { gp_sm_update_0[root = 0, gp_sm_0, gp_sm_1] -> gp_sm[0, 0] : 0 <= gp_sm_0 <= 63 and 0 <= gp_sm_1 <= 63 }
const int gp_sm_update_0_write_pipe0_num_transfers = 4096;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 66 and 0 <= in_1 <= 518 }
const int in_update_0_read_pipe0_num_transfers = 34773;


extern "C" {

void gp_sm_opt_accel(hw_uint<128>* in_update_0_read_pipe0, hw_uint<16>* gp_sm_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp_sm_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp_sm_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > gp_sm_update_0_write_pipe0_channel;

  burst_read<128>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp_sm_opt_wrapper(in_update_0_read_pipe0_channel, gp_sm_update_0_write_pipe0_channel, size);

  burst_write<16>(gp_sm_update_0_write_pipe0, gp_sm_update_0_write_pipe0_channel, gp_sm_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp_sm_opt_rdai(HWStream<hw_uint<128> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  gp_sm_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp_sm_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp_sm_opt(in_update_0_read_pipe0, gp_sm_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

