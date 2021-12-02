#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: gaussian_glb8_compute.h
#include "gaussian_glb8_compute.h"

struct blur_stencil_op_hcompute_blur_stencil_174_to_blur_stencil_op_hcompute_hw_output_stencil_15_cache {
	// RAM Box: {[0, 195], [0, 248]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_stencil_op_hcompute_blur_stencil_1_172_to_blur_stencil_op_hcompute_hw_output_stencil_1_13_cache {
	// RAM Box: {[0, 195], [1, 249]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_stencil_op_hcompute_blur_stencil_2_170_to_blur_stencil_op_hcompute_hw_output_stencil_2_11_cache {
	// RAM Box: {[0, 195], [2, 250]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_stencil_op_hcompute_blur_stencil_3_168_to_blur_stencil_op_hcompute_hw_output_stencil_3_9_cache {
	// RAM Box: {[0, 195], [3, 251]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_stencil_op_hcompute_blur_stencil_4_166_to_blur_stencil_op_hcompute_hw_output_stencil_4_7_cache {
	// RAM Box: {[0, 195], [4, 252]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_stencil_op_hcompute_blur_stencil_5_164_to_blur_stencil_op_hcompute_hw_output_stencil_5_5_cache {
	// RAM Box: {[0, 195], [5, 253]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_stencil_op_hcompute_blur_stencil_6_162_to_blur_stencil_op_hcompute_hw_output_stencil_6_3_cache {
	// RAM Box: {[0, 195], [6, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_stencil_op_hcompute_blur_stencil_7_160_to_blur_stencil_op_hcompute_hw_output_stencil_7_1_cache {
	// RAM Box: {[0, 195], [7, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 1 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 2 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_stencil_3[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 3 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_stencil_4[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 4 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_stencil_5[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 5 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_stencil_6[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 6 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_stencil_7[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 7 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // # of banks: 8
  blur_stencil_op_hcompute_blur_stencil_174_to_blur_stencil_op_hcompute_hw_output_stencil_15_cache blur_stencil_op_hcompute_blur_stencil_174_to_blur_stencil_op_hcompute_hw_output_stencil_15;
  blur_stencil_op_hcompute_blur_stencil_1_172_to_blur_stencil_op_hcompute_hw_output_stencil_1_13_cache blur_stencil_op_hcompute_blur_stencil_1_172_to_blur_stencil_op_hcompute_hw_output_stencil_1_13;
  blur_stencil_op_hcompute_blur_stencil_2_170_to_blur_stencil_op_hcompute_hw_output_stencil_2_11_cache blur_stencil_op_hcompute_blur_stencil_2_170_to_blur_stencil_op_hcompute_hw_output_stencil_2_11;
  blur_stencil_op_hcompute_blur_stencil_3_168_to_blur_stencil_op_hcompute_hw_output_stencil_3_9_cache blur_stencil_op_hcompute_blur_stencil_3_168_to_blur_stencil_op_hcompute_hw_output_stencil_3_9;
  blur_stencil_op_hcompute_blur_stencil_4_166_to_blur_stencil_op_hcompute_hw_output_stencil_4_7_cache blur_stencil_op_hcompute_blur_stencil_4_166_to_blur_stencil_op_hcompute_hw_output_stencil_4_7;
  blur_stencil_op_hcompute_blur_stencil_5_164_to_blur_stencil_op_hcompute_hw_output_stencil_5_5_cache blur_stencil_op_hcompute_blur_stencil_5_164_to_blur_stencil_op_hcompute_hw_output_stencil_5_5;
  blur_stencil_op_hcompute_blur_stencil_6_162_to_blur_stencil_op_hcompute_hw_output_stencil_6_3_cache blur_stencil_op_hcompute_blur_stencil_6_162_to_blur_stencil_op_hcompute_hw_output_stencil_6_3;
  blur_stencil_op_hcompute_blur_stencil_7_160_to_blur_stencil_op_hcompute_hw_output_stencil_7_1_cache blur_stencil_op_hcompute_blur_stencil_7_160_to_blur_stencil_op_hcompute_hw_output_stencil_7_1;
};



inline void blur_stencil_op_hcompute_blur_stencil_174_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_174, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_174_to_blur_stencil_op_hcompute_hw_output_stencil_15.push(blur_stencil_op_hcompute_blur_stencil_174);
}

inline void blur_stencil_op_hcompute_blur_stencil_1_172_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_1_172, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_1_172_to_blur_stencil_op_hcompute_hw_output_stencil_1_13.push(blur_stencil_op_hcompute_blur_stencil_1_172);
}

inline void blur_stencil_op_hcompute_blur_stencil_2_170_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_2_170, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_2_170_to_blur_stencil_op_hcompute_hw_output_stencil_2_11.push(blur_stencil_op_hcompute_blur_stencil_2_170);
}

inline void blur_stencil_op_hcompute_blur_stencil_3_168_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_3_168, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_3_168_to_blur_stencil_op_hcompute_hw_output_stencil_3_9.push(blur_stencil_op_hcompute_blur_stencil_3_168);
}

inline void blur_stencil_op_hcompute_blur_stencil_4_166_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_4_166, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_4_166_to_blur_stencil_op_hcompute_hw_output_stencil_4_7.push(blur_stencil_op_hcompute_blur_stencil_4_166);
}

inline void blur_stencil_op_hcompute_blur_stencil_5_164_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_5_164, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_5_164_to_blur_stencil_op_hcompute_hw_output_stencil_5_5.push(blur_stencil_op_hcompute_blur_stencil_5_164);
}

inline void blur_stencil_op_hcompute_blur_stencil_6_162_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_6_162, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_6_162_to_blur_stencil_op_hcompute_hw_output_stencil_6_3.push(blur_stencil_op_hcompute_blur_stencil_6_162);
}

