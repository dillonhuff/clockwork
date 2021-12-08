#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: laplacian_pyramid_compute.h
#include "laplacian_pyramid_compute.h"

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_to_blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7_cache {
	// RAM Box: {[-7, 65], [-7, 65]}
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
    // { op_hcompute_l0_0_stencil[root = 0, l0_0_s0_y, l0_0_s0_x] -> blur_unnormalized_stencil[-1 + l0_0_s0_y, -1 + l0_0_s0_x] : -6 <= l0_0_s0_y <= 66 and -6 <= l0_0_s0_x <= 66 }
  // # of banks: 1
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_to_blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_to_blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7;
};



inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_to_blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68);
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int l0_0_s0_y, int l0_0_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7 read pattern: { op_hcompute_l0_0_stencil[root = 0, l0_0_s0_y, l0_0_s0_x] -> blur_unnormalized_stencil[-1 + l0_0_s0_y, -1 + l0_0_s0_x] : -6 <= l0_0_s0_y <= 66 and -6 <= l0_0_s0_x <= 66 }
  // Read schedule : { op_hcompute_l0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -6 <= d1 <= 66 and -6 <= d2 <= 66 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_to_blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_unnormalized_stencil_1_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_1_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_res = op_hcompute_blur_unnormalized_stencil_1_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_68_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
}

// op_hcompute_l0_0_stencil_read
//	blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_l0_0_stencil_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int l0_0_s0_y, int l0_0_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7_res = blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7_select(blur_unnormalized_stencil, root, l0_0_s0_y, l0_0_s0_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_l0_0_stencil_7_res);
	return result;
}

struct blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69_cache {
	// RAM Box: {[-7, 65], [-7, 65]}
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
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> blur_unnormalized_stencil_clkwrk_dsa0[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // # of banks: 1
  blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69_cache blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69;
};



inline void blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79, blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa0.blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69.push(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79);
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69_select(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> blur_unnormalized_stencil_clkwrk_dsa0[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79 = blur_unnormalized_stencil_clkwrk_dsa0.blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_unnormalized_stencil_1_read
//	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69_res = blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69_select(blur_unnormalized_stencil_clkwrk_dsa0, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_69_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_write
//	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79
inline void blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_write, blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_res = op_hcompute_blur_unnormalized_stencil_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_write(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_79_res, blur_unnormalized_stencil_clkwrk_dsa0, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x, dynamic_address);
}

struct f0_up_stencil_op_hcompute_f0_up_stencil_65_to_f0_up_stencil_op_hcompute_hw_output_stencil_9_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct f0_up_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> f0_up_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
  // # of banks: 1
  f0_up_stencil_op_hcompute_f0_up_stencil_65_to_f0_up_stencil_op_hcompute_hw_output_stencil_9_cache f0_up_stencil_op_hcompute_f0_up_stencil_65_to_f0_up_stencil_op_hcompute_hw_output_stencil_9;
};



inline void f0_up_stencil_op_hcompute_f0_up_stencil_65_write(hw_uint<16>& f0_up_stencil_op_hcompute_f0_up_stencil_65, f0_up_stencil_cache& f0_up_stencil, int root, int f0_up_s0_y, int f0_up_s0_x, int dynamic_address) {
  f0_up_stencil.f0_up_stencil_op_hcompute_f0_up_stencil_65_to_f0_up_stencil_op_hcompute_hw_output_stencil_9.push(f0_up_stencil_op_hcompute_f0_up_stencil_65);
}

inline hw_uint<16> f0_up_stencil_op_hcompute_hw_output_stencil_9_select(f0_up_stencil_cache& f0_up_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f0_up_stencil_op_hcompute_hw_output_stencil_9 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> f0_up_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 21] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_f0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_f0_up_stencil_op_hcompute_f0_up_stencil_65 = f0_up_stencil.f0_up_stencil_op_hcompute_f0_up_stencil_65_to_f0_up_stencil_op_hcompute_hw_output_stencil_9.peek(/* one reader or all rams */ 0);
  return value_f0_up_stencil_op_hcompute_f0_up_stencil_65;
  return 0;
}

