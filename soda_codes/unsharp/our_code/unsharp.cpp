#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: unsharp_compute.h
#include "unsharp_compute.h"

#include "hw_classes.h"

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_to_blur_unnormalized_stencil_op_hcompute_ratio_stencil_1_cache {
	// RAM Box: {[0, 59], [0, 59]}
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

struct blur_unnormalized_stencil_cache {
  // # of banks: 1
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_to_blur_unnormalized_stencil_op_hcompute_ratio_stencil_1_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_to_blur_unnormalized_stencil_op_hcompute_ratio_stencil_1;
};



inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_to_blur_unnormalized_stencil_op_hcompute_ratio_stencil_1.push(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12);
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_ratio_stencil_1_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int pad_root_to_ratio_s0_y, int pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, int ratio_s0_y, int ratio_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_unnormalized_stencil_op_hcompute_ratio_stencil_1 read pattern: { op_hcompute_ratio_stencil[root = 0, pad_root_to_ratio_s0_y = 0, pad_pad_root_to_ratio_s0_y_to_ratio_s0_y = 0, ratio_s0_y, ratio_s0_x] -> blur_unnormalized_stencil[ratio_s0_y, ratio_s0_x] : 0 <= ratio_s0_y <= 59 and 0 <= ratio_s0_x <= 59 }
  // Read schedule : { op_hcompute_ratio_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 4] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_to_blur_unnormalized_stencil_op_hcompute_ratio_stencil_1.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_unnormalized_stencil_1_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_1_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_res = op_hcompute_blur_unnormalized_stencil_1_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_12_res, blur_unnormalized_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
}

// op_hcompute_ratio_stencil_read
//	blur_unnormalized_stencil_op_hcompute_ratio_stencil_1
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_ratio_stencil_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int pad_root_to_ratio_s0_y, int pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, int ratio_s0_y, int ratio_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_ratio_stencil_1

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_ratio_stencil_1_res = blur_unnormalized_stencil_op_hcompute_ratio_stencil_1_select(blur_unnormalized_stencil, root, pad_root_to_ratio_s0_y, pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, ratio_s0_y, ratio_s0_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_ratio_stencil_1_res);
	return result;
}

#include "hw_classes.h"

