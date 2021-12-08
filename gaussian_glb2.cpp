#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: gaussian_glb2_compute.h
#include "gaussian_glb2_compute.h"

struct blur_stencil_op_hcompute_blur_stencil_1_40_to_blur_stencil_op_hcompute_hw_output_stencil_1_1_cache {
	// RAM Box: {[0, 195], [1, 253]}
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

struct blur_stencil_op_hcompute_blur_stencil_42_to_blur_stencil_op_hcompute_hw_output_stencil_3_cache {
	// RAM Box: {[0, 195], [0, 252]}
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
    // { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 126 }
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 126 }
  // # of banks: 2
  blur_stencil_op_hcompute_blur_stencil_1_40_to_blur_stencil_op_hcompute_hw_output_stencil_1_1_cache blur_stencil_op_hcompute_blur_stencil_1_40_to_blur_stencil_op_hcompute_hw_output_stencil_1_1;
  blur_stencil_op_hcompute_blur_stencil_42_to_blur_stencil_op_hcompute_hw_output_stencil_3_cache blur_stencil_op_hcompute_blur_stencil_42_to_blur_stencil_op_hcompute_hw_output_stencil_3;
};



inline void blur_stencil_op_hcompute_blur_stencil_1_40_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_1_40, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_1_40_to_blur_stencil_op_hcompute_hw_output_stencil_1_1.push(blur_stencil_op_hcompute_blur_stencil_1_40);
}

inline void blur_stencil_op_hcompute_blur_stencil_42_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_42, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_42_to_blur_stencil_op_hcompute_hw_output_stencil_3.push(blur_stencil_op_hcompute_blur_stencil_42);
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_1_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_1_1 read pattern: { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 126 }
  // Read schedule : { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 11] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 9] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  auto value_blur_stencil_op_hcompute_blur_stencil_1_40 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_1_40_to_blur_stencil_op_hcompute_hw_output_stencil_1_1.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_1_40;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_3_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_3 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 126 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 10] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 8] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  auto value_blur_stencil_op_hcompute_blur_stencil_42 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_42_to_blur_stencil_op_hcompute_hw_output_stencil_3.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_42;
  return 0;
}

// # of bundles = 4
// op_hcompute_blur_stencil_1_write
//	blur_stencil_op_hcompute_blur_stencil_1_40
inline void blur_stencil_op_hcompute_blur_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_1_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_1_40_res = op_hcompute_blur_stencil_1_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_1_40_write(blur_stencil_op_hcompute_blur_stencil_1_40_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_write
//	blur_stencil_op_hcompute_blur_stencil_42
inline void blur_stencil_op_hcompute_blur_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_42_res = op_hcompute_blur_stencil_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_42_write(blur_stencil_op_hcompute_blur_stencil_42_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_1_read
//	blur_stencil_op_hcompute_hw_output_stencil_1_1
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_1_1

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_1_res = blur_stencil_op_hcompute_hw_output_stencil_1_1_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_1_1_res);
	return result;
}

// op_hcompute_hw_output_stencil_read
//	blur_stencil_op_hcompute_hw_output_stencil_3
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_3

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_3_res = blur_stencil_op_hcompute_hw_output_stencil_3_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_3_res);
	return result;
}

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41_cache {
	// RAM Box: {[0, 195], [1, 253]}
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

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_43_cache {
	// RAM Box: {[0, 195], [0, 252]}
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
    // { op_hcompute_blur_stencil_1[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 1 + 2blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 126 }
    // { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 2blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 126 }
  // # of banks: 2
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_43_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_43;
};



inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_43.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16);
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41 read pattern: { op_hcompute_blur_stencil_1[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 1 + 2blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 9] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_43_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_43 read pattern: { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 2blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 8] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_43.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27;
  return 0;
}

// # of bundles = 4
// op_hcompute_blur_stencil_1_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_1_41_res);
	return result;
}

// op_hcompute_blur_stencil_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_43
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_43

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_43_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_43_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_43_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_2_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_2_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_res = op_hcompute_blur_unnormalized_stencil_2_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_27_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_3_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_3_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_res = op_hcompute_blur_unnormalized_stencil_3_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_16_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