// # of bundles = 2
// op_hcompute_f0_up_stencil_write
//	f0_up_stencil_op_hcompute_f0_up_stencil_65
inline void f0_up_stencil_op_hcompute_f0_up_stencil_write_bundle_write(hw_uint<16>& op_hcompute_f0_up_stencil_write, f0_up_stencil_cache& f0_up_stencil, int root, int f0_up_s0_y, int f0_up_s0_x, int dynamic_address) {
	hw_uint<16> f0_up_stencil_op_hcompute_f0_up_stencil_65_res = op_hcompute_f0_up_stencil_write.extract<0, 15>();
	f0_up_stencil_op_hcompute_f0_up_stencil_65_write(f0_up_stencil_op_hcompute_f0_up_stencil_65_res, f0_up_stencil, root, f0_up_s0_y, f0_up_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	f0_up_stencil_op_hcompute_hw_output_stencil_9
inline hw_uint<16> f0_up_stencil_op_hcompute_hw_output_stencil_read_bundle_read(f0_up_stencil_cache& f0_up_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // f0_up_stencil_op_hcompute_hw_output_stencil_9

	hw_uint<16> result;
	hw_uint<16> f0_up_stencil_op_hcompute_hw_output_stencil_9_res = f0_up_stencil_op_hcompute_hw_output_stencil_9_select(f0_up_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, f0_up_stencil_op_hcompute_hw_output_stencil_9_res);
	return result;
}

struct f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10_cache {
	// RAM Box: {[-3, 33], [-3, 33]}
	// Capacity: 77
	// # of read delays: 9
  // 0, 1, 2, 37, 38, 39, 74, 75, 76
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 34> f11;
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

	inline hw_uint<16> peek_36() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_37() {
		return f6;
	}

	inline hw_uint<16> peek_38() {
		return f8;
	}

	inline hw_uint<16> peek_39() {
		return f10;
	}

	inline hw_uint<16> peek_73() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_74() {
		return f12;
	}

	inline hw_uint<16> peek_75() {
		return f14;
	}

	inline hw_uint<16> peek_76() {
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
    // cap: 1 reading from capacity: 34
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
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
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
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

struct f1_0_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[f1_blur_unnormalized_s1_y, 1 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[f1_blur_unnormalized_s1_y, 2 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[1 + f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[1 + f1_blur_unnormalized_s1_y, 2 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[2 + f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[2 + f1_blur_unnormalized_s1_y, 2 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[2 + f1_blur_unnormalized_s1_y, 1 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[1 + f1_blur_unnormalized_s1_y, 1 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_h1_0_stencil[root = 0, h1_0_s0_y, h1_0_s0_x] -> f1_0_stencil[h1_0_s0_y, h1_0_s0_x] : -1 <= h1_0_s0_y <= 32 and -1 <= h1_0_s0_x <= 32 }
  // # of banks: 1
  f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10_cache f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10;
};



inline void f1_0_stencil_op_hcompute_f1_0_stencil_63_write(hw_uint<16>& f1_0_stencil_op_hcompute_f1_0_stencil_63, f1_0_stencil_cache& f1_0_stencil, int root, int f1_0_s0_y, int f1_0_s0_x, int dynamic_address) {
  f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.push(f1_0_stencil_op_hcompute_f1_0_stencil_63);
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_52_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_52 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_76();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_53_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_53 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[f1_blur_unnormalized_s1_y, 1 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_75();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_54_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_54 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[f1_blur_unnormalized_s1_y, 2 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_74();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_55_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_55 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[1 + f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_39();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_56_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_56 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[1 + f1_blur_unnormalized_s1_y, 2 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_37();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_57_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_57 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[2 + f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_2();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_58_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_58 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[2 + f1_blur_unnormalized_s1_y, 2 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_0();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_59_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_59 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[2 + f1_blur_unnormalized_s1_y, 1 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_1();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_60_select(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_60 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_0_stencil[1 + f1_blur_unnormalized_s1_y, 1 + f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_38();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

inline hw_uint<16> f1_0_stencil_op_hcompute_h1_0_stencil_13_select(f1_0_stencil_cache& f1_0_stencil, int root, int h1_0_s0_y, int h1_0_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_0_stencil_op_hcompute_h1_0_stencil_13 read pattern: { op_hcompute_h1_0_stencil[root = 0, h1_0_s0_y, h1_0_s0_x] -> f1_0_stencil[h1_0_s0_y, h1_0_s0_x] : -1 <= h1_0_s0_y <= 32 and -1 <= h1_0_s0_x <= 32 }
  // Read schedule : { op_hcompute_h1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 9] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
  // Write schedule: { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  auto value_f1_0_stencil_op_hcompute_f1_0_stencil_63 = f1_0_stencil.f1_0_stencil_op_hcompute_f1_0_stencil_63_merged_banks_10.peek_38();
  return value_f1_0_stencil_op_hcompute_f1_0_stencil_63;
  return 0;
}

// # of bundles = 3
// op_hcompute_f1_0_stencil_write
//	f1_0_stencil_op_hcompute_f1_0_stencil_63
inline void f1_0_stencil_op_hcompute_f1_0_stencil_write_bundle_write(hw_uint<16>& op_hcompute_f1_0_stencil_write, f1_0_stencil_cache& f1_0_stencil, int root, int f1_0_s0_y, int f1_0_s0_x, int dynamic_address) {
	hw_uint<16> f1_0_stencil_op_hcompute_f1_0_stencil_63_res = op_hcompute_f1_0_stencil_write.extract<0, 15>();
	f1_0_stencil_op_hcompute_f1_0_stencil_63_write(f1_0_stencil_op_hcompute_f1_0_stencil_63_res, f1_0_stencil, root, f1_0_s0_y, f1_0_s0_x, dynamic_address);
}

// op_hcompute_f1_blur_unnormalized_stencil_1_read
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_52
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_53
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_54
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_55
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_56
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_57
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_58
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_59
//	f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_60
inline hw_uint<144> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_read_bundle_read(f1_0_stencil_cache& f1_0_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_52
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_53
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_54
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_55
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_56
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_57
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_58
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_59
    // f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_60

	hw_uint<144> result;
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_52_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_52_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_52_res);
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_53_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_53_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<16, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_53_res);
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_54_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_54_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<32, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_54_res);
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_55_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_55_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<48, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_55_res);
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_56_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_56_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<64, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_56_res);
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_57_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_57_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<80, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_57_res);
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_58_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_58_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<96, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_58_res);
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_59_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_59_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<112, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_59_res);
	hw_uint<16> f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_60_res = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_60_select(f1_0_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<128, 144>(result, f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_60_res);
	return result;
}

// op_hcompute_h1_0_stencil_read
//	f1_0_stencil_op_hcompute_h1_0_stencil_13
inline hw_uint<16> f1_0_stencil_op_hcompute_h1_0_stencil_read_bundle_read(f1_0_stencil_cache& f1_0_stencil, int root, int h1_0_s0_y, int h1_0_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f1_0_stencil_op_hcompute_h1_0_stencil_13

	hw_uint<16> result;
	hw_uint<16> f1_0_stencil_op_hcompute_h1_0_stencil_13_res = f1_0_stencil_op_hcompute_h1_0_stencil_13_select(f1_0_stencil, root, h1_0_s0_y, h1_0_s0_x, dynamic_address);
	set_at<0, 16>(result, f1_0_stencil_op_hcompute_h1_0_stencil_13_res);
	return result;
}

struct f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_to_f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3_cache {
	// RAM Box: {[-3, 31], [-3, 31]}
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

struct f1_blur_unnormalized_stencil_cache {
  // Reader addrs...
    // { op_hcompute_l1_0_stencil[root = 0, l1_0_s0_y, l1_0_s0_x] -> f1_blur_unnormalized_stencil[-1 + l1_0_s0_y, -1 + l1_0_s0_x] : -2 <= l1_0_s0_y <= 32 and -2 <= l1_0_s0_x <= 32 }
  // # of banks: 1
  f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_to_f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3_cache f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_to_f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3;
};



inline void f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_write(hw_uint<16>& f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51, f1_blur_unnormalized_stencil_cache& f1_blur_unnormalized_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
  f1_blur_unnormalized_stencil.f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_to_f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3.push(f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51);
}

inline hw_uint<16> f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3_select(f1_blur_unnormalized_stencil_cache& f1_blur_unnormalized_stencil, int root, int l1_0_s0_y, int l1_0_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3 read pattern: { op_hcompute_l1_0_stencil[root = 0, l1_0_s0_y, l1_0_s0_x] -> f1_blur_unnormalized_stencil[-1 + l1_0_s0_y, -1 + l1_0_s0_x] : -2 <= l1_0_s0_y <= 32 and -2 <= l1_0_s0_x <= 32 }
  // Read schedule : { op_hcompute_l1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 8] : -2 <= d1 <= 32 and -2 <= d2 <= 32 }
  // Write schedule: { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  auto value_f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51 = f1_blur_unnormalized_stencil.f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_to_f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3.peek(/* one reader or all rams */ 0);
  return value_f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51;
  return 0;
}

// # of bundles = 2
// op_hcompute_f1_blur_unnormalized_stencil_1_write
//	f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51
inline void f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_f1_blur_unnormalized_stencil_1_write, f1_blur_unnormalized_stencil_cache& f1_blur_unnormalized_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
	hw_uint<16> f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_res = op_hcompute_f1_blur_unnormalized_stencil_1_write.extract<0, 15>();
	f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_write(f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_51_res, f1_blur_unnormalized_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
}

// op_hcompute_l1_0_stencil_read
//	f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3
inline hw_uint<16> f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_read_bundle_read(f1_blur_unnormalized_stencil_cache& f1_blur_unnormalized_stencil, int root, int l1_0_s0_y, int l1_0_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3

	hw_uint<16> result;
	hw_uint<16> f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3_res = f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3_select(f1_blur_unnormalized_stencil, root, l1_0_s0_y, l1_0_s0_x, dynamic_address);
	set_at<0, 16>(result, f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_3_res);
	return result;
}

struct f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_to_f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61_cache {
	// RAM Box: {[-3, 31], [-3, 31]}
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

struct f1_blur_unnormalized_stencil_clkwrk_dsa1_cache {
  // Reader addrs...
    // { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_blur_unnormalized_stencil_clkwrk_dsa1[f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // # of banks: 1
  f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_to_f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61_cache f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_to_f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61;
};



inline void f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_write(hw_uint<16>& f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62, f1_blur_unnormalized_stencil_clkwrk_dsa1_cache& f1_blur_unnormalized_stencil_clkwrk_dsa1, int root, int f1_blur_unnormalized_s0_y, int f1_blur_unnormalized_s0_x, int dynamic_address) {
  f1_blur_unnormalized_stencil_clkwrk_dsa1.f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_to_f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61.push(f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62);
}

inline hw_uint<16> f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61_select(f1_blur_unnormalized_stencil_clkwrk_dsa1_cache& f1_blur_unnormalized_stencil_clkwrk_dsa1, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61 read pattern: { op_hcompute_f1_blur_unnormalized_stencil_1[root = 0, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] -> f1_blur_unnormalized_stencil_clkwrk_dsa1[f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x] : -3 <= f1_blur_unnormalized_s1_y <= 31 and -3 <= f1_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f1_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 6] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
  auto value_f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62 = f1_blur_unnormalized_stencil_clkwrk_dsa1.f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_to_f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61.peek(/* one reader or all rams */ 0);
  return value_f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62;
  return 0;
}

// # of bundles = 2
// op_hcompute_f1_blur_unnormalized_stencil_1_read
//	f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61
inline hw_uint<16> f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_read_bundle_read(f1_blur_unnormalized_stencil_clkwrk_dsa1_cache& f1_blur_unnormalized_stencil_clkwrk_dsa1, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61

	hw_uint<16> result;
	hw_uint<16> f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61_res = f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61_select(f1_blur_unnormalized_stencil_clkwrk_dsa1, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 16>(result, f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_61_res);
	return result;
}

// op_hcompute_f1_blur_unnormalized_stencil_write
//	f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62
inline void f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_f1_blur_unnormalized_stencil_write, f1_blur_unnormalized_stencil_clkwrk_dsa1_cache& f1_blur_unnormalized_stencil_clkwrk_dsa1, int root, int f1_blur_unnormalized_s0_y, int f1_blur_unnormalized_s0_x, int dynamic_address) {
	hw_uint<16> f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_res = op_hcompute_f1_blur_unnormalized_stencil_write.extract<0, 15>();
	f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_write(f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_62_res, f1_blur_unnormalized_stencil_clkwrk_dsa1, root, f1_blur_unnormalized_s0_y, f1_blur_unnormalized_s0_x, dynamic_address);
}

struct f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_to_f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5_cache {
	// RAM Box: {[-1, 62], [-1, 62]}
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

struct f1_temp_blur_unnormalized_stencil_cache {
  // Reader addrs...
    // { op_hcompute_l0_up_stencil[root = 0, l0_up_s0_y, l0_up_s0_x] -> f1_temp_blur_unnormalized_stencil[-1 + l0_up_s0_y, -1 + l0_up_s0_x] : 0 <= l0_up_s0_y <= 63 and 0 <= l0_up_s0_x <= 63 }
  // # of banks: 1
  f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_to_f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5_cache f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_to_f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5;
};



inline void f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_write(hw_uint<16>& f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39, f1_temp_blur_unnormalized_stencil_cache& f1_temp_blur_unnormalized_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
  f1_temp_blur_unnormalized_stencil.f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_to_f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5.push(f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39);
}

inline hw_uint<16> f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5_select(f1_temp_blur_unnormalized_stencil_cache& f1_temp_blur_unnormalized_stencil, int root, int l0_up_s0_y, int l0_up_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5 read pattern: { op_hcompute_l0_up_stencil[root = 0, l0_up_s0_y, l0_up_s0_x] -> f1_temp_blur_unnormalized_stencil[-1 + l0_up_s0_y, -1 + l0_up_s0_x] : 0 <= l0_up_s0_y <= 63 and 0 <= l0_up_s0_x <= 63 }
  // Read schedule : { op_hcompute_l0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  auto value_f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39 = f1_temp_blur_unnormalized_stencil.f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_to_f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5.peek(/* one reader or all rams */ 0);
  return value_f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39;
  return 0;
}

// # of bundles = 2
// op_hcompute_f1_temp_blur_unnormalized_stencil_1_write
//	f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39
inline void f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_f1_temp_blur_unnormalized_stencil_1_write, f1_temp_blur_unnormalized_stencil_cache& f1_temp_blur_unnormalized_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
	hw_uint<16> f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_res = op_hcompute_f1_temp_blur_unnormalized_stencil_1_write.extract<0, 15>();
	f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_write(f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_39_res, f1_temp_blur_unnormalized_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
}

// op_hcompute_l0_up_stencil_read
//	f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5
inline hw_uint<16> f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_read_bundle_read(f1_temp_blur_unnormalized_stencil_cache& f1_temp_blur_unnormalized_stencil, int root, int l0_up_s0_y, int l0_up_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5

	hw_uint<16> result;
	hw_uint<16> f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5_res = f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5_select(f1_temp_blur_unnormalized_stencil, root, l0_up_s0_y, l0_up_s0_x, dynamic_address);
	set_at<0, 16>(result, f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_5_res);
	return result;
}

struct f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_to_f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49_cache {
	// RAM Box: {[-1, 62], [-1, 62]}
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

struct f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_cache {
  // Reader addrs...
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_blur_unnormalized_stencil_clkwrk_dsa2[f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // # of banks: 1
  f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_to_f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49_cache f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_to_f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49;
};



inline void f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_write(hw_uint<16>& f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_cache& f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, int root, int f1_temp_blur_unnormalized_s0_y, int f1_temp_blur_unnormalized_s0_x, int dynamic_address) {
  f1_temp_blur_unnormalized_stencil_clkwrk_dsa2.f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_to_f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49.push(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50);
}

inline hw_uint<16> f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49_select(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_cache& f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_blur_unnormalized_stencil_clkwrk_dsa2[f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 17] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  auto value_f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50 = f1_temp_blur_unnormalized_stencil_clkwrk_dsa2.f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_to_f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49.peek(/* one reader or all rams */ 0);
  return value_f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50;
  return 0;
}

// # of bundles = 2
// op_hcompute_f1_temp_blur_unnormalized_stencil_1_read
//	f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49
inline hw_uint<16> f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_read_bundle_read(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_cache& f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49

	hw_uint<16> result;
	hw_uint<16> f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49_res = f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49_select(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 16>(result, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_49_res);
	return result;
}

// op_hcompute_f1_temp_blur_unnormalized_stencil_write
//	f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50
inline void f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_f1_temp_blur_unnormalized_stencil_write, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_cache& f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, int root, int f1_temp_blur_unnormalized_s0_y, int f1_temp_blur_unnormalized_s0_x, int dynamic_address) {
	hw_uint<16> f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_res = op_hcompute_f1_temp_blur_unnormalized_stencil_write.extract<0, 15>();
	f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_write(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_50_res, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, root, f1_temp_blur_unnormalized_s0_y, f1_temp_blur_unnormalized_s0_x, dynamic_address);
}

struct f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9_cache {
	// RAM Box: {[-1, 64], [-1, 64]}
	// Capacity: 135
	// # of read delays: 9
  // 0, 1, 2, 66, 67, 68, 132, 133, 134
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 63> f11;
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

	inline hw_uint<16> peek_65() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_66() {
		return f6;
	}

	inline hw_uint<16> peek_67() {
		return f8;
	}

	inline hw_uint<16> peek_68() {
		return f10;
	}

	inline hw_uint<16> peek_131() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_132() {
		return f12;
	}

	inline hw_uint<16> peek_133() {
		return f14;
	}

	inline hw_uint<16> peek_134() {
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
    // cap: 1 reading from capacity: 63
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 63 reading from capacity: 1
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
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 63 reading from capacity: 1
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

struct f1_temp_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[f1_temp_blur_unnormalized_s1_y, 1 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[f1_temp_blur_unnormalized_s1_y, 2 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[1 + f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[1 + f1_temp_blur_unnormalized_s1_y, 2 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[2 + f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[2 + f1_temp_blur_unnormalized_s1_y, 2 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[2 + f1_temp_blur_unnormalized_s1_y, 1 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
    // { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[1 + f1_temp_blur_unnormalized_s1_y, 1 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // # of banks: 1
  f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9_cache f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9;
};



inline void f1_temp_stencil_op_hcompute_f1_temp_stencil_37_write(hw_uint<16>& f1_temp_stencil_op_hcompute_f1_temp_stencil_37, f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_s0_y, int f1_temp_s0_x, int dynamic_address) {
  f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.push(f1_temp_stencil_op_hcompute_f1_temp_stencil_37);
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_40_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_40 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_134();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_41_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_41 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[f1_temp_blur_unnormalized_s1_y, 1 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_133();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_42_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_42 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[f1_temp_blur_unnormalized_s1_y, 2 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_132();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_43_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_43 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[1 + f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_68();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_44_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_44 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[1 + f1_temp_blur_unnormalized_s1_y, 2 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_66();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_45_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_45 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[2 + f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_2();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_46_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_46 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[2 + f1_temp_blur_unnormalized_s1_y, 2 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_0();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_47_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_47 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[2 + f1_temp_blur_unnormalized_s1_y, 1 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_1();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

inline hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_48_select(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_48 read pattern: { op_hcompute_f1_temp_blur_unnormalized_stencil_1[root = 0, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x] -> f1_temp_stencil[1 + f1_temp_blur_unnormalized_s1_y, 1 + f1_temp_blur_unnormalized_s1_x] : -1 <= f1_temp_blur_unnormalized_s1_y <= 62 and -1 <= f1_temp_blur_unnormalized_s1_x <= 62 }
  // Read schedule : { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
  // Write schedule: { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  auto value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37 = f1_temp_stencil.f1_temp_stencil_op_hcompute_f1_temp_stencil_37_merged_banks_9.peek_67();
  return value_f1_temp_stencil_op_hcompute_f1_temp_stencil_37;
  return 0;
}

// # of bundles = 2
// op_hcompute_f1_temp_blur_unnormalized_stencil_1_read
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_40
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_41
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_42
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_43
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_44
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_45
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_46
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_47
//	f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_48
inline hw_uint<144> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_read_bundle_read(f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_40
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_41
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_42
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_43
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_44
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_45
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_46
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_47
    // f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_48

	hw_uint<144> result;
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_40_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_40_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_40_res);
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_41_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_41_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<16, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_41_res);
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_42_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_42_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<32, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_42_res);
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_43_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_43_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<48, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_43_res);
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_44_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_44_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<64, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_44_res);
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_45_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_45_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<80, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_45_res);
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_46_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_46_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<96, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_46_res);
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_47_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_47_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<112, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_47_res);
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_48_res = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_48_select(f1_temp_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<128, 144>(result, f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_48_res);
	return result;
}

// op_hcompute_f1_temp_stencil_write
//	f1_temp_stencil_op_hcompute_f1_temp_stencil_37
inline void f1_temp_stencil_op_hcompute_f1_temp_stencil_write_bundle_write(hw_uint<16>& op_hcompute_f1_temp_stencil_write, f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_s0_y, int f1_temp_s0_x, int dynamic_address) {
	hw_uint<16> f1_temp_stencil_op_hcompute_f1_temp_stencil_37_res = op_hcompute_f1_temp_stencil_write.extract<0, 15>();
	f1_temp_stencil_op_hcompute_f1_temp_stencil_37_write(f1_temp_stencil_op_hcompute_f1_temp_stencil_37_res, f1_temp_stencil, root, f1_temp_s0_y, f1_temp_s0_x, dynamic_address);
}

struct f1_up_stencil_op_hcompute_f1_up_stencil_1_34_to_f1_up_stencil_op_hcompute_f1_temp_stencil_38_cache {
	// RAM Box: {[-1, 32], [-1, 32]}
	// Capacity: 34
	// # of read delays: 35
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33
	fifo<hw_uint<16>, 34> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(33 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct f1_up_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f1_temp_stencil[root = 0, f1_temp_s0_y, f1_temp_s0_x] -> f1_up_stencil[o0, o1] : -1 <= f1_temp_s0_y <= 64 and -1 <= f1_temp_s0_x <= 64 and -1 + f1_temp_s0_y <= 2o0 <= f1_temp_s0_y and -1 + f1_temp_s0_x <= 2o1 <= f1_temp_s0_x }
  // # of banks: 1
  f1_up_stencil_op_hcompute_f1_up_stencil_1_34_to_f1_up_stencil_op_hcompute_f1_temp_stencil_38_cache f1_up_stencil_op_hcompute_f1_up_stencil_1_34_to_f1_up_stencil_op_hcompute_f1_temp_stencil_38;
};



inline void f1_up_stencil_op_hcompute_f1_up_stencil_1_34_write(hw_uint<16>& f1_up_stencil_op_hcompute_f1_up_stencil_1_34, f1_up_stencil_cache& f1_up_stencil, int root, int f1_up_s0_y, int f1_up_s0_x, int dynamic_address) {
  f1_up_stencil.f1_up_stencil_op_hcompute_f1_up_stencil_1_34_to_f1_up_stencil_op_hcompute_f1_temp_stencil_38.push(f1_up_stencil_op_hcompute_f1_up_stencil_1_34);
}

inline hw_uint<16> f1_up_stencil_op_hcompute_f1_temp_stencil_38_select(f1_up_stencil_cache& f1_up_stencil, int root, int f1_temp_s0_y, int f1_temp_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f1_up_stencil_op_hcompute_f1_temp_stencil_38 read pattern: { op_hcompute_f1_temp_stencil[root = 0, f1_temp_s0_y, f1_temp_s0_x] -> f1_up_stencil[o0, o1] : -1 <= f1_temp_s0_y <= 64 and -1 <= f1_temp_s0_x <= 64 and -1 + f1_temp_s0_y <= 2o0 <= f1_temp_s0_y and -1 + f1_temp_s0_x <= 2o1 <= f1_temp_s0_x }
  // Read schedule : { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
  // Write schedule: { op_hcompute_f1_up_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 15] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
  auto value_f1_up_stencil_op_hcompute_f1_up_stencil_1_34 = f1_up_stencil.f1_up_stencil_op_hcompute_f1_up_stencil_1_34_to_f1_up_stencil_op_hcompute_f1_temp_stencil_38.peek(/* one reader or all rams */ ((-1 - f1_temp_s0_y) % 2 == 0 && 63 - f1_temp_s0_x >= 0) ? ((32 - floord(2*f1_temp_s0_x, 4))) : 0);
  return value_f1_up_stencil_op_hcompute_f1_up_stencil_1_34;
  return 0;
}

// # of bundles = 2
// op_hcompute_f1_temp_stencil_read
//	f1_up_stencil_op_hcompute_f1_temp_stencil_38
inline hw_uint<16> f1_up_stencil_op_hcompute_f1_temp_stencil_read_bundle_read(f1_up_stencil_cache& f1_up_stencil, int root, int f1_temp_s0_y, int f1_temp_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f1_up_stencil_op_hcompute_f1_temp_stencil_38

	hw_uint<16> result;
	hw_uint<16> f1_up_stencil_op_hcompute_f1_temp_stencil_38_res = f1_up_stencil_op_hcompute_f1_temp_stencil_38_select(f1_up_stencil, root, f1_temp_s0_y, f1_temp_s0_x, dynamic_address);
	set_at<0, 16>(result, f1_up_stencil_op_hcompute_f1_temp_stencil_38_res);
	return result;
}

// op_hcompute_f1_up_stencil_1_write
//	f1_up_stencil_op_hcompute_f1_up_stencil_1_34
inline void f1_up_stencil_op_hcompute_f1_up_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_f1_up_stencil_1_write, f1_up_stencil_cache& f1_up_stencil, int root, int f1_up_s0_y, int f1_up_s0_x, int dynamic_address) {
	hw_uint<16> f1_up_stencil_op_hcompute_f1_up_stencil_1_34_res = op_hcompute_f1_up_stencil_1_write.extract<0, 15>();
	f1_up_stencil_op_hcompute_f1_up_stencil_1_34_write(f1_up_stencil_op_hcompute_f1_up_stencil_1_34_res, f1_up_stencil, root, f1_up_s0_y, f1_up_s0_x, dynamic_address);
}

struct f2_0_stencil_op_hcompute_f2_0_stencil_32_to_f2_0_stencil_op_hcompute_f2_temp_stencil_19_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 18
	// # of read delays: 19
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17
	fifo<hw_uint<16>, 18> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct f2_0_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f2_temp_stencil[root = 0, f2_temp_s0_y, f2_temp_s0_x] -> f2_0_stencil[o0, o1] : -2 <= f2_temp_s0_y <= 33 and -2 <= f2_temp_s0_x <= 33 and -1 + f2_temp_s0_y <= 2o0 <= f2_temp_s0_y and -1 + f2_temp_s0_x <= 2o1 <= f2_temp_s0_x }
  // # of banks: 1
  f2_0_stencil_op_hcompute_f2_0_stencil_32_to_f2_0_stencil_op_hcompute_f2_temp_stencil_19_cache f2_0_stencil_op_hcompute_f2_0_stencil_32_to_f2_0_stencil_op_hcompute_f2_temp_stencil_19;
};



inline void f2_0_stencil_op_hcompute_f2_0_stencil_32_write(hw_uint<16>& f2_0_stencil_op_hcompute_f2_0_stencil_32, f2_0_stencil_cache& f2_0_stencil, int root, int f2_0_s0_y, int f2_0_s0_x, int dynamic_address) {
  f2_0_stencil.f2_0_stencil_op_hcompute_f2_0_stencil_32_to_f2_0_stencil_op_hcompute_f2_temp_stencil_19.push(f2_0_stencil_op_hcompute_f2_0_stencil_32);
}

inline hw_uint<16> f2_0_stencil_op_hcompute_f2_temp_stencil_19_select(f2_0_stencil_cache& f2_0_stencil, int root, int f2_temp_s0_y, int f2_temp_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_0_stencil_op_hcompute_f2_temp_stencil_19 read pattern: { op_hcompute_f2_temp_stencil[root = 0, f2_temp_s0_y, f2_temp_s0_x] -> f2_0_stencil[o0, o1] : -2 <= f2_temp_s0_y <= 33 and -2 <= f2_temp_s0_x <= 33 and -1 + f2_temp_s0_y <= 2o0 <= f2_temp_s0_y and -1 + f2_temp_s0_x <= 2o1 <= f2_temp_s0_x }
  // Read schedule : { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  // Write schedule: { op_hcompute_f2_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 4d1, 3 + 4d2, 10] : -1 <= d1 <= 16 and -1 <= d2 <= 16 }
  auto value_f2_0_stencil_op_hcompute_f2_0_stencil_32 = f2_0_stencil.f2_0_stencil_op_hcompute_f2_0_stencil_32_to_f2_0_stencil_op_hcompute_f2_temp_stencil_19.peek(/* one reader or all rams */ ((-1 - f2_temp_s0_y) % 2 == 0 && 31 - f2_temp_s0_x >= 0) ? ((16 - floord(2*f2_temp_s0_x, 4))) : 0);
  return value_f2_0_stencil_op_hcompute_f2_0_stencil_32;
  return 0;
}

// # of bundles = 2
// op_hcompute_f2_0_stencil_write
//	f2_0_stencil_op_hcompute_f2_0_stencil_32
inline void f2_0_stencil_op_hcompute_f2_0_stencil_write_bundle_write(hw_uint<16>& op_hcompute_f2_0_stencil_write, f2_0_stencil_cache& f2_0_stencil, int root, int f2_0_s0_y, int f2_0_s0_x, int dynamic_address) {
	hw_uint<16> f2_0_stencil_op_hcompute_f2_0_stencil_32_res = op_hcompute_f2_0_stencil_write.extract<0, 15>();
	f2_0_stencil_op_hcompute_f2_0_stencil_32_write(f2_0_stencil_op_hcompute_f2_0_stencil_32_res, f2_0_stencil, root, f2_0_s0_y, f2_0_s0_x, dynamic_address);
}

// op_hcompute_f2_temp_stencil_read
//	f2_0_stencil_op_hcompute_f2_temp_stencil_19
inline hw_uint<16> f2_0_stencil_op_hcompute_f2_temp_stencil_read_bundle_read(f2_0_stencil_cache& f2_0_stencil, int root, int f2_temp_s0_y, int f2_temp_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f2_0_stencil_op_hcompute_f2_temp_stencil_19

	hw_uint<16> result;
	hw_uint<16> f2_0_stencil_op_hcompute_f2_temp_stencil_19_res = f2_0_stencil_op_hcompute_f2_temp_stencil_19_select(f2_0_stencil, root, f2_temp_s0_y, f2_temp_s0_x, dynamic_address);
	set_at<0, 16>(result, f2_0_stencil_op_hcompute_f2_temp_stencil_19_res);
	return result;
}

struct f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_to_f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
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

struct f2_temp_blur_unnormalized_stencil_cache {
  // Reader addrs...
    // { op_hcompute_l1_up_stencil[root = 0, l1_up_s0_y, l1_up_s0_x] -> f2_temp_blur_unnormalized_stencil[-1 + l1_up_s0_y, -1 + l1_up_s0_x] : -1 <= l1_up_s0_y <= 32 and -1 <= l1_up_s0_x <= 32 }
  // # of banks: 1
  f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_to_f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1_cache f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_to_f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1;
};



inline void f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_write(hw_uint<16>& f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20, f2_temp_blur_unnormalized_stencil_cache& f2_temp_blur_unnormalized_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
  f2_temp_blur_unnormalized_stencil.f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_to_f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1.push(f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20);
}

inline hw_uint<16> f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1_select(f2_temp_blur_unnormalized_stencil_cache& f2_temp_blur_unnormalized_stencil, int root, int l1_up_s0_y, int l1_up_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1 read pattern: { op_hcompute_l1_up_stencil[root = 0, l1_up_s0_y, l1_up_s0_x] -> f2_temp_blur_unnormalized_stencil[-1 + l1_up_s0_y, -1 + l1_up_s0_x] : -1 <= l1_up_s0_y <= 32 and -1 <= l1_up_s0_x <= 32 }
  // Read schedule : { op_hcompute_l1_up_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 14] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
  // Write schedule: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  auto value_f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20 = f2_temp_blur_unnormalized_stencil.f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_to_f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1.peek(/* one reader or all rams */ 0);
  return value_f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20;
  return 0;
}

// # of bundles = 2
// op_hcompute_f2_temp_blur_unnormalized_stencil_1_write
//	f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20
inline void f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_f2_temp_blur_unnormalized_stencil_1_write, f2_temp_blur_unnormalized_stencil_cache& f2_temp_blur_unnormalized_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
	hw_uint<16> f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_res = op_hcompute_f2_temp_blur_unnormalized_stencil_1_write.extract<0, 15>();
	f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_write(f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_20_res, f2_temp_blur_unnormalized_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
}

// op_hcompute_l1_up_stencil_read
//	f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1
inline hw_uint<16> f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_read_bundle_read(f2_temp_blur_unnormalized_stencil_cache& f2_temp_blur_unnormalized_stencil, int root, int l1_up_s0_y, int l1_up_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1

	hw_uint<16> result;
	hw_uint<16> f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1_res = f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1_select(f2_temp_blur_unnormalized_stencil, root, l1_up_s0_y, l1_up_s0_x, dynamic_address);
	set_at<0, 16>(result, f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_1_res);
	return result;
}

struct f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_to_f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30_cache {
	// RAM Box: {[-2, 31], [-2, 31]}
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

struct f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_cache {
  // Reader addrs...
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_blur_unnormalized_stencil_clkwrk_dsa3[f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // # of banks: 1
  f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_to_f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30_cache f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_to_f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30;
};



inline void f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_write(hw_uint<16>& f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31, f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_cache& f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, int root, int f2_temp_blur_unnormalized_s0_y, int f2_temp_blur_unnormalized_s0_x, int dynamic_address) {
  f2_temp_blur_unnormalized_stencil_clkwrk_dsa3.f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_to_f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30.push(f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31);
}

inline hw_uint<16> f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30_select(f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_cache& f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_blur_unnormalized_stencil_clkwrk_dsa3[f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 12] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  auto value_f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31 = f2_temp_blur_unnormalized_stencil_clkwrk_dsa3.f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_to_f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30.peek(/* one reader or all rams */ 0);
  return value_f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31;
  return 0;
}

// # of bundles = 2
// op_hcompute_f2_temp_blur_unnormalized_stencil_1_read
//	f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30
inline hw_uint<16> f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_read_bundle_read(f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_cache& f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30

	hw_uint<16> result;
	hw_uint<16> f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30_res = f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30_select(f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 16>(result, f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_30_res);
	return result;
}

// op_hcompute_f2_temp_blur_unnormalized_stencil_write
//	f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31
inline void f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_f2_temp_blur_unnormalized_stencil_write, f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_cache& f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, int root, int f2_temp_blur_unnormalized_s0_y, int f2_temp_blur_unnormalized_s0_x, int dynamic_address) {
	hw_uint<16> f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_res = op_hcompute_f2_temp_blur_unnormalized_stencil_write.extract<0, 15>();
	f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_write(f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_31_res, f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, root, f2_temp_blur_unnormalized_s0_y, f2_temp_blur_unnormalized_s0_x, dynamic_address);
}

struct f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9_cache {
	// RAM Box: {[-2, 33], [-2, 33]}
	// Capacity: 75
	// # of read delays: 9
  // 0, 1, 2, 36, 37, 38, 72, 73, 74
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 33> f11;
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

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_37() {
		return f8;
	}

	inline hw_uint<16> peek_38() {
		return f10;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_72() {
		return f12;
	}

	inline hw_uint<16> peek_73() {
		return f14;
	}

	inline hw_uint<16> peek_74() {
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
    // cap: 1 reading from capacity: 33
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
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
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
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

struct f2_temp_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[f2_temp_blur_unnormalized_s1_y, 1 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[f2_temp_blur_unnormalized_s1_y, 2 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[1 + f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[1 + f2_temp_blur_unnormalized_s1_y, 2 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[2 + f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[2 + f2_temp_blur_unnormalized_s1_y, 2 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[2 + f2_temp_blur_unnormalized_s1_y, 1 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
    // { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[1 + f2_temp_blur_unnormalized_s1_y, 1 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // # of banks: 1
  f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9_cache f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9;
};



inline void f2_temp_stencil_op_hcompute_f2_temp_stencil_18_write(hw_uint<16>& f2_temp_stencil_op_hcompute_f2_temp_stencil_18, f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_s0_y, int f2_temp_s0_x, int dynamic_address) {
  f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.push(f2_temp_stencil_op_hcompute_f2_temp_stencil_18);
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_21_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_21 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_74();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_22_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_22 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[f2_temp_blur_unnormalized_s1_y, 1 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_73();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_23_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_23 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[f2_temp_blur_unnormalized_s1_y, 2 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_72();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_24_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_24 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[1 + f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_38();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_25_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_25 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[1 + f2_temp_blur_unnormalized_s1_y, 2 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_36();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_26_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_26 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[2 + f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_2();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_27_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_27 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[2 + f2_temp_blur_unnormalized_s1_y, 2 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_0();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_28_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_28 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[2 + f2_temp_blur_unnormalized_s1_y, 1 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_1();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

inline hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_29_select(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_29 read pattern: { op_hcompute_f2_temp_blur_unnormalized_stencil_1[root = 0, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x] -> f2_temp_stencil[1 + f2_temp_blur_unnormalized_s1_y, 1 + f2_temp_blur_unnormalized_s1_x] : -2 <= f2_temp_blur_unnormalized_s1_y <= 31 and -2 <= f2_temp_blur_unnormalized_s1_x <= 31 }
  // Read schedule : { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
  // Write schedule: { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
  auto value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18 = f2_temp_stencil.f2_temp_stencil_op_hcompute_f2_temp_stencil_18_merged_banks_9.peek_37();
  return value_f2_temp_stencil_op_hcompute_f2_temp_stencil_18;
  return 0;
}

// # of bundles = 2
// op_hcompute_f2_temp_blur_unnormalized_stencil_1_read
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_21
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_22
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_23
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_24
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_25
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_26
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_27
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_28
//	f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_29
inline hw_uint<144> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_read_bundle_read(f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_21
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_22
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_23
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_24
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_25
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_26
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_27
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_28
    // f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_29

	hw_uint<144> result;
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_21_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_21_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_21_res);
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_22_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_22_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<16, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_22_res);
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_23_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_23_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<32, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_23_res);
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_24_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_24_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<48, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_24_res);
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_25_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_25_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<64, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_25_res);
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_26_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_26_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<80, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_26_res);
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_27_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_27_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<96, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_27_res);
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_28_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_28_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<112, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_28_res);
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_29_res = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_29_select(f2_temp_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, dynamic_address);
	set_at<128, 144>(result, f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_29_res);
	return result;
}

// op_hcompute_f2_temp_stencil_write
//	f2_temp_stencil_op_hcompute_f2_temp_stencil_18
inline void f2_temp_stencil_op_hcompute_f2_temp_stencil_write_bundle_write(hw_uint<16>& op_hcompute_f2_temp_stencil_write, f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_s0_y, int f2_temp_s0_x, int dynamic_address) {
	hw_uint<16> f2_temp_stencil_op_hcompute_f2_temp_stencil_18_res = op_hcompute_f2_temp_stencil_write.extract<0, 15>();
	f2_temp_stencil_op_hcompute_f2_temp_stencil_18_write(f2_temp_stencil_op_hcompute_f2_temp_stencil_18_res, f2_temp_stencil, root, f2_temp_s0_y, f2_temp_s0_x, dynamic_address);
}

struct h0_0_stencil_op_hcompute_h0_0_stencil_15_to_h0_0_stencil_op_hcompute_f0_up_stencil_66_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 326
	// # of read delays: 326
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325
	fifo<hw_uint<16>, 326> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(325 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct h0_0_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f0_up_stencil[root = 0, f0_up_s0_y, f0_up_s0_x] -> h0_0_stencil[f0_up_s0_y, f0_up_s0_x] : 0 <= f0_up_s0_y <= 63 and 0 <= f0_up_s0_x <= 63 }
  // # of banks: 1
  h0_0_stencil_op_hcompute_h0_0_stencil_15_to_h0_0_stencil_op_hcompute_f0_up_stencil_66_cache h0_0_stencil_op_hcompute_h0_0_stencil_15_to_h0_0_stencil_op_hcompute_f0_up_stencil_66;
};



inline void h0_0_stencil_op_hcompute_h0_0_stencil_15_write(hw_uint<16>& h0_0_stencil_op_hcompute_h0_0_stencil_15, h0_0_stencil_cache& h0_0_stencil, int root, int h0_0_s0_y, int h0_0_s0_x, int dynamic_address) {
  h0_0_stencil.h0_0_stencil_op_hcompute_h0_0_stencil_15_to_h0_0_stencil_op_hcompute_f0_up_stencil_66.push(h0_0_stencil_op_hcompute_h0_0_stencil_15);
}

inline hw_uint<16> h0_0_stencil_op_hcompute_f0_up_stencil_66_select(h0_0_stencil_cache& h0_0_stencil, int root, int f0_up_s0_y, int f0_up_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // h0_0_stencil_op_hcompute_f0_up_stencil_66 read pattern: { op_hcompute_f0_up_stencil[root = 0, f0_up_s0_y, f0_up_s0_x] -> h0_0_stencil[f0_up_s0_y, f0_up_s0_x] : 0 <= f0_up_s0_y <= 63 and 0 <= f0_up_s0_x <= 63 }
  // Read schedule : { op_hcompute_f0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_h0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_h0_0_stencil_op_hcompute_h0_0_stencil_15 = h0_0_stencil.h0_0_stencil_op_hcompute_h0_0_stencil_15_to_h0_0_stencil_op_hcompute_f0_up_stencil_66.peek(/* one reader or all rams */ (-63 + f0_up_s0_x == 0 && -59 + f0_up_s0_y == 0) ? (256) : (-63 + f0_up_s0_x == 0 && 58 - f0_up_s0_y >= 0) ? (320) : (-59 + f0_up_s0_x == 0 && 58 - f0_up_s0_y >= 0) ? (324) : (58 - f0_up_s0_x >= 0 && 58 - f0_up_s0_y >= 0) ? (325) : (-63 + f0_up_s0_x == 0 && -60 + f0_up_s0_y >= 0 && 62 - f0_up_s0_y >= 0) ? ((4032 - 64 * f0_up_s0_y)) : (-63 + f0_up_s0_y == 0 && 62 - f0_up_s0_x >= 0) ? ((63 - f0_up_s0_x)) : (-59 + f0_up_s0_y == 0 && 62 - f0_up_s0_x >= 0) ? ((319 - f0_up_s0_x)) : (62 - f0_up_s0_x >= 0 && 58 - f0_up_s0_y >= 0 && -60 + f0_up_s0_x >= 0) ? ((383 - f0_up_s0_x)) : (-60 + f0_up_s0_y >= 0 && 62 - f0_up_s0_y >= 0 && 62 - f0_up_s0_x >= 0) ? (((4095 - 64 * f0_up_s0_y) - f0_up_s0_x)) : 0);
  return value_h0_0_stencil_op_hcompute_h0_0_stencil_15;
  return 0;
}

// # of bundles = 2
// op_hcompute_f0_up_stencil_read
//	h0_0_stencil_op_hcompute_f0_up_stencil_66
inline hw_uint<16> h0_0_stencil_op_hcompute_f0_up_stencil_read_bundle_read(h0_0_stencil_cache& h0_0_stencil, int root, int f0_up_s0_y, int f0_up_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // h0_0_stencil_op_hcompute_f0_up_stencil_66

	hw_uint<16> result;
	hw_uint<16> h0_0_stencil_op_hcompute_f0_up_stencil_66_res = h0_0_stencil_op_hcompute_f0_up_stencil_66_select(h0_0_stencil, root, f0_up_s0_y, f0_up_s0_x, dynamic_address);
	set_at<0, 16>(result, h0_0_stencil_op_hcompute_f0_up_stencil_66_res);
	return result;
}

// op_hcompute_h0_0_stencil_write
//	h0_0_stencil_op_hcompute_h0_0_stencil_15
inline void h0_0_stencil_op_hcompute_h0_0_stencil_write_bundle_write(hw_uint<16>& op_hcompute_h0_0_stencil_write, h0_0_stencil_cache& h0_0_stencil, int root, int h0_0_s0_y, int h0_0_s0_x, int dynamic_address) {
	hw_uint<16> h0_0_stencil_op_hcompute_h0_0_stencil_15_res = op_hcompute_h0_0_stencil_write.extract<0, 15>();
	h0_0_stencil_op_hcompute_h0_0_stencil_15_write(h0_0_stencil_op_hcompute_h0_0_stencil_15_res, h0_0_stencil, root, h0_0_s0_y, h0_0_s0_x, dynamic_address);
}

struct h1_0_stencil_op_hcompute_h1_0_stencil_12_to_h1_0_stencil_op_hcompute_f1_up_stencil_1_35_cache {
	// RAM Box: {[-1, 32], [-1, 32]}
	// Capacity: 36
	// # of read delays: 36
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35
	fifo<hw_uint<16>, 36> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct h1_0_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f1_up_stencil_1[root = 0, f1_up_s0_y, f1_up_s0_x] -> h1_0_stencil[f1_up_s0_y, f1_up_s0_x] : -1 <= f1_up_s0_y <= 32 and -1 <= f1_up_s0_x <= 32 }
  // # of banks: 1
  h1_0_stencil_op_hcompute_h1_0_stencil_12_to_h1_0_stencil_op_hcompute_f1_up_stencil_1_35_cache h1_0_stencil_op_hcompute_h1_0_stencil_12_to_h1_0_stencil_op_hcompute_f1_up_stencil_1_35;
};



inline void h1_0_stencil_op_hcompute_h1_0_stencil_12_write(hw_uint<16>& h1_0_stencil_op_hcompute_h1_0_stencil_12, h1_0_stencil_cache& h1_0_stencil, int root, int h1_0_s0_y, int h1_0_s0_x, int dynamic_address) {
  h1_0_stencil.h1_0_stencil_op_hcompute_h1_0_stencil_12_to_h1_0_stencil_op_hcompute_f1_up_stencil_1_35.push(h1_0_stencil_op_hcompute_h1_0_stencil_12);
}

inline hw_uint<16> h1_0_stencil_op_hcompute_f1_up_stencil_1_35_select(h1_0_stencil_cache& h1_0_stencil, int root, int f1_up_s0_y, int f1_up_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // h1_0_stencil_op_hcompute_f1_up_stencil_1_35 read pattern: { op_hcompute_f1_up_stencil_1[root = 0, f1_up_s0_y, f1_up_s0_x] -> h1_0_stencil[f1_up_s0_y, f1_up_s0_x] : -1 <= f1_up_s0_y <= 32 and -1 <= f1_up_s0_x <= 32 }
  // Read schedule : { op_hcompute_f1_up_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 15] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
  // Write schedule: { op_hcompute_h1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 9] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
  auto value_h1_0_stencil_op_hcompute_h1_0_stencil_12 = h1_0_stencil.h1_0_stencil_op_hcompute_h1_0_stencil_12_to_h1_0_stencil_op_hcompute_f1_up_stencil_1_35.peek(/* one reader or all rams */ (31 - f1_up_s0_x >= 0 && 31 - f1_up_s0_y >= 0) ? (35) : (-32 + f1_up_s0_x == 0 && 31 - f1_up_s0_y >= 0) ? (34) : (-32 + f1_up_s0_y == 0 && 31 - f1_up_s0_x >= 0) ? ((32 - f1_up_s0_x)) : 0);
  return value_h1_0_stencil_op_hcompute_h1_0_stencil_12;
  return 0;
}

// # of bundles = 2
// op_hcompute_f1_up_stencil_1_read
//	h1_0_stencil_op_hcompute_f1_up_stencil_1_35
inline hw_uint<16> h1_0_stencil_op_hcompute_f1_up_stencil_1_read_bundle_read(h1_0_stencil_cache& h1_0_stencil, int root, int f1_up_s0_y, int f1_up_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // h1_0_stencil_op_hcompute_f1_up_stencil_1_35

	hw_uint<16> result;
	hw_uint<16> h1_0_stencil_op_hcompute_f1_up_stencil_1_35_res = h1_0_stencil_op_hcompute_f1_up_stencil_1_35_select(h1_0_stencil, root, f1_up_s0_y, f1_up_s0_x, dynamic_address);
	set_at<0, 16>(result, h1_0_stencil_op_hcompute_f1_up_stencil_1_35_res);
	return result;
}

// op_hcompute_h1_0_stencil_write
//	h1_0_stencil_op_hcompute_h1_0_stencil_12
inline void h1_0_stencil_op_hcompute_h1_0_stencil_write_bundle_write(hw_uint<16>& op_hcompute_h1_0_stencil_write, h1_0_stencil_cache& h1_0_stencil, int root, int h1_0_s0_y, int h1_0_s0_x, int dynamic_address) {
	hw_uint<16> h1_0_stencil_op_hcompute_h1_0_stencil_12_res = op_hcompute_h1_0_stencil_write.extract<0, 15>();
	h1_0_stencil_op_hcompute_h1_0_stencil_12_write(h1_0_stencil_op_hcompute_h1_0_stencil_12_res, h1_0_stencil, root, h1_0_s0_y, h1_0_s0_x, dynamic_address);
}

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10_cache {
	// RAM Box: {[-7, 67], [-7, 67]}
	// Capacity: 155
	// # of read delays: 9
  // 0, 1, 2, 76, 77, 78, 152, 153, 154
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 73> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 73> f11;
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

	inline hw_uint<16> peek_75() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_76() {
		return f6;
	}

	inline hw_uint<16> peek_77() {
		return f8;
	}

	inline hw_uint<16> peek_78() {
		return f10;
	}

	inline hw_uint<16> peek_151() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_152() {
		return f12;
	}

	inline hw_uint<16> peek_153() {
		return f14;
	}

	inline hw_uint<16> peek_154() {
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
    // cap: 1 reading from capacity: 73
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 73 reading from capacity: 1
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
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 73 reading from capacity: 1
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
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
    // { op_hcompute_h0_0_stencil[root = 0, h0_0_s0_y, h0_0_s0_x] -> hw_input_global_wrapper_stencil[h0_0_s0_y, h0_0_s0_x] : 0 <= h0_0_s0_y <= 63 and 0 <= h0_0_s0_x <= 63 }
  // # of banks: 1
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_70_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_70 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_154();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_71_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_71 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_153();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_72_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_72 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_152();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_73_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_73 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_78();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_74_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_74 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_76();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_75_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_75 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_76_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_76 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_77_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_77 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[2 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_1();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_78_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_78 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_global_wrapper_stencil[1 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : -7 <= blur_unnormalized_s1_y <= 65 and -7 <= blur_unnormalized_s1_x <= 65 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_77();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_16_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int h0_0_s0_y, int h0_0_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_16 read pattern: { op_hcompute_h0_0_stencil[root = 0, h0_0_s0_y, h0_0_s0_x] -> hw_input_global_wrapper_stencil[h0_0_s0_y, h0_0_s0_x] : 0 <= h0_0_s0_y <= 63 and 0 <= h0_0_s0_x <= 63 }
  // Read schedule : { op_hcompute_h0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_merged_banks_10.peek_77();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10;
  return 0;
}

// # of bundles = 3
// op_hcompute_blur_unnormalized_stencil_1_read
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_70
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_71
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_72
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_73
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_74
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_75
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_76
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_77
//	hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_78
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_70
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_71
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_72
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_73
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_74
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_75
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_76
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_77
    // hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_78

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_70_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_70_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_70_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_71_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_71_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_71_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_72_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_72_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_72_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_73_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_73_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_73_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_74_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_74_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_74_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_75_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_75_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_75_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_76_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_76_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_76_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_77_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_77_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_77_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_78_res = hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_78_select(hw_input_global_wrapper_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_blur_unnormalized_stencil_1_78_res);
	return result;
}

// op_hcompute_h0_0_stencil_read
//	hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_16
inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int h0_0_s0_y, int h0_0_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_16

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_16_res = hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_16_select(hw_input_global_wrapper_stencil, root, h0_0_s0_y, h0_0_s0_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_16_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_10_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

struct l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_f1_0_stencil_64_cache {
	// RAM Box: {[-6, 66], [-6, 66]}
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

struct l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_h0_0_stencil_17_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct l0_0_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f1_0_stencil[root = 0, f1_0_s0_y, f1_0_s0_x] -> l0_0_stencil[2f1_0_s0_y, 2f1_0_s0_x] : -3 <= f1_0_s0_y <= 33 and -3 <= f1_0_s0_x <= 33 }
    // { op_hcompute_h0_0_stencil[root = 0, h0_0_s0_y, h0_0_s0_x] -> l0_0_stencil[h0_0_s0_y, h0_0_s0_x] : 0 <= h0_0_s0_y <= 63 and 0 <= h0_0_s0_x <= 63 }
  // # of banks: 2
  l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_f1_0_stencil_64_cache l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_f1_0_stencil_64;
  l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_h0_0_stencil_17_cache l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_h0_0_stencil_17;
};



inline void l0_0_stencil_op_hcompute_l0_0_stencil_6_write(hw_uint<16>& l0_0_stencil_op_hcompute_l0_0_stencil_6, l0_0_stencil_cache& l0_0_stencil, int root, int l0_0_s0_y, int l0_0_s0_x, int dynamic_address) {
  l0_0_stencil.l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_f1_0_stencil_64.push(l0_0_stencil_op_hcompute_l0_0_stencil_6);
  l0_0_stencil.l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_h0_0_stencil_17.push(l0_0_stencil_op_hcompute_l0_0_stencil_6);
}

inline hw_uint<16> l0_0_stencil_op_hcompute_f1_0_stencil_64_select(l0_0_stencil_cache& l0_0_stencil, int root, int f1_0_s0_y, int f1_0_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // l0_0_stencil_op_hcompute_f1_0_stencil_64 read pattern: { op_hcompute_f1_0_stencil[root = 0, f1_0_s0_y, f1_0_s0_x] -> l0_0_stencil[2f1_0_s0_y, 2f1_0_s0_x] : -3 <= f1_0_s0_y <= 33 and -3 <= f1_0_s0_x <= 33 }
  // Read schedule : { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
  // Write schedule: { op_hcompute_l0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -6 <= d1 <= 66 and -6 <= d2 <= 66 }
  auto value_l0_0_stencil_op_hcompute_l0_0_stencil_6 = l0_0_stencil.l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_f1_0_stencil_64.peek(/* one reader or all rams */ 0);
  return value_l0_0_stencil_op_hcompute_l0_0_stencil_6;
  return 0;
}

inline hw_uint<16> l0_0_stencil_op_hcompute_h0_0_stencil_17_select(l0_0_stencil_cache& l0_0_stencil, int root, int h0_0_s0_y, int h0_0_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // l0_0_stencil_op_hcompute_h0_0_stencil_17 read pattern: { op_hcompute_h0_0_stencil[root = 0, h0_0_s0_y, h0_0_s0_x] -> l0_0_stencil[h0_0_s0_y, h0_0_s0_x] : 0 <= h0_0_s0_y <= 63 and 0 <= h0_0_s0_x <= 63 }
  // Read schedule : { op_hcompute_h0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_l0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -6 <= d1 <= 66 and -6 <= d2 <= 66 }
  auto value_l0_0_stencil_op_hcompute_l0_0_stencil_6 = l0_0_stencil.l0_0_stencil_op_hcompute_l0_0_stencil_6_to_l0_0_stencil_op_hcompute_h0_0_stencil_17.peek(/* one reader or all rams */ 0);
  return value_l0_0_stencil_op_hcompute_l0_0_stencil_6;
  return 0;
}

// # of bundles = 3
// op_hcompute_f1_0_stencil_read
//	l0_0_stencil_op_hcompute_f1_0_stencil_64
inline hw_uint<16> l0_0_stencil_op_hcompute_f1_0_stencil_read_bundle_read(l0_0_stencil_cache& l0_0_stencil, int root, int f1_0_s0_y, int f1_0_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // l0_0_stencil_op_hcompute_f1_0_stencil_64

	hw_uint<16> result;
	hw_uint<16> l0_0_stencil_op_hcompute_f1_0_stencil_64_res = l0_0_stencil_op_hcompute_f1_0_stencil_64_select(l0_0_stencil, root, f1_0_s0_y, f1_0_s0_x, dynamic_address);
	set_at<0, 16>(result, l0_0_stencil_op_hcompute_f1_0_stencil_64_res);
	return result;
}

// op_hcompute_h0_0_stencil_read
//	l0_0_stencil_op_hcompute_h0_0_stencil_17
inline hw_uint<16> l0_0_stencil_op_hcompute_h0_0_stencil_read_bundle_read(l0_0_stencil_cache& l0_0_stencil, int root, int h0_0_s0_y, int h0_0_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // l0_0_stencil_op_hcompute_h0_0_stencil_17

	hw_uint<16> result;
	hw_uint<16> l0_0_stencil_op_hcompute_h0_0_stencil_17_res = l0_0_stencil_op_hcompute_h0_0_stencil_17_select(l0_0_stencil, root, h0_0_s0_y, h0_0_s0_x, dynamic_address);
	set_at<0, 16>(result, l0_0_stencil_op_hcompute_h0_0_stencil_17_res);
	return result;
}

// op_hcompute_l0_0_stencil_write
//	l0_0_stencil_op_hcompute_l0_0_stencil_6
inline void l0_0_stencil_op_hcompute_l0_0_stencil_write_bundle_write(hw_uint<16>& op_hcompute_l0_0_stencil_write, l0_0_stencil_cache& l0_0_stencil, int root, int l0_0_s0_y, int l0_0_s0_x, int dynamic_address) {
	hw_uint<16> l0_0_stencil_op_hcompute_l0_0_stencil_6_res = op_hcompute_l0_0_stencil_write.extract<0, 15>();
	l0_0_stencil_op_hcompute_l0_0_stencil_6_write(l0_0_stencil_op_hcompute_l0_0_stencil_6_res, l0_0_stencil, root, l0_0_s0_y, l0_0_s0_x, dynamic_address);
}

struct l0_up_stencil_op_hcompute_l0_up_stencil_4_to_l0_up_stencil_op_hcompute_f0_up_stencil_67_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct l0_up_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f0_up_stencil[root = 0, f0_up_s0_y, f0_up_s0_x] -> l0_up_stencil[f0_up_s0_y, f0_up_s0_x] : 0 <= f0_up_s0_y <= 63 and 0 <= f0_up_s0_x <= 63 }
  // # of banks: 1
  l0_up_stencil_op_hcompute_l0_up_stencil_4_to_l0_up_stencil_op_hcompute_f0_up_stencil_67_cache l0_up_stencil_op_hcompute_l0_up_stencil_4_to_l0_up_stencil_op_hcompute_f0_up_stencil_67;
};



inline void l0_up_stencil_op_hcompute_l0_up_stencil_4_write(hw_uint<16>& l0_up_stencil_op_hcompute_l0_up_stencil_4, l0_up_stencil_cache& l0_up_stencil, int root, int l0_up_s0_y, int l0_up_s0_x, int dynamic_address) {
  l0_up_stencil.l0_up_stencil_op_hcompute_l0_up_stencil_4_to_l0_up_stencil_op_hcompute_f0_up_stencil_67.push(l0_up_stencil_op_hcompute_l0_up_stencil_4);
}

inline hw_uint<16> l0_up_stencil_op_hcompute_f0_up_stencil_67_select(l0_up_stencil_cache& l0_up_stencil, int root, int f0_up_s0_y, int f0_up_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // l0_up_stencil_op_hcompute_f0_up_stencil_67 read pattern: { op_hcompute_f0_up_stencil[root = 0, f0_up_s0_y, f0_up_s0_x] -> l0_up_stencil[f0_up_s0_y, f0_up_s0_x] : 0 <= f0_up_s0_y <= 63 and 0 <= f0_up_s0_x <= 63 }
  // Read schedule : { op_hcompute_f0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { op_hcompute_l0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_l0_up_stencil_op_hcompute_l0_up_stencil_4 = l0_up_stencil.l0_up_stencil_op_hcompute_l0_up_stencil_4_to_l0_up_stencil_op_hcompute_f0_up_stencil_67.peek(/* one reader or all rams */ 0);
  return value_l0_up_stencil_op_hcompute_l0_up_stencil_4;
  return 0;
}

// # of bundles = 2
// op_hcompute_f0_up_stencil_read
//	l0_up_stencil_op_hcompute_f0_up_stencil_67
inline hw_uint<16> l0_up_stencil_op_hcompute_f0_up_stencil_read_bundle_read(l0_up_stencil_cache& l0_up_stencil, int root, int f0_up_s0_y, int f0_up_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // l0_up_stencil_op_hcompute_f0_up_stencil_67

	hw_uint<16> result;
	hw_uint<16> l0_up_stencil_op_hcompute_f0_up_stencil_67_res = l0_up_stencil_op_hcompute_f0_up_stencil_67_select(l0_up_stencil, root, f0_up_s0_y, f0_up_s0_x, dynamic_address);
	set_at<0, 16>(result, l0_up_stencil_op_hcompute_f0_up_stencil_67_res);
	return result;
}

// op_hcompute_l0_up_stencil_write
//	l0_up_stencil_op_hcompute_l0_up_stencil_4
inline void l0_up_stencil_op_hcompute_l0_up_stencil_write_bundle_write(hw_uint<16>& op_hcompute_l0_up_stencil_write, l0_up_stencil_cache& l0_up_stencil, int root, int l0_up_s0_y, int l0_up_s0_x, int dynamic_address) {
	hw_uint<16> l0_up_stencil_op_hcompute_l0_up_stencil_4_res = op_hcompute_l0_up_stencil_write.extract<0, 15>();
	l0_up_stencil_op_hcompute_l0_up_stencil_4_write(l0_up_stencil_op_hcompute_l0_up_stencil_4_res, l0_up_stencil, root, l0_up_s0_y, l0_up_s0_x, dynamic_address);
}

struct l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_f2_0_stencil_33_cache {
	// RAM Box: {[-2, 32], [-2, 32]}
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

struct l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_h1_0_stencil_14_cache {
	// RAM Box: {[-1, 32], [-1, 32]}
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

struct l1_0_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f2_0_stencil[root = 0, f2_0_s0_y, f2_0_s0_x] -> l1_0_stencil[2f2_0_s0_y, 2f2_0_s0_x] : -1 <= f2_0_s0_y <= 16 and -1 <= f2_0_s0_x <= 16 }
    // { op_hcompute_h1_0_stencil[root = 0, h1_0_s0_y, h1_0_s0_x] -> l1_0_stencil[h1_0_s0_y, h1_0_s0_x] : -1 <= h1_0_s0_y <= 32 and -1 <= h1_0_s0_x <= 32 }
  // # of banks: 2
  l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_f2_0_stencil_33_cache l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_f2_0_stencil_33;
  l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_h1_0_stencil_14_cache l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_h1_0_stencil_14;
};



inline void l1_0_stencil_op_hcompute_l1_0_stencil_2_write(hw_uint<16>& l1_0_stencil_op_hcompute_l1_0_stencil_2, l1_0_stencil_cache& l1_0_stencil, int root, int l1_0_s0_y, int l1_0_s0_x, int dynamic_address) {
  l1_0_stencil.l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_f2_0_stencil_33.push(l1_0_stencil_op_hcompute_l1_0_stencil_2);
  l1_0_stencil.l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_h1_0_stencil_14.push(l1_0_stencil_op_hcompute_l1_0_stencil_2);
}

inline hw_uint<16> l1_0_stencil_op_hcompute_f2_0_stencil_33_select(l1_0_stencil_cache& l1_0_stencil, int root, int f2_0_s0_y, int f2_0_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // l1_0_stencil_op_hcompute_f2_0_stencil_33 read pattern: { op_hcompute_f2_0_stencil[root = 0, f2_0_s0_y, f2_0_s0_x] -> l1_0_stencil[2f2_0_s0_y, 2f2_0_s0_x] : -1 <= f2_0_s0_y <= 16 and -1 <= f2_0_s0_x <= 16 }
  // Read schedule : { op_hcompute_f2_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 4d1, 3 + 4d2, 10] : -1 <= d1 <= 16 and -1 <= d2 <= 16 }
  // Write schedule: { op_hcompute_l1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 8] : -2 <= d1 <= 32 and -2 <= d2 <= 32 }
  auto value_l1_0_stencil_op_hcompute_l1_0_stencil_2 = l1_0_stencil.l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_f2_0_stencil_33.peek(/* one reader or all rams */ 0);
  return value_l1_0_stencil_op_hcompute_l1_0_stencil_2;
  return 0;
}

inline hw_uint<16> l1_0_stencil_op_hcompute_h1_0_stencil_14_select(l1_0_stencil_cache& l1_0_stencil, int root, int h1_0_s0_y, int h1_0_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // l1_0_stencil_op_hcompute_h1_0_stencil_14 read pattern: { op_hcompute_h1_0_stencil[root = 0, h1_0_s0_y, h1_0_s0_x] -> l1_0_stencil[h1_0_s0_y, h1_0_s0_x] : -1 <= h1_0_s0_y <= 32 and -1 <= h1_0_s0_x <= 32 }
  // Read schedule : { op_hcompute_h1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 9] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
  // Write schedule: { op_hcompute_l1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 8] : -2 <= d1 <= 32 and -2 <= d2 <= 32 }
  auto value_l1_0_stencil_op_hcompute_l1_0_stencil_2 = l1_0_stencil.l1_0_stencil_op_hcompute_l1_0_stencil_2_to_l1_0_stencil_op_hcompute_h1_0_stencil_14.peek(/* one reader or all rams */ 0);
  return value_l1_0_stencil_op_hcompute_l1_0_stencil_2;
  return 0;
}

// # of bundles = 3
// op_hcompute_f2_0_stencil_read
//	l1_0_stencil_op_hcompute_f2_0_stencil_33
inline hw_uint<16> l1_0_stencil_op_hcompute_f2_0_stencil_read_bundle_read(l1_0_stencil_cache& l1_0_stencil, int root, int f2_0_s0_y, int f2_0_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // l1_0_stencil_op_hcompute_f2_0_stencil_33

	hw_uint<16> result;
	hw_uint<16> l1_0_stencil_op_hcompute_f2_0_stencil_33_res = l1_0_stencil_op_hcompute_f2_0_stencil_33_select(l1_0_stencil, root, f2_0_s0_y, f2_0_s0_x, dynamic_address);
	set_at<0, 16>(result, l1_0_stencil_op_hcompute_f2_0_stencil_33_res);
	return result;
}

// op_hcompute_h1_0_stencil_read
//	l1_0_stencil_op_hcompute_h1_0_stencil_14
inline hw_uint<16> l1_0_stencil_op_hcompute_h1_0_stencil_read_bundle_read(l1_0_stencil_cache& l1_0_stencil, int root, int h1_0_s0_y, int h1_0_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // l1_0_stencil_op_hcompute_h1_0_stencil_14

	hw_uint<16> result;
	hw_uint<16> l1_0_stencil_op_hcompute_h1_0_stencil_14_res = l1_0_stencil_op_hcompute_h1_0_stencil_14_select(l1_0_stencil, root, h1_0_s0_y, h1_0_s0_x, dynamic_address);
	set_at<0, 16>(result, l1_0_stencil_op_hcompute_h1_0_stencil_14_res);
	return result;
}

// op_hcompute_l1_0_stencil_write
//	l1_0_stencil_op_hcompute_l1_0_stencil_2
inline void l1_0_stencil_op_hcompute_l1_0_stencil_write_bundle_write(hw_uint<16>& op_hcompute_l1_0_stencil_write, l1_0_stencil_cache& l1_0_stencil, int root, int l1_0_s0_y, int l1_0_s0_x, int dynamic_address) {
	hw_uint<16> l1_0_stencil_op_hcompute_l1_0_stencil_2_res = op_hcompute_l1_0_stencil_write.extract<0, 15>();
	l1_0_stencil_op_hcompute_l1_0_stencil_2_write(l1_0_stencil_op_hcompute_l1_0_stencil_2_res, l1_0_stencil, root, l1_0_s0_y, l1_0_s0_x, dynamic_address);
}

struct l1_up_stencil_op_hcompute_l1_up_stencil_0_to_l1_up_stencil_op_hcompute_f1_up_stencil_1_36_cache {
	// RAM Box: {[-1, 32], [-1, 32]}
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

struct l1_up_stencil_cache {
  // Reader addrs...
    // { op_hcompute_f1_up_stencil_1[root = 0, f1_up_s0_y, f1_up_s0_x] -> l1_up_stencil[f1_up_s0_y, f1_up_s0_x] : -1 <= f1_up_s0_y <= 32 and -1 <= f1_up_s0_x <= 32 }
  // # of banks: 1
  l1_up_stencil_op_hcompute_l1_up_stencil_0_to_l1_up_stencil_op_hcompute_f1_up_stencil_1_36_cache l1_up_stencil_op_hcompute_l1_up_stencil_0_to_l1_up_stencil_op_hcompute_f1_up_stencil_1_36;
};



inline void l1_up_stencil_op_hcompute_l1_up_stencil_0_write(hw_uint<16>& l1_up_stencil_op_hcompute_l1_up_stencil_0, l1_up_stencil_cache& l1_up_stencil, int root, int l1_up_s0_y, int l1_up_s0_x, int dynamic_address) {
  l1_up_stencil.l1_up_stencil_op_hcompute_l1_up_stencil_0_to_l1_up_stencil_op_hcompute_f1_up_stencil_1_36.push(l1_up_stencil_op_hcompute_l1_up_stencil_0);
}

inline hw_uint<16> l1_up_stencil_op_hcompute_f1_up_stencil_1_36_select(l1_up_stencil_cache& l1_up_stencil, int root, int f1_up_s0_y, int f1_up_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // l1_up_stencil_op_hcompute_f1_up_stencil_1_36 read pattern: { op_hcompute_f1_up_stencil_1[root = 0, f1_up_s0_y, f1_up_s0_x] -> l1_up_stencil[f1_up_s0_y, f1_up_s0_x] : -1 <= f1_up_s0_y <= 32 and -1 <= f1_up_s0_x <= 32 }
  // Read schedule : { op_hcompute_f1_up_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 15] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
  // Write schedule: { op_hcompute_l1_up_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 14] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
  auto value_l1_up_stencil_op_hcompute_l1_up_stencil_0 = l1_up_stencil.l1_up_stencil_op_hcompute_l1_up_stencil_0_to_l1_up_stencil_op_hcompute_f1_up_stencil_1_36.peek(/* one reader or all rams */ 0);
  return value_l1_up_stencil_op_hcompute_l1_up_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_f1_up_stencil_1_read
//	l1_up_stencil_op_hcompute_f1_up_stencil_1_36
inline hw_uint<16> l1_up_stencil_op_hcompute_f1_up_stencil_1_read_bundle_read(l1_up_stencil_cache& l1_up_stencil, int root, int f1_up_s0_y, int f1_up_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // l1_up_stencil_op_hcompute_f1_up_stencil_1_36

	hw_uint<16> result;
	hw_uint<16> l1_up_stencil_op_hcompute_f1_up_stencil_1_36_res = l1_up_stencil_op_hcompute_f1_up_stencil_1_36_select(l1_up_stencil, root, f1_up_s0_y, f1_up_s0_x, dynamic_address);
	set_at<0, 16>(result, l1_up_stencil_op_hcompute_f1_up_stencil_1_36_res);
	return result;
}

// op_hcompute_l1_up_stencil_write
//	l1_up_stencil_op_hcompute_l1_up_stencil_0
inline void l1_up_stencil_op_hcompute_l1_up_stencil_write_bundle_write(hw_uint<16>& op_hcompute_l1_up_stencil_write, l1_up_stencil_cache& l1_up_stencil, int root, int l1_up_s0_y, int l1_up_s0_x, int dynamic_address) {
	hw_uint<16> l1_up_stencil_op_hcompute_l1_up_stencil_0_res = op_hcompute_l1_up_stencil_write.extract<0, 15>();
	l1_up_stencil_op_hcompute_l1_up_stencil_0_write(l1_up_stencil_op_hcompute_l1_up_stencil_0_res, l1_up_stencil, root, l1_up_s0_y, l1_up_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 13568 bits


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

inline void op_hcompute_l0_0_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, l0_0_stencil_cache& l0_0_stencil, int root, int l0_0_s0_y, int l0_0_s0_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil__lp_l0_0_s0_y__p___m_1_rp__c___lp_l0_0_s0_x__p___m_1_rp__value = blur_unnormalized_stencil_op_hcompute_l0_0_stencil_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, l0_0_s0_y, l0_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_l0_0_stencil(blur_unnormalized_stencil__lp_l0_0_s0_y__p___m_1_rp__c___lp_l0_0_s0_x__p___m_1_rp__value);
	// Produce: l0_0_stencil
	l0_0_stencil_op_hcompute_l0_0_stencil_write_bundle_write(/* arg names */compute_result, l0_0_stencil, root, l0_0_s0_y, l0_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_h0_0_stencil(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, l0_0_stencil_cache& l0_0_stencil, h0_0_stencil_cache& h0_0_stencil, int root, int h0_0_s0_y, int h0_0_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_h0_0_s0_y_c__h0_0_s0_x_value = hw_input_global_wrapper_stencil_op_hcompute_h0_0_stencil_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, h0_0_s0_y, h0_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: l0_0_stencil
	auto l0_0_stencil_h0_0_s0_y_c__h0_0_s0_x_value = l0_0_stencil_op_hcompute_h0_0_stencil_read_bundle_read(l0_0_stencil/* source_delay */, root, h0_0_s0_y, h0_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_h0_0_stencil(hw_input_global_wrapper_stencil_h0_0_s0_y_c__h0_0_s0_x_value, l0_0_stencil_h0_0_s0_y_c__h0_0_s0_x_value);
	// Produce: h0_0_stencil
	h0_0_stencil_op_hcompute_h0_0_stencil_write_bundle_write(/* arg names */compute_result, h0_0_stencil, root, h0_0_s0_y, h0_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f1_0_stencil(l0_0_stencil_cache& l0_0_stencil, f1_0_stencil_cache& f1_0_stencil, int root, int f1_0_s0_y, int f1_0_s0_x) {
  // Dynamic address computation

	// Consume: l0_0_stencil
	auto l0_0_stencil__lp_f1_0_s0_y_m_2_rp__c___lp_f1_0_s0_x_m_2_rp__value = l0_0_stencil_op_hcompute_f1_0_stencil_read_bundle_read(l0_0_stencil/* source_delay */, root, f1_0_s0_y, f1_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f1_0_stencil(l0_0_stencil__lp_f1_0_s0_y_m_2_rp__c___lp_f1_0_s0_x_m_2_rp__value);
	// Produce: f1_0_stencil
	f1_0_stencil_op_hcompute_f1_0_stencil_write_bundle_write(/* arg names */compute_result, f1_0_stencil, root, f1_0_s0_y, f1_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f1_blur_unnormalized_stencil(f1_blur_unnormalized_stencil_clkwrk_dsa1_cache& f1_blur_unnormalized_stencil_clkwrk_dsa1, int root, int f1_blur_unnormalized_s0_y, int f1_blur_unnormalized_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_f1_blur_unnormalized_stencil();
	// Produce: f1_blur_unnormalized_stencil_clkwrk_dsa1
	f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, f1_blur_unnormalized_stencil_clkwrk_dsa1, root, f1_blur_unnormalized_s0_y, f1_blur_unnormalized_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f1_blur_unnormalized_stencil_1(f1_0_stencil_cache& f1_0_stencil, f1_blur_unnormalized_stencil_clkwrk_dsa1_cache& f1_blur_unnormalized_stencil_clkwrk_dsa1, f1_blur_unnormalized_stencil_cache& f1_blur_unnormalized_stencil, int root, int f1_blur_unnormalized_s1_y, int f1_blur_unnormalized_s1_x) {
  // Dynamic address computation

	// Consume: f1_0_stencil
	auto f1_0_stencil_f1_blur_unnormalized_s1_y_c__f1_blur_unnormalized_s1_x_value = f1_0_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_read_bundle_read(f1_0_stencil/* source_delay */, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: f1_blur_unnormalized_stencil_clkwrk_dsa1
	auto f1_blur_unnormalized_stencil_clkwrk_dsa1_f1_blur_unnormalized_s1_y_c__f1_blur_unnormalized_s1_x_value = f1_blur_unnormalized_stencil_clkwrk_dsa1_op_hcompute_f1_blur_unnormalized_stencil_1_read_bundle_read(f1_blur_unnormalized_stencil_clkwrk_dsa1/* source_delay */, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f1_blur_unnormalized_stencil_1(f1_0_stencil_f1_blur_unnormalized_s1_y_c__f1_blur_unnormalized_s1_x_value, f1_blur_unnormalized_stencil_clkwrk_dsa1_f1_blur_unnormalized_s1_y_c__f1_blur_unnormalized_s1_x_value);
	// Produce: f1_blur_unnormalized_stencil
	f1_blur_unnormalized_stencil_op_hcompute_f1_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, f1_blur_unnormalized_stencil, root, f1_blur_unnormalized_s1_y, f1_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_l1_0_stencil(f1_blur_unnormalized_stencil_cache& f1_blur_unnormalized_stencil, l1_0_stencil_cache& l1_0_stencil, int root, int l1_0_s0_y, int l1_0_s0_x) {
  // Dynamic address computation

	// Consume: f1_blur_unnormalized_stencil
	auto f1_blur_unnormalized_stencil__lp_l1_0_s0_y__p___m_1_rp__c___lp_l1_0_s0_x__p___m_1_rp__value = f1_blur_unnormalized_stencil_op_hcompute_l1_0_stencil_read_bundle_read(f1_blur_unnormalized_stencil/* source_delay */, root, l1_0_s0_y, l1_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_l1_0_stencil(f1_blur_unnormalized_stencil__lp_l1_0_s0_y__p___m_1_rp__c___lp_l1_0_s0_x__p___m_1_rp__value);
	// Produce: l1_0_stencil
	l1_0_stencil_op_hcompute_l1_0_stencil_write_bundle_write(/* arg names */compute_result, l1_0_stencil, root, l1_0_s0_y, l1_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_h1_0_stencil(f1_0_stencil_cache& f1_0_stencil, l1_0_stencil_cache& l1_0_stencil, h1_0_stencil_cache& h1_0_stencil, int root, int h1_0_s0_y, int h1_0_s0_x) {
  // Dynamic address computation

	// Consume: f1_0_stencil
	auto f1_0_stencil_h1_0_s0_y_c__h1_0_s0_x_value = f1_0_stencil_op_hcompute_h1_0_stencil_read_bundle_read(f1_0_stencil/* source_delay */, root, h1_0_s0_y, h1_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: l1_0_stencil
	auto l1_0_stencil_h1_0_s0_y_c__h1_0_s0_x_value = l1_0_stencil_op_hcompute_h1_0_stencil_read_bundle_read(l1_0_stencil/* source_delay */, root, h1_0_s0_y, h1_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_h1_0_stencil(f1_0_stencil_h1_0_s0_y_c__h1_0_s0_x_value, l1_0_stencil_h1_0_s0_y_c__h1_0_s0_x_value);
	// Produce: h1_0_stencil
	h1_0_stencil_op_hcompute_h1_0_stencil_write_bundle_write(/* arg names */compute_result, h1_0_stencil, root, h1_0_s0_y, h1_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f2_0_stencil(l1_0_stencil_cache& l1_0_stencil, f2_0_stencil_cache& f2_0_stencil, int root, int f2_0_s0_y, int f2_0_s0_x) {
  // Dynamic address computation

	// Consume: l1_0_stencil
	auto l1_0_stencil__lp_f2_0_s0_y_m_2_rp__c___lp_f2_0_s0_x_m_2_rp__value = l1_0_stencil_op_hcompute_f2_0_stencil_read_bundle_read(l1_0_stencil/* source_delay */, root, f2_0_s0_y, f2_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f2_0_stencil(l1_0_stencil__lp_f2_0_s0_y_m_2_rp__c___lp_f2_0_s0_x_m_2_rp__value);
	// Produce: f2_0_stencil
	f2_0_stencil_op_hcompute_f2_0_stencil_write_bundle_write(/* arg names */compute_result, f2_0_stencil, root, f2_0_s0_y, f2_0_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f2_temp_stencil(f2_0_stencil_cache& f2_0_stencil, f2_temp_stencil_cache& f2_temp_stencil, int root, int f2_temp_s0_y, int f2_temp_s0_x) {
  // Dynamic address computation

	// Consume: f2_0_stencil
	auto f2_0_stencil_floor_lp__lp_f2_temp_s0_y_div_2_rp__rp__c__floor_lp__lp_f2_temp_s0_x_div_2_rp__rp__value = f2_0_stencil_op_hcompute_f2_temp_stencil_read_bundle_read(f2_0_stencil/* source_delay */, root, f2_temp_s0_y, f2_temp_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f2_temp_stencil(f2_0_stencil_floor_lp__lp_f2_temp_s0_y_div_2_rp__rp__c__floor_lp__lp_f2_temp_s0_x_div_2_rp__rp__value);
	// Produce: f2_temp_stencil
	f2_temp_stencil_op_hcompute_f2_temp_stencil_write_bundle_write(/* arg names */compute_result, f2_temp_stencil, root, f2_temp_s0_y, f2_temp_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f2_temp_blur_unnormalized_stencil(f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_cache& f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, int root, int f2_temp_blur_unnormalized_s0_y, int f2_temp_blur_unnormalized_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_f2_temp_blur_unnormalized_stencil();
	// Produce: f2_temp_blur_unnormalized_stencil_clkwrk_dsa3
	f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, root, f2_temp_blur_unnormalized_s0_y, f2_temp_blur_unnormalized_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f2_temp_blur_unnormalized_stencil_1(f2_temp_stencil_cache& f2_temp_stencil, f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_cache& f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, f2_temp_blur_unnormalized_stencil_cache& f2_temp_blur_unnormalized_stencil, int root, int f2_temp_blur_unnormalized_s1_y, int f2_temp_blur_unnormalized_s1_x) {
  // Dynamic address computation

	// Consume: f2_temp_stencil
	auto f2_temp_stencil_f2_temp_blur_unnormalized_s1_y_c__f2_temp_blur_unnormalized_s1_x_value = f2_temp_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_read_bundle_read(f2_temp_stencil/* source_delay */, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: f2_temp_blur_unnormalized_stencil_clkwrk_dsa3
	auto f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_f2_temp_blur_unnormalized_s1_y_c__f2_temp_blur_unnormalized_s1_x_value = f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_op_hcompute_f2_temp_blur_unnormalized_stencil_1_read_bundle_read(f2_temp_blur_unnormalized_stencil_clkwrk_dsa3/* source_delay */, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f2_temp_blur_unnormalized_stencil_1(f2_temp_stencil_f2_temp_blur_unnormalized_s1_y_c__f2_temp_blur_unnormalized_s1_x_value, f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_f2_temp_blur_unnormalized_s1_y_c__f2_temp_blur_unnormalized_s1_x_value);
	// Produce: f2_temp_blur_unnormalized_stencil
	f2_temp_blur_unnormalized_stencil_op_hcompute_f2_temp_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, f2_temp_blur_unnormalized_stencil, root, f2_temp_blur_unnormalized_s1_y, f2_temp_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_l1_up_stencil(f2_temp_blur_unnormalized_stencil_cache& f2_temp_blur_unnormalized_stencil, l1_up_stencil_cache& l1_up_stencil, int root, int l1_up_s0_y, int l1_up_s0_x) {
  // Dynamic address computation

	// Consume: f2_temp_blur_unnormalized_stencil
	auto f2_temp_blur_unnormalized_stencil__lp_l1_up_s0_y__p___m_1_rp__c___lp_l1_up_s0_x__p___m_1_rp__value = f2_temp_blur_unnormalized_stencil_op_hcompute_l1_up_stencil_read_bundle_read(f2_temp_blur_unnormalized_stencil/* source_delay */, root, l1_up_s0_y, l1_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_l1_up_stencil(f2_temp_blur_unnormalized_stencil__lp_l1_up_s0_y__p___m_1_rp__c___lp_l1_up_s0_x__p___m_1_rp__value);
	// Produce: l1_up_stencil
	l1_up_stencil_op_hcompute_l1_up_stencil_write_bundle_write(/* arg names */compute_result, l1_up_stencil, root, l1_up_s0_y, l1_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f1_up_stencil_1(h1_0_stencil_cache& h1_0_stencil, l1_up_stencil_cache& l1_up_stencil, f1_up_stencil_cache& f1_up_stencil, int root, int f1_up_s0_y, int f1_up_s0_x) {
  // Dynamic address computation

	// Consume: h1_0_stencil
	auto h1_0_stencil_f1_up_s0_y_c__f1_up_s0_x_value = h1_0_stencil_op_hcompute_f1_up_stencil_1_read_bundle_read(h1_0_stencil/* source_delay */, root, f1_up_s0_y, f1_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: l1_up_stencil
	auto l1_up_stencil_f1_up_s0_y_c__f1_up_s0_x_value = l1_up_stencil_op_hcompute_f1_up_stencil_1_read_bundle_read(l1_up_stencil/* source_delay */, root, f1_up_s0_y, f1_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f1_up_stencil_1(h1_0_stencil_f1_up_s0_y_c__f1_up_s0_x_value, l1_up_stencil_f1_up_s0_y_c__f1_up_s0_x_value);
	// Produce: f1_up_stencil
	f1_up_stencil_op_hcompute_f1_up_stencil_1_write_bundle_write(/* arg names */compute_result, f1_up_stencil, root, f1_up_s0_y, f1_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f1_temp_stencil(f1_up_stencil_cache& f1_up_stencil, f1_temp_stencil_cache& f1_temp_stencil, int root, int f1_temp_s0_y, int f1_temp_s0_x) {
  // Dynamic address computation

	// Consume: f1_up_stencil
	auto f1_up_stencil_floor_lp__lp_f1_temp_s0_y_div_2_rp__rp__c__floor_lp__lp_f1_temp_s0_x_div_2_rp__rp__value = f1_up_stencil_op_hcompute_f1_temp_stencil_read_bundle_read(f1_up_stencil/* source_delay */, root, f1_temp_s0_y, f1_temp_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f1_temp_stencil(f1_up_stencil_floor_lp__lp_f1_temp_s0_y_div_2_rp__rp__c__floor_lp__lp_f1_temp_s0_x_div_2_rp__rp__value);
	// Produce: f1_temp_stencil
	f1_temp_stencil_op_hcompute_f1_temp_stencil_write_bundle_write(/* arg names */compute_result, f1_temp_stencil, root, f1_temp_s0_y, f1_temp_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f1_temp_blur_unnormalized_stencil(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_cache& f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, int root, int f1_temp_blur_unnormalized_s0_y, int f1_temp_blur_unnormalized_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_f1_temp_blur_unnormalized_stencil();
	// Produce: f1_temp_blur_unnormalized_stencil_clkwrk_dsa2
	f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, root, f1_temp_blur_unnormalized_s0_y, f1_temp_blur_unnormalized_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f1_temp_blur_unnormalized_stencil_1(f1_temp_stencil_cache& f1_temp_stencil, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_cache& f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, f1_temp_blur_unnormalized_stencil_cache& f1_temp_blur_unnormalized_stencil, int root, int f1_temp_blur_unnormalized_s1_y, int f1_temp_blur_unnormalized_s1_x) {
  // Dynamic address computation

	// Consume: f1_temp_stencil
	auto f1_temp_stencil_f1_temp_blur_unnormalized_s1_y_c__f1_temp_blur_unnormalized_s1_x_value = f1_temp_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_read_bundle_read(f1_temp_stencil/* source_delay */, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: f1_temp_blur_unnormalized_stencil_clkwrk_dsa2
	auto f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_f1_temp_blur_unnormalized_s1_y_c__f1_temp_blur_unnormalized_s1_x_value = f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_op_hcompute_f1_temp_blur_unnormalized_stencil_1_read_bundle_read(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2/* source_delay */, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f1_temp_blur_unnormalized_stencil_1(f1_temp_stencil_f1_temp_blur_unnormalized_s1_y_c__f1_temp_blur_unnormalized_s1_x_value, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_f1_temp_blur_unnormalized_s1_y_c__f1_temp_blur_unnormalized_s1_x_value);
	// Produce: f1_temp_blur_unnormalized_stencil
	f1_temp_blur_unnormalized_stencil_op_hcompute_f1_temp_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, f1_temp_blur_unnormalized_stencil, root, f1_temp_blur_unnormalized_s1_y, f1_temp_blur_unnormalized_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_l0_up_stencil(f1_temp_blur_unnormalized_stencil_cache& f1_temp_blur_unnormalized_stencil, l0_up_stencil_cache& l0_up_stencil, int root, int l0_up_s0_y, int l0_up_s0_x) {
  // Dynamic address computation

	// Consume: f1_temp_blur_unnormalized_stencil
	auto f1_temp_blur_unnormalized_stencil__lp_l0_up_s0_y__p___m_1_rp__c___lp_l0_up_s0_x__p___m_1_rp__value = f1_temp_blur_unnormalized_stencil_op_hcompute_l0_up_stencil_read_bundle_read(f1_temp_blur_unnormalized_stencil/* source_delay */, root, l0_up_s0_y, l0_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_l0_up_stencil(f1_temp_blur_unnormalized_stencil__lp_l0_up_s0_y__p___m_1_rp__c___lp_l0_up_s0_x__p___m_1_rp__value);
	// Produce: l0_up_stencil
	l0_up_stencil_op_hcompute_l0_up_stencil_write_bundle_write(/* arg names */compute_result, l0_up_stencil, root, l0_up_s0_y, l0_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_f0_up_stencil(h0_0_stencil_cache& h0_0_stencil, l0_up_stencil_cache& l0_up_stencil, f0_up_stencil_cache& f0_up_stencil, int root, int f0_up_s0_y, int f0_up_s0_x) {
  // Dynamic address computation

	// Consume: h0_0_stencil
	auto h0_0_stencil_f0_up_s0_y_c__f0_up_s0_x_value = h0_0_stencil_op_hcompute_f0_up_stencil_read_bundle_read(h0_0_stencil/* source_delay */, root, f0_up_s0_y, f0_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: l0_up_stencil
	auto l0_up_stencil_f0_up_s0_y_c__f0_up_s0_x_value = l0_up_stencil_op_hcompute_f0_up_stencil_read_bundle_read(l0_up_stencil/* source_delay */, root, f0_up_s0_y, f0_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_f0_up_stencil(h0_0_stencil_f0_up_s0_y_c__f0_up_s0_x_value, l0_up_stencil_f0_up_s0_y_c__f0_up_s0_x_value);
	// Produce: f0_up_stencil
	f0_up_stencil_op_hcompute_f0_up_stencil_write_bundle_write(/* arg names */compute_result, f0_up_stencil, root, f0_up_s0_y, f0_up_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil(f0_up_stencil_cache& f0_up_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: f0_up_stencil
	auto f0_up_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = f0_up_stencil_op_hcompute_hw_output_stencil_read_bundle_read(f0_up_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil(f0_up_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void laplacian_pyramid(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __SYNTHESIS__
  ofstream debug_file("laplacian_pyramid_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_cache blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  blur_unnormalized_stencil_clkwrk_dsa0_cache blur_unnormalized_stencil_clkwrk_dsa0;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f0_up_stencil_cache f0_up_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f1_0_stencil_cache f1_0_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f1_blur_unnormalized_stencil_cache f1_blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f1_blur_unnormalized_stencil_clkwrk_dsa1_cache f1_blur_unnormalized_stencil_clkwrk_dsa1;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f1_temp_blur_unnormalized_stencil_cache f1_temp_blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f1_temp_blur_unnormalized_stencil_clkwrk_dsa2_cache f1_temp_blur_unnormalized_stencil_clkwrk_dsa2;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f1_temp_stencil_cache f1_temp_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f1_up_stencil_cache f1_up_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f2_0_stencil_cache f2_0_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f2_temp_blur_unnormalized_stencil_cache f2_temp_blur_unnormalized_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f2_temp_blur_unnormalized_stencil_clkwrk_dsa3_cache f2_temp_blur_unnormalized_stencil_clkwrk_dsa3;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  f2_temp_stencil_cache f2_temp_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  h0_0_stencil_cache h0_0_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  h1_0_stencil_cache h1_0_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  l0_0_stencil_cache l0_0_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  l0_up_stencil_cache l0_up_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  l1_0_stencil_cache l1_0_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  l1_up_stencil_cache l1_up_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { op_hcompute_f2_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 4d1, 3 + 4d2, 10] : -1 <= d1 <= 16 and -1 <= d2 <= 16; op_hcompute_f1_temp_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 17] : -1 <= d1 <= 62 and -1 <= d2 <= 62; op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64; op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68; op_hcompute_l0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -6 <= d1 <= 66 and -6 <= d2 <= 66; op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31; op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33; op_hcompute_l0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63; op_hcompute_f1_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 6] : -3 <= d1 <= 31 and -3 <= d2 <= 31; op_hcompute_f1_up_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 15] : -1 <= d1 <= 32 and -1 <= d2 <= 32; op_hcompute_l1_up_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 14] : -1 <= d1 <= 32 and -1 <= d2 <= 32; op_hcompute_f2_temp_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 12] : -2 <= d1 <= 31 and -2 <= d2 <= 31; op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -7 <= d1 <= 65 and -7 <= d2 <= 65; op_hcompute_h0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63; op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31; op_hcompute_f0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : 0 <= d1 <= 63 and 0 <= d2 <= 63; op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33; op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 21] : 0 <= d1 <= 63 and 0 <= d2 <= 63; op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65; op_hcompute_h1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 9] : -1 <= d1 <= 32 and -1 <= d2 <= 32; op_hcompute_l1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 8] : -2 <= d1 <= 32 and -2 <= d2 <= 32 }
//   { op_hcompute_f2_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 4d1, 3 + 4d2, 10] : -1 <= d1 <= 16 and -1 <= d2 <= 16 }
// Condition for op_hcompute_f2_0_stencil(((((-1 + -1*i1 + (4*(((1 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_f1_temp_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 17] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
// Condition for op_hcompute_f1_temp_blur_unnormalized_stencil(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_f1_temp_stencil[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -1 <= d1 <= 64 and -1 <= d2 <= 64 }
// Condition for op_hcompute_f1_temp_stencil(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -7 <= d1 <= 68 and -7 <= d2 <= 68 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((7 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((7 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { op_hcompute_l0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -6 <= d1 <= 66 and -6 <= d2 <= 66 }
// Condition for op_hcompute_l0_0_stencil(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((5 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((5 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_f2_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 13] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
// Condition for op_hcompute_f2_temp_blur_unnormalized_stencil_1(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_f2_temp_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 11] : -2 <= d1 <= 33 and -2 <= d2 <= 33 }
// Condition for op_hcompute_f2_temp_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_l0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for op_hcompute_l0_up_stencil(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_f1_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 6] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
// Condition for op_hcompute_f1_blur_unnormalized_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_f1_up_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 15] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
// Condition for op_hcompute_f1_up_stencil_1(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_l1_up_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 14] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
// Condition for op_hcompute_l1_up_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_f2_temp_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 12] : -2 <= d1 <= 31 and -2 <= d2 <= 31 }
// Condition for op_hcompute_f2_temp_blur_unnormalized_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
// Condition for op_hcompute_blur_unnormalized_stencil(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((5 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((5 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_h0_0_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for op_hcompute_h0_0_stencil(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((64 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((64 + -1*i2)) >= 0)))
//   { op_hcompute_f1_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 7] : -3 <= d1 <= 31 and -3 <= d2 <= 31 }
// Condition for op_hcompute_f1_blur_unnormalized_stencil_1(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_f0_up_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for op_hcompute_f0_up_stencil(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_f1_0_stencil[d0 = 0, d1, d2] -> [0, 1 + 2d1, 1 + 2d2, 5] : -3 <= d1 <= 33 and -3 <= d2 <= 33 }
// Condition for op_hcompute_f1_0_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((5 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((5 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_f1_temp_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 18] : -1 <= d1 <= 62 and -1 <= d2 <= 62 }
// Condition for op_hcompute_f1_temp_blur_unnormalized_stencil_1(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 21] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_output_stencil(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : -7 <= d1 <= 65 and -7 <= d2 <= 65 }
// Condition for op_hcompute_blur_unnormalized_stencil_1(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((5 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((5 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_h1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 9] : -1 <= d1 <= 32 and -1 <= d2 <= 32 }
// Condition for op_hcompute_h1_0_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { op_hcompute_l1_0_stencil[d0 = 0, d1, d2] -> [0, 3 + 2d1, 3 + 2d2, 8] : -2 <= d1 <= 32 and -2 <= d2 <= 32 }
// Condition for op_hcompute_l1_0_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))

	for (int c1 = -7; c1 <= 69; c1 += 1) {
	  if (c1 <= -3 && (c1 + 1) % 2 == 0) {
	    for (int c2 = -7; c2 <= 68; c2 += 1) {
	      op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c1, c2);
	      if (c1 >= -5 && c2 >= -5 && c2 <= 67) {
	        op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0, 0, c1 - 2, c2 - 2);
	        op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0 /* buf name */, hw_input_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_l0_0_stencil(blur_unnormalized_stencil /* buf name */, l0_0_stencil, 0, c1 - 1, c2 - 1);
	        if ((c2 + 1) % 2 == 0)
	          op_hcompute_f1_0_stencil(l0_0_stencil /* buf name */, f1_0_stencil, 0, (c1 - 1) / 2, (c2 - 1) / 2);
	      }
	    }
	  } else if (c1 >= -1 && (c1 + 1) % 2 == 0) {
	    if (c1 <= 67)
	      for (int c2 = -7; c2 < -1; c2 += 1) {
	        op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c1, c2);
	        if (c2 >= -5) {
	          op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0, 0, c1 - 2, c2 - 2);
	          op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0 /* buf name */, hw_input_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 2);
	          op_hcompute_l0_0_stencil(blur_unnormalized_stencil /* buf name */, l0_0_stencil, 0, c1 - 1, c2 - 1);
	          if ((c2 + 1) % 2 == 0)
	            op_hcompute_f1_0_stencil(l0_0_stencil /* buf name */, f1_0_stencil, 0, (c1 - 1) / 2, (c2 - 1) / 2);
	        }
	      }
	    for (int c2 = -1; c2 <= 69; c2 += 1) {
	      if (c1 <= 67 && c2 <= 68) {
	        op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c1, c2);
	        if (c2 <= 67) {
	          op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0, 0, c1 - 2, c2 - 2);
	          op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0 /* buf name */, hw_input_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 2);
	          op_hcompute_l0_0_stencil(blur_unnormalized_stencil /* buf name */, l0_0_stencil, 0, c1 - 1, c2 - 1);
	          if (c1 >= 1 && c1 <= 63 && c2 >= 1 && c2 <= 64)
	            op_hcompute_h0_0_stencil(hw_input_global_wrapper_stencil /* buf name */, l0_0_stencil /* buf name */, h0_0_stencil, 0, c1 - 1, c2 - 1);
	          if ((c2 + 1) % 2 == 0) {
	            op_hcompute_f1_0_stencil(l0_0_stencil /* buf name */, f1_0_stencil, 0, (c1 - 1) / 2, (c2 - 1) / 2);
	            op_hcompute_f1_blur_unnormalized_stencil(f1_blur_unnormalized_stencil_clkwrk_dsa1, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	            op_hcompute_f1_blur_unnormalized_stencil_1(f1_0_stencil /* buf name */, f1_blur_unnormalized_stencil_clkwrk_dsa1 /* buf name */, f1_blur_unnormalized_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	            op_hcompute_l1_0_stencil(f1_blur_unnormalized_stencil /* buf name */, l1_0_stencil, 0, (c1 - 3) / 2, (c2 - 3) / 2);
	            if (c1 >= 1 && c2 >= 1)
	              op_hcompute_h1_0_stencil(f1_0_stencil /* buf name */, l1_0_stencil /* buf name */, h1_0_stencil, 0, (c1 - 3) / 2, (c2 - 3) / 2);
	            if ((c1 + 1) % 4 == 0 && (c2 + 1) % 4 == 0)
	              op_hcompute_f2_0_stencil(l1_0_stencil /* buf name */, f2_0_stencil, 0, (c1 - 3) / 4, (c2 - 3) / 4);
	          }
	        }
	      }
	      if ((c2 + 1) % 2 == 0) {
	        op_hcompute_f2_temp_stencil(f2_0_stencil /* buf name */, f2_temp_stencil, 0, (c1 - 3) / 2, (c2 - 3) / 2);
	        if (c1 >= 3 && c2 >= 3) {
	          op_hcompute_f2_temp_blur_unnormalized_stencil(f2_temp_blur_unnormalized_stencil_clkwrk_dsa3, 0, (c1 - 7) / 2, (c2 - 7) / 2);
	          op_hcompute_f2_temp_blur_unnormalized_stencil_1(f2_temp_stencil /* buf name */, f2_temp_blur_unnormalized_stencil_clkwrk_dsa3 /* buf name */, f2_temp_blur_unnormalized_stencil, 0, (c1 - 7) / 2, (c2 - 7) / 2);
	          op_hcompute_l1_up_stencil(f2_temp_blur_unnormalized_stencil /* buf name */, l1_up_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	          op_hcompute_f1_up_stencil_1(h1_0_stencil /* buf name */, l1_up_stencil /* buf name */, f1_up_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	        }
	      }
	      if (c1 >= 5 && c2 >= 4) {
	        op_hcompute_f1_temp_stencil(f1_up_stencil /* buf name */, f1_temp_stencil, 0, c1 - 5, c2 - 5);
	        if (c1 >= 7 && c2 >= 6) {
	          op_hcompute_f1_temp_blur_unnormalized_stencil(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, 0, c1 - 7, c2 - 7);
	          op_hcompute_f1_temp_blur_unnormalized_stencil_1(f1_temp_stencil /* buf name */, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2 /* buf name */, f1_temp_blur_unnormalized_stencil, 0, c1 - 7, c2 - 7);
	          op_hcompute_l0_up_stencil(f1_temp_blur_unnormalized_stencil /* buf name */, l0_up_stencil, 0, c1 - 6, c2 - 6);
	          op_hcompute_f0_up_stencil(h0_0_stencil /* buf name */, l0_up_stencil /* buf name */, f0_up_stencil, 0, c1 - 6, c2 - 6);
	          op_hcompute_hw_output_stencil(f0_up_stencil /* buf name */, hw_output_stencil, 0, c1 - 6, c2 - 6);
	        }
	      }
	    }
	  } else if (c1 >= 4) {
	    for (int c2 = -7; c2 <= 3; c2 += 1) {
	      op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c1, c2);
	      if (c1 <= 66 && c2 >= -5) {
	        op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0, 0, c1 - 2, c2 - 2);
	        op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0 /* buf name */, hw_input_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_l0_0_stencil(blur_unnormalized_stencil /* buf name */, l0_0_stencil, 0, c1 - 1, c2 - 1);
	        if (c1 <= 64 && c2 >= 1)
	          op_hcompute_h0_0_stencil(hw_input_global_wrapper_stencil /* buf name */, l0_0_stencil /* buf name */, h0_0_stencil, 0, c1 - 1, c2 - 1);
	      }
	    }
	    for (int c2 = 4; c2 <= 69; c2 += 1) {
	      if (c2 <= 68) {
	        op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c1, c2);
	        if (c1 <= 66 && c2 <= 67) {
	          op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0, 0, c1 - 2, c2 - 2);
	          op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0 /* buf name */, hw_input_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 2);
	          op_hcompute_l0_0_stencil(blur_unnormalized_stencil /* buf name */, l0_0_stencil, 0, c1 - 1, c2 - 1);
	          if (c1 <= 64 && c2 <= 64)
	            op_hcompute_h0_0_stencil(hw_input_global_wrapper_stencil /* buf name */, l0_0_stencil /* buf name */, h0_0_stencil, 0, c1 - 1, c2 - 1);
	        }
	      }
	      op_hcompute_f1_temp_stencil(f1_up_stencil /* buf name */, f1_temp_stencil, 0, c1 - 5, c2 - 5);
	      if (c1 >= 6 && c2 >= 6) {
	        op_hcompute_f1_temp_blur_unnormalized_stencil(f1_temp_blur_unnormalized_stencil_clkwrk_dsa2, 0, c1 - 7, c2 - 7);
	        op_hcompute_f1_temp_blur_unnormalized_stencil_1(f1_temp_stencil /* buf name */, f1_temp_blur_unnormalized_stencil_clkwrk_dsa2 /* buf name */, f1_temp_blur_unnormalized_stencil, 0, c1 - 7, c2 - 7);
	        op_hcompute_l0_up_stencil(f1_temp_blur_unnormalized_stencil /* buf name */, l0_up_stencil, 0, c1 - 6, c2 - 6);
	        op_hcompute_f0_up_stencil(h0_0_stencil /* buf name */, l0_up_stencil /* buf name */, f0_up_stencil, 0, c1 - 6, c2 - 6);
	        op_hcompute_hw_output_stencil(f0_up_stencil /* buf name */, hw_output_stencil, 0, c1 - 6, c2 - 6);
	      }
	    }
	  } else {
	    for (int c2 = -7; c2 <= 68; c2 += 1) {
	      op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c1, c2);
	      if (c1 >= -4 && c2 >= -5 && c2 <= 67) {
	        op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0, 0, c1 - 2, c2 - 2);
	        op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0 /* buf name */, hw_input_global_wrapper_stencil /* buf name */, blur_unnormalized_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_l0_0_stencil(blur_unnormalized_stencil /* buf name */, l0_0_stencil, 0, c1 - 1, c2 - 1);
	        if (c1 == 2 && c2 >= 1 && c2 <= 64)
	          op_hcompute_h0_0_stencil(hw_input_global_wrapper_stencil /* buf name */, l0_0_stencil /* buf name */, h0_0_stencil, 0, 1, c2 - 1);
	      }
	    }
	  }
	}
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void laplacian_pyramid_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    laplacian_pyramid(hw_input_stencil, hw_output_stencil);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : -7 <= hw_input_global_wrapper_s0_y <= 68 and -7 <= hw_input_global_wrapper_s0_x <= 68 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 5776;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 4096;


extern "C" {

void laplacian_pyramid_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
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

  laplacian_pyramid_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void laplacian_pyramid_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  laplacian_pyramid(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__SYNTHESIS__

