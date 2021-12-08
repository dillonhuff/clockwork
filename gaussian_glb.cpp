#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: gaussian_glb_compute.h
#include "gaussian_glb_compute.h"

struct blur_stencil_op_hcompute_blur_stencil_1_84_to_blur_stencil_op_hcompute_hw_output_stencil_1_5_cache {
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

struct blur_stencil_op_hcompute_blur_stencil_2_82_to_blur_stencil_op_hcompute_hw_output_stencil_2_3_cache {
	// RAM Box: {[0, 195], [2, 254]}
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

struct blur_stencil_op_hcompute_blur_stencil_3_80_to_blur_stencil_op_hcompute_hw_output_stencil_3_1_cache {
	// RAM Box: {[0, 195], [3, 255]}
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

struct blur_stencil_op_hcompute_blur_stencil_86_to_blur_stencil_op_hcompute_hw_output_stencil_7_cache {
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
    // { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 1 + 4hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 63 }
    // { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 2 + 4hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 63 }
    // { op_hcompute_hw_output_stencil_3[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 3 + 4hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 63 }
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 4hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 63 }
  // # of banks: 4
  blur_stencil_op_hcompute_blur_stencil_1_84_to_blur_stencil_op_hcompute_hw_output_stencil_1_5_cache blur_stencil_op_hcompute_blur_stencil_1_84_to_blur_stencil_op_hcompute_hw_output_stencil_1_5;
  blur_stencil_op_hcompute_blur_stencil_2_82_to_blur_stencil_op_hcompute_hw_output_stencil_2_3_cache blur_stencil_op_hcompute_blur_stencil_2_82_to_blur_stencil_op_hcompute_hw_output_stencil_2_3;
  blur_stencil_op_hcompute_blur_stencil_3_80_to_blur_stencil_op_hcompute_hw_output_stencil_3_1_cache blur_stencil_op_hcompute_blur_stencil_3_80_to_blur_stencil_op_hcompute_hw_output_stencil_3_1;
  blur_stencil_op_hcompute_blur_stencil_86_to_blur_stencil_op_hcompute_hw_output_stencil_7_cache blur_stencil_op_hcompute_blur_stencil_86_to_blur_stencil_op_hcompute_hw_output_stencil_7;
};



inline void blur_stencil_op_hcompute_blur_stencil_1_84_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_1_84, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_1_84_to_blur_stencil_op_hcompute_hw_output_stencil_1_5.push(blur_stencil_op_hcompute_blur_stencil_1_84);
}

inline void blur_stencil_op_hcompute_blur_stencil_2_82_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_2_82, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_2_82_to_blur_stencil_op_hcompute_hw_output_stencil_2_3.push(blur_stencil_op_hcompute_blur_stencil_2_82);
}

inline void blur_stencil_op_hcompute_blur_stencil_3_80_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_3_80, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_3_80_to_blur_stencil_op_hcompute_hw_output_stencil_3_1.push(blur_stencil_op_hcompute_blur_stencil_3_80);
}

inline void blur_stencil_op_hcompute_blur_stencil_86_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_86, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_86_to_blur_stencil_op_hcompute_hw_output_stencil_7.push(blur_stencil_op_hcompute_blur_stencil_86);
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_5_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_1_5 read pattern: { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 1 + 4hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 21] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_stencil_op_hcompute_blur_stencil_1_84 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_1_84_to_blur_stencil_op_hcompute_hw_output_stencil_1_5.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_1_84;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_2_3_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_2_3 read pattern: { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 2 + 4hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 22] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 18] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_stencil_op_hcompute_blur_stencil_2_82 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_2_82_to_blur_stencil_op_hcompute_hw_output_stencil_2_3.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_2_82;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_3_1_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_3_1 read pattern: { op_hcompute_hw_output_stencil_3[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 3 + 4hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 23] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 19] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_stencil_op_hcompute_blur_stencil_3_80 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_3_80_to_blur_stencil_op_hcompute_hw_output_stencil_3_1.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_3_80;
  return 0;
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_7_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_7 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> blur_stencil[hw_output_s0_y_yi, 4hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 195 and 0 <= hw_output_s0_x_xi_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 20] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_stencil_op_hcompute_blur_stencil_86 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_86_to_blur_stencil_op_hcompute_hw_output_stencil_7.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_86;
  return 0;
}

