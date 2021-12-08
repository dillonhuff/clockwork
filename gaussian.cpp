#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: gaussian_compute.h
#include "gaussian_compute.h"

struct blur_stencil_op_hcompute_blur_stencil_16_to_blur_stencil_op_hcompute_hw_output_stencil_1_cache {
	// RAM Box: {[0, 61], [0, 61]}
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
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> blur_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
  // # of banks: 1
  blur_stencil_op_hcompute_blur_stencil_16_to_blur_stencil_op_hcompute_hw_output_stencil_1_cache blur_stencil_op_hcompute_blur_stencil_16_to_blur_stencil_op_hcompute_hw_output_stencil_1;
};



inline void blur_stencil_op_hcompute_blur_stencil_16_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_16, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_16_to_blur_stencil_op_hcompute_hw_output_stencil_1.push(blur_stencil_op_hcompute_blur_stencil_16);
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_stencil_op_hcompute_hw_output_stencil_1 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> blur_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  auto value_blur_stencil_op_hcompute_blur_stencil_16 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_16_to_blur_stencil_op_hcompute_hw_output_stencil_1.peek(/* one reader or all rams */ 0);
  return value_blur_stencil_op_hcompute_blur_stencil_16;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_stencil_write
//	blur_stencil_op_hcompute_blur_stencil_16
inline void blur_stencil_op_hcompute_blur_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_16_res = op_hcompute_blur_stencil_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_16_write(blur_stencil_op_hcompute_blur_stencil_16_res, blur_stencil, root, blur_s0_y, blur_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	blur_stencil_op_hcompute_hw_output_stencil_1
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_1

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_1_res = blur_stencil_op_hcompute_hw_output_stencil_1_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_1_res);
	return result;
}

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_cache {
	// RAM Box: {[0, 61], [0, 61]}
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
    // { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x] -> blur_unnormalized_stencil[blur_s0_y, blur_s0_x] : 0 <= blur_s0_y <= 61 and 0 <= blur_s0_x <= 61 }
  // # of banks: 1
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_17_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_17;
};



inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_17.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4);
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_17_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_17 read pattern: { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x] -> blur_unnormalized_stencil[blur_s0_y, blur_s0_x] : 0 <= blur_s0_y <= 61 and 0 <= blur_s0_x <= 61 }
  // Read schedule : { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_17.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_stencil_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_17
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_17

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_17_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_17_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_17_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_1_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_1_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_res = op_hcompute_blur_unnormalized_stencil_1_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
}

struct blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_cache {
	// RAM Box: {[0, 61], [0, 61]}
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

struct blur_unnormalized_stencil_clkwrk_dsa0_cache {
  // Reader addrs...
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> blur_unnormalized_stencil_clkwrk_dsa0[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // # of banks: 1
  blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_cache blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5;
};



inline void blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15, blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa0.blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5.push(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15);
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_select(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> blur_unnormalized_stencil_clkwrk_dsa0[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15 = blur_unnormalized_stencil_clkwrk_dsa0.blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_unnormalized_stencil_1_read
//	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_res = blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_select(blur_unnormalized_stencil_clkwrk_dsa0, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_5_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_write
//	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15
inline void blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_write, blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_res = op_hcompute_blur_unnormalized_stencil_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_write(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_15_res, blur_unnormalized_stencil_clkwrk_dsa0, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x, dynamic_address);
}

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 131
	// # of read delays: 9
  // 0, 1, 2, 64, 65, 66, 128, 129, 130
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 61> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 61> f11;
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

	inline hw_uint<16> peek_63() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_64() {
		return f6;
	}

	inline hw_uint<16> peek_65() {
		return f8;
	}

	inline hw_uint<16> peek_66() {
		return f10;
	}

	inline hw_uint<16> peek_127() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_128() {
		return f12;
	}

	inline hw_uint<16> peek_129() {
		return f14;
	}

	inline hw_uint<16> peek_130() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 61
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 61 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 61 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // # of banks: 1
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_10_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_10 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_65();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_11_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_11 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_64();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_12_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_12 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_13_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_13 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_14_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_14 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_6_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_6 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_130();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_7_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_7 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_129();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_8_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_8 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_128();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_9_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_9 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_merged_banks_9.peek_66();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_unnormalized_stencil_1_read
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_6
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_7
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_8
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_9
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_10
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_11
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_12
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_13
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_14
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_6
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_7
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_8
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_9
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_10
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_11
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_12
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_13
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_14

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_6_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_6_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_6_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_7_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_7_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_7_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_8_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_8_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_8_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_9_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_9_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_9_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_10_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_10_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_10_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_11_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_11_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_11_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_12_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_12_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_12_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_13_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_13_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_13_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_14_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_14_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_14_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 2080 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa0
	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa0, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa0
	auto blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_s1_y_c__blur_unnormalized_s1_x_value = blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa0/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_blur_unnormalized_s1_y_c__blur_unnormalized_s1_x_value = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_s1_y_c__blur_unnormalized_s1_x_value, hw_input_global_wrapper_stencil_blur_unnormalized_s1_y_c__blur_unnormalized_s1_x_value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_blur_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_y_c__blur_s0_x_value = blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_blur_stencil(blur_unnormalized_stencil_blur_s0_y_c__blur_s0_x_value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil(blur_stencil_cache& blur_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil(blur_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void gaussian(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __SYNTHESIS__
  ofstream debug_file("gaussian_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  blur_stencil_cache blur_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_cache blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_clkwrk_dsa0_cache blur_unnormalized_stencil_clkwrk_dsa0;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : 0 <= d1 <= 61 and 0 <= d2 <= 61; op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 61 and 0 <= d2 <= 61; op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61; op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
// Condition for op_hcompute_hw_output_stencil(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
// Condition for op_hcompute_blur_unnormalized_stencil(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
// Condition for op_hcompute_blur_unnormalized_stencil_1(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { op_hcompute_blur_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : 0 <= d1 <= 61 and 0 <= d2 <= 61 }
// Condition for op_hcompute_blur_stencil(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 63; c1 += 1)
	  for (int c2 = 0; c2 <= 63; c2 += 1) {
	    op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c1, c2);
	    if (c1 >= 2 && c2 >= 2) {
	      op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0, 0, c1 - 2, c2 - 2);
	      op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0 /* buf name */, hw_input_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 2);
	      op_hcompute_blur_stencil(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c1 - 2, c2 - 2);
	      op_hcompute_hw_output_stencil(blur_stencil /* buf name */, hw_output_stencil, 0, c1 - 2, c2 - 2);
	    }
	  }
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void gaussian_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gaussian(hw_input_stencil, hw_output_stencil);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 4096;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 3844;


extern "C" {

void gaussian_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers*size);

  gaussian_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gaussian_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gaussian(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__SYNTHESIS__