struct blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13_cache {
	// RAM Box: {[0, 59], [0, 59]}
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

struct blur_unnormalized_stencil_clkwrk_dsa0_cache {
  // # of banks: 1
  blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13_cache blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13;
};



inline void blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_write(hw_uint<16>& blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39, blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int pad_root_to_blur_unnormalized_s0_y, int pad_pad_root_to_blur_unnormalized_s0_y_to_blur_unnormalized_s0_y, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x, int dynamic_address) {
  blur_unnormalized_stencil_clkwrk_dsa0.blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13.push(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39);
}

inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13_select(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> blur_unnormalized_stencil_clkwrk_dsa0[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 2] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  auto value_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39 = blur_unnormalized_stencil_clkwrk_dsa0.blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_to_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13.peek(/* one reader or all rams */ 0);
  return value_blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_unnormalized_stencil_1_read
//	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13
inline hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13_res = blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13_select(blur_unnormalized_stencil_clkwrk_dsa0, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_13_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_write
//	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39
inline void blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_write, blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int pad_root_to_blur_unnormalized_s0_y, int pad_pad_root_to_blur_unnormalized_s0_y_to_blur_unnormalized_s0_y, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_res = op_hcompute_blur_unnormalized_stencil_write.extract<0, 15>();
	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_write(blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_39_res, blur_unnormalized_stencil_clkwrk_dsa0, root, pad_root_to_blur_unnormalized_s0_y, pad_pad_root_to_blur_unnormalized_s0_y_to_blur_unnormalized_s0_y, blur_unnormalized_s0_y, blur_unnormalized_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 261
	// # of read delays: 25
  // 0, 1, 2, 3, 4, 64, 65, 66, 67, 68, 128, 129, 130, 131, 132, 192, 193, 194, 195, 196, 256, 257, 258, 259, 260
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 59> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	hw_uint<16> f18;
	fifo<hw_uint<16>, 59> f19;
	hw_uint<16> f20;
	hw_uint<16> f22;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 59> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	hw_uint<16> f36;
	hw_uint<16> f38;
	fifo<hw_uint<16>, 59> f39;
	hw_uint<16> f40;
	hw_uint<16> f42;
	hw_uint<16> f44;
	hw_uint<16> f46;
	hw_uint<16> f48;


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

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_64() {
		return f10;
	}

	inline hw_uint<16> peek_65() {
		return f12;
	}

	inline hw_uint<16> peek_66() {
		return f14;
	}

	inline hw_uint<16> peek_67() {
		return f16;
	}

	inline hw_uint<16> peek_68() {
		return f18;
	}

	inline hw_uint<16> peek_127() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f19.back();
	}

	inline hw_uint<16> peek_128() {
		return f20;
	}

	inline hw_uint<16> peek_129() {
		return f22;
	}

	inline hw_uint<16> peek_130() {
		return f24;
	}

	inline hw_uint<16> peek_131() {
		return f26;
	}

	inline hw_uint<16> peek_132() {
		return f28;
	}

	inline hw_uint<16> peek_191() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f29.back();
	}

	inline hw_uint<16> peek_192() {
		return f30;
	}

	inline hw_uint<16> peek_193() {
		return f32;
	}

	inline hw_uint<16> peek_194() {
		return f34;
	}

	inline hw_uint<16> peek_195() {
		return f36;
	}

	inline hw_uint<16> peek_196() {
		return f38;
	}

	inline hw_uint<16> peek_255() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f39.back();
	}

	inline hw_uint<16> peek_256() {
		return f40;
	}

	inline hw_uint<16> peek_257() {
		return f42;
	}

	inline hw_uint<16> peek_258() {
		return f44;
	}

	inline hw_uint<16> peek_259() {
		return f46;
	}