// # of bundles = 8
// op_hcompute_blur_stencil_1_write
//	blur_stencil_op_hcompute_blur_stencil_1_84
inline void blur_stencil_op_hcompute_blur_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_1_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_1_84_res = op_hcompute_blur_stencil_1_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_1_84_write(blur_stencil_op_hcompute_blur_stencil_1_84_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_2_write
//	blur_stencil_op_hcompute_blur_stencil_2_82
inline void blur_stencil_op_hcompute_blur_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_2_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_2_82_res = op_hcompute_blur_stencil_2_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_2_82_write(blur_stencil_op_hcompute_blur_stencil_2_82_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_3_write
//	blur_stencil_op_hcompute_blur_stencil_3_80
inline void blur_stencil_op_hcompute_blur_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_3_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_3_80_res = op_hcompute_blur_stencil_3_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_3_80_write(blur_stencil_op_hcompute_blur_stencil_3_80_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_blur_stencil_write
//	blur_stencil_op_hcompute_blur_stencil_86
inline void blur_stencil_op_hcompute_blur_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_86_res = op_hcompute_blur_stencil_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_86_write(blur_stencil_op_hcompute_blur_stencil_86_res, blur_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_1_read
//	blur_stencil_op_hcompute_hw_output_stencil_1_5
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_5_res = blur_stencil_op_hcompute_hw_output_stencil_1_5_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_1_5_res);
	return result;
}

// op_hcompute_hw_output_stencil_2_read
//	blur_stencil_op_hcompute_hw_output_stencil_2_3
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_2_3

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_2_3_res = blur_stencil_op_hcompute_hw_output_stencil_2_3_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_2_3_res);
	return result;
}

// op_hcompute_hw_output_stencil_3_read
//	blur_stencil_op_hcompute_hw_output_stencil_3_1
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_3_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_3_1

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_3_1_res = blur_stencil_op_hcompute_hw_output_stencil_3_1_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_3_1_res);
	return result;
}