struct blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28_cache {
	// RAM Box: {[0, 195], [0, 252]}
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

struct blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17_cache {
	// RAM Box: {[0, 195], [1, 253]}
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

struct blur_unnormalized_stencil_clkwrk_dsa4_cache {
  // Reader addrs...
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa4[blur_unnormalized_s1_y, 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa4[blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // # of banks: 2
  blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28_cache blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28;
  blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17_cache blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17;
};



inline void blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38, blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa4.blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17.push(blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38);
}

inline void blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39, blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa4.blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28.push(blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39);
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28_select(blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa4[blur_unnormalized_s1_y, 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39 = blur_unnormalized_stencil_clkwrk_dsa4.blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17_select(blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa4[blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38 = blur_unnormalized_stencil_clkwrk_dsa4.blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_to_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38;
  return 0;
}

// # of bundles = 4
// op_hcompute_blur_unnormalized_stencil_1_write
//	blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38
inline void blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_1_write, blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_res = op_hcompute_blur_unnormalized_stencil_1_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_write(blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_38_res, blur_unnormalized_stencil_clkwrk_dsa4, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_2_read
//	blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28_res = blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28_select(blur_unnormalized_stencil_clkwrk_dsa4, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_28_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_3_read
//	blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17_res = blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17_select(blur_unnormalized_stencil_clkwrk_dsa4, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_17_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_write
//	blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39
inline void blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_write, blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_res = op_hcompute_blur_unnormalized_stencil_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_write(blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_39_res, blur_unnormalized_stencil_clkwrk_dsa4, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11_cache {
	// RAM Box: {[0, 197], [0, 254]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9_cache {
	// RAM Box: {[0, 197], [1, 255]}
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
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 127 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 127 }
  // # of banks: 2
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9;
};



inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12);
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12;
  return 0;
}

// # of bundles = 4
// op_hcompute_hw_input_global_wrapper_glb_stencil_1_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_1_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_res = op_hcompute_hw_input_global_wrapper_glb_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_12_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_res = op_hcompute_hw_input_global_wrapper_glb_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_14_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_9_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_11_res);
	return result;
}

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9_cache {
	// RAM Box: {[0, 197], [0, 254]}
	// Capacity: 258
	// # of read delays: 6
  // 0, 1, 128, 129, 256, 257
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 126> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 126> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_127() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_128() {
		return f4;
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}

	inline hw_uint<16> peek_255() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_256() {
		return f8;
	}

	inline hw_uint<16> peek_257() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 126
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 126 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 126
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 126 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9_cache {
	// RAM Box: {[0, 197], [1, 255]}
	// Capacity: 258
	// # of read delays: 6
  // 0, 1, 128, 129, 256, 257
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 126> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 126> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_127() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_128() {
		return f4;
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}

	inline hw_uint<16> peek_255() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_256() {
		return f8;
	}

	inline hw_uint<16> peek_257() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 126
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 126 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 126
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 126 reading from capacity: 1
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
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
    // { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // # of banks: 2
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9;
};



inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8);
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_29_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_29 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_257();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_30_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_30 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_257();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_31_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_31 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_256();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_32_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_32 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_129();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_33_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_33 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_129();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_34_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_34 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_128();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_35_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_35 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_36_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_36 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_37_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_37 read pattern: { op_hcompute_blur_unnormalized_stencil_2[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_18_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_18 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_257();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_19_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_19 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_256();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_20_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_20 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_256();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_21_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_21 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_129();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_22_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_22 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_128();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_23_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_23 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_128();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_24_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_24 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_25_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_25 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_26_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_26 read pattern: { op_hcompute_blur_unnormalized_stencil_3[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 2blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 126 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10;
  return 0;
}

// # of bundles = 4
// op_hcompute_blur_unnormalized_stencil_2_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_29
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_30
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_31
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_32
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_33
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_34
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_35
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_36
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_37
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_29
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_30
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_31
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_32
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_33
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_34
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_35
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_36
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_37

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_29_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_29_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_29_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_30_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_30_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_30_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_31_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_31_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_31_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_32_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_32_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_32_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_33_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_33_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_33_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_34_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_34_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_34_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_35_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_35_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_35_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_36_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_36_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_36_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_37_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_37_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_37_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_3_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_18
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_19
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_20
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_21
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_22
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_23
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_24
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_25
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_26
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_18
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_19
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_20
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_21
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_22
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_23
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_24
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_25
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_26

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_18_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_18_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_18_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_19_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_19_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_19_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_20_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_20_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_20_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_21_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_21_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_21_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_22_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_22_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_22_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_23_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_23_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_23_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_24_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_24_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_24_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_25_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_25_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_25_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_26_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_26_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_26_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_8_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_10_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

struct hw_output_stencil_op_hcompute_hw_output_stencil_1_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5_cache {
	// RAM Box: {[0, 195], [1, 253]}
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

struct hw_output_stencil_op_hcompute_hw_output_stencil_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_cache {
	// RAM Box: {[0, 195], [0, 252]}
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
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 126 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 126 }
  // # of banks: 2
  hw_output_stencil_op_hcompute_hw_output_stencil_1_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5_cache hw_output_stencil_op_hcompute_hw_output_stencil_1_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5;
  hw_output_stencil_op_hcompute_hw_output_stencil_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_cache hw_output_stencil_op_hcompute_hw_output_stencil_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7;
};



inline void hw_output_stencil_op_hcompute_hw_output_stencil_1_0_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_1_0, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_1_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5.push(hw_output_stencil_op_hcompute_hw_output_stencil_1_0);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_2_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_2, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7.push(hw_output_stencil_op_hcompute_hw_output_stencil_2);
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 126 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 11] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_1_0 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_1_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_1_0;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 126 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  // Write schedule: { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 10] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_2 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_2;
  return 0;
}

// # of bundles = 4
// op_hcompute_hw_output_global_wrapper_glb_stencil_1_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_5_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_7_res);
	return result;
}

// op_hcompute_hw_output_stencil_1_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_1_0
inline void hw_output_stencil_op_hcompute_hw_output_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_1_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_1_0_res = op_hcompute_hw_output_stencil_1_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_1_0_write(hw_output_stencil_op_hcompute_hw_output_stencil_1_0_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_2
inline void hw_output_stencil_op_hcompute_hw_output_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_2_res = op_hcompute_hw_output_stencil_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_2_write(hw_output_stencil_op_hcompute_hw_output_stencil_2_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// Total re-use buffer capacity: 8224 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_glb_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_0, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_0
	auto hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_s0_x_x_m_2_rp__value = hw_input_stencil_clkwrk_0.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_s0_x_x_m_2_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_1, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_1
	auto hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p__1_rp__value = hw_input_stencil_clkwrk_1.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa4
	blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa4, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_1();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa4
	blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa4, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa4
	auto blur_unnormalized_stencil_clkwrk_dsa4_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_2_rp__value = blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_2_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa4/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_2_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_2_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa4_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_2_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_2_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa4_cache& blur_unnormalized_stencil_clkwrk_dsa4, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa4
	auto blur_unnormalized_stencil_clkwrk_dsa4_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_2_rp___p__1_rp__value = blur_unnormalized_stencil_clkwrk_dsa4_op_hcompute_blur_unnormalized_stencil_3_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa4/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_2_rp___p__1_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_3_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa4_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_2_rp___p__1_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_2_rp___p__1_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_3_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp_blur_s0_x_x_m_2_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil(blur_unnormalized_stencil_blur_s0_y_c___lp_blur_s0_x_x_m_2_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_1(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_2_rp___p__1_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_1_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_1(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_1_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_2_rp__value = blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil(blur_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_1(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value = blur_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_1(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_1_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_2, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_2
	hw_output_global_wrapper_glb_stencil_clkwrk_2.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_3, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_3
	hw_output_global_wrapper_glb_stencil_clkwrk_3.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void gaussian_glb2(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_3) {

#ifndef __SYNTHESIS__
  ofstream debug_file("gaussian_glb2_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  blur_stencil_cache blur_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_cache blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_clkwrk_dsa4_cache blur_unnormalized_stencil_clkwrk_dsa4;
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

// schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 127; op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 9] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 11] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 8] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 127; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 10] : 0 <= d1 <= 195 and 0 <= d2 <= 126; op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_1(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 9] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_blur_stencil_1(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 11] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_hw_output_stencil_1(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 6] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_blur_unnormalized_stencil_2(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 7] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_blur_unnormalized_stencil_3(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 8] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_blur_stencil(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_blur_unnormalized_stencil(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_1(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 10] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_hw_output_stencil(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 195 and 0 <= d2 <= 126 }
// Condition for op_hcompute_blur_unnormalized_stencil_1(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 197; c1 += 1)
	  for (int c2 = 0; c2 <= 127; c2 += 1) {
	    op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    if (c1 >= 2 && c2 >= 1) {
	      op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa4, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa4, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa4 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa4 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_stencil(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_stencil_1(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_hw_output_stencil(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_hw_output_stencil_1(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_2, 0, c1 - 2, c2 - 1);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_3, 0, c1 - 2, c2 - 1);
	    }
	  }
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void gaussian_glb2_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_3, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gaussian_glb2(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_output_global_wrapper_glb_stencil_clkwrk_2, hw_output_global_wrapper_glb_stencil_clkwrk_3);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 127 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers = 25344;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 127 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers = 25344;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_2[hw_output_global_wrapper_s0_y_yi, 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 126 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_num_transfers = 24892;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_3[hw_output_global_wrapper_s0_y_yi, 1 + 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 126 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_num_transfers = 24892;


extern "C" {

void gaussian_glb2_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers*size);

  gaussian_glb2_wrapper(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gaussian_glb2_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gaussian_glb2(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0);

}

}
#endif //__SYNTHESIS__