	inline hw_uint<16> peek_260() {
		return f48;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f48 = f46;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f46 = f44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f44 = f42;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f42 = f40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 59
    f40 = f39.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 59 reading from capacity: 1
    f39.push(f38);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f38 = f36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f36 = f34;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 59
    f30 = f29.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 59 reading from capacity: 1
    f29.push(f28);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f24 = f22;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 59
    f20 = f19.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 59 reading from capacity: 1
    f19.push(f18);
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
    // cap: 1 reading from capacity: 59
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 59 reading from capacity: 1
    f9.push(f8);
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

struct gray_stencil_cache {
  // # of banks: 1
  gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27_cache gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27;
};



inline void gray_stencil_op_hcompute_gray_stencil_8_write(hw_uint<16>& gray_stencil_op_hcompute_gray_stencil_8, gray_stencil_cache& gray_stencil, int root, int pad_root_to_gray_s0_y, int pad_pad_root_to_gray_s0_y_to_gray_s0_y, int gray_s0_y, int gray_s0_x, int dynamic_address) {
  gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.push(gray_stencil_op_hcompute_gray_stencil_8);
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_14_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_14 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_260();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_15_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_15 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 4 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_192();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_16_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_16 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[2 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_132();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_17_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_17 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_131();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_18_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_18 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_130();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_19_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_19 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 3 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_129();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_20_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_20 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[2 + blur_unnormalized_s1_y, 4 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_128();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_21_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_21 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[3 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_68();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_22_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_22 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_67();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_23_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_23 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_66();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_24_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_24 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 3 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_65();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_25_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_25 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_259();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_26_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_26 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[3 + blur_unnormalized_s1_y, 4 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_64();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_27_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_27 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[4 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_4();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_28_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_28 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_2();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_29_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_29 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 4 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_30_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_30 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 3 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_31_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_31 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[4 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_3();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_32_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_32 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_258();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_33_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_33 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[blur_unnormalized_s1_y, 3 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_257();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_34_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_34 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[blur_unnormalized_s1_y, 4 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_256();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_35_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_35 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[1 + blur_unnormalized_s1_y, blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_196();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_36_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_36 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 1 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_195();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_37_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_37 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 2 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_194();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_38_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_38 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, pad_root_to_blur_unnormalized_s1_y = 0, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> gray_stencil[1 + blur_unnormalized_s1_y, 3 + blur_unnormalized_s1_x] : 0 <= blur_unnormalized_s1_y <= 59 and 0 <= blur_unnormalized_s1_x <= 59 }
  // Read schedule : { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_193();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_hw_output_stencil_4_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_hw_output_s0_y_yi, int pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_hw_output_stencil_4 read pattern: { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_y_yi = 0, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> gray_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 59 and 0 <= hw_output_s0_x_xi <= 59 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 5] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_260();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_ratio_stencil_2_select(gray_stencil_cache& gray_stencil, int root, int pad_root_to_ratio_s0_y, int pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, int ratio_s0_y, int ratio_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_stencil_op_hcompute_ratio_stencil_2 read pattern: { op_hcompute_ratio_stencil[root = 0, pad_root_to_ratio_s0_y = 0, pad_pad_root_to_ratio_s0_y_to_ratio_s0_y = 0, ratio_s0_y, ratio_s0_x] -> gray_stencil[ratio_s0_y, ratio_s0_x] : 0 <= ratio_s0_y <= 59 and 0 <= ratio_s0_x <= 59 }
  // Read schedule : { op_hcompute_ratio_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 4] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_gray_stencil_op_hcompute_gray_stencil_8 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_8_merged_banks_27.peek_260();
  return value_gray_stencil_op_hcompute_gray_stencil_8;
  return 0;
}

// # of bundles = 4
// op_hcompute_blur_unnormalized_stencil_1_read
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_14
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_15
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_16
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_17
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_18
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_19
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_20
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_21
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_22
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_23
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_24
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_25
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_26
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_27
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_28
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_29
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_30
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_31
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_32
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_33
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_34
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_35
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_36
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_37
//	gray_stencil_op_hcompute_blur_unnormalized_stencil_1_38
inline hw_uint<400> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 25
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_14
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_15
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_16
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_17
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_18
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_19
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_20
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_21
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_22
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_23
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_24
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_25
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_26
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_27
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_28
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_29
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_30
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_31
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_32
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_33
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_34
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_35
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_36
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_37
    // gray_stencil_op_hcompute_blur_unnormalized_stencil_1_38

	hw_uint<400> result;
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_14_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_14_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_14_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_15_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_15_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<16, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_15_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_16_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_16_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<32, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_16_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_17_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_17_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<48, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_17_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_18_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_18_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<64, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_18_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_19_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_19_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<80, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_19_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_20_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_20_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<96, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_20_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_21_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_21_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<112, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_21_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_22_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_22_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<128, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_22_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_23_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_23_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<144, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_23_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_24_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_24_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<160, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_24_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_25_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_25_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<176, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_25_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_26_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_26_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<192, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_26_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_27_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_27_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<208, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_27_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_28_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_28_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<224, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_28_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_29_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_29_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<240, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_29_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_30_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_30_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<256, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_30_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_31_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_31_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<272, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_31_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_32_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_32_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<288, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_32_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_33_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_33_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<304, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_33_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_34_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_34_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<320, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_34_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_35_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_35_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<336, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_35_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_36_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_36_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<352, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_36_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_37_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_37_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<368, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_37_res);
	hw_uint<16> gray_stencil_op_hcompute_blur_unnormalized_stencil_1_38_res = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_38_select(gray_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<384, 400>(result, gray_stencil_op_hcompute_blur_unnormalized_stencil_1_38_res);
	return result;
}

// op_hcompute_gray_stencil_write
//	gray_stencil_op_hcompute_gray_stencil_8
inline void gray_stencil_op_hcompute_gray_stencil_write_bundle_write(hw_uint<16>& op_hcompute_gray_stencil_write, gray_stencil_cache& gray_stencil, int root, int pad_root_to_gray_s0_y, int pad_pad_root_to_gray_s0_y_to_gray_s0_y, int gray_s0_y, int gray_s0_x, int dynamic_address) {
	hw_uint<16> gray_stencil_op_hcompute_gray_stencil_8_res = op_hcompute_gray_stencil_write.extract<0, 15>();
	gray_stencil_op_hcompute_gray_stencil_8_write(gray_stencil_op_hcompute_gray_stencil_8_res, gray_stencil, root, pad_root_to_gray_s0_y, pad_pad_root_to_gray_s0_y_to_gray_s0_y, gray_s0_y, gray_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	gray_stencil_op_hcompute_hw_output_stencil_4
inline hw_uint<16> gray_stencil_op_hcompute_hw_output_stencil_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int pad_root_to_hw_output_s0_y_yi, int pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_stencil_op_hcompute_hw_output_stencil_4

	hw_uint<16> result;
	hw_uint<16> gray_stencil_op_hcompute_hw_output_stencil_4_res = gray_stencil_op_hcompute_hw_output_stencil_4_select(gray_stencil, root, pad_root_to_hw_output_s0_y_yi, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, gray_stencil_op_hcompute_hw_output_stencil_4_res);
	return result;
}

// op_hcompute_ratio_stencil_read
//	gray_stencil_op_hcompute_ratio_stencil_2
inline hw_uint<16> gray_stencil_op_hcompute_ratio_stencil_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int pad_root_to_ratio_s0_y, int pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, int ratio_s0_y, int ratio_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_stencil_op_hcompute_ratio_stencil_2

	hw_uint<16> result;
	hw_uint<16> gray_stencil_op_hcompute_ratio_stencil_2_res = gray_stencil_op_hcompute_ratio_stencil_2_select(gray_stencil, root, pad_root_to_ratio_s0_y, pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, ratio_s0_y, ratio_s0_x, dynamic_address);
	set_at<0, 16>(result, gray_stencil_op_hcompute_ratio_stencil_2_res);
	return result;
}

#include "hw_classes.h"

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_3_cache {
	// RAM Box: {[0, 2], [0, 63], [0, 63]}
	// Capacity: 8193
	// # of read delays: 3
  // 0, 4096, 8192
	hw_uint<16> f0;
	fifo<hw_uint<16>, 4095> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 4095> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_4095() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4096() {
		return f2;
	}

	inline hw_uint<16> peek_8191() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_8192() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4095
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4095 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4095
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4095 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_stencil_cache {
  // # of banks: 1
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_3_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_3;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_c, int hw_input_global_wrapper_s0_c, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_3.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_10_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_gray_s0_y, int pad_pad_root_to_gray_s0_y_to_gray_s0_y, int gray_s0_y, int gray_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_10 read pattern: { op_hcompute_gray_stencil[root = 0, pad_root_to_gray_s0_y = 0, pad_pad_root_to_gray_s0_y_to_gray_s0_y = 0, gray_s0_y, gray_s0_x] -> hw_input_global_wrapper_stencil[2, gray_s0_y, gray_s0_x] : 0 <= gray_s0_y <= 63 and 0 <= gray_s0_x <= 63 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1 = 0, d2, d3, d4] -> [0, 0, d2, d3, d4, 0] : 0 <= d2 <= 2 and 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_3.peek_0();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_11_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_gray_s0_y, int pad_pad_root_to_gray_s0_y_to_gray_s0_y, int gray_s0_y, int gray_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_11 read pattern: { op_hcompute_gray_stencil[root = 0, pad_root_to_gray_s0_y = 0, pad_pad_root_to_gray_s0_y_to_gray_s0_y = 0, gray_s0_y, gray_s0_x] -> hw_input_global_wrapper_stencil[0, gray_s0_y, gray_s0_x] : 0 <= gray_s0_y <= 63 and 0 <= gray_s0_x <= 63 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1 = 0, d2, d3, d4] -> [0, 0, d2, d3, d4, 0] : 0 <= d2 <= 2 and 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_3.peek_8192();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_9_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_gray_s0_y, int pad_pad_root_to_gray_s0_y_to_gray_s0_y, int gray_s0_y, int gray_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_9 read pattern: { op_hcompute_gray_stencil[root = 0, pad_root_to_gray_s0_y = 0, pad_pad_root_to_gray_s0_y_to_gray_s0_y = 0, gray_s0_y, gray_s0_x] -> hw_input_global_wrapper_stencil[1, gray_s0_y, gray_s0_x] : 0 <= gray_s0_y <= 63 and 0 <= gray_s0_x <= 63 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1 = 0, d2, d3, d4] -> [0, 0, d2, d3, d4, 0] : 0 <= d2 <= 2 and 0 <= d3 <= 63 and 0 <= d4 <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_3.peek_4096();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6;
  return 0;
}

// # of bundles = 2
// op_hcompute_gray_stencil_read
//	hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_9
//	hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_10
//	hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_11
inline hw_uint<48> hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_gray_s0_y, int pad_pad_root_to_gray_s0_y_to_gray_s0_y, int gray_s0_y, int gray_s0_x, int dynamic_address) {
  // # of ports in bundle: 3
    // hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_9
    // hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_10
    // hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_11

	hw_uint<48> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_9_res = hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_9_select(hw_input_global_wrapper_stencil, root, pad_root_to_gray_s0_y, pad_pad_root_to_gray_s0_y_to_gray_s0_y, gray_s0_y, gray_s0_x, dynamic_address);
	set_at<0, 48>(result, hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_9_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_10_res = hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_10_select(hw_input_global_wrapper_stencil, root, pad_root_to_gray_s0_y, pad_pad_root_to_gray_s0_y_to_gray_s0_y, gray_s0_y, gray_s0_x, dynamic_address);
	set_at<16, 48>(result, hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_10_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_11_res = hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_11_select(hw_input_global_wrapper_stencil, root, pad_root_to_gray_s0_y, pad_pad_root_to_gray_s0_y_to_gray_s0_y, gray_s0_y, gray_s0_x, dynamic_address);
	set_at<32, 48>(result, hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_11_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_c, int hw_input_global_wrapper_s0_c, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct ratio_stencil_op_hcompute_ratio_stencil_0_to_ratio_stencil_op_hcompute_hw_output_stencil_5_cache {
	// RAM Box: {[0, 59], [0, 59]}
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

struct ratio_stencil_cache {
  // # of banks: 1
  ratio_stencil_op_hcompute_ratio_stencil_0_to_ratio_stencil_op_hcompute_hw_output_stencil_5_cache ratio_stencil_op_hcompute_ratio_stencil_0_to_ratio_stencil_op_hcompute_hw_output_stencil_5;
};



inline void ratio_stencil_op_hcompute_ratio_stencil_0_write(hw_uint<16>& ratio_stencil_op_hcompute_ratio_stencil_0, ratio_stencil_cache& ratio_stencil, int root, int pad_root_to_ratio_s0_y, int pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, int ratio_s0_y, int ratio_s0_x, int dynamic_address) {
  ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_0_to_ratio_stencil_op_hcompute_hw_output_stencil_5.push(ratio_stencil_op_hcompute_ratio_stencil_0);
}

inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_stencil_5_select(ratio_stencil_cache& ratio_stencil, int root, int pad_root_to_hw_output_s0_y_yi, int pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ratio_stencil_op_hcompute_hw_output_stencil_5 read pattern: { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_y_yi = 0, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> ratio_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 59 and 0 <= hw_output_s0_x_xi <= 59 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 5] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  // Write schedule: { op_hcompute_ratio_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 4] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
  auto value_ratio_stencil_op_hcompute_ratio_stencil_0 = ratio_stencil.ratio_stencil_op_hcompute_ratio_stencil_0_to_ratio_stencil_op_hcompute_hw_output_stencil_5.peek(/* one reader or all rams */ 0);
  return value_ratio_stencil_op_hcompute_ratio_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_hw_output_stencil_read
//	ratio_stencil_op_hcompute_hw_output_stencil_5
inline hw_uint<16> ratio_stencil_op_hcompute_hw_output_stencil_read_bundle_read(ratio_stencil_cache& ratio_stencil, int root, int pad_root_to_hw_output_s0_y_yi, int pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // ratio_stencil_op_hcompute_hw_output_stencil_5

	hw_uint<16> result;
	hw_uint<16> ratio_stencil_op_hcompute_hw_output_stencil_5_res = ratio_stencil_op_hcompute_hw_output_stencil_5_select(ratio_stencil, root, pad_root_to_hw_output_s0_y_yi, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, ratio_stencil_op_hcompute_hw_output_stencil_5_res);
	return result;
}

// op_hcompute_ratio_stencil_write
//	ratio_stencil_op_hcompute_ratio_stencil_0
inline void ratio_stencil_op_hcompute_ratio_stencil_write_bundle_write(hw_uint<16>& op_hcompute_ratio_stencil_write, ratio_stencil_cache& ratio_stencil, int root, int pad_root_to_ratio_s0_y, int pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, int ratio_s0_y, int ratio_s0_x, int dynamic_address) {
	hw_uint<16> ratio_stencil_op_hcompute_ratio_stencil_0_res = op_hcompute_ratio_stencil_write.extract<0, 15>();
	ratio_stencil_op_hcompute_ratio_stencil_0_write(ratio_stencil_op_hcompute_ratio_stencil_0_res, ratio_stencil, root, pad_root_to_ratio_s0_y, pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, ratio_s0_y, ratio_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 135232 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_c, int hw_input_global_wrapper_s0_c, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_global_wrapper_s0_c_c__hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_hw_input_global_wrapper_s0_c_c__hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_gray_stencil(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, gray_stencil_cache& gray_stencil, int root, int pad_root_to_gray_s0_y, int pad_pad_root_to_gray_s0_y_to_gray_s0_y, int gray_s0_y, int gray_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_1_c__gray_s0_y_c__gray_s0_x_value = hw_input_global_wrapper_stencil_op_hcompute_gray_stencil_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_gray_s0_y, pad_pad_root_to_gray_s0_y_to_gray_s0_y, gray_s0_y, gray_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_gray_stencil(hw_input_global_wrapper_stencil_1_c__gray_s0_y_c__gray_s0_x_value);
	// Produce: gray_stencil
	gray_stencil_op_hcompute_gray_stencil_write_bundle_write(/* arg names */compute_result, gray_stencil, root, pad_root_to_gray_s0_y, pad_pad_root_to_gray_s0_y_to_gray_s0_y, gray_s0_y, gray_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, int root, int pad_root_to_blur_unnormalized_s0_y, int pad_pad_root_to_blur_unnormalized_s0_y_to_blur_unnormalized_s0_y, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil();
	// Produce: blur_unnormalized_stencil_clkwrk_dsa0
	blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil_clkwrk_dsa0, root, pad_root_to_blur_unnormalized_s0_y, pad_pad_root_to_blur_unnormalized_s0_y_to_blur_unnormalized_s0_y, blur_unnormalized_s0_y, blur_unnormalized_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0_cache& blur_unnormalized_stencil_clkwrk_dsa0, gray_stencil_cache& gray_stencil, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int pad_root_to_blur_unnormalized_s1_y, int pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil_clkwrk_dsa0
	auto blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_s1_y_c__blur_unnormalized_s1_x_value = blur_unnormalized_stencil_clkwrk_dsa0_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(blur_unnormalized_stencil_clkwrk_dsa0/* source_delay */, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gray_stencil
	auto gray_stencil_blur_unnormalized_s1_y_c__blur_unnormalized_s1_x_value = gray_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(gray_stencil/* source_delay */, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0_blur_unnormalized_s1_y_c__blur_unnormalized_s1_x_value, gray_stencil_blur_unnormalized_s1_y_c__blur_unnormalized_s1_x_value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, pad_root_to_blur_unnormalized_s1_y, pad_pad_root_to_blur_unnormalized_s1_y_to_blur_unnormalized_s1_y, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_ratio_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, gray_stencil_cache& gray_stencil, ratio_stencil_cache& ratio_stencil, int root, int pad_root_to_ratio_s0_y, int pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, int ratio_s0_y, int ratio_s0_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_ratio_s0_y_c__ratio_s0_x_value = blur_unnormalized_stencil_op_hcompute_ratio_stencil_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, pad_root_to_ratio_s0_y, pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, ratio_s0_y, ratio_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gray_stencil
	auto gray_stencil_ratio_s0_y_c__ratio_s0_x_value = gray_stencil_op_hcompute_ratio_stencil_read_bundle_read(gray_stencil/* source_delay */, root, pad_root_to_ratio_s0_y, pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, ratio_s0_y, ratio_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_ratio_stencil(blur_unnormalized_stencil_ratio_s0_y_c__ratio_s0_x_value, gray_stencil_ratio_s0_y_c__ratio_s0_x_value);
	// Produce: ratio_stencil
	ratio_stencil_op_hcompute_ratio_stencil_write_bundle_write(/* arg names */compute_result, ratio_stencil, root, pad_root_to_ratio_s0_y, pad_pad_root_to_ratio_s0_y_to_ratio_s0_y, ratio_s0_y, ratio_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(gray_stencil_cache& gray_stencil, ratio_stencil_cache& ratio_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int pad_root_to_hw_output_s0_y_yi, int pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: gray_stencil
	auto gray_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = gray_stencil_op_hcompute_hw_output_stencil_read_bundle_read(gray_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: ratio_stencil
	auto ratio_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = ratio_stencil_op_hcompute_hw_output_stencil_read_bundle_read(ratio_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(gray_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value, ratio_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unsharp(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unsharp_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blur_unnormalized_stencil_cache blur_unnormalized_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blur_unnormalized_stencil_clkwrk_dsa0_cache blur_unnormalized_stencil_clkwrk_dsa0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_stencil_cache gray_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  ratio_stencil_cache ratio_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1 = 0, d2, d3, d4] -> [0, 0, d2, d3, d4, 0] : 0 <= d2 <= 2 and 0 <= d3 <= 63 and 0 <= d4 <= 63; op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59; op_hcompute_hw_output_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 5] : 0 <= d3 <= 59 and 0 <= d4 <= 59; op_hcompute_blur_unnormalized_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 2] : 0 <= d3 <= 59 and 0 <= d4 <= 59; op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63; op_hcompute_ratio_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 4] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
//   { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1 = 0, d2, d3, d4] -> [0, 0, d2, d3, d4, 0] : 0 <= d2 <= 2 and 0 <= d3 <= 63 and 0 <= d4 <= 63 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((i5 == 0) && (i1 == 0) && (i0 == 0) && (i2 >= 0) && (2 - i2 >= 0) && (i3 >= 0) && (63 - i3 >= 0) && (i4 >= 0) && (63 - i4 >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_1[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 3] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
// Condition for op_hcompute_blur_unnormalized_stencil_1(((-3 + i5 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (-4 + i3 >= 0) && (63 - i3 >= 0) && (-4 + i4 >= 0) && (63 - i4 >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 5] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
// Condition for op_hcompute_hw_output_stencil(((-5 + i5 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (-4 + i3 >= 0) && (63 - i3 >= 0) && (-4 + i4 >= 0) && (63 - i4 >= 0)))
//   { op_hcompute_blur_unnormalized_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 2] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
// Condition for op_hcompute_blur_unnormalized_stencil(((-2 + i5 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (-4 + i3 >= 0) && (63 - i3 >= 0) && (-4 + i4 >= 0) && (63 - i4 >= 0)))
//   { op_hcompute_gray_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, d3, d4, 1] : 0 <= d3 <= 63 and 0 <= d4 <= 63 }
// Condition for op_hcompute_gray_stencil(((-1 + i5 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (63 - i3 >= 0) && (i4 >= 0) && (63 - i4 >= 0)))
//   { op_hcompute_ratio_stencil[d0 = 0, d1 = 0, d2 = 0, d3, d4] -> [0, 0, 2, 4 + d3, 4 + d4, 4] : 0 <= d3 <= 59 and 0 <= d4 <= 59 }
// Condition for op_hcompute_ratio_stencil(((-4 + i5 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (-4 + i3 >= 0) && (63 - i3 >= 0) && (-4 + i4 >= 0) && (63 - i4 >= 0)))

  /*
for (int c2 = 0; c2 <= 2; c2 += 1)
  for (int c3 = 0; c3 <= 63; c3 += 1)
    for (int c4 = 0; c4 <= 63; c4 += 1) {
      op_hcompute_hw_input_global_wrapper_stencil(0, 0, c2, c3, c4);
      if (c2 == 2) {
        op_hcompute_gray_stencil(0, 0, 0, c3, c4);
        if (c3 >= 4 && c4 >= 4) {
          op_hcompute_blur_unnormalized_stencil(0, 0, 0, c3 - 4, c4 - 4);
          op_hcompute_blur_unnormalized_stencil_1(0, 0, 0, c3 - 4, c4 - 4);
          op_hcompute_ratio_stencil(0, 0, 0, c3 - 4, c4 - 4);
          op_hcompute_hw_output_stencil(0, 0, 0, c3 - 4, c4 - 4);
        }
      }
    }

  */
	for (int c2 = 0; c2 <= 2; c2 += 1)
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    for (int c4 = 0; c4 <= 63; c4 += 1) {
	      op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, 0, c2, c3, c4);
	      if (c2 == 2) {
	        op_hcompute_gray_stencil(hw_input_global_wrapper_stencil /* buf name */, gray_stencil, 0, 0, 0, c3, c4);
	        if (c3 >= 4 && c4 >= 4) {
	          op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_clkwrk_dsa0, 0, 0, 0, c3 - 4, c4 - 4);
	          op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_clkwrk_dsa0 /* buf name */, gray_stencil /* buf name */, blur_unnormalized_stencil, 0, 0, 0, c3 - 4, c4 - 4);
	          op_hcompute_ratio_stencil(blur_unnormalized_stencil /* buf name */, gray_stencil /* buf name */, ratio_stencil, 0, 0, 0, c3 - 4, c4 - 4);
	          op_hcompute_hw_output_stencil(gray_stencil /* buf name */, ratio_stencil /* buf name */, hw_output_stencil, 0, 0, 0, c3 - 4, c4 - 4);
	        }
	      }
	    }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unsharp_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unsharp(hw_input_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, pad_root_to_hw_input_global_wrapper_s0_c = 0, hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil[hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_c <= 2 and 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_y_yi = 0, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 59 and 0 <= hw_output_s0_x_xi <= 59 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 3600;


extern "C" {

void unsharp_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
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

  unsharp_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unsharp_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unsharp(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