// op_hcompute_hw_output_stencil_read
//	blur_stencil_op_hcompute_hw_output_stencil_7
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_7

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_7_res = blur_stencil_op_hcompute_hw_output_stencil_7_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_7_res);
	return result;
}

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85_cache {
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

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83_cache {
	// RAM Box: {[0, 195], [2, 254]}
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

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81_cache {
	// RAM Box: {[0, 195], [3, 255]}
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

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_87_cache {
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
    // { op_hcompute_blur_stencil_1[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 1 + 4blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 63 }
    // { op_hcompute_blur_stencil_2[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 2 + 4blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 63 }
    // { op_hcompute_blur_stencil_3[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 3 + 4blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 63 }
    // { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 4blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 63 }
  // # of banks: 4
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_87_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_87;
};



inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_87.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32);
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85 read pattern: { op_hcompute_blur_stencil_1[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 1 + 4blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83 read pattern: { op_hcompute_blur_stencil_2[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 2 + 4blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 18] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81 read pattern: { op_hcompute_blur_stencil_3[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 3 + 4blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 19] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_87_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_87 read pattern: { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x_x] -> blur_unnormalized_stencil[blur_s0_y, 4blur_s0_x_x] : 0 <= blur_s0_y <= 195 and 0 <= blur_s0_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_87.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65;
  return 0;
}

// # of bundles = 8
// op_hcompute_blur_stencil_1_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_1_85_res);
	return result;
}

// op_hcompute_blur_stencil_2_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_2_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_2_83_res);
	return result;
}

// op_hcompute_blur_stencil_3_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_3_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_3_81_res);
	return result;
}

// op_hcompute_blur_stencil_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_87
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_87

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_87_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_87_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_87_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_4_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_4_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_res = op_hcompute_blur_unnormalized_stencil_4_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_65_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_5_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_5_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_res = op_hcompute_blur_unnormalized_stencil_5_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_54_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_6_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_6_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_res = op_hcompute_blur_unnormalized_stencil_6_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_43_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_7_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_7_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_res = op_hcompute_blur_unnormalized_stencil_7_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_32_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
}

struct blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66_cache {
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

struct blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55_cache {
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

struct blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44_cache {
	// RAM Box: {[0, 195], [2, 254]}
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

struct blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33_cache {
	// RAM Box: {[0, 195], [3, 255]}
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

struct blur_unnormalized_stencil_clkwrk_dsa8_cache {
  // Reader addrs...
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa8[blur_unnormalized_s1_y, 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa8[blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa8[blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa8[blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // # of banks: 4
  blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66_cache blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66;
  blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55_cache blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55;
  blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44_cache blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44;
  blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33_cache blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33;
};



inline void blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78, blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa8.blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55.push(blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78);
}

inline void blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77, blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa8.blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44.push(blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77);
}

inline void blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76, blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa8.blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33.push(blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76);
}

inline void blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79, blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa8.blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66.push(blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79);
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66_select(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa8[blur_unnormalized_s1_y, 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 8] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79 = blur_unnormalized_stencil_clkwrk_dsa8.blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55_select(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa8[blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78 = blur_unnormalized_stencil_clkwrk_dsa8.blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44_select(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa8[blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 10] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77 = blur_unnormalized_stencil_clkwrk_dsa8.blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33_select(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> blur_unnormalized_stencil_clkwrk_dsa8[blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 11] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76 = blur_unnormalized_stencil_clkwrk_dsa8.blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_to_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76;
  return 0;
}

// # of bundles = 8
// op_hcompute_blur_unnormalized_stencil_1_write
//	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78
inline void blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_1_write, blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_res = op_hcompute_blur_unnormalized_stencil_1_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_write(blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_78_res, blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_2_write
//	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77
inline void blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_2_write, blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_res = op_hcompute_blur_unnormalized_stencil_2_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_write(blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_77_res, blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_3_write
//	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76
inline void blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_3_write, blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_res = op_hcompute_blur_unnormalized_stencil_3_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_write(blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_76_res, blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_4_read
//	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66_res = blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66_select(blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_66_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_5_read
//	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55_res = blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55_select(blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_55_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_6_read
//	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44_res = blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44_select(blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_44_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_7_read
//	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33_res = blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33_select(blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_33_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_write
//	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79
inline void blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_write, blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_res = op_hcompute_blur_unnormalized_stencil_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_write(blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_79_res, blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, dynamic_address);
}

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21_cache {
	// RAM Box: {[0, 197], [1, 269]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23_cache {
	// RAM Box: {[0, 197], [0, 268]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19_cache {
	// RAM Box: {[0, 197], [2, 270]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17_cache {
	// RAM Box: {[0, 197], [3, 271]}
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
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 1 + 4hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 67 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 4hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 67 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 2 + 4hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 67 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 3 + 4hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 67 }
  // # of banks: 4
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17;
};



inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24);
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 1 + 4hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 67 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 4hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 67 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 2 + 4hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 67 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, 3 + 4hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 67 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24;
  return 0;
}

// # of bundles = 8
// op_hcompute_hw_input_global_wrapper_glb_stencil_1_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_1_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_res = op_hcompute_hw_input_global_wrapper_glb_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_28_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_2_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_2_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_res = op_hcompute_hw_input_global_wrapper_glb_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_26_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_3_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_3_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_res = op_hcompute_hw_input_global_wrapper_glb_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_24_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_res = op_hcompute_hw_input_global_wrapper_glb_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_30_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_21_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_19_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_17_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_23_res);
	return result;
}

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9_cache {
	// RAM Box: {[0, 197], [1, 257]}
	// Capacity: 137
	// # of read delays: 3
  // 0, 68, 136
	hw_uint<16> f0;
	fifo<hw_uint<16>, 67> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_67() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_68() {
		return f2;
	}

	inline hw_uint<16> peek_135() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_136() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 67
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 67 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9_cache {
	// RAM Box: {[0, 197], [0, 256]}
	// Capacity: 137
	// # of read delays: 3
  // 0, 68, 136
	hw_uint<16> f0;
	fifo<hw_uint<16>, 67> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_67() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_68() {
		return f2;
	}

	inline hw_uint<16> peek_135() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_136() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 67
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 67 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9_cache {
	// RAM Box: {[0, 197], [2, 254]}
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}

	inline hw_uint<16> peek_135() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_136() {
		return f8;
	}

	inline hw_uint<16> peek_137() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 66
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 66 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 66 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9_cache {
	// RAM Box: {[0, 197], [3, 255]}
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}

	inline hw_uint<16> peek_135() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_136() {
		return f8;
	}

	inline hw_uint<16> peek_137() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 66
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 66 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 66 reading from capacity: 1
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
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 5 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 5 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 5 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
    // { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // # of banks: 4
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9;
};



inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16);
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_67_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_67 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_68_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_68 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_69_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_69 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_70_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_70 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_71_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_71 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_72_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_72 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_73_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_73 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_74_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_74 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_75_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_75 read pattern: { op_hcompute_blur_unnormalized_stencil_4[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_56_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_56 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_57_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_57 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_58_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_58 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_59_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_59 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_60_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_60 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_61_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_61 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_62_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_62 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_63_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_63 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_64_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_64 read pattern: { op_hcompute_blur_unnormalized_stencil_5[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_45_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_45 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_137();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_46_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_46 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_137();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_47_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_47 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_48_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_48 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_69();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_49_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_49 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_69();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_50_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_50 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_51_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_51 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_52_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_52 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_53_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_53 read pattern: { op_hcompute_blur_unnormalized_stencil_6[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_34_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_34 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_137();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_35_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_35 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_36_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_36 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[blur_unnormalized_s1_y, 5 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_136();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_37_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_37 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_69();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_38_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_38 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_39_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_39 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 5 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_68();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_40_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_40 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 3 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_41_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_41 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 5 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_42_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_42 read pattern: { op_hcompute_blur_unnormalized_stencil_7[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 4 + 4blur_unnormalized_s1_x_x] : 0 <= blur_unnormalized_s1_y <= 195 and 0 <= blur_unnormalized_s1_x_x <= 63 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22;
  return 0;
}

// # of bundles = 8
// op_hcompute_blur_unnormalized_stencil_4_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_67
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_68
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_69
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_70
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_71
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_72
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_73
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_74
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_75
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_67
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_68
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_69
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_70
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_71
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_72
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_73
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_74
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_75

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_67_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_67_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_67_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_68_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_68_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_68_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_69_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_69_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_69_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_70_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_70_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_70_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_71_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_71_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_71_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_72_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_72_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_72_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_73_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_73_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_73_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_74_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_74_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_74_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_75_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_75_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_75_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_5_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_56
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_57
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_58
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_59
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_60
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_61
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_62
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_63
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_64
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_56
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_57
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_58
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_59
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_60
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_61
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_62
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_63
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_64

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_56_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_56_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_56_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_57_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_57_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_57_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_58_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_58_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_58_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_59_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_59_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_59_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_60_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_60_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_60_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_61_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_61_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_61_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_62_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_62_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_62_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_63_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_63_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_63_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_64_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_64_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_64_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_6_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_45
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_46
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_47
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_48
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_49
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_50
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_51
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_52
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_53
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_45
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_46
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_47
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_48
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_49
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_50
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_51
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_52
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_53

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_45_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_45_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_45_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_46_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_46_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_46_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_47_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_47_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_47_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_48_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_48_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_48_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_49_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_49_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_49_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_50_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_50_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_50_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_51_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_51_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_51_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_52_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_52_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_52_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_53_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_53_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_53_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_7_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_34
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_35
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_36
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_37
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_38
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_39
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_40
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_41
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_42
inline hw_uint<144> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_34
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_35
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_36
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_37
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_38
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_39
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_40
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_41
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_42

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_34_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_34_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_34_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_35_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_35_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_35_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_36_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_36_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_36_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_37_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_37_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_37_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_38_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_38_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_38_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_39_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_39_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_39_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_40_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_40_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_40_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_41_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_41_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_41_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_42_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_42_select(hw_input_global_wrapper_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_42_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_20_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_18_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_16_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_22_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

struct hw_output_stencil_op_hcompute_hw_output_stencil_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15_cache {
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

struct hw_output_stencil_op_hcompute_hw_output_stencil_1_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13_cache {
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

struct hw_output_stencil_op_hcompute_hw_output_stencil_2_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11_cache {
	// RAM Box: {[0, 195], [2, 254]}
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

struct hw_output_stencil_op_hcompute_hw_output_stencil_3_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9_cache {
	// RAM Box: {[0, 195], [3, 255]}
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
    // { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
    // { op_hcompute_hw_output_global_wrapper_glb_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 3 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
  // # of banks: 4
  hw_output_stencil_op_hcompute_hw_output_stencil_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15_cache hw_output_stencil_op_hcompute_hw_output_stencil_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15;
  hw_output_stencil_op_hcompute_hw_output_stencil_1_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13_cache hw_output_stencil_op_hcompute_hw_output_stencil_1_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13;
  hw_output_stencil_op_hcompute_hw_output_stencil_2_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11_cache hw_output_stencil_op_hcompute_hw_output_stencil_2_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11;
  hw_output_stencil_op_hcompute_hw_output_stencil_3_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9_cache hw_output_stencil_op_hcompute_hw_output_stencil_3_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9;
};



inline void hw_output_stencil_op_hcompute_hw_output_stencil_1_4_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_1_4, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_1_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13.push(hw_output_stencil_op_hcompute_hw_output_stencil_1_4);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_2_2_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_2_2, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_2_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11.push(hw_output_stencil_op_hcompute_hw_output_stencil_2_2);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_3_0_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_3_0, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_3_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9.push(hw_output_stencil_op_hcompute_hw_output_stencil_3_0);
}

inline void hw_output_stencil_op_hcompute_hw_output_stencil_6_write(hw_uint<16>& hw_output_stencil_op_hcompute_hw_output_stencil_6, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15.push(hw_output_stencil_op_hcompute_hw_output_stencil_6);
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 20] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_6 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_6_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_6;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 21] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_1_4 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_1_4_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_1_4;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 2 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 22] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_2_2 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_2_2_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_2_2;
  return 0;
}

inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9_select(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9 read pattern: { op_hcompute_hw_output_global_wrapper_glb_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_stencil[hw_output_global_wrapper_s0_y_yi, 3 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_output_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 23] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
  auto value_hw_output_stencil_op_hcompute_hw_output_stencil_3_0 = hw_output_stencil.hw_output_stencil_op_hcompute_hw_output_stencil_3_0_to_hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9.peek(/* one reader or all rams */ 0);
  return value_hw_output_stencil_op_hcompute_hw_output_stencil_3_0;
  return 0;
}

// # of bundles = 8
// op_hcompute_hw_output_global_wrapper_glb_stencil_1_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_13_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_2_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_11_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_3_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_9_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_glb_stencil_read
//	hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15
inline hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_read_bundle_read(hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15

	hw_uint<16> result;
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15_res = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15_select(hw_output_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_15_res);
	return result;
}

// op_hcompute_hw_output_stencil_1_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_1_4
inline void hw_output_stencil_op_hcompute_hw_output_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_1_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_1_4_res = op_hcompute_hw_output_stencil_1_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_1_4_write(hw_output_stencil_op_hcompute_hw_output_stencil_1_4_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_2_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_2_2
inline void hw_output_stencil_op_hcompute_hw_output_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_2_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_2_2_res = op_hcompute_hw_output_stencil_2_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_2_2_write(hw_output_stencil_op_hcompute_hw_output_stencil_2_2_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_3_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_3_0
inline void hw_output_stencil_op_hcompute_hw_output_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_3_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_3_0_res = op_hcompute_hw_output_stencil_3_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_3_0_write(hw_output_stencil_op_hcompute_hw_output_stencil_3_0_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_stencil_write
//	hw_output_stencil_op_hcompute_hw_output_stencil_6
inline void hw_output_stencil_op_hcompute_hw_output_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_stencil_write, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_stencil_op_hcompute_hw_output_stencil_6_res = op_hcompute_hw_output_stencil_write.extract<0, 15>();
	hw_output_stencil_op_hcompute_hw_output_stencil_6_write(hw_output_stencil_op_hcompute_hw_output_stencil_6_res, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// Total re-use buffer capacity: 8736 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_glb_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_0, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_0
	auto hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_s0_x_x_m_4_rp__value = hw_input_stencil_clkwrk_0.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_s0_x_x_m_4_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_1, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_1
	auto hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_4_rp___p__1_rp__value = hw_input_stencil_clkwrk_1.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_4_rp___p__1_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_2, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_2
	auto hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_4_rp___p__2_rp__value = hw_input_stencil_clkwrk_2.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_4_rp___p__2_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_3, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_3
	auto hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_4_rp___p__3_rp__value = hw_input_stencil_clkwrk_3.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_4_rp___p__3_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_4_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_4_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_4_rp___p__1_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_4_rp___p__1_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_4_rp___p__2_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_4_rp___p__2_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_4_rp___p__3_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_4_rp___p__3_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa8
	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_1();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa8
	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_2();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa8
	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_2_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil_3();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa8
	blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_3_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa8, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_4(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa8
	auto blur_unnormalized_stencil_clkwrk_dsa8_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_4_rp__value = blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_4_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa8/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_4_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_4_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_4(blur_unnormalized_stencil_clkwrk_dsa8_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_4_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp_blur_unnormalized_s1_x_x_m_4_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_4_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_5(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa8
	auto blur_unnormalized_stencil_clkwrk_dsa8_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__1_rp__value = blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_5_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa8/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__1_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_5_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_5(blur_unnormalized_stencil_clkwrk_dsa8_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__1_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__1_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_5_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_6(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa8
	auto blur_unnormalized_stencil_clkwrk_dsa8_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__2_rp__value = blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_6_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa8/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__2_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_6_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_6(blur_unnormalized_stencil_clkwrk_dsa8_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__2_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__2_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_6_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_7(blur_unnormalized_stencil_clkwrk_dsa8_cache& blur_unnormalized_stencil_clkwrk_dsa8, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa8
	auto blur_unnormalized_stencil_clkwrk_dsa8_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__3_rp__value = blur_unnormalized_stencil_clkwrk_dsa8_op_hcompute_blur_unnormalized_stencil_7_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa8/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__3_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_7_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_7(blur_unnormalized_stencil_clkwrk_dsa8_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__3_rp__value, hw_input_global_wrapper_global_wrapper_stencil_blur_unnormalized_s1_y_c___lp__lp_blur_unnormalized_s1_x_x_m_4_rp___p__3_rp__value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_7_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp_blur_s0_x_x_m_4_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil(blur_unnormalized_stencil_blur_s0_y_c___lp_blur_s0_x_x_m_4_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_1(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_4_rp___p__1_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_1_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_1(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_4_rp___p__1_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_1_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_2(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_4_rp___p__2_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_2_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_2(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_4_rp___p__2_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_2_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil_3(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_4_rp___p__3_rp__value = blur_unnormalized_stencil_op_hcompute_blur_stencil_3_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil_3(blur_unnormalized_stencil_blur_s0_y_c___lp__lp_blur_s0_x_x_m_4_rp___p__3_rp__value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_3_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_4_rp__value = blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil(blur_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_4_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_1(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_4_rp___p__1_rp__value = blur_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_1(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_4_rp___p__1_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_1_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_2(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_4_rp___p__2_rp__value = blur_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_2(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_4_rp___p__2_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_2_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil_3(blur_stencil_cache& blur_stencil, hw_output_stencil_cache& hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_4_rp___p__3_rp__value = blur_stencil_op_hcompute_hw_output_stencil_3_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil_3(blur_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_4_rp___p__3_rp__value);
	// Produce: hw_output_stencil
	hw_output_stencil_op_hcompute_hw_output_stencil_3_write_bundle_write(/* arg names */compute_result, hw_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_4, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_4_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_4_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_4
	hw_output_global_wrapper_glb_stencil_clkwrk_4.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_5, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_4_rp___p__1_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_1_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_4_rp___p__1_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_5
	hw_output_global_wrapper_glb_stencil_clkwrk_5.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_2(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_6, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_4_rp___p__2_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_2_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_2(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_4_rp___p__2_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_6
	hw_output_global_wrapper_glb_stencil_clkwrk_6.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_glb_stencil_3(hw_output_stencil_cache& hw_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_7, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_stencil
	auto hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_4_rp___p__3_rp__value = hw_output_stencil_op_hcompute_hw_output_global_wrapper_glb_stencil_3_read_bundle_read(hw_output_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_glb_stencil_3(hw_output_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_4_rp___p__3_rp__value);
	// Produce: hw_output_global_wrapper_glb_stencil_clkwrk_7
	hw_output_global_wrapper_glb_stencil_clkwrk_7.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void gaussian_glb(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_7) {

#ifndef __SYNTHESIS__
  ofstream debug_file("gaussian_glb_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  blur_stencil_cache blur_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_cache blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_clkwrk_dsa8_cache blur_unnormalized_stencil_clkwrk_dsa8;
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

// schedule: { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 8] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 10] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 20] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_output_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67; op_hcompute_hw_output_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 23] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 67; op_hcompute_hw_output_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 22] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67; op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 19] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 21] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 67; op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 67; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67; op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 18] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 11] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 195 and 0 <= d2 <= 63; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67; op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
//   { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 8] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_unnormalized_stencil(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 10] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_unnormalized_stencil_2(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 24] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_7[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 15] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_unnormalized_stencil_7(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_stencil(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_6[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 14] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_unnormalized_stencil_6(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 20] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_stencil(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 26] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_2(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 23] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_stencil_3(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_1(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 27] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_3(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 22] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_stencil_2(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 25] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_global_wrapper_glb_stencil_1(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 19] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_stencil_3(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 21] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_stencil_1(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_3(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_stencil_1(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_5[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_unnormalized_stencil_5(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 18] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_stencil_2(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_4[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_unnormalized_stencil_4(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 11] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_unnormalized_stencil_3(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 195 and 0 <= d2 <= 63 }
// Condition for op_hcompute_blur_unnormalized_stencil_1(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 197 and 0 <= d2 <= 67 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_2(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((197 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 197; c1 += 1)
	  for (int c2 = 0; c2 <= 67; c2 += 1) {
	    op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    if (c1 >= 2 && c2 <= 63) {
	      op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa8, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa8, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 64) {
	      op_hcompute_blur_unnormalized_stencil_2(blur_unnormalized_stencil_clkwrk_dsa8, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_unnormalized_stencil_3(blur_unnormalized_stencil_clkwrk_dsa8, 0, c1 - 2, c2 - 1);
	    }
	    if (c1 >= 2 && c2 <= 63) {
	      op_hcompute_blur_unnormalized_stencil_4(blur_unnormalized_stencil_clkwrk_dsa8 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_unnormalized_stencil_5(blur_unnormalized_stencil_clkwrk_dsa8 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 64) {
	      op_hcompute_blur_unnormalized_stencil_6(blur_unnormalized_stencil_clkwrk_dsa8 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_unnormalized_stencil_7(blur_unnormalized_stencil_clkwrk_dsa8 /* buf name */, hw_input_global_wrapper_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 1);
	    }
	    if (c1 >= 2 && c2 <= 63) {
	      op_hcompute_blur_stencil(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2);
	      op_hcompute_blur_stencil_1(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 64) {
	      op_hcompute_blur_stencil_2(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_blur_stencil_3(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2 - 1);
	    }
	    if (c1 >= 2 && c2 <= 63) {
	      op_hcompute_hw_output_stencil(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2);
	      op_hcompute_hw_output_stencil_1(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 64) {
	      op_hcompute_hw_output_stencil_2(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2 - 1);
	      op_hcompute_hw_output_stencil_3(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2 - 1);
	    }
	    if (c1 >= 2 && c2 <= 63) {
	      op_hcompute_hw_output_global_wrapper_glb_stencil(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_4, 0, c1 - 2, c2);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_1(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_5, 0, c1 - 2, c2);
	    }
	    if (c1 >= 2 && c2 >= 1 && c2 <= 64) {
	      op_hcompute_hw_output_global_wrapper_glb_stencil_2(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_6, 0, c1 - 2, c2 - 1);
	      op_hcompute_hw_output_global_wrapper_glb_stencil_3(hw_output_stencil /* buf name */, hw_output_global_wrapper_glb_stencil_clkwrk_7, 0, c1 - 2, c2 - 1);
	    }
	  }
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void gaussian_glb_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_glb_stencil_clkwrk_7, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gaussian_glb(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_output_global_wrapper_glb_stencil_clkwrk_4, hw_output_global_wrapper_glb_stencil_clkwrk_5, hw_output_global_wrapper_glb_stencil_clkwrk_6, hw_output_global_wrapper_glb_stencil_clkwrk_7);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, 4hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 67 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers = 13464;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, 1 + 4hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 67 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers = 13464;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_2[hw_input_global_wrapper_s0_y, 2 + 4hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 67 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers = 13464;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_3[hw_input_global_wrapper_s0_y, 3 + 4hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 197 and 0 <= hw_input_global_wrapper_s0_x_x <= 67 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers = 13464;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_4[hw_output_global_wrapper_s0_y_yi, 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_num_transfers = 12544;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_5[hw_output_global_wrapper_s0_y_yi, 1 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_num_transfers = 12544;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_6[hw_output_global_wrapper_s0_y_yi, 2 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_num_transfers = 12544;
  // { op_hcompute_hw_output_global_wrapper_glb_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_glb_stencil_clkwrk_7[hw_output_global_wrapper_s0_y_yi, 3 + 4hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 195 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 63 }
const int op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_num_transfers = 12544;


extern "C" {

void gaussian_glb_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers*size);

  gaussian_glb_wrapper(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gaussian_glb_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gaussian_glb(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_glb_stencil_3_write_pipe0);

}

}
#endif //__SYNTHESIS__