inline void blur_stencil_op_hcompute_blur_stencil_7_160_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_7_160, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_7_160_to_blur_stencil_op_hcompute_hw_output_stencil_7_1.push(blur_stencil_op_hcompute_blur_stencil_7_160);
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_15_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_15 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 40] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 32] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_stencil_op_hcompute_blur_stencil_174 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_174_to_blur_stencil_op_hcompute_hw_output_stencil_15.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_174;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_13_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_1_13 read pattern: { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 1 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 41] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 33] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_stencil_op_hcompute_blur_stencil_1_172 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_1_172_to_blur_stencil_op_hcompute_hw_output_stencil_1_13.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_1_172;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_2_11_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_2_11 read pattern: { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 2 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 42] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 34] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_stencil_op_hcompute_blur_stencil_2_170 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_2_170_to_blur_stencil_op_hcompute_hw_output_stencil_2_11.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_2_170;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_3_9_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_3_9 read pattern: { op_hcompute_hw_output_stencil_3[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 3 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 43] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 35] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_stencil_op_hcompute_blur_stencil_3_168 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_3_168_to_blur_stencil_op_hcompute_hw_output_stencil_3_9.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_3_168;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_4_7_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_4_7 read pattern: { op_hcompute_hw_output_stencil_4[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 4 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 44] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 36] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_stencil_op_hcompute_blur_stencil_4_166 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_4_166_to_blur_stencil_op_hcompute_hw_output_stencil_4_7.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_4_166;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_5_5_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_5_5 read pattern: { op_hcompute_hw_output_stencil_5[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 5 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 45] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 37] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_stencil_op_hcompute_blur_stencil_5_164 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_5_164_to_blur_stencil_op_hcompute_hw_output_stencil_5_5.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_5_164;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_6_3_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_6_3 read pattern: { op_hcompute_hw_output_stencil_6[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 6 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 46] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 38] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_stencil_op_hcompute_blur_stencil_6_162 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_6_162_to_blur_stencil_op_hcompute_hw_output_stencil_6_3.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_6_162;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_7_1_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_7_1 read pattern: { op_hcompute_hw_output_stencil_7[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 7 + 8hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 47] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 39] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_stencil_op_hcompute_blur_stencil_7_160 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_7_160_to_blur_stencil_op_hcompute_hw_output_stencil_7_1.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_7_160;
  return 0;
}

// # of bundles = 16
// op_hcompute_blur_stencil_1_write
//	blur_stencil_op_hcompute_blur_stencil_1_172
inline void blur_stencil_op_hcompute_blur_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_1_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_1_172_res = op_hcompute_blur_stencil_1_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_1_172_write(blur_stencil_op_hcompute_blur_stencil_1_172_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_2_write
//	blur_stencil_op_hcompute_blur_stencil_2_170
inline void blur_stencil_op_hcompute_blur_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_2_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_2_170_res = op_hcompute_blur_stencil_2_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_2_170_write(blur_stencil_op_hcompute_blur_stencil_2_170_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_3_write
//	blur_stencil_op_hcompute_blur_stencil_3_168
inline void blur_stencil_op_hcompute_blur_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_3_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_3_168_res = op_hcompute_blur_stencil_3_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_3_168_write(blur_stencil_op_hcompute_blur_stencil_3_168_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_4_write
//	blur_stencil_op_hcompute_blur_stencil_4_166
inline void blur_stencil_op_hcompute_blur_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_4_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_4_166_res = op_hcompute_blur_stencil_4_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_4_166_write(blur_stencil_op_hcompute_blur_stencil_4_166_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_5_write
//	blur_stencil_op_hcompute_blur_stencil_5_164
inline void blur_stencil_op_hcompute_blur_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_5_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_5_164_res = op_hcompute_blur_stencil_5_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_5_164_write(blur_stencil_op_hcompute_blur_stencil_5_164_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_6_write
//	blur_stencil_op_hcompute_blur_stencil_6_162
inline void blur_stencil_op_hcompute_blur_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_6_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_6_162_res = op_hcompute_blur_stencil_6_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_6_162_write(blur_stencil_op_hcompute_blur_stencil_6_162_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_7_write
//	blur_stencil_op_hcompute_blur_stencil_7_160
inline void blur_stencil_op_hcompute_blur_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_7_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_7_160_res = op_hcompute_blur_stencil_7_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_7_160_write(blur_stencil_op_hcompute_blur_stencil_7_160_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_write
//	blur_stencil_op_hcompute_blur_stencil_174
inline void blur_stencil_op_hcompute_blur_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_174_res = op_hcompute_blur_stencil_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_174_write(blur_stencil_op_hcompute_blur_stencil_174_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_1_read
//	blur_stencil_op_hcompute_hw_output_stencil_1_13
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_1_13

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_13_res = blur_stencil_op_hcompute_hw_output_stencil_1_13_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_1_13_res);
	return result;
}

// op_hcompute_hw_output_stencil_2_read
//	blur_stencil_op_hcompute_hw_output_stencil_2_11
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_2_11

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_2_11_res = blur_stencil_op_hcompute_hw_output_stencil_2_11_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_2_11_res);
	return result;
}

// op_hcompute_hw_output_stencil_3_read
//	blur_stencil_op_hcompute_hw_output_stencil_3_9
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_3_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_3_9

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_3_9_res = blur_stencil_op_hcompute_hw_output_stencil_3_9_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_3_9_res);
	return result;
}

// op_hcompute_hw_output_stencil_4_read
//	blur_stencil_op_hcompute_hw_output_stencil_4_7
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_4_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_4_7

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_4_7_res = blur_stencil_op_hcompute_hw_output_stencil_4_7_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_4_7_res);
	return result;
}

// op_hcompute_hw_output_stencil_5_read
//	blur_stencil_op_hcompute_hw_output_stencil_5_5
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_5_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_5_5

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_5_5_res = blur_stencil_op_hcompute_hw_output_stencil_5_5_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_5_5_res);
	return result;
}

// op_hcompute_hw_output_stencil_6_read
//	blur_stencil_op_hcompute_hw_output_stencil_6_3
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_6_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_6_3

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_6_3_res = blur_stencil_op_hcompute_hw_output_stencil_6_3_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_6_3_res);
	return result;
}

// op_hcompute_hw_output_stencil_7_read
//	blur_stencil_op_hcompute_hw_output_stencil_7_1
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_7_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_7_1

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_7_1_res = blur_stencil_op_hcompute_hw_output_stencil_7_1_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_7_1_res);
	return result;
}

