#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mobilenet_unrolled_compute.h
#include "mobilenet_unrolled_compute.h"

#include "hw_classes.h"

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_merged_banks_3_cache {
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

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_merged_banks_3_cache {
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

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_merged_banks_3_cache {
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

struct dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_merged_banks_3_cache {
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
  // # of banks: 4
  dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_merged_banks_3_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_merged_banks_3;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_merged_banks_3_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_merged_banks_3;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_merged_banks_3_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_merged_banks_3;
  dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_merged_banks_3_cache dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_merged_banks_3;
};



inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_merged_banks_3.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_merged_banks_3.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_merged_banks_3.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77);
}

inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_write(hw_uint<16>& dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_merged_banks_3.push(dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57);
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_21 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_22 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_23 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 3] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_24 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_11 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_12 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 3] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_13 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_14 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_1 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_2 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_3 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 3] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4_select(dw_conv_stencil_cache& dw_conv_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_4 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> dw_conv_stencil[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77 = dw_conv_stencil.dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_merged_banks_3.peek_0();
  return value_dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77;
  return 0;
}

// # of bundles = 7
// op_hcompute_dw_conv_stencil_4_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_4_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_res = op_hcompute_dw_conv_stencil_4_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_4_117_res, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_5_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_5_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_res = op_hcompute_dw_conv_stencil_5_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_5_97_res, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_6_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_6_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_res = op_hcompute_dw_conv_stencil_6_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_6_77_res, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_7_write
//	dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57
inline void dw_conv_stencil_op_hcompute_dw_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_7_write, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_res = op_hcompute_dw_conv_stencil_7_write.extract<0, 15>();
	dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_write(dw_conv_stencil_op_hcompute_dw_conv_stencil_7_57_res, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
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

struct dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118_cache {
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

struct dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98_cache {
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

struct dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78_cache {
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

struct dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58_cache {
	// RAM Box: {[0, 27], [0, 27], [3, 3]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dw_conv_stencil_clkwrk_dsa11_cache {
  // # of banks: 4
  dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118_cache dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118;
  dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98_cache dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98;
  dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78_cache dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78;
  dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58_cache dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58;
};



inline void dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_write(hw_uint<16>& dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140, dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
  dw_conv_stencil_clkwrk_dsa11.dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118.push(dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140);
}

inline void dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_write(hw_uint<16>& dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139, dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
  dw_conv_stencil_clkwrk_dsa11.dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98.push(dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139);
}

inline void dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_write(hw_uint<16>& dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138, dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
  dw_conv_stencil_clkwrk_dsa11.dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78.push(dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138);
}

inline void dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_write(hw_uint<16>& dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137, dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
  dw_conv_stencil_clkwrk_dsa11.dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58.push(dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137);
}

inline hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118_select(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> dw_conv_stencil_clkwrk_dsa11[dw_conv_s1_y, dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 8] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140 = dw_conv_stencil_clkwrk_dsa11.dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118.peek(/* one reader or all rams */ 0);
  return value_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98_select(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> dw_conv_stencil_clkwrk_dsa11[dw_conv_s1_y, dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139 = dw_conv_stencil_clkwrk_dsa11.dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98.peek(/* one reader or all rams */ 0);
  return value_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78_select(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> dw_conv_stencil_clkwrk_dsa11[dw_conv_s1_y, dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 10] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138 = dw_conv_stencil_clkwrk_dsa11.dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78.peek(/* one reader or all rams */ 0);
  return value_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138;
  return 0;
}

inline hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58_select(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> dw_conv_stencil_clkwrk_dsa11[dw_conv_s1_y, dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_dw_conv_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 11] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137 = dw_conv_stencil_clkwrk_dsa11.dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_to_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58.peek(/* one reader or all rams */ 0);
  return value_dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137;
  return 0;
}

// # of bundles = 8
// op_hcompute_dw_conv_stencil_1_write
//	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139
inline void dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_1_write, dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_res = op_hcompute_dw_conv_stencil_1_write.extract<0, 15>();
	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_write(dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_139_res, dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s0_y, dw_conv_s0_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_2_write
//	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138
inline void dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_2_write, dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_res = op_hcompute_dw_conv_stencil_2_write.extract<0, 15>();
	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_write(dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_138_res, dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s0_y, dw_conv_s0_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_3_write
//	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137
inline void dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_3_write, dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_res = op_hcompute_dw_conv_stencil_3_write.extract<0, 15>();
	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_write(dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_137_res, dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s0_y, dw_conv_s0_x, dynamic_address);
}

// op_hcompute_dw_conv_stencil_4_read
//	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118
inline hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_read_bundle_read(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118

	hw_uint<16> result;
	hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118_res = dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118_select(dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 16>(result, dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_118_res);
	return result;
}

// op_hcompute_dw_conv_stencil_5_read
//	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98
inline hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_read_bundle_read(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98

	hw_uint<16> result;
	hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98_res = dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98_select(dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 16>(result, dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_98_res);
	return result;
}

// op_hcompute_dw_conv_stencil_6_read
//	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78
inline hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_read_bundle_read(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78

	hw_uint<16> result;
	hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78_res = dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78_select(dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 16>(result, dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_78_res);
	return result;
}

// op_hcompute_dw_conv_stencil_7_read
//	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58
inline hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_read_bundle_read(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58

	hw_uint<16> result;
	hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58_res = dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58_select(dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 16>(result, dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_58_res);
	return result;
}

// op_hcompute_dw_conv_stencil_write
//	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140
inline void dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_dw_conv_stencil_write, dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x, int dynamic_address) {
	hw_uint<16> dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_res = op_hcompute_dw_conv_stencil_write.extract<0, 15>();
	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_write(dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_140_res, dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s0_y, dw_conv_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9_cache {
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

struct hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9_cache {
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

struct hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9_cache {
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

struct hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9_cache {
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
  hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9_cache hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9;
  hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9_cache hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9;
  hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9_cache hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9;
  hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9_cache hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9;
};



inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_write(hw_uint<16>& hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
  hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.push(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53);
}

inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_write(hw_uint<16>& hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
  hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.push(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51);
}

inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_write(hw_uint<16>& hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
  hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.push(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49);
}

inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_write(hw_uint<16>& hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
  hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.push(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55);
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_119_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_119 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 0, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_8();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_120_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_120 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 1, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_7();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_121_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_121 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 2, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_6();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_122_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_122 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 0, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_5();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_123_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_123 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 1, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_4();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_124_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_124 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 2, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_3();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_125_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_125 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 0, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_2();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_126_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_126 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 2, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_0();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_127_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_127 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 1, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_merged_banks_9.peek_1();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_100_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_100 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 1, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_7();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_101_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_101 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 2, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_6();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_102_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_102 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 0, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_5();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_103_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_103 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 1, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_4();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_104_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_104 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 2, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_3();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_105_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_105 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 0, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_2();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_106_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_106 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 2, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_0();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_107_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_107 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 1, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_1();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_99_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_99 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 0, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_merged_banks_9.peek_8();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_79_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_79 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 0, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_8();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_80_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_80 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 1, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_7();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_81_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_81 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 2, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_6();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_82_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_82 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 0, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_5();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_83_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_83 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 1, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_4();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_84_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_84 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 2, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_3();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_85_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_85 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 0, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_2();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_86_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_86 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 2, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_0();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_87_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_87 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 1, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_merged_banks_9.peek_1();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_59_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_59 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 0, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_8();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_60_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_60 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 1, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_7();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_61_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_61 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[0, 2, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_6();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_62_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_62 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 0, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_5();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_63_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_63 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 1, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_4();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_64_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_64 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[1, 2, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_3();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_65_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_65 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 0, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_2();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_66_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_66 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 2, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_0();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

inline hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_67_select(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_67 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_filter_dw_global_wrapper_stencil[2, 1, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
  auto value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49 = hw_filter_dw_global_wrapper_stencil.hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_merged_banks_9.peek_1();
  return value_hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49;
  return 0;
}

// # of bundles = 8
// op_hcompute_dw_conv_stencil_4_read
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_119
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_120
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_121
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_122
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_123
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_124
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_125
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_126
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_127
inline hw_uint<144> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_read_bundle_read(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_119
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_120
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_121
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_122
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_123
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_124
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_125
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_126
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_127

	hw_uint<144> result;
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_119_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_119_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_119_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_120_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_120_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_120_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_121_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_121_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_121_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_122_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_122_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_122_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_123_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_123_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_123_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_124_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_124_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_124_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_125_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_125_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_125_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_126_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_126_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_126_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_127_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_127_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_127_res);
	return result;
}

// op_hcompute_dw_conv_stencil_5_read
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_99
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_100
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_101
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_102
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_103
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_104
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_105
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_106
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_107
inline hw_uint<144> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_read_bundle_read(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_99
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_100
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_101
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_102
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_103
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_104
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_105
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_106
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_107

	hw_uint<144> result;
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_99_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_99_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_99_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_100_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_100_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_100_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_101_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_101_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_101_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_102_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_102_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_102_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_103_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_103_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_103_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_104_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_104_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_104_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_105_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_105_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_105_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_106_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_106_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_106_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_107_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_107_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_107_res);
	return result;
}

// op_hcompute_dw_conv_stencil_6_read
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_79
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_80
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_81
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_82
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_83
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_84
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_85
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_86
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_87
inline hw_uint<144> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_read_bundle_read(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_79
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_80
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_81
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_82
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_83
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_84
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_85
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_86
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_87

	hw_uint<144> result;
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_79_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_79_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_79_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_80_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_80_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_80_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_81_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_81_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_81_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_82_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_82_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_82_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_83_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_83_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_83_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_84_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_84_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_84_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_85_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_85_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_85_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_86_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_86_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_86_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_87_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_87_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_87_res);
	return result;
}

// op_hcompute_dw_conv_stencil_7_read
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_59
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_60
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_61
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_62
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_63
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_64
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_65
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_66
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_67
inline hw_uint<144> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_read_bundle_read(hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_59
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_60
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_61
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_62
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_63
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_64
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_65
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_66
    // hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_67

	hw_uint<144> result;
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_59_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_59_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_59_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_60_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_60_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_60_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_61_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_61_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_61_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_62_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_62_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_62_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_63_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_63_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_63_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_64_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_64_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_64_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_65_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_65_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_65_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_66_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_66_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_66_res);
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_67_res = hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_67_select(hw_filter_dw_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_filter_dw_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_67_res);
	return result;
}

// op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53
inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_res = op_hcompute_hw_filter_dw_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_write(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_1_53_res, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51
inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_res = op_hcompute_hw_filter_dw_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_write(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_2_51_res, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49
inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_res = op_hcompute_hw_filter_dw_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_write(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_3_49_res, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_filter_dw_global_wrapper_stencil_write
//	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55
inline void hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_dw_global_wrapper_stencil_write, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, int root, int hw_filter_dw_global_wrapper_s0_y, int hw_filter_dw_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_res = op_hcompute_hw_filter_dw_global_wrapper_stencil_write.extract<0, 15>();
	hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_write(hw_filter_dw_global_wrapper_stencil_op_hcompute_hw_filter_dw_global_wrapper_stencil_55_res, hw_filter_dw_global_wrapper_stencil, root, hw_filter_dw_global_wrapper_s0_y, hw_filter_dw_global_wrapper_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12_cache {
	// RAM Box: {[0, 3], [0, 2]}
	// Capacity: 12
	// # of read delays: 12
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	hw_uint<16> f18;
	hw_uint<16> f20;
	hw_uint<16> f22;


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

	inline hw_uint<16> peek_9() {
		return f18;
	}

	inline hw_uint<16> peek_10() {
		return f20;
	}

	inline hw_uint<16> peek_11() {
		return f22;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
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

struct hw_filter_pw_global_wrapper_stencil_cache {
  // # of banks: 1
  hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12_cache hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12;
};



inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_write(hw_uint<16>& hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int hw_filter_pw_global_wrapper_s0_c, int hw_filter_pw_global_wrapper_s0_k, int dynamic_address) {
  hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.push(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47);
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_25 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[0, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_11();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_26 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[1, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_8();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_27 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[3, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_2();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_28 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[2, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_5();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_15 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[0, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_10();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_16 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[1, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_7();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_17 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[3, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_1();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_18 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[2, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_4();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_5 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[1, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_6();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_6 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[3, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_0();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_7 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[2, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_3();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

inline hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8_select(hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_8 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> hw_filter_pw_global_wrapper_stencil[0, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
  auto value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47 = hw_filter_pw_global_wrapper_stencil.hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_merged_banks_12.peek_9();
  return value_hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47;
  return 0;
}

// # of bundles = 4
// op_hcompute_hw_filter_pw_global_wrapper_stencil_write
//	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47
inline void hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_filter_pw_global_wrapper_stencil_write, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int hw_filter_pw_global_wrapper_s0_c, int hw_filter_pw_global_wrapper_s0_k, int dynamic_address) {
	hw_uint<16> hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_res = op_hcompute_hw_filter_pw_global_wrapper_stencil_write.extract<0, 15>();
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_write(hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_47_res, hw_filter_pw_global_wrapper_stencil, root, hw_filter_pw_global_wrapper_s0_c, hw_filter_pw_global_wrapper_s0_k, dynamic_address);
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

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_128_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_128 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_62();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_129_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_129 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 1 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_61();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_130_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_130 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 2 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_60();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_131_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_131 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_32();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_132_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_132 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 1 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_31();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_133_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_133 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 2 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_30();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_134_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_134 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_135_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_135 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 2 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_136_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_136 read pattern: { op_hcompute_dw_conv_stencil_4[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 1 + dw_conv_s1_x, 0] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_45;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_108_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_108 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_62();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_109_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_109 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 1 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_61();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_110_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_110 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 2 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_60();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_111_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_111 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_32();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_112_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_112 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 1 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_31();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_113_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_113 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 2 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_30();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_114_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_114 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_115_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_115 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 2 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_116_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_116 read pattern: { op_hcompute_dw_conv_stencil_5[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 1 + dw_conv_s1_x, 1] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_43;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_88_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_88 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_62();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_89_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_89 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 1 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_61();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_90_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_90 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_60();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_91_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_91 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_32();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_92_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_92 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 1 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_31();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_93_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_93 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_30();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_94_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_94 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_95_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_95 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 2 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_96_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_96 read pattern: { op_hcompute_dw_conv_stencil_6[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 1 + dw_conv_s1_x, 2] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_41;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_68_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_68 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_62();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_69_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_69 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 1 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_61();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_70_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_70 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[dw_conv_s1_y, 2 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_60();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_71_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_71 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_32();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_72_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_72 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 1 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_31();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_73_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_73 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[1 + dw_conv_s1_y, 2 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_30();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_74_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_74 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_75_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_75 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 2 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_76_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_76 read pattern: { op_hcompute_dw_conv_stencil_7[root = 0, dw_conv_s1_y, dw_conv_s1_x] -> hw_input_global_wrapper_stencil[2 + dw_conv_s1_y, 1 + dw_conv_s1_x, 3] : 0 <= dw_conv_s1_y <= 27 and 0 <= dw_conv_s1_x <= 27 }
  // Read schedule : { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_39;
  return 0;
}

// # of bundles = 8
// op_hcompute_dw_conv_stencil_4_read
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_128
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_129
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_130
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_131
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_132
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_133
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_134
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_135
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_136
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_128
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_129
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_130
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_131
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_132
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_133
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_134
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_135
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_136

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_128_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_128_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_128_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_129_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_129_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_129_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_130_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_130_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_130_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_131_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_131_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_131_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_132_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_132_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_132_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_133_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_133_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_133_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_134_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_134_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_134_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_135_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_135_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_135_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_136_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_136_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_4_136_res);
	return result;
}

// op_hcompute_dw_conv_stencil_5_read
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_108
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_109
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_110
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_111
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_112
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_113
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_114
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_115
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_116
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_108
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_109
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_110
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_111
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_112
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_113
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_114
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_115
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_116

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_108_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_108_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_108_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_109_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_109_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_109_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_110_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_110_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_110_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_111_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_111_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_111_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_112_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_112_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_112_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_113_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_113_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_113_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_114_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_114_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_114_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_115_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_115_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_115_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_116_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_116_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_5_116_res);
	return result;
}

// op_hcompute_dw_conv_stencil_6_read
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_88
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_89
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_90
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_91
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_92
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_93
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_94
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_95
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_96
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_88
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_89
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_90
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_91
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_92
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_93
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_94
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_95
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_96

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_88_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_88_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_88_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_89_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_89_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_89_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_90_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_90_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_90_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_91_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_91_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_91_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_92_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_92_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_92_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_93_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_93_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_93_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_94_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_94_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_94_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_95_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_95_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_95_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_96_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_96_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_6_96_res);
	return result;
}

// op_hcompute_dw_conv_stencil_7_read
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_68
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_69
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_70
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_71
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_72
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_73
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_74
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_75
//	hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_76
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_68
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_69
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_70
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_71
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_72
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_73
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_74
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_75
    // hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_76

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_68_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_68_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_68_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_69_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_69_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_69_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_70_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_70_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_70_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_71_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_71_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_71_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_72_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_72_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_72_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_73_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_73_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_73_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_74_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_74_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_74_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_75_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_75_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_75_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_76_res = hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_76_select(hw_input_global_wrapper_stencil, root, dw_conv_s1_y, dw_conv_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_dw_conv_stencil_7_76_res);
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

struct pw_conv_reduction_stencil_cache {
  // # of banks: 3
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36;
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34;
  pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38_cache pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38;
};



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
  // Read schedule : { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 24] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_36.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34_select(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34 read pattern: { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> pw_conv_reduction_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi, 2] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Read schedule : { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 25] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_34.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38_select(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> pw_conv_reduction_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 23] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20 = pw_conv_reduction_stencil.pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_to_pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_38.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20;
  return 0;
}

// # of bundles = 6
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

// op_hcompute_pw_conv_reduction_stencil_3_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_3_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_res = op_hcompute_pw_conv_reduction_stencil_3_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_20_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_4_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_4_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_res = op_hcompute_pw_conv_reduction_stencil_4_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_10_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_5_write
//	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0
inline void pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_5_write, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_res = op_hcompute_pw_conv_reduction_stencil_5_write.extract<0, 15>();
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_write(pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_0_res, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
}

#include "hw_classes.h"

struct pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29_cache {
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

struct pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19_cache {
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

struct pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9_cache {
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

struct pw_conv_reduction_stencil_clkwrk_dsa12_cache {
  // # of banks: 3
  pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29_cache pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29;
  pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19_cache pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19;
  pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9_cache pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9;
};



inline void pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_write(hw_uint<16>& pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
  pw_conv_reduction_stencil_clkwrk_dsa12.pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19.push(pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31);
}

inline void pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_write(hw_uint<16>& pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
  pw_conv_reduction_stencil_clkwrk_dsa12.pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9.push(pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30);
}

inline void pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_write(hw_uint<16>& pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
  pw_conv_reduction_stencil_clkwrk_dsa12.pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29.push(pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32);
}

inline hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29_select(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29 read pattern: { op_hcompute_pw_conv_reduction_stencil_3[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> pw_conv_reduction_stencil_clkwrk_dsa12[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 17] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32 = pw_conv_reduction_stencil_clkwrk_dsa12.pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19_select(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19 read pattern: { op_hcompute_pw_conv_reduction_stencil_4[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> pw_conv_reduction_stencil_clkwrk_dsa12[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 1] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 18] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31 = pw_conv_reduction_stencil_clkwrk_dsa12.pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31;
  return 0;
}

inline hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9_select(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9 read pattern: { op_hcompute_pw_conv_reduction_stencil_5[root = 0, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x] -> pw_conv_reduction_stencil_clkwrk_dsa12[pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 2] : 0 <= pw_conv_reduction_s1_y <= 27 and 0 <= pw_conv_reduction_s1_x <= 27 }
  // Read schedule : { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  // Write schedule: { op_hcompute_pw_conv_reduction_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 19] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
  auto value_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30 = pw_conv_reduction_stencil_clkwrk_dsa12.pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_to_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9.peek(/* one reader or all rams */ 0);
  return value_pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30;
  return 0;
}

// # of bundles = 6
// op_hcompute_pw_conv_reduction_stencil_1_write
//	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31
inline void pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_1_write, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_res = op_hcompute_pw_conv_reduction_stencil_1_write.extract<0, 15>();
	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_write(pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_31_res, pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_2_write
//	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30
inline void pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_2_write, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_res = op_hcompute_pw_conv_reduction_stencil_2_write.extract<0, 15>();
	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_write(pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_30_res, pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, dynamic_address);
}

// op_hcompute_pw_conv_reduction_stencil_3_read
//	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29
inline hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29_res = pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29_select(pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_29_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_4_read
//	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19
inline hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19_res = pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19_select(pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_19_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_5_read
//	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9
inline hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9

	hw_uint<16> result;
	hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9_res = pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9_select(pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, dynamic_address);
	set_at<0, 16>(result, pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_9_res);
	return result;
}

// op_hcompute_pw_conv_reduction_stencil_write
//	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32
inline void pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_write_bundle_write(hw_uint<16>& op_hcompute_pw_conv_reduction_stencil_write, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x, int dynamic_address) {
	hw_uint<16> pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_res = op_hcompute_pw_conv_reduction_stencil_write.extract<0, 15>();
	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_write(pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_32_res, pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 4656 bits


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

inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_4, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_4
	auto hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__0_value = hw_input_stencil_clkwrk_4.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__0_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_5, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_5
	auto hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__1_value = hw_input_stencil_clkwrk_5.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_1(hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__1_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_6, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_6
	auto hw_input_stencil_clkwrk_6_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__2_value = hw_input_stencil_clkwrk_6.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_2(hw_input_stencil_clkwrk_6_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__2_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_7, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_7
	auto hw_input_stencil_clkwrk_7_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__3_value = hw_input_stencil_clkwrk_7.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_3(hw_input_stencil_clkwrk_7_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__3_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_dw_conv_stencil();
	// Produce: dw_conv_stencil_clkwrk_dsa11
	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_write_bundle_write(/* arg names */compute_result, dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s0_y, dw_conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_1(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_dw_conv_stencil_1();
	// Produce: dw_conv_stencil_clkwrk_dsa11
	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_1_write_bundle_write(/* arg names */compute_result, dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s0_y, dw_conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_2(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_dw_conv_stencil_2();
	// Produce: dw_conv_stencil_clkwrk_dsa11
	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_2_write_bundle_write(/* arg names */compute_result, dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s0_y, dw_conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_3(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, int root, int dw_conv_s0_y, int dw_conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_dw_conv_stencil_3();
	// Produce: dw_conv_stencil_clkwrk_dsa11
	dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_3_write_bundle_write(/* arg names */compute_result, dw_conv_stencil_clkwrk_dsa11, root, dw_conv_s0_y, dw_conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_4(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil_clkwrk_dsa11
	auto dw_conv_stencil_clkwrk_dsa11_dw_conv_s1_y_c__dw_conv_s1_x_c__0_value = dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_4_read_bundle_read(dw_conv_stencil_clkwrk_dsa11/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

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

	auto compute_result = hcompute_dw_conv_stencil_4(dw_conv_stencil_clkwrk_dsa11_dw_conv_s1_y_c__dw_conv_s1_x_c__0_value, hw_filter_dw_global_wrapper_stencil_0_c__0_c__0_value, hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__0_value);
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_4_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_5(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil_clkwrk_dsa11
	auto dw_conv_stencil_clkwrk_dsa11_dw_conv_s1_y_c__dw_conv_s1_x_c__1_value = dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_5_read_bundle_read(dw_conv_stencil_clkwrk_dsa11/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

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

	auto compute_result = hcompute_dw_conv_stencil_5(dw_conv_stencil_clkwrk_dsa11_dw_conv_s1_y_c__dw_conv_s1_x_c__1_value, hw_filter_dw_global_wrapper_stencil_0_c__0_c__1_value, hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__1_value);
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_5_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_6(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil_clkwrk_dsa11
	auto dw_conv_stencil_clkwrk_dsa11_dw_conv_s1_y_c__dw_conv_s1_x_c__2_value = dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_6_read_bundle_read(dw_conv_stencil_clkwrk_dsa11/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

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

	auto compute_result = hcompute_dw_conv_stencil_6(dw_conv_stencil_clkwrk_dsa11_dw_conv_s1_y_c__dw_conv_s1_x_c__2_value, hw_filter_dw_global_wrapper_stencil_0_c__0_c__2_value, hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__2_value);
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_6_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_dw_conv_stencil_7(dw_conv_stencil_clkwrk_dsa11_cache& dw_conv_stencil_clkwrk_dsa11, hw_filter_dw_global_wrapper_stencil_cache& hw_filter_dw_global_wrapper_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, dw_conv_stencil_cache& dw_conv_stencil, int root, int dw_conv_s1_y, int dw_conv_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil_clkwrk_dsa11
	auto dw_conv_stencil_clkwrk_dsa11_dw_conv_s1_y_c__dw_conv_s1_x_c__3_value = dw_conv_stencil_clkwrk_dsa11_op_hcompute_dw_conv_stencil_7_read_bundle_read(dw_conv_stencil_clkwrk_dsa11/* source_delay */, root, dw_conv_s1_y, dw_conv_s1_x, 0);

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

	auto compute_result = hcompute_dw_conv_stencil_7(dw_conv_stencil_clkwrk_dsa11_dw_conv_s1_y_c__dw_conv_s1_x_c__3_value, hw_filter_dw_global_wrapper_stencil_0_c__0_c__3_value, hw_input_global_wrapper_stencil_dw_conv_s1_y_c__dw_conv_s1_x_c__3_value);
	// Produce: dw_conv_stencil
	dw_conv_stencil_op_hcompute_dw_conv_stencil_7_write_bundle_write(/* arg names */compute_result, dw_conv_stencil, root, dw_conv_s1_y, dw_conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_filter_pw_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_filter_pw_stencil, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, int root, int hw_filter_pw_global_wrapper_s0_c, int hw_filter_pw_global_wrapper_s0_k) {
  // Dynamic address computation

	// Consume: hw_filter_pw_stencil
	auto hw_filter_pw_stencil_hw_filter_pw_global_wrapper_s0_c_c__hw_filter_pw_global_wrapper_s0_k_value = hw_filter_pw_stencil.read();
	auto compute_result = hcompute_hw_filter_pw_global_wrapper_stencil(hw_filter_pw_stencil_hw_filter_pw_global_wrapper_s0_c_c__hw_filter_pw_global_wrapper_s0_k_value);
	// Produce: hw_filter_pw_global_wrapper_stencil
	hw_filter_pw_global_wrapper_stencil_op_hcompute_hw_filter_pw_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_filter_pw_global_wrapper_stencil, root, hw_filter_pw_global_wrapper_s0_c, hw_filter_pw_global_wrapper_s0_k, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_pw_conv_reduction_stencil();
	// Produce: pw_conv_reduction_stencil_clkwrk_dsa12
	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_1(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_pw_conv_reduction_stencil_1();
	// Produce: pw_conv_reduction_stencil_clkwrk_dsa12
	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_1_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_2(pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, int root, int pw_conv_reduction_s0_y, int pw_conv_reduction_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_pw_conv_reduction_stencil_2();
	// Produce: pw_conv_reduction_stencil_clkwrk_dsa12
	pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_2_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil_clkwrk_dsa12, root, pw_conv_reduction_s0_y, pw_conv_reduction_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_3(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(dw_conv_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_pw_global_wrapper_stencil
	auto hw_filter_pw_global_wrapper_stencil_0_c__0_value = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(hw_filter_pw_global_wrapper_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: pw_conv_reduction_stencil_clkwrk_dsa12
	auto pw_conv_reduction_stencil_clkwrk_dsa12_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value = pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_3_read_bundle_read(pw_conv_reduction_stencil_clkwrk_dsa12/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_pw_conv_reduction_stencil_3(dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value, hw_filter_pw_global_wrapper_stencil_0_c__0_value, pw_conv_reduction_stencil_clkwrk_dsa12_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value);
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_3_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_4(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__1_value = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(dw_conv_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_pw_global_wrapper_stencil
	auto hw_filter_pw_global_wrapper_stencil_0_c__1_value = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(hw_filter_pw_global_wrapper_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: pw_conv_reduction_stencil_clkwrk_dsa12
	auto pw_conv_reduction_stencil_clkwrk_dsa12_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__1_value = pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_4_read_bundle_read(pw_conv_reduction_stencil_clkwrk_dsa12/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_pw_conv_reduction_stencil_4(dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__1_value, hw_filter_pw_global_wrapper_stencil_0_c__1_value, pw_conv_reduction_stencil_clkwrk_dsa12_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__1_value);
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_4_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_pw_conv_reduction_stencil_5(dw_conv_stencil_cache& dw_conv_stencil, hw_filter_pw_global_wrapper_stencil_cache& hw_filter_pw_global_wrapper_stencil, pw_conv_reduction_stencil_clkwrk_dsa12_cache& pw_conv_reduction_stencil_clkwrk_dsa12, pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, int root, int pw_conv_reduction_s1_y, int pw_conv_reduction_s1_x) {
  // Dynamic address computation

	// Consume: dw_conv_stencil
	auto dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value = dw_conv_stencil_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(dw_conv_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_filter_pw_global_wrapper_stencil
	auto hw_filter_pw_global_wrapper_stencil_1_c__2_value = hw_filter_pw_global_wrapper_stencil_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(hw_filter_pw_global_wrapper_stencil/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: pw_conv_reduction_stencil_clkwrk_dsa12
	auto pw_conv_reduction_stencil_clkwrk_dsa12_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__2_value = pw_conv_reduction_stencil_clkwrk_dsa12_op_hcompute_pw_conv_reduction_stencil_5_read_bundle_read(pw_conv_reduction_stencil_clkwrk_dsa12/* source_delay */, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_pw_conv_reduction_stencil_5(dw_conv_stencil_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__0_value, hw_filter_pw_global_wrapper_stencil_1_c__2_value, pw_conv_reduction_stencil_clkwrk_dsa12_pw_conv_reduction_s1_y_c__pw_conv_reduction_s1_x_c__2_value);
	// Produce: pw_conv_reduction_stencil
	pw_conv_reduction_stencil_op_hcompute_pw_conv_reduction_stencil_5_write_bundle_write(/* arg names */compute_result, pw_conv_reduction_stencil, root, pw_conv_reduction_s1_y, pw_conv_reduction_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_8, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__0_value = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__0_value);
	// Produce: hw_output_stencil_clkwrk_8
	hw_output_stencil_clkwrk_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_1(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_9, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__1_value = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_1(pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__1_value);
	// Produce: hw_output_stencil_clkwrk_9
	hw_output_stencil_clkwrk_9.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_2(pw_conv_reduction_stencil_cache& pw_conv_reduction_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_10, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: pw_conv_reduction_stencil
	auto pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__2_value = pw_conv_reduction_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(pw_conv_reduction_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_2(pw_conv_reduction_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__2_value);
	// Produce: hw_output_stencil_clkwrk_10
	hw_output_stencil_clkwrk_10.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mobilenet_unrolled(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_9) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mobilenet_unrolled_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  dw_conv_stencil_cache dw_conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dw_conv_stencil_clkwrk_dsa11_cache dw_conv_stencil_clkwrk_dsa11;
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
  pw_conv_reduction_stencil_clkwrk_dsa12_cache pw_conv_reduction_stencil_clkwrk_dsa12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_dw_conv_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 10] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29; op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 23] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29; op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_dw_conv_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 25] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29; op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29; op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 24] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2; op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_pw_conv_reduction_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 18] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2; op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2; op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2; op_hcompute_dw_conv_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 11] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_dw_conv_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 8] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2; op_hcompute_pw_conv_reduction_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 19] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_pw_conv_reduction_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 17] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27; op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
//   { op_hcompute_dw_conv_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 10] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_dw_conv_stencil_2(((-10 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_1(((-5 + i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 22] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_5(((-22 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 23] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_hw_output_stencil(((-23 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_6[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 14] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_dw_conv_stencil_6(((-14 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 7] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_3(((-7 + i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 20] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_3(((-20 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 21] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_4(((-21 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_dw_conv_stencil_1(((-9 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 25] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_hw_output_stencil_2(((-25 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 4] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((-4 + i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 0 <= d1 <= 29 and 0 <= d2 <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_2(((-6 + i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (30 - i1 >= 0) && (i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 24] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_hw_output_stencil_1(((-24 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_filter_dw_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 2] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
// Condition for op_hcompute_hw_filter_dw_global_wrapper_stencil_2(((-2 + i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (3 - i1 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_4[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 12] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_dw_conv_stencil_4(((-12 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 18] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_1(((-18 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_filter_dw_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 3] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
// Condition for op_hcompute_hw_filter_dw_global_wrapper_stencil_3(((-3 + i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (3 - i1 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_hw_filter_dw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 0] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
// Condition for op_hcompute_hw_filter_dw_global_wrapper_stencil(((i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (3 - i1 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_hw_filter_pw_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 16] : 0 <= d1 <= 3 and 0 <= d2 <= 2 }
// Condition for op_hcompute_hw_filter_pw_global_wrapper_stencil(((-16 + i3 == 0) && (i0 == 0) && (i1 >= 0) && (3 - i1 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_3[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 11] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_dw_conv_stencil_3(((-11 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 8] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_dw_conv_stencil(((-8 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_hw_filter_dw_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 2 and 0 <= d2 <= 2 }
// Condition for op_hcompute_hw_filter_dw_global_wrapper_stencil_1(((-1 + i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (3 - i1 >= 0) && (i2 >= 0) && (2 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 19] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil_2(((-19 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_pw_conv_reduction_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 17] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_pw_conv_reduction_stencil(((-17 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_7[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 15] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_dw_conv_stencil_7(((-15 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))
//   { op_hcompute_dw_conv_stencil_5[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 13] : 0 <= d1 <= 27 and 0 <= d2 <= 27 }
// Condition for op_hcompute_dw_conv_stencil_5(((-13 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (30 - i1 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0)))

  /*
for (int c1 = 0; c1 <= 30; c1 += 1) {
  if (c1 >= 1) {
    for (int c2 = 0; c2 <= 29; c2 += 1) {
      if (c1 <= 3 && c2 <= 2) {
        op_hcompute_hw_filter_dw_global_wrapper_stencil(0, c1 - 1, c2);
        op_hcompute_hw_filter_dw_global_wrapper_stencil_1(0, c1 - 1, c2);
        op_hcompute_hw_filter_dw_global_wrapper_stencil_2(0, c1 - 1, c2);
        op_hcompute_hw_filter_dw_global_wrapper_stencil_3(0, c1 - 1, c2);
      }
      op_hcompute_hw_input_global_wrapper_stencil(0, c1 - 1, c2);
      op_hcompute_hw_input_global_wrapper_stencil_1(0, c1 - 1, c2);
      op_hcompute_hw_input_global_wrapper_stencil_2(0, c1 - 1, c2);
      op_hcompute_hw_input_global_wrapper_stencil_3(0, c1 - 1, c2);
      if (c1 >= 3 && c2 >= 2) {
        op_hcompute_dw_conv_stencil(0, c1 - 3, c2 - 2);
        op_hcompute_dw_conv_stencil_1(0, c1 - 3, c2 - 2);
        op_hcompute_dw_conv_stencil_2(0, c1 - 3, c2 - 2);
        op_hcompute_dw_conv_stencil_3(0, c1 - 3, c2 - 2);
        op_hcompute_dw_conv_stencil_4(0, c1 - 3, c2 - 2);
        op_hcompute_dw_conv_stencil_5(0, c1 - 3, c2 - 2);
        op_hcompute_dw_conv_stencil_6(0, c1 - 3, c2 - 2);
        op_hcompute_dw_conv_stencil_7(0, c1 - 3, c2 - 2);
      }
      if (c1 <= 3 && c2 <= 2)
        op_hcompute_hw_filter_pw_global_wrapper_stencil(0, c1, c2);
      if (c1 >= 3 && c2 >= 2) {
        op_hcompute_pw_conv_reduction_stencil(0, c1 - 3, c2 - 2);
        op_hcompute_pw_conv_reduction_stencil_1(0, c1 - 3, c2 - 2);
        op_hcompute_pw_conv_reduction_stencil_2(0, c1 - 3, c2 - 2);
        op_hcompute_pw_conv_reduction_stencil_3(0, c1 - 3, c2 - 2);
        op_hcompute_pw_conv_reduction_stencil_4(0, c1 - 3, c2 - 2);
        op_hcompute_pw_conv_reduction_stencil_5(0, c1 - 3, c2 - 2);
        op_hcompute_hw_output_stencil(0, c1 - 3, c2 - 2);
        op_hcompute_hw_output_stencil_1(0, c1 - 3, c2 - 2);
        op_hcompute_hw_output_stencil_2(0, c1 - 3, c2 - 2);
      }
    }
  } else {
    for (int c2 = 0; c2 <= 2; c2 += 1)
      op_hcompute_hw_filter_pw_global_wrapper_stencil(0, 0, c2);
  }
}

  */
	for (int c1 = 0; c1 <= 30; c1 += 1) {
	  if (c1 >= 1) {
	    for (int c2 = 0; c2 <= 29; c2 += 1) {
#pragma HLS pipeline II=1
	      if (c1 <= 3 && c2 <= 2) {
	        op_hcompute_hw_filter_dw_global_wrapper_stencil(hw_filter_dw_stencil_clkwrk_0 /* buf name */, hw_filter_dw_global_wrapper_stencil, 0, c1 - 1, c2);
	        op_hcompute_hw_filter_dw_global_wrapper_stencil_1(hw_filter_dw_stencil_clkwrk_1 /* buf name */, hw_filter_dw_global_wrapper_stencil, 0, c1 - 1, c2);
	        op_hcompute_hw_filter_dw_global_wrapper_stencil_2(hw_filter_dw_stencil_clkwrk_2 /* buf name */, hw_filter_dw_global_wrapper_stencil, 0, c1 - 1, c2);
	        op_hcompute_hw_filter_dw_global_wrapper_stencil_3(hw_filter_dw_stencil_clkwrk_3 /* buf name */, hw_filter_dw_global_wrapper_stencil, 0, c1 - 1, c2);
	      }
	      op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_clkwrk_4 /* buf name */, hw_input_global_wrapper_stencil, 0, c1 - 1, c2);
	      op_hcompute_hw_input_global_wrapper_stencil_1(hw_input_stencil_clkwrk_5 /* buf name */, hw_input_global_wrapper_stencil, 0, c1 - 1, c2);
	      op_hcompute_hw_input_global_wrapper_stencil_2(hw_input_stencil_clkwrk_6 /* buf name */, hw_input_global_wrapper_stencil, 0, c1 - 1, c2);
	      op_hcompute_hw_input_global_wrapper_stencil_3(hw_input_stencil_clkwrk_7 /* buf name */, hw_input_global_wrapper_stencil, 0, c1 - 1, c2);
	      if (c1 >= 3 && c2 >= 2) {
	        op_hcompute_dw_conv_stencil(dw_conv_stencil_clkwrk_dsa11, 0, c1 - 3, c2 - 2);
	        op_hcompute_dw_conv_stencil_1(dw_conv_stencil_clkwrk_dsa11, 0, c1 - 3, c2 - 2);
	        op_hcompute_dw_conv_stencil_2(dw_conv_stencil_clkwrk_dsa11, 0, c1 - 3, c2 - 2);
	        op_hcompute_dw_conv_stencil_3(dw_conv_stencil_clkwrk_dsa11, 0, c1 - 3, c2 - 2);
	        op_hcompute_dw_conv_stencil_4(dw_conv_stencil_clkwrk_dsa11 /* buf name */, hw_filter_dw_global_wrapper_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, dw_conv_stencil, 0, c1 - 3, c2 - 2);
	        op_hcompute_dw_conv_stencil_5(dw_conv_stencil_clkwrk_dsa11 /* buf name */, hw_filter_dw_global_wrapper_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, dw_conv_stencil, 0, c1 - 3, c2 - 2);
	        op_hcompute_dw_conv_stencil_6(dw_conv_stencil_clkwrk_dsa11 /* buf name */, hw_filter_dw_global_wrapper_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, dw_conv_stencil, 0, c1 - 3, c2 - 2);
	        op_hcompute_dw_conv_stencil_7(dw_conv_stencil_clkwrk_dsa11 /* buf name */, hw_filter_dw_global_wrapper_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, dw_conv_stencil, 0, c1 - 3, c2 - 2);
	      }
	      if (c1 <= 3 && c2 <= 2)
	        op_hcompute_hw_filter_pw_global_wrapper_stencil(hw_filter_pw_stencil /* buf name */, hw_filter_pw_global_wrapper_stencil, 0, c1, c2);
	      if (c1 >= 3 && c2 >= 2) {
	        op_hcompute_pw_conv_reduction_stencil(pw_conv_reduction_stencil_clkwrk_dsa12, 0, c1 - 3, c2 - 2);
	        op_hcompute_pw_conv_reduction_stencil_1(pw_conv_reduction_stencil_clkwrk_dsa12, 0, c1 - 3, c2 - 2);
	        op_hcompute_pw_conv_reduction_stencil_2(pw_conv_reduction_stencil_clkwrk_dsa12, 0, c1 - 3, c2 - 2);
	        op_hcompute_pw_conv_reduction_stencil_3(dw_conv_stencil /* buf name */, hw_filter_pw_global_wrapper_stencil /* buf name */, pw_conv_reduction_stencil_clkwrk_dsa12 /* buf name */, pw_conv_reduction_stencil, 0, c1 - 3, c2 - 2);
	        op_hcompute_pw_conv_reduction_stencil_4(dw_conv_stencil /* buf name */, hw_filter_pw_global_wrapper_stencil /* buf name */, pw_conv_reduction_stencil_clkwrk_dsa12 /* buf name */, pw_conv_reduction_stencil, 0, c1 - 3, c2 - 2);
	        op_hcompute_pw_conv_reduction_stencil_5(dw_conv_stencil /* buf name */, hw_filter_pw_global_wrapper_stencil /* buf name */, pw_conv_reduction_stencil_clkwrk_dsa12 /* buf name */, pw_conv_reduction_stencil, 0, c1 - 3, c2 - 2);
	        op_hcompute_hw_output_stencil(pw_conv_reduction_stencil /* buf name */, hw_output_stencil_clkwrk_8, 0, c1 - 3, c2 - 2);
	        op_hcompute_hw_output_stencil_1(pw_conv_reduction_stencil /* buf name */, hw_output_stencil_clkwrk_9, 0, c1 - 3, c2 - 2);
	        op_hcompute_hw_output_stencil_2(pw_conv_reduction_stencil /* buf name */, hw_output_stencil_clkwrk_10, 0, c1 - 3, c2 - 2);
	      }
	    }
	  } else {
	    for (int c2 = 0; c2 <= 2; c2 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_filter_pw_global_wrapper_stencil(hw_filter_pw_stencil /* buf name */, hw_filter_pw_global_wrapper_stencil, 0, 0, c2);
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mobilenet_unrolled_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_dw_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_filter_pw_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_9, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mobilenet_unrolled(hw_filter_dw_stencil_clkwrk_0, hw_filter_dw_stencil_clkwrk_1, hw_filter_dw_stencil_clkwrk_2, hw_filter_dw_stencil_clkwrk_3, hw_filter_pw_stencil, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_input_stencil_clkwrk_6, hw_input_stencil_clkwrk_7, hw_output_stencil_clkwrk_10, hw_output_stencil_clkwrk_8, hw_output_stencil_clkwrk_9);
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
  // { op_hcompute_hw_filter_pw_global_wrapper_stencil[root = 0, hw_filter_pw_global_wrapper_s0_c, hw_filter_pw_global_wrapper_s0_k] -> hw_filter_pw_stencil[hw_filter_pw_global_wrapper_s0_c, hw_filter_pw_global_wrapper_s0_k] : 0 <= hw_filter_pw_global_wrapper_s0_c <= 3 and 0 <= hw_filter_pw_global_wrapper_s0_k <= 2 }
const int op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_num_transfers = 12;
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_4[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_5[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 1] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_6[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 2] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_7[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 3] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil_clkwrk_10[hw_output_s0_y_yi, hw_output_s0_x_xi, 2] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_2_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil_clkwrk_8[hw_output_s0_y_yi, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil_clkwrk_9[hw_output_s0_y_yi, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_1_write_pipe0_num_transfers = 784;


extern "C" {

void mobilenet_unrolled_accel(hw_uint<16>* op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_2_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_1_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_2_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_1_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_num_transfers*size);

  mobilenet_unrolled_wrapper(op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_output_stencil_2_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_1_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_2_write_pipe0, op_hcompute_hw_output_stencil_2_write_pipe0_channel, op_hcompute_hw_output_stencil_2_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_1_write_pipe0, op_hcompute_hw_output_stencil_1_write_pipe0_channel, op_hcompute_hw_output_stencil_1_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mobilenet_unrolled_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_2_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_1_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_2_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_1_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mobilenet_unrolled(op_hcompute_hw_filter_dw_global_wrapper_stencil_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_filter_dw_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_filter_pw_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_output_stencil_2_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_1_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

