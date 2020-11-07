#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mobilenet_unrolled_compute.h
#include "mobilenet_unrolled_compute.h"

#include "hw_classes.h"

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_162_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 0]}
	// Capacity: 56
	// # of read delays: 56
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55
	fifo<hw_uint<16>, 56> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(55 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120_cache {
	// RAM Box: {[0, 27], [0, 27], [1, 1]}
	// Capacity: 56
	// # of read delays: 56
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55
	fifo<hw_uint<16>, 56> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(55 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100_cache {
	// RAM Box: {[0, 27], [0, 27], [2, 2]}
	// Capacity: 56
	// # of read delays: 56
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55
	fifo<hw_uint<16>, 56> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(55 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80_cache {
	// RAM Box: {[0, 27], [0, 27], [3, 3]}
	// Capacity: 56
	// # of read delays: 56
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55
	fifo<hw_uint<16>, 56> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(55 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_merged_banks_3_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 0]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_merged_banks_3_cache {
	// RAM Box: {[0, 27], [0, 27], [1, 1]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_merged_banks_3_cache {
	// RAM Box: {[0, 27], [0, 27], [2, 2]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_merged_banks_3_cache {
	// RAM Box: {[0, 27], [0, 27], [3, 3]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct dw_conv_stencil_cache {
  // # of banks: 8
  dw_conv_stencil_op_hcompute_dw_conv_stencil_162_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_162_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_merged_banks_3_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_merged_banks_3;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_merged_banks_3_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_merged_banks_3;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_merged_banks_3_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_merged_banks_3;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_merged_banks_3_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_merged_banks_3;
};



inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_162_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_162, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_162_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_162);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_merged_banks_3.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_merged_banks_3.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_merged_banks_3.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_merged_banks_3.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79);
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> dw_conv_stencil[dw_conv_s1_y, dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 17, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_162 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_162_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140.peek(/* one reader or all rams */ (-27 + dw_conv_s1_x == 0 && 26 - dw_conv_s1_y >= 0) ? (28) : (-27 + dw_conv_s1_y == 0 && 26 - dw_conv_s1_x >= 0) ? ((27 - dw_conv_s1_x)) : (26 - dw_conv_s1_x >= 0 && 26 - dw_conv_s1_y >= 0) ? ((55 - dw_conv_s1_x)) : 0);
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_162;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> dw_conv_stencil[dw_conv_s1_y, dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_1[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 14, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120.peek(/* one reader or all rams */ (-27 + dw_conv_s1_x == 0 && 26 - dw_conv_s1_y >= 0) ? (28) : (-27 + dw_conv_s1_y == 0 && 26 - dw_conv_s1_x >= 0) ? ((27 - dw_conv_s1_x)) : (26 - dw_conv_s1_x >= 0 && 26 - dw_conv_s1_y >= 0) ? ((55 - dw_conv_s1_x)) : 0);
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> dw_conv_stencil[dw_conv_s1_y, dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_2[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 1, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100.peek(/* one reader or all rams */ (-27 + dw_conv_s1_x == 0 && 26 - dw_conv_s1_y >= 0) ? (28) : (-27 + dw_conv_s1_y == 0 && 26 - dw_conv_s1_x >= 0) ? ((27 - dw_conv_s1_x)) : (26 - dw_conv_s1_x >= 0 && 26 - dw_conv_s1_y >= 0) ? ((55 - dw_conv_s1_x)) : 0);
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> dw_conv_stencil[dw_conv_s1_y, dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_3[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 6, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_to_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80.peek(/* one reader or all rams */ (-27 + dw_conv_s1_x == 0 && 26 - dw_conv_s1_y >= 0) ? (28) : (-27 + dw_conv_s1_y == 0 && 26 - dw_conv_s1_x >= 0) ? ((27 - dw_conv_s1_x)) : (26 - dw_conv_s1_x >= 0 && 26 - dw_conv_s1_y >= 0) ? ((55 - dw_conv_s1_x)) : 0);
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 3] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 3] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 3] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99;
  return 0;
}

// # of bundles = 15
// op_hcompute_dw_conv_stencil_1_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_1_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_res = op_hcompute_dw_conv_stencil_1_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_1_161_res, dw_conv_stencil, root, dw_conv_s0_y, dw_conv_s0_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_2_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_2_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_res = op_hcompute_dw_conv_stencil_2_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_2_160_res, dw_conv_stencil, root, dw_conv_s0_y, dw_conv_s0_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_3_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_3_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_res = op_hcompute_dw_conv_stencil_3_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_3_159_res, dw_conv_stencil, root, dw_conv_s0_y, dw_conv_s0_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_4_read
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140
inline hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_4_read_bundle_read(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140

	hw_uint<16> result;
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140_res = dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140_select(dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 16>(result, dw_conv_stencil_op_hcompute_dw_conv_stencil_4_140_res);
	return result;
}

// op_hcompute_dw_conv_stencil_4_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_4_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_res = op_hcompute_dw_conv_stencil_4_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_4_139_res, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_5_read
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120
inline hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_5_read_bundle_read(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120

	hw_uint<16> result;
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120_res = dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120_select(dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 16>(result, dw_conv_stencil_op_hcompute_dw_conv_stencil_5_120_res);
	return result;
}

// op_hcompute_dw_conv_stencil_5_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_5_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_res = op_hcompute_dw_conv_stencil_5_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_5_119_res, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_6_read
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100
inline hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_6_read_bundle_read(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100

	hw_uint<16> result;
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100_res = dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100_select(dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 16>(result, dw_conv_stencil_op_hcompute_dw_conv_stencil_6_100_res);
	return result;
}

// op_hcompute_dw_conv_stencil_6_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_6_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_res = op_hcompute_dw_conv_stencil_6_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_6_99_res, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_7_read
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80
inline hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_7_read_bundle_read(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80

	hw_uint<16> result;
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80_res = dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80_select(dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 16>(result, dw_conv_stencil_op_hcompute_dw_conv_stencil_7_80_res);
	return result;
}

// op_hcompute_dw_conv_stencil_7_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_7_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_res = op_hcompute_dw_conv_stencil_7_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_7_79_res, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_162
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_162_res = op_hcompute_dw_conv_stencil_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_162_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_162_res, dw_conv_stencil, root, dw_conv_s0_y, dw_conv_s0_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_3_read
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24
inline hw_uint<64> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 4
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24

	hw_uint<64> result;
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<16, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<32, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<48, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_4_read
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14
inline hw_uint<64> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 4
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14

	hw_uint<64> result;
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<16, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<32, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<48, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_5_read
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3
//	dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4
inline hw_uint<64> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 4
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3
    // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4

	hw_uint<64> result;
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<16, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<32, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3_res);
	hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4_res = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4_select(dw_conv_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<48, 64>(result, dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4_res);
	return result;
}

#include "hw_classes.h"

struct hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9_cache {
	// RAM Box: {[0, 2], [0, 2], [1, 1]}
	// Capacity: 9
	// # of read delays: 9
  // 0, 1, 2, 3, 4, 5, 6, 7, 8
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3() {
		return f6;
	}

	inline hw_uint<16> peek_4() {
		return f8;
	}

	inline hw_uint<16> peek_5() {
		return f10;
	}

	inline hw_uint<16> peek_6() {
		return f12;
	}

	inline hw_uint<16> peek_7() {
		return f14;
	}

	inline hw_uint<16> peek_8() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9_cache {
	// RAM Box: {[0, 2], [0, 2], [2, 2]}
	// Capacity: 9
	// # of read delays: 9
  // 0, 1, 2, 3, 4, 5, 6, 7, 8
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3() {
		return f6;
	}

	inline hw_uint<16> peek_4() {
		return f8;
	}

	inline hw_uint<16> peek_5() {
		return f10;
	}

	inline hw_uint<16> peek_6() {
		return f12;
	}

	inline hw_uint<16> peek_7() {
		return f14;
	}

	inline hw_uint<16> peek_8() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9_cache {
	// RAM Box: {[0, 2], [0, 2], [3, 3]}
	// Capacity: 9
	// # of read delays: 9
  // 0, 1, 2, 3, 4, 5, 6, 7, 8
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3() {
		return f6;
	}

	inline hw_uint<16> peek_4() {
		return f8;
	}

	inline hw_uint<16> peek_5() {
		return f10;
	}

	inline hw_uint<16> peek_6() {
		return f12;
	}

	inline hw_uint<16> peek_7() {
		return f14;
	}

	inline hw_uint<16> peek_8() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 0]}
	// Capacity: 9
	// # of read delays: 9
  // 0, 1, 2, 3, 4, 5, 6, 7, 8
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3() {
		return f6;
	}

	inline hw_uint<16> peek_4() {
		return f8;
	}

	inline hw_uint<16> peek_5() {
		return f10;
	}

	inline hw_uint<16> peek_6() {
		return f12;
	}

	inline hw_uint<16> peek_7() {
		return f14;
	}

	inline hw_uint<16> peek_8() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct hw_filter_dw_global_wrapper_stencil_cache {
  // # of banks: 4
  hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9_cache hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9;
  hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9_cache hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9;
  hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9_cache hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9;
  hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9_cache hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9;
};



inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_write(hw_uint<16>& hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
  hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.push(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75);
}

inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_write(hw_uint<16>& hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
  hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.push(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73);
}

inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_write(hw_uint<16>& hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
  hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.push(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71);
}

inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_write(hw_uint<16>& hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
  hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.push(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77);
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_141_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_141 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 0, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_8();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_142_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_142 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 1, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_7();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_143_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_143 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 2, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_6();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_144_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_144 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 0, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_5();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_145_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_145 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 1, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_4();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_146_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_146 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 2, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_3();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_147_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_147 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 0, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_2();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_148_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_148 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 2, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_0();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_149_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_149 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 1, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_merged_banks_9.peek_1();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_121_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_121 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 0, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_8();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_122_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_122 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 1, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_7();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_123_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_123 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 2, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_6();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_124_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_124 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 0, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_5();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_125_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_125 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 1, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_4();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_126_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_126 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 2, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_3();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_127_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_127 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 0, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_2();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_128_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_128 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 2, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_0();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_129_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_129 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 1, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_merged_banks_9.peek_1();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_101_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_101 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 0, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_8();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_102_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_102 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 1, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_7();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_103_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_103 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 2, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_6();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_104_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_104 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 0, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_5();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_105_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_105 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 1, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_4();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_106_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_106 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 2, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_3();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_107_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_107 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 0, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_2();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_108_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_108 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 2, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_0();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_109_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_109 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 1, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_merged_banks_9.peek_1();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_81_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_81 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 0, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_8();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_82_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_82 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 1, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_7();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_83_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_83 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 2, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_6();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_84_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_84 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 0, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_5();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_85_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_85 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 1, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_4();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_86_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_86 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 2, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_3();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_87_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_87 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 0, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_2();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_88_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_88 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 2, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_0();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_89_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_89 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 1, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_merged_banks_9.peek_1();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71;
  return 0;
}

// # of bundles = 8
// op_hcompute_dw_conv_stencil_4_read
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_141
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_142
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_143
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_144
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_145
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_146
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_147
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_148
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_149
inline hw_uint<144> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_read_bundle_read(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_141
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_142
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_143
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_144
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_145
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_146
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_147
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_148
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_149

	hw_uint<144> result;
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_141_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_141_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_141_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_142_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_142_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_142_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_143_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_143_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_143_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_144_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_144_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_144_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_145_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_145_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_145_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_146_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_146_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_146_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_147_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_147_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_147_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_148_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_148_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_148_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_149_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_149_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_149_res);
	return result;
}

// op_hcompute_dw_conv_stencil_5_read
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_121
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_122
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_123
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_124
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_125
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_126
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_127
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_128
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_129
inline hw_uint<144> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_read_bundle_read(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_121
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_122
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_123
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_124
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_125
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_126
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_127
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_128
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_129

	hw_uint<144> result;
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_121_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_121_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_121_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_122_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_122_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_122_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_123_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_123_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_123_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_124_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_124_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_124_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_125_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_125_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_125_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_126_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_126_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_126_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_127_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_127_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_127_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_128_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_128_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_128_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_129_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_129_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_129_res);
	return result;
}

// op_hcompute_dw_conv_stencil_6_read
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_101
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_102
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_103
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_104
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_105
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_106
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_107
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_108
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_109
inline hw_uint<144> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_read_bundle_read(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_101
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_102
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_103
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_104
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_105
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_106
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_107
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_108
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_109

	hw_uint<144> result;
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_101_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_101_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_101_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_102_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_102_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_102_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_103_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_103_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_103_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_104_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_104_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_104_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_105_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_105_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_105_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_106_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_106_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_106_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_107_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_107_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_107_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_108_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_108_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_108_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_109_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_109_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_109_res);
	return result;
}

// op_hcompute_dw_conv_stencil_7_read
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_81
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_82
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_83
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_84
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_85
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_86
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_87
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_88
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_89
inline hw_uint<144> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_read_bundle_read(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_81
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_82
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_83
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_84
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_85
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_86
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_87
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_88
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_89

	hw_uint<144> result;
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_81_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_81_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_81_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_82_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_82_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_82_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_83_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_83_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_83_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_84_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_84_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_84_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_85_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_85_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_85_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_86_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_86_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_86_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_87_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_87_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_87_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_88_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_88_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_88_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_89_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_89_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_89_res);
	return result;
}

// op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75
inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_res = op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_write(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_75_res, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73
inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_res = op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_write(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_73_res, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71
inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_res = op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_write(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_71_res, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_filter_dw_global_wrapper_stencil_write
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77
inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_dw_global_wrapper_stencil_write, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_res = op_hcompute_hw_filter_dw_global_wrapper_stencil_write.extract<0, 15>();
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_write(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_77_res, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25_cache {
	// RAM Box: {[0, 0], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26_cache {
	// RAM Box: {[1, 1], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27_cache {
	// RAM Box: {[3, 3], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28_cache {
	// RAM Box: {[2, 2], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15_cache {
	// RAM Box: {[0, 0], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16_cache {
	// RAM Box: {[1, 1], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17_cache {
	// RAM Box: {[3, 3], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18_cache {
	// RAM Box: {[2, 2], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5_cache {
	// RAM Box: {[1, 1], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6_cache {
	// RAM Box: {[3, 3], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7_cache {
	// RAM Box: {[2, 2], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8_cache {
	// RAM Box: {[0, 0], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_filter_pw_global_wrapper_stencil_cache {
  // # of banks: 12
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7;
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8;
};



inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49);
}

inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47);
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[0, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[root = 0] -> [0, 16, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[1, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_3[root = 0] -> [0, 18, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[3, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_9[root = 0] -> [0, 12, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[2, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_6[root = 0] -> [0, 10, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[0, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_1[root = 0] -> [0, 3, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[1, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_4[root = 0] -> [0, 7, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[3, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_10[root = 0] -> [0, 9, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[2, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_7[root = 0] -> [0, 19, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[1, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_5[root = 0] -> [0, 5, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[3, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_11[root = 0] -> [0, 13, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[2, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_8[root = 0] -> [0, 8, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[0, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_2[root = 0] -> [0, 11, 0, 0] }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_to_hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8.peek(/* one reader or all rams */ 0);
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61;
  return 0;
}

// # of bundles = 15
// op_hcompute_hw_filter_pw_global_wrapper_stencil_10_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_10_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_10_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_65_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_11_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_11_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_11_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_63_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_1_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_1_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_67_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_2_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_2_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_61_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_3_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_3_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_59_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_4_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_4_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_4_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_57_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_5_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_5_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_5_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_55_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_6_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_6_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_6_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_53_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_7_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_7_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_7_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_51_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_8_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_8_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_8_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_49_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_9_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_9_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_9_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_47_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_hw_filter_pw_global_wrapper_stencil_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_69_res, hw_filter_pw_global_wrapper_stencil, root, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_3_read
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28
inline hw_uint<64> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 4
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28

	hw_uint<64> result;
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<16, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<32, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<48, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_4_read
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18
inline hw_uint<64> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 4
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18

	hw_uint<64> result;
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<16, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<32, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<48, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_5_read
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8
inline hw_uint<64> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 4
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7
    // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8

	hw_uint<64> result;
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<16, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<32, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7_res);
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8_res = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8_select(hw_filter_pw_global_wrapper_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<48, 64>(result, hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8_res);
	return result;
}

#include "hw_classes.h"

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9_cache {
	// RAM Box: {[0, 29], [0, 29], [1, 1]}
	// Capacity: 63
	// # of read delays: 9
  // 0, 1, 2, 30, 31, 32, 60, 61, 62
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 27> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 27> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_29() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_30() {
		return f6;
	}

	inline hw_uint<16> peek_31() {
		return f8;
	}

	inline hw_uint<16> peek_32() {
		return f10;
	}

	inline hw_uint<16> peek_59() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_60() {
		return f12;
	}

	inline hw_uint<16> peek_61() {
		return f14;
	}

	inline hw_uint<16> peek_62() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
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

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9_cache {
	// RAM Box: {[0, 29], [0, 29], [2, 2]}
	// Capacity: 63
	// # of read delays: 9
  // 0, 1, 2, 30, 31, 32, 60, 61, 62
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 27> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 27> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_29() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_30() {
		return f6;
	}

	inline hw_uint<16> peek_31() {
		return f8;
	}

	inline hw_uint<16> peek_32() {
		return f10;
	}

	inline hw_uint<16> peek_59() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_60() {
		return f12;
	}

	inline hw_uint<16> peek_61() {
		return f14;
	}

	inline hw_uint<16> peek_62() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
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

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9_cache {
	// RAM Box: {[0, 29], [0, 29], [3, 3]}
	// Capacity: 63
	// # of read delays: 9
  // 0, 1, 2, 30, 31, 32, 60, 61, 62
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 27> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 27> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_29() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_30() {
		return f6;
	}

	inline hw_uint<16> peek_31() {
		return f8;
	}

	inline hw_uint<16> peek_32() {
		return f10;
	}

	inline hw_uint<16> peek_59() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_60() {
		return f12;
	}

	inline hw_uint<16> peek_61() {
		return f14;
	}

	inline hw_uint<16> peek_62() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
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

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9_cache {
	// RAM Box: {[0, 29], [0, 29], [0, 0]}
	// Capacity: 63
	// # of read delays: 9
  // 0, 1, 2, 30, 31, 32, 60, 61, 62
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 27> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 27> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_29() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_30() {
		return f6;
	}

	inline hw_uint<16> peek_31() {
		return f8;
	}

	inline hw_uint<16> peek_32() {
		return f10;
	}

	inline hw_uint<16> peek_59() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_60() {
		return f12;
	}

	inline hw_uint<16> peek_61() {
		return f14;
	}

	inline hw_uint<16> peek_62() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 27
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 27 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
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

struct hw_input_global_wrapper_stencil_cache {
  // # of banks: 4
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9;
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_150_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_150 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_62();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_151_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_151 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 1 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_61();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_152_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_152 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 2 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_60();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_153_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_153 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_32();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_154_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_154 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 1 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_31();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_155_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_155 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 2 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_30();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_156_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_156 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_157_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_157 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 2 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_158_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_158 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 1 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_130_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_130 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_62();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_131_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_131 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 1 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_61();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_132_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_132 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 2 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_60();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_133_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_133 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_32();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_134_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_134 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 1 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_31();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_135_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_135 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 2 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_30();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_136_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_136 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_137_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_137 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 2 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_138_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_138 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 1 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_110_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_110 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_62();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_111_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_111 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 1 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_61();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_112_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_112 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_60();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_113_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_113 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_32();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_114_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_114 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 1 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_31();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_115_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_115 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_30();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_116_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_116 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_117_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_117 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_118_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_118 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 1 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_90_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_90 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_62();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_91_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_91 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 1 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_61();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_92_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_92 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 2 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_60();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_93_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_93 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_32();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_94_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_94 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 1 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_31();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_95_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_95 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 2 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_30();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_96_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_96 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_97_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_97 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 2 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_98_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_98 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 1 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

// # of bundles = 8
// op_hcompute_dw_conv_stencil_4_read
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_150
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_151
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_152
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_153
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_154
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_155
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_156
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_157
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_158
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_150
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_151
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_152
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_153
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_154
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_155
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_156
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_157
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_158

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_150_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_150_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_150_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_151_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_151_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_151_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_152_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_152_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_152_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_153_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_153_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_153_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_154_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_154_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_154_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_155_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_155_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_155_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_156_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_156_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_156_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_157_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_157_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_157_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_158_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_158_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_158_res);
	return result;
}

// op_hcompute_dw_conv_stencil_5_read
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_130
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_131
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_132
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_133
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_134
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_135
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_136
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_137
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_138
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_130
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_131
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_132
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_133
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_134
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_135
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_136
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_137
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_138

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_130_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_130_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_130_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_131_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_131_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_131_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_132_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_132_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_132_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_133_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_133_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_133_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_134_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_134_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_134_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_135_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_135_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_135_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_136_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_136_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_136_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_137_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_137_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_137_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_138_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_138_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_138_res);
	return result;
}

// op_hcompute_dw_conv_stencil_6_read
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_110
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_111
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_112
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_113
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_114
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_115
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_116
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_117
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_118
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_110
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_111
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_112
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_113
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_114
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_115
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_116
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_117
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_118

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_110_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_110_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_110_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_111_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_111_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_111_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_112_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_112_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_112_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_113_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_113_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_113_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_114_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_114_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_114_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_115_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_115_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_115_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_116_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_116_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_116_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_117_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_117_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_117_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_118_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_118_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_118_res);
	return result;
}

// op_hcompute_dw_conv_stencil_7_read
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_90
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_91
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_92
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_93
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_94
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_95
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_96
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_97
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_98
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_90
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_91
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_92
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_93
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_94
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_95
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_96
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_97
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_98

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_90_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_90_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_90_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_91_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_91_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_91_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_92_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_92_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_92_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_93_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_93_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_93_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_94_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_94_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_94_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_95_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_95_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_95_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_96_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_96_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_96_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_97_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_97_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_97_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_98_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_98_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_98_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_1_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_1_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_res = op_hcompute_hw_input_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_2_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_2_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_res = op_hcompute_hw_input_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_3_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_3_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_res = op_hcompute_hw_input_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36_cache {
	// RAM Box: {[0, 27], [0, 27], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34_cache {
	// RAM Box: {[0, 27], [0, 27], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 0]}
	// Capacity: 56
	// # of read delays: 56
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55
	fifo<hw_uint<16>, 56> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(55 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19_cache {
	// RAM Box: {[0, 27], [0, 27], [1, 1]}
	// Capacity: 56
	// # of read delays: 56
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55
	fifo<hw_uint<16>, 56> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(55 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9_cache {
	// RAM Box: {[0, 27], [0, 27], [2, 2]}
	// Capacity: 56
	// # of read delays: 56
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55
	fifo<hw_uint<16>, 56> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(55 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct pw_conv_reduction_stencil_cache {
  // # of banks: 6
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36;
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34;
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38;
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29;
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19;
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9;
};



inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_write(hw_uint<16>& pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
  pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19.push(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31);
}

inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_write(hw_uint<16>& pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
  pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9.push(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30);
}

inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_write(hw_uint<16>& pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
  pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29.push(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32);
}

inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_write(hw_uint<16>& pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38.push(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20);
}

inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_write(hw_uint<16>& pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36.push(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10);
}

inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_write(hw_uint<16>& pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34.push(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0);
}

inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36_select(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36 read pattern: { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> pw_conv_reduction_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Read schedule : { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 15] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34_select(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34 read pattern: { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> pw_conv_reduction_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi, 2] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Read schedule : { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 16] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38_select(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> pw_conv_reduction_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 17] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29_select(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> pw_conv_reduction_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 4, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29.peek(/* one reader or all rams */ (-27 + pw_conv_reduction_s1_x == 0 && 26 - pw_conv_reduction_s1_y >= 0) ? (28) : (-27 + pw_conv_reduction_s1_y == 0 && 26 - pw_conv_reduction_s1_x >= 0) ? ((27 - pw_conv_reduction_s1_x)) : (26 - pw_conv_reduction_s1_x >= 0 && 26 - pw_conv_reduction_s1_y >= 0) ? ((55 - pw_conv_reduction_s1_x)) : 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19_select(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> pw_conv_reduction_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_1[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 2, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19.peek(/* one reader or all rams */ (-27 + pw_conv_reduction_s1_x == 0 && 26 - pw_conv_reduction_s1_y >= 0) ? (28) : (-27 + pw_conv_reduction_s1_y == 0 && 26 - pw_conv_reduction_s1_x >= 0) ? ((27 - pw_conv_reduction_s1_x)) : (26 - pw_conv_reduction_s1_x >= 0 && 26 - pw_conv_reduction_s1_y >= 0) ? ((55 - pw_conv_reduction_s1_x)) : 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9_select(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> pw_conv_reduction_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_2[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 15, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9.peek(/* one reader or all rams */ (-27 + pw_conv_reduction_s1_x == 0 && 26 - pw_conv_reduction_s1_y >= 0) ? (28) : (-27 + pw_conv_reduction_s1_y == 0 && 26 - pw_conv_reduction_s1_x >= 0) ? ((27 - pw_conv_reduction_s1_x)) : (26 - pw_conv_reduction_s1_x >= 0 && 26 - pw_conv_reduction_s1_y >= 0) ? ((55 - pw_conv_reduction_s1_x)) : 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30;
  return 0;
}

// # of bundles = 12
// op_hcompute_hw_output_stencil_1_read
//	pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36
inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36_res = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36_select(pw_conv_reduction_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36_res);
	return result;
}

// op_hcompute_hw_output_stencil_2_read
//	pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34
inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34_res = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34_select(pw_conv_reduction_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34_res);
	return result;
}

// op_hcompute_hw_output_stencil_read
//	pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38
inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_read_bundle_read(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38_res = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38_select(pw_conv_reduction_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_1_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_1_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_res = op_hcompute_pw_conv_reduction_stencil_1_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_31_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_2_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_2_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_res = op_hcompute_pw_conv_reduction_stencil_2_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_30_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_3_read
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29
inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29_res = pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29_select(pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_29_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_3_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_3_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_res = op_hcompute_pw_conv_reduction_stencil_3_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_4_read
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19
inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19_res = pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19_select(pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_19_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_4_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_4_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_res = op_hcompute_pw_conv_reduction_stencil_4_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_5_read
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9
inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9_res = pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9_select(pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_9_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_5_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_5_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_res = op_hcompute_pw_conv_reduction_stencil_5_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_res = op_hcompute_pw_conv_reduction_stencil_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_32_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 10640 bits


// Operation logic
inline void op_hcompute_hw_filter_dw_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_dw_stencil_clkwrk_0, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_filter_dw_stencil_clkwrk_0
	auto hw_filter_dw_stencil_clkwrk_0_hw_filter_dw_global_wrapper_s0_y_c__hw_filter_dw_global_wrapper_s0_x_c__0_value = hw_filter_dw_stencil_clkwrk_0.read();
	auto compute_result = hcompute_hw_filter_dw_global_wrapper_stencil(hw_filter_dw_stencil_clkwrk_0_hw_filter_dw_global_wrapper_s0_y_c__hw_filter_dw_global_wrapper_s0_x_c__0_value);
	// Produce: hw_filter_dw_global_wrapper_stencil
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_dw_global_wrapper_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_dw_stencil_clkwrk_1, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_filter_dw_stencil_clkwrk_1
	auto hw_filter_dw_stencil_clkwrk_1_hw_filter_dw_global_wrapper_s0_y_c__hw_filter_dw_global_wrapper_s0_x_c__1_value = hw_filter_dw_stencil_clkwrk_1.read();
	auto compute_result = hcompute_hw_filter_dw_global_wrapper_stencil_1(hw_filter_dw_stencil_clkwrk_1_hw_filter_dw_global_wrapper_s0_y_c__hw_filter_dw_global_wrapper_s0_x_c__1_value);
	// Produce: hw_filter_dw_global_wrapper_stencil
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_dw_global_wrapper_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_dw_stencil_clkwrk_2, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_filter_dw_stencil_clkwrk_2
	auto hw_filter_dw_stencil_clkwrk_2_hw_filter_dw_global_wrapper_s0_y_c__hw_filter_dw_global_wrapper_s0_x_c__2_value = hw_filter_dw_stencil_clkwrk_2.read();
	auto compute_result = hcompute_hw_filter_dw_global_wrapper_stencil_2(hw_filter_dw_stencil_clkwrk_2_hw_filter_dw_global_wrapper_s0_y_c__hw_filter_dw_global_wrapper_s0_x_c__2_value);
	// Produce: hw_filter_dw_global_wrapper_stencil
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_dw_global_wrapper_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_dw_stencil_clkwrk_3, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_filter_dw_stencil_clkwrk_3
	auto hw_filter_dw_stencil_clkwrk_3_hw_filter_dw_global_wrapper_s0_y_c__hw_filter_dw_global_wrapper_s0_x_c__3_value = hw_filter_dw_stencil_clkwrk_3.read();
	auto compute_result = hcompute_hw_filter_dw_global_wrapper_stencil_3(hw_filter_dw_stencil_clkwrk_3_hw_filter_dw_global_wrapper_s0_y_c__hw_filter_dw_global_wrapper_s0_x_c__3_value);
	// Produce: hw_filter_dw_global_wrapper_stencil
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_16, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_16
	auto hw_input_stencil_clkwrk_16_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__0_value = hw_input_stencil_clkwrk_16.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_clkwrk_16_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__0_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_17, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_17
	auto hw_input_stencil_clkwrk_17_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__1_value = hw_input_stencil_clkwrk_17.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_1(hw_input_stencil_clkwrk_17_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__1_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_18, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_18
	auto hw_input_stencil_clkwrk_18_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__2_value = hw_input_stencil_clkwrk_18.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_2(hw_input_stencil_clkwrk_18_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__2_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_19, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_19
	auto hw_input_stencil_clkwrk_19_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__3_value = hw_input_stencil_clkwrk_19.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_3(hw_input_stencil_clkwrk_19_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__3_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_dw_conv_stencil();
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s0_y, dw_conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_1(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_dw_conv_stencil_1();
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_1_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s0_y, dw_conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_2(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_dw_conv_stencil_2();
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_2_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s0_y, dw_conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_3(dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s0_y, int dw_conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_dw_conv_stencil_3();
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_3_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s0_y, dw_conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_4(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__0_value = dw_conv_stencil_op_hcompute_dw_conv_stencil_4_read_bundle_read(dw_conv_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_dw_global_wrapper_stencil
	auto hw_filter_dw_global_wrapper_stencil_0_c__0_c__0_value = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_read_bundle_read(hw_filter_dw_global_wrapper_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__0_value = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_dw_conv_stencil_4(dw_conv_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__0_value, hw_filter_dw_global_wrapper_stencil_0_c__0_c__0_value, hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__0_value);
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_4_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_5(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__1_value = dw_conv_stencil_op_hcompute_dw_conv_stencil_5_read_bundle_read(dw_conv_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_dw_global_wrapper_stencil
	auto hw_filter_dw_global_wrapper_stencil_0_c__0_c__1_value = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_read_bundle_read(hw_filter_dw_global_wrapper_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__1_value = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_dw_conv_stencil_5(dw_conv_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__1_value, hw_filter_dw_global_wrapper_stencil_0_c__0_c__1_value, hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__1_value);
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_5_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_6(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__2_value = dw_conv_stencil_op_hcompute_dw_conv_stencil_6_read_bundle_read(dw_conv_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_dw_global_wrapper_stencil
	auto hw_filter_dw_global_wrapper_stencil_0_c__0_c__2_value = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_read_bundle_read(hw_filter_dw_global_wrapper_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__2_value = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_dw_conv_stencil_6(dw_conv_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__2_value, hw_filter_dw_global_wrapper_stencil_0_c__0_c__2_value, hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__2_value);
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_6_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_7(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__3_value = dw_conv_stencil_op_hcompute_dw_conv_stencil_7_read_bundle_read(dw_conv_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_dw_global_wrapper_stencil
	auto hw_filter_dw_global_wrapper_stencil_0_c__0_c__3_value = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_read_bundle_read(hw_filter_dw_global_wrapper_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__3_value = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_dw_conv_stencil_7(dw_conv_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__3_value, hw_filter_dw_global_wrapper_stencil_0_c__0_c__3_value, hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__3_value);
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_7_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_4, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_4
	auto hw_filter_pw_stencil_clkwrk_4_0_c__1_value = hw_filter_pw_stencil_clkwrk_4.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_1(hw_filter_pw_stencil_clkwrk_4_0_c__1_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_5, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_5
	auto hw_filter_pw_stencil_clkwrk_5_0_c__0_value = hw_filter_pw_stencil_clkwrk_5.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil(hw_filter_pw_stencil_clkwrk_5_0_c__0_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_6, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_6
	auto hw_filter_pw_stencil_clkwrk_6_0_c__2_value = hw_filter_pw_stencil_clkwrk_6.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_2(hw_filter_pw_stencil_clkwrk_6_0_c__2_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_7, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_7
	auto hw_filter_pw_stencil_clkwrk_7_1_c__0_value = hw_filter_pw_stencil_clkwrk_7.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_3(hw_filter_pw_stencil_clkwrk_7_1_c__0_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_4(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_8, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_8
	auto hw_filter_pw_stencil_clkwrk_8_1_c__1_value = hw_filter_pw_stencil_clkwrk_8.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_4(hw_filter_pw_stencil_clkwrk_8_1_c__1_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_4_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_5(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_9, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_9
	auto hw_filter_pw_stencil_clkwrk_9_1_c__2_value = hw_filter_pw_stencil_clkwrk_9.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_5(hw_filter_pw_stencil_clkwrk_9_1_c__2_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_5_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_6(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_10, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_10
	auto hw_filter_pw_stencil_clkwrk_10_2_c__0_value = hw_filter_pw_stencil_clkwrk_10.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_6(hw_filter_pw_stencil_clkwrk_10_2_c__0_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_6_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_7(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_11, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_11
	auto hw_filter_pw_stencil_clkwrk_11_2_c__1_value = hw_filter_pw_stencil_clkwrk_11.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_7(hw_filter_pw_stencil_clkwrk_11_2_c__1_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_7_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_8(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_12, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_12
	auto hw_filter_pw_stencil_clkwrk_12_2_c__2_value = hw_filter_pw_stencil_clkwrk_12.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_8(hw_filter_pw_stencil_clkwrk_12_2_c__2_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_8_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_9(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_13, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_13
	auto hw_filter_pw_stencil_clkwrk_13_3_c__0_value = hw_filter_pw_stencil_clkwrk_13.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_9(hw_filter_pw_stencil_clkwrk_13_3_c__0_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_9_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_10(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_14, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_14
	auto hw_filter_pw_stencil_clkwrk_14_3_c__1_value = hw_filter_pw_stencil_clkwrk_14.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_10(hw_filter_pw_stencil_clkwrk_14_3_c__1_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_10_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil_11(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil_clkwrk_15, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil_clkwrk_15
	auto hw_filter_pw_stencil_clkwrk_15_3_c__2_value = hw_filter_pw_stencil_clkwrk_15.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil_11(hw_filter_pw_stencil_clkwrk_15_3_c__2_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_11_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_pw_conv_reduction_stencil();
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_1(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_pw_conv_reduction_stencil_1();
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_1_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_2(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_pw_conv_reduction_stencil_2();
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_2_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_3(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(dw_conv_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_pw_global_wrapper_stencil
	auto hw_filter_pw_global_wrapper_stencil_0_c__0_value = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(hw_filter_pw_global_wrapper_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value = pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_pw_conv_reduction_stencil_3(dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value, hw_filter_pw_global_wrapper_stencil_0_c__0_value, pw_conv_reduction_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value);
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_4(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__1_value = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(dw_conv_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_pw_global_wrapper_stencil
	auto hw_filter_pw_global_wrapper_stencil_0_c__1_value = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(hw_filter_pw_global_wrapper_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__1_value = pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_pw_conv_reduction_stencil_4(dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__1_value, hw_filter_pw_global_wrapper_stencil_0_c__1_value, pw_conv_reduction_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__1_value);
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_5(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(dw_conv_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_pw_global_wrapper_stencil
	auto hw_filter_pw_global_wrapper_stencil_1_c__2_value = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(hw_filter_pw_global_wrapper_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__2_value = pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_pw_conv_reduction_stencil_5(dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value, hw_filter_pw_global_wrapper_stencil_1_c__2_value, pw_conv_reduction_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__2_value);
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_20, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__0_value = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__0_value);
	// Produce: hw_output_stencil_clkwrk_20
	hw_output_stencil_clkwrk_20.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_1(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_21, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__1_value = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_1(pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__1_value);
	// Produce: hw_output_stencil_clkwrk_21
	hw_output_stencil_clkwrk_21.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_2(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_22, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__2_value = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_2(pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__2_value);
	// Produce: hw_output_stencil_clkwrk_22
	hw_output_stencil_clkwrk_22.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mobilenet_unrolled(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_9, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_16, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_17, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_18, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_19, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_20, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_21, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_22) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mobilenet_unrolled_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  dw_conv_stencil_cache dw_conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_filter_dw_global_wrapper_stencil_cache hw_filter_dw_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_filter_pw_global_wrapper_stencil_cache hw_filter_pw_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  pw_conv_reduction_stencil_cache pw_conv_reduction_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil_11[root = 0] -> [0, 13, 0, 0]; op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27; op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_dw_conv_stencil_2[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 1, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27; op_hcompute_hw_filter_pw_global_wrapper_stencil[root = 0] -> [0, 16, 0, 0]; op_hcompute_hw_filter_pw_global_wrapper_stencil_5[root = 0] -> [0, 5, 0, 0]; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 17] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27; op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_hw_filter_pw_global_wrapper_stencil_4[root = 0] -> [0, 7, 0, 0]; op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27; op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27; op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 16] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_hw_filter_pw_global_wrapper_stencil_6[root = 0] -> [0, 10, 0, 0]; op_hcompute_dw_conv_stencil_1[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 14, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27; op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 15] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_pw_conv_reduction_stencil_1[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 2, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27; op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2; op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27; op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2; op_hcompute_hw_filter_pw_global_wrapper_stencil_7[root = 0] -> [0, 19, 0, 0]; op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2; op_hcompute_hw_filter_pw_global_wrapper_stencil_10[root = 0] -> [0, 9, 0, 0]; op_hcompute_hw_filter_pw_global_wrapper_stencil_9[root = 0] -> [0, 12, 0, 0]; op_hcompute_dw_conv_stencil_3[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 6, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27; op_hcompute_hw_filter_pw_global_wrapper_stencil_2[root = 0] -> [0, 11, 0, 0]; op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2; op_hcompute_pw_conv_reduction_stencil_2[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 15, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27; op_hcompute_hw_filter_pw_global_wrapper_stencil_8[root = 0] -> [0, 8, 0, 0]; op_hcompute_dw_conv_stencil[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 17, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27; op_hcompute_hw_filter_pw_global_wrapper_stencil_3[root = 0] -> [0, 18, 0, 0]; op_hcompute_pw_conv_reduction_stencil[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 4, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27; op_hcompute_hw_filter_pw_global_wrapper_stencil_1[root = 0] -> [0, 3, 0, 0]; op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27; op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_11[root = 0] -> [0, 13, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_11(((i3 == 0) && (i2 == 0) && (-13 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 14] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_5(((-14 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_1(((i3 == 0) && (i1 == 0) && (i0 >= 0) && (29 - i0 >= 0) && (i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_2[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 1, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27 }
// Condition for op_hcompute_dw_conv_stencil_2(((i3 == 0) && (-1 + i1 == 0) && (i0 >= 0) && (27 - i0 >= 0) && (i2 >= 0) && (27 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil[root = 0] -> [0, 16, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil(((i3 == 0) && (i2 == 0) && (-16 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_5[root = 0] -> [0, 5, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_5(((i3 == 0) && (i2 == 0) && (-5 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 17] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((-17 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 5] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
// Condition for op_hcompute_dw_conv_stencil_6(((-5 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 9] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_3(((-9 + i3 == 0) && (i1 == 0) && (i0 >= 0) && (29 - i0 >= 0) && (i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_4[root = 0] -> [0, 7, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_4(((i3 == 0) && (i2 == 0) && (-7 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 12] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_3(((-12 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> [2 + pw_conv_reduction_s1_y, 0, 2 + pw_conv_reduction_s1_x, 13] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_4(((-13 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 16] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil_2(((-16 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_6[root = 0] -> [0, 10, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_6(((i3 == 0) && (i2 == 0) && (-10 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_dw_conv_stencil_1[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 14, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27 }
// Condition for op_hcompute_dw_conv_stencil_1(((i3 == 0) && (-14 + i1 == 0) && (i0 >= 0) && (27 - i0 >= 0) && (i2 >= 0) && (27 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((-6 + i3 == 0) && (i1 == 0) && (i0 >= 0) && (29 - i0 >= 0) && (i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_2(((-4 + i3 == 0) && (i1 == 0) && (i0 >= 0) && (29 - i0 >= 0) && (i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2 + hw_output_s0_y_yi, 0, 2 + hw_output_s0_x_xi, 15] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil_1(((-15 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil_1[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 2, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_1(((i3 == 0) && (-2 + i1 == 0) && (i0 >= 0) && (27 - i0 >= 0) && (i2 >= 0) && (27 - i2 >= 0)))
//   { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
// Condition for op_hcompute_hw_filter_dw_global_wrapper_stencil_2(((-3 + i3 == 0) && (i1 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 8] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
// Condition for op_hcompute_dw_conv_stencil_4(((-8 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 10] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
// Condition for op_hcompute_hw_filter_dw_global_wrapper_stencil_3(((-10 + i3 == 0) && (i1 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_7[root = 0] -> [0, 19, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_7(((i3 == 0) && (i2 == 0) && (-19 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 7] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
// Condition for op_hcompute_hw_filter_dw_global_wrapper_stencil(((-7 + i3 == 0) && (i1 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_10[root = 0] -> [0, 9, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_10(((i3 == 0) && (i2 == 0) && (-9 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_9[root = 0] -> [0, 12, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_9(((i3 == 0) && (i2 == 0) && (-12 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_dw_conv_stencil_3[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 6, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27 }
// Condition for op_hcompute_dw_conv_stencil_3(((i3 == 0) && (-6 + i1 == 0) && (i0 >= 0) && (27 - i0 >= 0) && (i2 >= 0) && (27 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_2[root = 0] -> [0, 11, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_2(((i3 == 0) && (i2 == 0) && (-11 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> [hw_filter_dw_global_wrapper_s0_y, 0, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
// Condition for op_hcompute_hw_filter_dw_global_wrapper_stencil_1(((-1 + i3 == 0) && (i1 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil_2[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 15, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_2(((i3 == 0) && (-15 + i1 == 0) && (i0 >= 0) && (27 - i0 >= 0) && (i2 >= 0) && (27 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_8[root = 0] -> [0, 8, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_8(((i3 == 0) && (i2 == 0) && (-8 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_dw_conv_stencil[root = 0, dw_conv_s0_y, dw_conv_s0_x] -> [dw_conv_s0_y, 17, dw_conv_s0_x, 0] : 0 <= dw_conv_s0_y <= 27 and 0 <= dw_conv_s0_x <= 27 }
// Condition for op_hcompute_dw_conv_stencil(((i3 == 0) && (-17 + i1 == 0) && (i0 >= 0) && (27 - i0 >= 0) && (i2 >= 0) && (27 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_3[root = 0] -> [0, 18, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_3(((i3 == 0) && (i2 == 0) && (-18 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_pw_conv_reduction_stencil[root = 0, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x] -> [pw_conv_reduction_s0_y, 4, pw_conv_reduction_s0_x, 0] : 0 <= pw_conv_reduction_s0_y <= 27 and 0 <= pw_conv_reduction_s0_x <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil(((i3 == 0) && (-4 + i1 == 0) && (i0 >= 0) && (27 - i0 >= 0) && (i2 >= 0) && (27 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil_1[root = 0] -> [0, 3, 0, 0] }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil_1(((i3 == 0) && (i2 == 0) && (-3 + i1 == 0) && (i0 == 0)))
//   { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 11] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
// Condition for op_hcompute_dw_conv_stencil_7(((-11 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> [2 + dw_conv_s1_y, 0, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
// Condition for op_hcompute_dw_conv_stencil_5(((-2 + i3 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))

  /*
for (int c0 = 0; c0 <= 29; c0 += 1) {
  for (int c2 = 0; c2 <= 29; c2 += 1) {
    op_hcompute_hw_input_global_wrapper_stencil_1(0, c0, c2);
    if (c0 <= 2 && c2 <= 2)
      op_hcompute_hw_filter_dw_global_wrapper_stencil_1(0, c0, c2);
    if (c0 >= 2 && c2 >= 2)
      op_hcompute_dw_conv_stencil_5(0, c0 - 2, c2 - 2);
    if (c0 <= 2 && c2 <= 2)
      op_hcompute_hw_filter_dw_global_wrapper_stencil_2(0, c0, c2);
    op_hcompute_hw_input_global_wrapper_stencil_2(0, c0, c2);
    if (c0 >= 2 && c2 >= 2)
      op_hcompute_dw_conv_stencil_6(0, c0 - 2, c2 - 2);
    op_hcompute_hw_input_global_wrapper_stencil(0, c0, c2);
    if (c0 <= 2 && c2 <= 2)
      op_hcompute_hw_filter_dw_global_wrapper_stencil(0, c0, c2);
    if (c0 >= 2 && c2 >= 2)
      op_hcompute_dw_conv_stencil_4(0, c0 - 2, c2 - 2);
    op_hcompute_hw_input_global_wrapper_stencil_3(0, c0, c2);
    if (c0 <= 2 && c2 <= 2)
      op_hcompute_hw_filter_dw_global_wrapper_stencil_3(0, c0, c2);
    if (c0 >= 2 && c2 >= 2) {
      op_hcompute_dw_conv_stencil_7(0, c0 - 2, c2 - 2);
      op_hcompute_pw_conv_reduction_stencil_3(0, c0 - 2, c2 - 2);
      op_hcompute_pw_conv_reduction_stencil_4(0, c0 - 2, c2 - 2);
      op_hcompute_pw_conv_reduction_stencil_5(0, c0 - 2, c2 - 2);
      op_hcompute_hw_output_stencil_1(0, c0 - 2, c2 - 2);
      op_hcompute_hw_output_stencil_2(0, c0 - 2, c2 - 2);
      op_hcompute_hw_output_stencil(0, c0 - 2, c2 - 2);
    }
  }
  if (c0 <= 27) {
    for (int c2 = 0; c2 <= 27; c2 += 1)
      op_hcompute_dw_conv_stencil_2(0, c0, c2);
    for (int c2 = 0; c2 <= 27; c2 += 1)
      op_hcompute_pw_conv_reduction_stencil_1(0, c0, c2);
    if (c0 == 0)
      op_hcompute_hw_filter_pw_global_wrapper_stencil_1(0);
    for (int c2 = 0; c2 <= 27; c2 += 1)
      op_hcompute_pw_conv_reduction_stencil(0, c0, c2);
    if (c0 == 0)
      op_hcompute_hw_filter_pw_global_wrapper_stencil_5(0);
    for (int c2 = 0; c2 <= 27; c2 += 1)
      op_hcompute_dw_conv_stencil_3(0, c0, c2);
    if (c0 == 0) {
      op_hcompute_hw_filter_pw_global_wrapper_stencil_4(0);
      op_hcompute_hw_filter_pw_global_wrapper_stencil_8(0);
      op_hcompute_hw_filter_pw_global_wrapper_stencil_10(0);
      op_hcompute_hw_filter_pw_global_wrapper_stencil_6(0);
      op_hcompute_hw_filter_pw_global_wrapper_stencil_2(0);
      op_hcompute_hw_filter_pw_global_wrapper_stencil_9(0);
      op_hcompute_hw_filter_pw_global_wrapper_stencil_11(0);
    }
    for (int c2 = 0; c2 <= 27; c2 += 1)
      op_hcompute_dw_conv_stencil_1(0, c0, c2);
    for (int c2 = 0; c2 <= 27; c2 += 1)
      op_hcompute_pw_conv_reduction_stencil_2(0, c0, c2);
    if (c0 == 0)
      op_hcompute_hw_filter_pw_global_wrapper_stencil(0);
    for (int c2 = 0; c2 <= 27; c2 += 1)
      op_hcompute_dw_conv_stencil(0, c0, c2);
    if (c0 == 0) {
      op_hcompute_hw_filter_pw_global_wrapper_stencil_3(0);
      op_hcompute_hw_filter_pw_global_wrapper_stencil_7(0);
    }
  }
}

  */
	for (int c0 = 0; c0 <= 29; c0 += 1) {
	  for (int c2 = 0; c2 <= 29; c2 += 1) {
	    op_hcompute_hw_input_global_wrapper_stencil_1(hw_input_stencil_clkwrk_17 /* buf name */, hw_input_global_wrapper_stencil, 0, c0, c2);
	    if (c0 <= 2 && c2 <= 2)
	      op_hcompute_hw_filter_dw_global_wrapper_stencil_1(hw_filter_dw_stencil_clkwrk_1 /* buf name */, hw_filter_dw_global_wrapper_stencil, 0, c0, c2);
	    if (c0 >= 2 && c2 >= 2)
	      op_hcompute_dw_conv_stencil_5(dw_conv_stencil /* buf name */, hw_filter_dw_global_wrapper_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, 0, c0 - 2, c2 - 2);
	    if (c0 <= 2 && c2 <= 2)
	      op_hcompute_hw_filter_dw_global_wrapper_stencil_2(hw_filter_dw_stencil_clkwrk_2 /* buf name */, hw_filter_dw_global_wrapper_stencil, 0, c0, c2);
	    op_hcompute_hw_input_global_wrapper_stencil_2(hw_input_stencil_clkwrk_18 /* buf name */, hw_input_global_wrapper_stencil, 0, c0, c2);
	    if (c0 >= 2 && c2 >= 2)
	      op_hcompute_dw_conv_stencil_6(dw_conv_stencil /* buf name */, hw_filter_dw_global_wrapper_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, 0, c0 - 2, c2 - 2);
	    op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_clkwrk_16 /* buf name */, hw_input_global_wrapper_stencil, 0, c0, c2);
	    if (c0 <= 2 && c2 <= 2)
	      op_hcompute_hw_filter_dw_global_wrapper_stencil(hw_filter_dw_stencil_clkwrk_0 /* buf name */, hw_filter_dw_global_wrapper_stencil, 0, c0, c2);
	    if (c0 >= 2 && c2 >= 2)
	      op_hcompute_dw_conv_stencil_4(dw_conv_stencil /* buf name */, hw_filter_dw_global_wrapper_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, 0, c0 - 2, c2 - 2);
	    op_hcompute_hw_input_global_wrapper_stencil_3(hw_input_stencil_clkwrk_19 /* buf name */, hw_input_global_wrapper_stencil, 0, c0, c2);
	    if (c0 <= 2 && c2 <= 2)
	      op_hcompute_hw_filter_dw_global_wrapper_stencil_3(hw_filter_dw_stencil_clkwrk_3 /* buf name */, hw_filter_dw_global_wrapper_stencil, 0, c0, c2);
	    if (c0 >= 2 && c2 >= 2) {
	      op_hcompute_dw_conv_stencil_7(dw_conv_stencil /* buf name */, hw_filter_dw_global_wrapper_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, 0, c0 - 2, c2 - 2);
	      op_hcompute_pw_conv_reduction_stencil_3(dw_conv_stencil /* buf name */, hw_filter_pw_global_wrapper_stencil /* buf name */, pw_conv_reduction_stencil /* buf name */, 0, c0 - 2, c2 - 2);
	      op_hcompute_pw_conv_reduction_stencil_4(dw_conv_stencil /* buf name */, hw_filter_pw_global_wrapper_stencil /* buf name */, pw_conv_reduction_stencil /* buf name */, 0, c0 - 2, c2 - 2);
	      op_hcompute_pw_conv_reduction_stencil_5(dw_conv_stencil /* buf name */, hw_filter_pw_global_wrapper_stencil /* buf name */, pw_conv_reduction_stencil /* buf name */, 0, c0 - 2, c2 - 2);
	      op_hcompute_hw_output_stencil_1(pw_conv_reduction_stencil /* buf name */, hw_output_stencil_clkwrk_21, 0, c0 - 2, c2 - 2);
	      op_hcompute_hw_output_stencil_2(pw_conv_reduction_stencil /* buf name */, hw_output_stencil_clkwrk_22, 0, c0 - 2, c2 - 2);
	      op_hcompute_hw_output_stencil(pw_conv_reduction_stencil /* buf name */, hw_output_stencil_clkwrk_20, 0, c0 - 2, c2 - 2);
	    }
	  }
	  if (c0 <= 27) {
	    for (int c2 = 0; c2 <= 27; c2 += 1)
	      op_hcompute_dw_conv_stencil_2(dw_conv_stencil, 0, c0, c2);
	    for (int c2 = 0; c2 <= 27; c2 += 1)
	      op_hcompute_pw_conv_reduction_stencil_1(pw_conv_reduction_stencil, 0, c0, c2);
	    if (c0 == 0)
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_1(hw_filter_pw_stencil_clkwrk_4 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	    for (int c2 = 0; c2 <= 27; c2 += 1)
	      op_hcompute_pw_conv_reduction_stencil(pw_conv_reduction_stencil, 0, c0, c2);
	    if (c0 == 0)
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_5(hw_filter_pw_stencil_clkwrk_9 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	    for (int c2 = 0; c2 <= 27; c2 += 1)
	      op_hcompute_dw_conv_stencil_3(dw_conv_stencil, 0, c0, c2);
	    if (c0 == 0) {
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_4(hw_filter_pw_stencil_clkwrk_8 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_8(hw_filter_pw_stencil_clkwrk_12 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_10(hw_filter_pw_stencil_clkwrk_14 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_6(hw_filter_pw_stencil_clkwrk_10 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_2(hw_filter_pw_stencil_clkwrk_6 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_9(hw_filter_pw_stencil_clkwrk_13 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_11(hw_filter_pw_stencil_clkwrk_15 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	    }
	    for (int c2 = 0; c2 <= 27; c2 += 1)
	      op_hcompute_dw_conv_stencil_1(dw_conv_stencil, 0, c0, c2);
	    for (int c2 = 0; c2 <= 27; c2 += 1)
	      op_hcompute_pw_conv_reduction_stencil_2(pw_conv_reduction_stencil, 0, c0, c2);
	    if (c0 == 0)
	      op_hcompute_hw_filter_pw_global_wrapper_stencil(hw_filter_pw_stencil_clkwrk_5 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	    for (int c2 = 0; c2 <= 27; c2 += 1)
	      op_hcompute_dw_conv_stencil(dw_conv_stencil, 0, c0, c2);
	    if (c0 == 0) {
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_3(hw_filter_pw_stencil_clkwrk_7 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	      op_hcompute_hw_filter_pw_global_wrapper_stencil_7(hw_filter_pw_stencil_clkwrk_11 /* buf name */, hw_filter_pw_global_wrapper_stencil, 0);
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mobilenet_unrolled_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil_clkwrk_9, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_16, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_17, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_18, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_19, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_20, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_21, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_22, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mobilenet_unrolled(hw_filter_dw_stencil_clkwrk_0, hw_filter_dw_stencil_clkwrk_1, hw_filter_dw_stencil_clkwrk_2, hw_filter_dw_stencil_clkwrk_3, hw_filter_pw_stencil_clkwrk_10, hw_filter_pw_stencil_clkwrk_11, hw_filter_pw_stencil_clkwrk_12, hw_filter_pw_stencil_clkwrk_13, hw_filter_pw_stencil_clkwrk_14, hw_filter_pw_stencil_clkwrk_15, hw_filter_pw_stencil_clkwrk_4, hw_filter_pw_stencil_clkwrk_5, hw_filter_pw_stencil_clkwrk_6, hw_filter_pw_stencil_clkwrk_7, hw_filter_pw_stencil_clkwrk_8, hw_filter_pw_stencil_clkwrk_9, hw_input_stencil_clkwrk_16, hw_input_stencil_clkwrk_17, hw_input_stencil_clkwrk_18, hw_input_stencil_clkwrk_19, hw_output_stencil_clkwrk_20, hw_output_stencil_clkwrk_21, hw_output_stencil_clkwrk_22);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_filter_dw_global_wrapper_stencil[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> hw_filter_dw_stencil_clkwrk_0[hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, 0] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
const int op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_num_transfers = 9;
  // { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> hw_filter_dw_stencil_clkwrk_1[hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, 1] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
const int op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_num_transfers = 9;
  // { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> hw_filter_dw_stencil_clkwrk_2[hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, 2] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
const int op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_num_transfers = 9;
  // { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[root = 0, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x] -> hw_filter_dw_stencil_clkwrk_3[hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, 3] : 0 <= hw_filter_dw_global_wrapper_s0_y <= 2 and 0 <= hw_filter_dw_global_wrapper_s0_x <= 2 }
const int op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_num_transfers = 9;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_6[root = 0] -> hw_filter_pw_stencil_clkwrk_10[2, 0] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_7[root = 0] -> hw_filter_pw_stencil_clkwrk_11[2, 1] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_8[root = 0] -> hw_filter_pw_stencil_clkwrk_12[2, 2] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_9[root = 0] -> hw_filter_pw_stencil_clkwrk_13[3, 0] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_10[root = 0] -> hw_filter_pw_stencil_clkwrk_14[3, 1] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_11[root = 0] -> hw_filter_pw_stencil_clkwrk_15[3, 2] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_1[root = 0] -> hw_filter_pw_stencil_clkwrk_4[0, 1] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil[root = 0] -> hw_filter_pw_stencil_clkwrk_5[0, 0] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_2[root = 0] -> hw_filter_pw_stencil_clkwrk_6[0, 2] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_3[root = 0] -> hw_filter_pw_stencil_clkwrk_7[1, 0] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_4[root = 0] -> hw_filter_pw_stencil_clkwrk_8[1, 1] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil_5[root = 0] -> hw_filter_pw_stencil_clkwrk_9[1, 2] }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0_num_transfers = 1;
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_16[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_17[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 1] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_18[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 2] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_19[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 3] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil_clkwrk_20[hw_output_s0_y_yi, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil_clkwrk_21[hw_output_s0_y_yi, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_1_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil_clkwrk_22[hw_output_s0_y_yi, hw_output_s0_x_xi, 2] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_2_write_pipe0_num_transfers = 784;


extern "C" {

void mobilenet_unrolled_accel(hw_uint<16>* op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_1_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_2_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_1_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_2_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_num_transfers*size);

  mobilenet_unrolled_wrapper(op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_1_write_pipe0_channel, op_hcompute_hw_output_stencil_2_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_1_write_pipe0, op_hcompute_hw_output_stencil_1_write_pipe0_channel, op_hcompute_hw_output_stencil_1_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_2_write_pipe0, op_hcompute_hw_output_stencil_2_write_pipe0_channel, op_hcompute_hw_output_stencil_2_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mobilenet_unrolled_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_1_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_2_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_1_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_2_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mobilenet_unrolled(op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_6_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_7_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_8_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_9_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_10_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_11_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_4_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_5_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_1_write_pipe0, op_hcompute_hw_output_stencil_2_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