// op_hcompute_hw_output_stencil_read
//	blur_stencil_op_hcompute_hw_output_stencil_15
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_15

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_15_res = blur_stencil_op_hcompute_hw_output_stencil_15_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_15_res);
	return result;
}

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_175_cache {
	// RAM Box: {[0, 195], [0, 248]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173_cache {
	// RAM Box: {[0, 195], [1, 249]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171_cache {
	// RAM Box: {[0, 195], [2, 250]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169_cache {
	// RAM Box: {[0, 195], [3, 251]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167_cache {
	// RAM Box: {[0, 195], [4, 252]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165_cache {
	// RAM Box: {[0, 195], [5, 253]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163_cache {
	// RAM Box: {[0, 195], [6, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161_cache {
	// RAM Box: {[0, 195], [7, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_cache {
  // Reader addrs...
    // { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
    // { op_hcompute_blur_stencil_1[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 1 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
    // { op_hcompute_blur_stencil_2[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 2 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
    // { op_hcompute_blur_stencil_3[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 3 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
    // { op_hcompute_blur_stencil_4[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 4 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
    // { op_hcompute_blur_stencil_5[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 5 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
    // { op_hcompute_blur_stencil_6[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 6 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
    // { op_hcompute_blur_stencil_7[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 7 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // # of banks: 8
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_175_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_175;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161;
};



inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_175.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64);
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_175_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_175 read pattern: { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 32] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_175.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173 read pattern: { op_hcompute_blur_stencil_1[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 1 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 33] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171 read pattern: { op_hcompute_blur_stencil_2[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 2 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 34] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169 read pattern: { op_hcompute_blur_stencil_3[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 3 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 35] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167 read pattern: { op_hcompute_blur_stencil_4[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 4 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 36] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165 read pattern: { op_hcompute_blur_stencil_5[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 5 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 37] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163 read pattern: { op_hcompute_blur_stencil_6[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 6 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 38] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161 read pattern: { op_hcompute_blur_stencil_7[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 7 + 8blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 39] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92;
  return 0;
}

// # of bundles = 16
// op_hcompute_blur_stencil_1_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_1_173_res);
	return result;
}

// op_hcompute_blur_stencil_2_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_2_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_2_171_res);
	return result;
}

// op_hcompute_blur_stencil_3_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_3_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_3_169_res);
	return result;
}

// op_hcompute_blur_stencil_4_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_4_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_4_167_res);
	return result;
}

// op_hcompute_blur_stencil_5_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_5_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_5_165_res);
	return result;
}

// op_hcompute_blur_stencil_6_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_6_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_6_163_res);
	return result;
}

// op_hcompute_blur_stencil_7_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_7_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_7_161_res);
	return result;
}

// op_hcompute_blur_stencil_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_175
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_175

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_175_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_175_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_175_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_10_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_10_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_res = op_hcompute_blur_unnormalized_stencil_10_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_147_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_11_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_11_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_res = op_hcompute_blur_unnormalized_stencil_11_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_136_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_12_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_12_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_res = op_hcompute_blur_unnormalized_stencil_12_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_125_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_13_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_13_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_res = op_hcompute_blur_unnormalized_stencil_13_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_114_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_14_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_14_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_res = op_hcompute_blur_unnormalized_stencil_14_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_103_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_15_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_15_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_res = op_hcompute_blur_unnormalized_stencil_15_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_92_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_8_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_8_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_res = op_hcompute_blur_unnormalized_stencil_8_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_75_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_9_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_9_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_res = op_hcompute_blur_unnormalized_stencil_9_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_64_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

struct blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148_cache {
	// RAM Box: {[0, 195], [2, 250]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137_cache {
	// RAM Box: {[0, 195], [3, 251]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126_cache {
	// RAM Box: {[0, 195], [4, 252]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115_cache {
	// RAM Box: {[0, 195], [5, 253]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104_cache {
	// RAM Box: {[0, 195], [6, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93_cache {
	// RAM Box: {[0, 195], [7, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76_cache {
	// RAM Box: {[0, 195], [0, 248]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65_cache {
	// RAM Box: {[0, 195], [1, 249]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct blur_unnormalized_stencil_clkwrk_dsa16_cache {
  // Reader addrs...
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // # of banks: 8
  blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148_cache blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148;
  blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137_cache blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137;
  blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126_cache blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126;
  blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115_cache blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115;
  blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104_cache blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104;
  blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93_cache blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93;
  blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76_cache blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76;
  blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65_cache blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65;
};



inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76.push(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159);
}

inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65.push(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158);
}

inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148.push(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91);
}

inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137.push(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90);
}

inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126.push(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89);
}

inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115.push(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88);
}

inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104.push(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87);
}

inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93.push(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86);
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148_select(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 18] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91 = blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137_select(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 19] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90 = blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126_select(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 20] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89 = blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115_select(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 21] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88 = blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104_select(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 22] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87 = blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93_select(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 23] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86 = blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76_select(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159 = blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65_select(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa16[blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158 = blur_unnormalized_stencil_clkwrk_dsa16.blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_to_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158;
  return 0;
}

// # of bundles = 16
// op_hcompute_blur_unnormalized_stencil_10_read
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148_res = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148_select(blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_148_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_11_read
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137_res = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137_select(blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_137_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_12_read
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126_res = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126_select(blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_126_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_13_read
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115_res = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115_select(blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_115_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_14_read
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104_res = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104_select(blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_104_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_15_read
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93_res = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93_select(blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_93_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_1_write
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158
inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_1_write, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_res = op_hcompute_blur_unnormalized_stencil_1_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_write(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_158_res, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_2_write
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91
inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_2_write, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_res = op_hcompute_blur_unnormalized_stencil_2_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_write(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_91_res, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_3_write
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90
inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_3_write, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_res = op_hcompute_blur_unnormalized_stencil_3_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_write(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_90_res, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_4_write
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89
inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_4_write, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_res = op_hcompute_blur_unnormalized_stencil_4_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_write(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_89_res, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_5_write
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88
inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_5_write, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_res = op_hcompute_blur_unnormalized_stencil_5_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_write(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_88_res, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_6_write
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87
inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_6_write, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_res = op_hcompute_blur_unnormalized_stencil_6_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_write(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_87_res, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_7_write
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86
inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_7_write, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_res = op_hcompute_blur_unnormalized_stencil_7_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_write(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_86_res, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_8_read
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76_res = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76_select(blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_76_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_9_read
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65_res = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65_select(blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_65_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_write
//	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159
inline void blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_write, blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_res = op_hcompute_blur_unnormalized_stencil_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_write(blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_159_res, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45_cache {
	// RAM Box: {[0, 197], [1, 281]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43_cache {
	// RAM Box: {[0, 197], [2, 282]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41_cache {
	// RAM Box: {[0, 197], [3, 283]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47_cache {
	// RAM Box: {[0, 197], [0, 280]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39_cache {
	// RAM Box: {[0, 197], [4, 284]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37_cache {
	// RAM Box: {[0, 197], [5, 285]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35_cache {
	// RAM Box: {[0, 197], [6, 286]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33_cache {
	// RAM Box: {[0, 197], [7, 287]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 1 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 2 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 3 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 4 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 5 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 6 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 7 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // # of banks: 8
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33;
};



inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48);
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 1 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 2 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 3 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 4 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 5 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 6 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 7 + 8hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48;
  return 0;
}

// # of bundles = 16
// op_hcompute_hw_input_global_wrapper_glb_stencil_1_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_1_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_res = op_hcompute_hw_input_global_wrapper_glb_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_60_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_2_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_2_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_res = op_hcompute_hw_input_global_wrapper_glb_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_58_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_3_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_3_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_res = op_hcompute_hw_input_global_wrapper_glb_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_56_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_4_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_4_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_res = op_hcompute_hw_input_global_wrapper_glb_stencil_4_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_54_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_5_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_5_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_res = op_hcompute_hw_input_global_wrapper_glb_stencil_5_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_52_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_6_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_6_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_res = op_hcompute_hw_input_global_wrapper_glb_stencil_6_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_50_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_7_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_7_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_res = op_hcompute_hw_input_global_wrapper_glb_stencil_7_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_48_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_res = op_hcompute_hw_input_global_wrapper_glb_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_62_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_45_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_43_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_41_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_39_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_37_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_35_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_33_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_47_res);
	return result;
}

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9_cache {
	// RAM Box: {[0, 197], [1, 257]}
	// Capacity: 73
	// # of read delays: 3
  // 0, 36, 72
	hw_uint<16> f0;
	fifo<hw_uint<16>, 35> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_36() {
		return f2;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_72() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9_cache {
	// RAM Box: {[0, 197], [2, 250]}
	// Capacity: 73
	// # of read delays: 3
  // 0, 36, 72
	hw_uint<16> f0;
	fifo<hw_uint<16>, 35> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_36() {
		return f2;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_72() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9_cache {
	// RAM Box: {[0, 197], [3, 251]}
	// Capacity: 73
	// # of read delays: 3
  // 0, 36, 72
	hw_uint<16> f0;
	fifo<hw_uint<16>, 35> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_36() {
		return f2;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_72() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9_cache {
	// RAM Box: {[0, 197], [0, 256]}
	// Capacity: 73
	// # of read delays: 3
  // 0, 36, 72
	hw_uint<16> f0;
	fifo<hw_uint<16>, 35> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_36() {
		return f2;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_72() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9_cache {
	// RAM Box: {[0, 197], [4, 252]}
	// Capacity: 73
	// # of read delays: 3
  // 0, 36, 72
	hw_uint<16> f0;
	fifo<hw_uint<16>, 35> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_36() {
		return f2;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_72() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9_cache {
	// RAM Box: {[0, 197], [5, 253]}
	// Capacity: 73
	// # of read delays: 3
  // 0, 36, 72
	hw_uint<16> f0;
	fifo<hw_uint<16>, 35> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_36() {
		return f2;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_72() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 35
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 35 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9_cache {
	// RAM Box: {[0, 197], [6, 254]}
	// Capacity: 74
	// # of read delays: 6
  // 0, 1, 36, 37, 72, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 34> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_37() {
		return f6;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_72() {
		return f8;
	}

	inline hw_uint<16> peek_73() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 34
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9_cache {
	// RAM Box: {[0, 197], [7, 255]}
	// Capacity: 74
	// # of read delays: 6
  // 0, 1, 36, 37, 72, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 34> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_37() {
		return f6;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_72() {
		return f8;
	}

	inline hw_uint<16> peek_73() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 34
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 9 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 9 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 9 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
    // { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // # of banks: 8
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9;
};



inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32);
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_149_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_149 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_150_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_150 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_151_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_151 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_152_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_152 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_153_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_153 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_154_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_154 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_155_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_155 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_156_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_156 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_157_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_157 read pattern: { op_hcompute_blur_unnormalized_stencil_10[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_138_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_138 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_139_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_139 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_140_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_140 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_141_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_141 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_142_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_142 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_143_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_143 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_144_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_144 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_145_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_145 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_146_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_146 read pattern: { op_hcompute_blur_unnormalized_stencil_11[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_127_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_127 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_128_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_128 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_129_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_129 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_130_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_130 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_131_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_131 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_132_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_132 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_133_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_133 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_134_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_134 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_135_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_135 read pattern: { op_hcompute_blur_unnormalized_stencil_12[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_116_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_116 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_117_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_117 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_118_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_118 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_119_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_119 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_120_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_120 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_121_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_121 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_122_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_122 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 5 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_123_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_123 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_124_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_124 read pattern: { op_hcompute_blur_unnormalized_stencil_13[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_105_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_105 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_106_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_106 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_107_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_107 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_108_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_108 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_37();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_109_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_109 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_37();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_110_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_110 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_111_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_111 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 6 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_112_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_112 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_113_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_113 read pattern: { op_hcompute_blur_unnormalized_stencil_14[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_100_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_100 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_101_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_101 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 9 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_102_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_102 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_94_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_94 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_73();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_95_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_95 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_96_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_96 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 9 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_97_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_97 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 7 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_merged_banks_9.peek_37();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_98_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_98 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 8 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_99_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_99 read pattern: { op_hcompute_blur_unnormalized_stencil_15[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 9 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_77_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_77 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_78_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_78 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_79_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_79 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_80_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_80 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_81_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_81 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_82_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_82 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_83_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_83 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_84_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_84 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_85_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_85 read pattern: { op_hcompute_blur_unnormalized_stencil_8[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_66_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_66 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_67_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_67 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_68_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_68 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_72();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_69_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_69 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_70_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_70 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_71_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_71 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_36();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_72_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_72 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_73_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_73 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_74_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_74 read pattern: { op_hcompute_blur_unnormalized_stencil_9[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 8blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 31 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42;
  return 0;
}

// # of bundles = 16
// op_hcompute_blur_unnormalized_stencil_10_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_149
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_150
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_151
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_152
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_153
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_154
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_155
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_156
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_157
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_149
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_150
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_151
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_152
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_153
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_154
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_155
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_156
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_157

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_149_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_149_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_149_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_150_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_150_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_150_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_151_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_151_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_151_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_152_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_152_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_152_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_153_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_153_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_153_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_154_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_154_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_154_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_155_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_155_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_155_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_156_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_156_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_156_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_157_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_157_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_157_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_11_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_138
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_139
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_140
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_141
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_142
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_143
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_144
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_145
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_146
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_138
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_139
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_140
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_141
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_142
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_143
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_144
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_145
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_146

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_138_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_138_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_138_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_139_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_139_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_139_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_140_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_140_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_140_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_141_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_141_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_141_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_142_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_142_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_142_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_143_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_143_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_143_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_144_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_144_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_144_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_145_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_145_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_145_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_146_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_146_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_146_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_12_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_127
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_128
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_129
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_130
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_131
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_132
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_133
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_134
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_135
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_127
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_128
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_129
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_130
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_131
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_132
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_133
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_134
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_135

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_127_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_127_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_127_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_128_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_128_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_128_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_129_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_129_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_129_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_130_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_130_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_130_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_131_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_131_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_131_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_132_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_132_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_132_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_133_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_133_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_133_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_134_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_134_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_134_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_135_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_135_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_135_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_13_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_116
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_117
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_118
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_119
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_120
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_121
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_122
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_123
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_124
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_116
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_117
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_118
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_119
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_120
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_121
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_122
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_123
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_124

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_116_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_116_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_116_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_117_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_117_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_117_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_118_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_118_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_118_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_119_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_119_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_119_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_120_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_120_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_120_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_121_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_121_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_121_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_122_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_122_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_122_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_123_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_123_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_123_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_124_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_124_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_124_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_14_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_105
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_106
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_107
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_108
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_109
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_110
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_111
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_112
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_113
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_105
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_106
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_107
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_108
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_109
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_110
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_111
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_112
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_113

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_105_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_105_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_105_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_106_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_106_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_106_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_107_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_107_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_107_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_108_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_108_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_108_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_109_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_109_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_109_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_110_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_110_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_110_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_111_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_111_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_111_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_112_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_112_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_112_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_113_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_113_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_113_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_15_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_94
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_95
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_96
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_97
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_98
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_99
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_100
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_101
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_102
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_94
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_95
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_96
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_97
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_98
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_99
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_100
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_101
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_102

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_94_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_94_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_94_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_95_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_95_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_95_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_96_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_96_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_96_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_97_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_97_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_97_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_98_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_98_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_98_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_99_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_99_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_99_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_100_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_100_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_100_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_101_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_101_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_101_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_102_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_102_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_102_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_8_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_77
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_78
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_79
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_80
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_81
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_82
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_83
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_84
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_85
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_77
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_78
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_79
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_80
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_81
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_82
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_83
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_84
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_85

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_77_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_77_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_77_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_78_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_78_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_78_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_79_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_79_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_79_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_80_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_80_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_80_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_81_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_81_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_81_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_82_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_82_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_82_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_83_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_83_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_83_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_84_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_84_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_84_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_85_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_85_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_85_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_9_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_66
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_67
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_68
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_69
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_70
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_71
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_72
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_73
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_74
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_66
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_67
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_68
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_69
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_70
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_71
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_72
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_73
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_74

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_66_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_66_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_66_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_67_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_67_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_67_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_68_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_68_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_68_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_69_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_69_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_69_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_70_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_70_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_70_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_71_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_71_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_71_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_72_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_72_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_72_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_73_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_73_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_73_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_74_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_74_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_74_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_44_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_42_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_40_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_38_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_36_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_34_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_32_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_46_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

struct hw_output_stencil_op_hcompute_hw_output_stencil_1_12_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29_cache {
	// RAM Box: {[0, 195], [1, 249]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_stencil_op_hcompute_hw_output_stencil_2_10_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27_cache {
	// RAM Box: {[0, 195], [2, 250]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_stencil_op_hcompute_hw_output_stencil_14_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31_cache {
	// RAM Box: {[0, 195], [0, 248]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_stencil_op_hcompute_hw_output_stencil_3_8_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25_cache {
	// RAM Box: {[0, 195], [3, 251]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_stencil_op_hcompute_hw_output_stencil_4_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23_cache {
	// RAM Box: {[0, 195], [4, 252]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_stencil_op_hcompute_hw_output_stencil_5_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21_cache {
	// RAM Box: {[0, 195], [5, 253]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_stencil_op_hcompute_hw_output_stencil_6_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19_cache {
	// RAM Box: {[0, 195], [6, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_stencil_op_hcompute_hw_output_stencil_7_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17_cache {
	// RAM Box: {[0, 195], [7, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 3 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 4 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 5 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 6 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 7 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // # of banks: 8
  hw_output_stencil_op_hcompute_hw_output_stencil_1_12_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29_cache hw_output_stencil_op_hcompute_hw_output_stencil_1_12_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29;
  hw_output_stencil_op_hcompute_hw_output_stencil_2_10_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27_cache hw_output_stencil_op_hcompute_hw_output_stencil_2_10_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27;
  hw_output_stencil_op_hcompute_hw_output_stencil_14_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31_cache hw_output_stencil_op_hcompute_hw_output_stencil_14_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31;
  hw_output_stencil_op_hcompute_hw_output_stencil_3_8_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25_cache hw_output_stencil_op_hcompute_hw_output_stencil_3_8_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25;
  hw_output_stencil_op_hcompute_hw_output_stencil_4_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23_cache hw_output_stencil_op_hcompute_hw_output_stencil_4_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23;
  hw_output_stencil_op_hcompute_hw_output_stencil_5_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21_cache hw_output_stencil_op_hcompute_hw_output_stencil_5_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21;
  hw_output_stencil_op_hcompute_hw_output_stencil_6_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19_cache hw_output_stencil_op_hcompute_hw_output_stencil_6_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19;
  hw_output_stencil_op_hcompute_hw_output_stencil_7_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17_cache hw_output_stencil_op_hcompute_hw_output_stencil_7_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17;
};



inline void hw_output_stencil_op_hcompute_hw_output_stencil_14_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_14, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_14_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31.push(hw_output_stencil_op_hcompute_hw_output_stencil_14);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_1_12_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_1_12, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_1_12_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29.push(hw_output_stencil_op_hcompute_hw_output_stencil_1_12);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_2_10_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_2_10, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_2_10_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27.push(hw_output_stencil_op_hcompute_hw_output_stencil_2_10);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_3_8_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_3_8, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_3_8_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25.push(hw_output_stencil_op_hcompute_hw_output_stencil_3_8);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_4_6_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_4_6, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_4_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23.push(hw_output_stencil_op_hcompute_hw_output_stencil_4_6);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_5_4_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_5_4, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_5_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21.push(hw_output_stencil_op_hcompute_hw_output_stencil_5_4);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_6_2_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_6_2, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_6_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19.push(hw_output_stencil_op_hcompute_hw_output_stencil_6_2);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_7_0_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_7_0, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_7_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17.push(hw_output_stencil_op_hcompute_hw_output_stencil_7_0);
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 49] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 41] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_1_12 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_1_12_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_1_12;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 50] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 42] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_2_10 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_2_10_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_2_10;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 48] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 40] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_14 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_14_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_14;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 3 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 51] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_output_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 43] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_3_8 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_3_8_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_3_8;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 4 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 52] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_output_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 44] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_4_6 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_4_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_4_6;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 5 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 53] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_output_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 45] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_5_4 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_5_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_5_4;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 6 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 54] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_output_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 46] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_6_2 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_6_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_6_2;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 7 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 55] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  // Write schedule: { op_hcompute_hw_output_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 47] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_7_0 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_7_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_7_0;
  return 0;
}

// # of bundles = 16
// op_hcompute_hw_output_global_wrapper_glb_stencil_1_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_29_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_2_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_27_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_3_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_25_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_4_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_23_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_5_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_21_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_6_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_19_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_7_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_17_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_31_res);
	return result;
}

// op_hcompute_hw_output_stencil_1_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_1_12
inline void hw_output_stencil_op_hcompute_hw_output_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_1_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_1_12_res = op_hcompute_hw_output_stencil_1_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_1_12_write(hw_output_stencil_op_hcompute_hw_output_stencil_1_12_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_2_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_2_10
inline void hw_output_stencil_op_hcompute_hw_output_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_2_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_2_10_res = op_hcompute_hw_output_stencil_2_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_2_10_write(hw_output_stencil_op_hcompute_hw_output_stencil_2_10_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_3_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_3_8
inline void hw_output_stencil_op_hcompute_hw_output_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_3_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_3_8_res = op_hcompute_hw_output_stencil_3_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_3_8_write(hw_output_stencil_op_hcompute_hw_output_stencil_3_8_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_4_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_4_6
inline void hw_output_stencil_op_hcompute_hw_output_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_4_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_4_6_res = op_hcompute_hw_output_stencil_4_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_4_6_write(hw_output_stencil_op_hcompute_hw_output_stencil_4_6_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_5_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_5_4
inline void hw_output_stencil_op_hcompute_hw_output_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_5_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_5_4_res = op_hcompute_hw_output_stencil_5_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_5_4_write(hw_output_stencil_op_hcompute_hw_output_stencil_5_4_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_6_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_6_2
inline void hw_output_stencil_op_hcompute_hw_output_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_6_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_6_2_res = op_hcompute_hw_output_stencil_6_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_6_2_write(hw_output_stencil_op_hcompute_hw_output_stencil_6_2_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_7_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_7_0
inline void hw_output_stencil_op_hcompute_hw_output_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_7_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_7_0_res = op_hcompute_hw_output_stencil_7_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_7_0_write(hw_output_stencil_op_hcompute_hw_output_stencil_7_0_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_14
inline void hw_output_stencil_op_hcompute_hw_output_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_14_res = op_hcompute_hw_output_stencil_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_14_write(hw_output_stencil_op_hcompute_hw_output_stencil_14_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// Total re-use buffer capacity: 9248 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_glb_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_0, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_0
	auto hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_s0_x_x_m_8_rp__value = hw_input_stencil_clkwrk_0.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_s0_x_x_m_8_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_1, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_1
	auto hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__1_rp__value = hw_input_stencil_clkwrk_1.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__1_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_2, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_2
	auto hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__2_rp__value = hw_input_stencil_clkwrk_2.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__2_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_3, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_3
	auto hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__3_rp__value = hw_input_stencil_clkwrk_3.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__3_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_4(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_4, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_4
	auto hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__4_rp__value = hw_input_stencil_clkwrk_4.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_4(hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__4_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_5(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_5, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_5
	auto hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__5_rp__value = hw_input_stencil_clkwrk_5.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_5(hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__5_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_6(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_6, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_6
	auto hw_input_stencil_clkwrk_6_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__6_rp__value = hw_input_stencil_clkwrk_6.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_6(hw_input_stencil_clkwrk_6_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__6_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_6_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_7(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_7, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_7
	auto hw_input_stencil_clkwrk_7_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__7_rp__value = hw_input_stencil_clkwrk_7.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_7(hw_input_stencil_clkwrk_7_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_8_rp___p__7_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_7_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__1_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__1_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__2_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__2_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__3_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__3_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__4_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__4_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__5_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__5_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__6_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__6_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__7_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_8_rp___p__7_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa16
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_1();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa16
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_2();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa16
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_2_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_3();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa16
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_3_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_4(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_4();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa16
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_4_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_5(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_5();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa16
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_5_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_6(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_6();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa16
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_6_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_7(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_7();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa16
	blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_7_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa16, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_8(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa16
	auto blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_8_rp__value = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_8_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_8_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_8_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_8(blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_8_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_8_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_8_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_9(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa16
	auto blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__1_rp__value = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_9_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__1_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_9_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_9(blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__1_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__1_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_9_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_10(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa16
	auto blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__2_rp__value = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_10_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__2_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_10_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_10(blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__2_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__2_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_10_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_11(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa16
	auto blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__3_rp__value = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_11_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__3_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_11_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_11(blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__3_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__3_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_11_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_12(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa16
	auto blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__4_rp__value = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_12_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__4_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_12_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_12(blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__4_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__4_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_12_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_13(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa16
	auto blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__5_rp__value = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_13_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__5_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_13_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_13(blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__5_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__5_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_13_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_14(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa16
	auto blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__6_rp__value = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_14_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__6_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_14_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_14(blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__6_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__6_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_14_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_15(blur_unnormalized_stencil_clkwrk_dsa16_cache& blur_unnormalized_stencil_clkwrk_dsa16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa16
	auto blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__7_rp__value = blur_unnormalized_stencil_clkwrk_dsa16_op_hcompute_blur_unnormalized_stencil_15_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa16/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__7_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_15_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_15(blur_unnormalized_stencil_clkwrk_dsa16_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__7_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_8_rp___p__7_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_15_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp_blur_s0_x_x_m_8_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil(blur_unnormalized_stencil_blur_s0_y_c___lp_blur_s0_x_x_m_8_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_1(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__1_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_1_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_1(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__1_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_1_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_2(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__2_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_2_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_2(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__2_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_2_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_3(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__3_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_3_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_3(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__3_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_3_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_4(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__4_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_4_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_4(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__4_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_4_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_5(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__5_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_5_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_5(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__5_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_5_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_6(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__6_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_6_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_6(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__6_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_6_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_7(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__7_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_7_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_7(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_8_rp___p__7_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_7_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_8_rp__value = blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil(blur_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_8_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_1(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__1_rp__value = blur_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_1(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__1_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_1_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_2(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__2_rp__value = blur_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_2(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__2_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_2_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_3(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__3_rp__value = blur_stencil_op_hcompute_hw_output_stencil_3_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_3(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__3_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_3_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_4(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__4_rp__value = blur_stencil_op_hcompute_hw_output_stencil_4_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_4(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__4_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_4_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_5(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__5_rp__value = blur_stencil_op_hcompute_hw_output_stencil_5_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_5(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__5_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_5_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_6(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__6_rp__value = blur_stencil_op_hcompute_hw_output_stencil_6_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_6(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__6_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_6_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_7(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__7_rp__value = blur_stencil_op_hcompute_hw_output_stencil_7_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_7(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_8_rp___p__7_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_7_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_8, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_8
	hw_output_global_wrapper_glb_stencil_clkwrk_8.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_9, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__1_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__1_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_9
	hw_output_global_wrapper_glb_stencil_clkwrk_9.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_2(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_10, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__2_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_2(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__2_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_10
	hw_output_global_wrapper_glb_stencil_clkwrk_10.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_3(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_11, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__3_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_3(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__3_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_11
	hw_output_global_wrapper_glb_stencil_clkwrk_11.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_4(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_12, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__4_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_4_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_4(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__4_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_12
	hw_output_global_wrapper_glb_stencil_clkwrk_12.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_5(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_13, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__5_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_5_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_5(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__5_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_13
	hw_output_global_wrapper_glb_stencil_clkwrk_13.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_6(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_14, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__6_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_6_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_6(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__6_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_14
	hw_output_global_wrapper_glb_stencil_clkwrk_14.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_7(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_15, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__7_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_7(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_8_rp___p__7_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_15
	hw_output_global_wrapper_glb_stencil_clkwrk_15.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void gaussian_glb8(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_9) {

#ifndef __SYNTHESIS__
  ofstream debug_file("gaussian_glb8_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  blur_stencil_cache blur_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_cache blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_clkwrk_dsa16_cache blur_unnormalized_stencil_clkwrk_dsa16;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_glb_stencil_cache hw_input_global_wrapper_glb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_global_wrapper_stencil_cache hw_input_global_wrapper_global_wrapper_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_output_stencil_cache hw_output_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 18] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 44] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 35] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 41] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 50] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 55] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 34] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_output_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 54] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 33] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 45] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 40] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 49] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 47] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_blur_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 38] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 20] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 21] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 36] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 51] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 22] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 19] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 23] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_blur_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 39] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 37] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 32] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 48] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_output_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 52] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_output_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 53] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35; op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 42] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 43] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_hw_output_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 46] : 0 <= d1 <= 195 and 0 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
//   { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 18] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_2(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_13[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 29] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_13(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 44] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_stencil_4(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_8[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_8(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_15[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 31] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_15(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_12[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 28] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_12(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_11[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_11(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 35] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_stencil_3(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 41] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_stencil_1(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 50] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_2(((((-50 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 55] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_7(((((-55 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 34] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_stencil_2(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 54] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_6(((((-54 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 33] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_stencil_1(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 45] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_stencil_5(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 40] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_stencil(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 49] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_1(((((-49 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 47] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_stencil_7(((((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_14[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 30] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_14(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_1(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_7(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_10[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_10(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, d1, d2, 15] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_4(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_2(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 38] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_stencil_6(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 20] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_4(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 21] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_5(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_1(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 36] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_stencil_4(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 51] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_3(((((-51 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 22] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_6(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_6(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 19] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_3(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 23] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_7(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_5(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 39] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_stencil_7(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 37] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_stencil_5(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 32] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_stencil(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 48] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil(((((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_3(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, d1, d2, 14] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 52] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_4(((((-52 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 53] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_5(((((-53 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 197 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 42] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_stencil_2(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 43] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_stencil_3(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 46] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_hw_output_stencil_6(((((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((32 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_9[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 31 }
// Condition for op_hcompute_blur_unnormalized_stencil_9(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 197; c1 += 1)
	  for (int c2 = 0; c2 <= 35; c2 += 1) {
	    op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_4(hw_input_stencil_clkwrk_4 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_5(hw_input_stencil_clkwrk_5 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_6(hw_input_stencil_clkwrk_6 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_7(hw_input_stencil_clkwrk_7 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    if (c1 >= 2 && c2 <= 31) {
	      op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa16, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa16, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa16, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa16, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_4(blur_unnormalized_stencil_clkwrk_dsa16, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_5(blur_unnormalized_stencil_clkwrk_dsa16, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 32) {
	      op_hcompute_blur_unnormalized_stencil_6(blur_unnormalized_stencil_clkwrk_dsa16, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_unnormalized_stencil_7(blur_unnormalized_stencil_clkwrk_dsa16, 0, c1 - 2, c2 - 1);
	    }
	    if (c1 >= 2 && c2 <= 31) {
	      op_hcompute_blur_unnormalized_stencil_8(blur_unnormalized_stencil_clkwrk_dsa16 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_9(blur_unnormalized_stencil_clkwrk_dsa16 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_10(blur_unnormalized_stencil_clkwrk_dsa16 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_11(blur_unnormalized_stencil_clkwrk_dsa16 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_12(blur_unnormalized_stencil_clkwrk_dsa16 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_13(blur_unnormalized_stencil_clkwrk_dsa16 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 32) {
	      op_hcompute_blur_unnormalized_stencil_14(blur_unnormalized_stencil_clkwrk_dsa16 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_unnormalized_stencil_15(blur_unnormalized_stencil_clkwrk_dsa16 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 1);
	    }
	    if (c1 >= 2 && c2 <= 31) {
	      op_hcompute_blur_stencil(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_stencil_1(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_stencil_2(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_stencil_3(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_stencil_4(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_stencil_5(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 32) {
	      op_hcompute_blur_stencil_6(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_stencil_7(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2 - 1);
	    }
	    if (c1 >= 2 && c2 <= 31) {
	      op_hcompute_hw_output_stencil(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2);
	      op_hcompute_hw_output_stencil_1(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2);
	      op_hcompute_hw_output_stencil_2(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2);
	      op_hcompute_hw_output_stencil_3(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2);
	      op_hcompute_hw_output_stencil_4(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2);
	      op_hcompute_hw_output_stencil_5(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 32) {
	      op_hcompute_hw_output_stencil_6(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_hw_output_stencil_7(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2 - 1);
	    }
	    if (c1 >= 2 && c2 <= 31) {
	      op_hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_8, 0, c1 - 2, c2);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_9, 0, c1 - 2, c2);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_2(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_10, 0, c1 - 2, c2);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_3(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_11, 0, c1 - 2, c2);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_4(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_12, 0, c1 - 2, c2);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_5(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_13, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 32) {
	      op_hcompute_hw_output_global_wrapper_glb_stencil_6(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_14, 0, c1 - 2, c2 - 1);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_7(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_15, 0, c1 - 2, c2 - 1);
	    }
	  }
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void gaussian_glb8_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_9, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gaussian_glb8(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_input_stencil_clkwrk_6, hw_input_stencil_clkwrk_7, hw_output_global_wrapper_glb_stencil_clkwrk_10, hw_output_global_wrapper_glb_stencil_clkwrk_11, hw_output_global_wrapper_glb_stencil_clkwrk_12, hw_output_global_wrapper_glb_stencil_clkwrk_13, hw_output_global_wrapper_glb_stencil_clkwrk_14, hw_output_global_wrapper_glb_stencil_clkwrk_15, hw_output_global_wrapper_glb_stencil_clkwrk_8, hw_output_global_wrapper_glb_stencil_clkwrk_9);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, 8hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers = 7128;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, 1 + 8hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers = 7128;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_2[hw_input_global_wrapper_s0_y, 2 + 8hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers = 7128;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_3[hw_input_global_wrapper_s0_y, 3 + 8hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers = 7128;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_4[hw_input_global_wrapper_s0_y, 4 + 8hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_num_transfers = 7128;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_5[hw_input_global_wrapper_s0_y, 5 + 8hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_num_transfers = 7128;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_6[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_6[hw_input_global_wrapper_s0_y, 6 + 8hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_num_transfers = 7128;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_7[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_7[hw_input_global_wrapper_s0_y, 7 + 8hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_num_transfers = 7128;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_10[hw_output_global_wrapper_s0_y_yi, 2 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_num_transfers = 6272;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_11[hw_output_global_wrapper_s0_y_yi, 3 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_num_transfers = 6272;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_12[hw_output_global_wrapper_s0_y_yi, 4 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0_num_transfers = 6272;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_13[hw_output_global_wrapper_s0_y_yi, 5 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0_num_transfers = 6272;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_14[hw_output_global_wrapper_s0_y_yi, 6 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0_num_transfers = 6272;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_15[hw_output_global_wrapper_s0_y_yi, 7 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0_num_transfers = 6272;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_8[hw_output_global_wrapper_s0_y_yi, 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_num_transfers = 6272;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_9[hw_output_global_wrapper_s0_y_yi, 1 + 8hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 31 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_num_transfers = 6272;


extern "C" {

void gaussian_glb8_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_num_transfers*size);

  gaussian_glb8_wrapper(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gaussian_glb8_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gaussian_glb8(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_6_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_7_read_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_4_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_5_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_6_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_7_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0);

}

}
#endif //__SYNTHESIS__

