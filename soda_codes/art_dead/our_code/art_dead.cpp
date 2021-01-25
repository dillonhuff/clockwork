#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h_merged_compute_units.h
#include "clockwork_standard_compute_units.h_merged_compute_units.h"

struct blurred_blur_17_to_blurred_load_to_blurred_to_gp_147_11_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurred_cache {
  // Reader addrs...
    // { load_to_blurred_to_gp_147[root = 0, blurred_ld6, blurred_ld5] -> blurred[blurred_ld5, blurred_ld6] : 0 <= blurred_ld6 <= 63 and 0 <= blurred_ld5 <= 63 }
  // # of banks: 1
  blurred_blur_17_to_blurred_load_to_blurred_to_gp_147_11_cache blurred_blur_17_to_blurred_load_to_blurred_to_gp_147_11;
};



inline void blurred_blur_17_write(hw_uint<32> & blurred_blur_17, blurred_cache& blurred, int root, int yb, int xb, int dynamic_address) {
  blurred.blurred_blur_17_to_blurred_load_to_blurred_to_gp_147_11.push(blurred_blur_17);
}

inline hw_uint<32>  blurred_load_to_blurred_to_gp_147_11_select(blurred_cache& blurred, int root, int blurred_ld6, int blurred_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_load_to_blurred_to_gp_147_11 read pattern: { load_to_blurred_to_gp_147[root = 0, blurred_ld6, blurred_ld5] -> blurred[blurred_ld5, blurred_ld6] : 0 <= blurred_ld6 <= 63 and 0 <= blurred_ld5 <= 63 }
  // Read schedule : { load_to_blurred_to_gp_147[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { blur[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_blurred_blur_17 = blurred.blurred_blur_17_to_blurred_load_to_blurred_to_gp_147_11.peek(/* one reader or all rams */ 0);
  return value_blurred_blur_17;
  return 0;
}

// # of bundles = 2
// blur_write
//	blurred_blur_17
inline void blurred_blur_write_bundle_write(hw_uint<32>& blur_write, blurred_cache& blurred, int root, int yb, int xb, int dynamic_address) {
	hw_uint<32>  blurred_blur_17_res = blur_write.extract<0, 31>();
	blurred_blur_17_write(blurred_blur_17_res, blurred, root, yb, xb, dynamic_address);
}

// load_to_blurred_to_gp_147_read
//	blurred_load_to_blurred_to_gp_147_11
inline hw_uint<32> blurred_load_to_blurred_to_gp_147_read_bundle_read(blurred_cache& blurred, int root, int blurred_ld6, int blurred_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_load_to_blurred_to_gp_147_11

	hw_uint<32> result;
	hw_uint<32>  blurred_load_to_blurred_to_gp_147_11_res = blurred_load_to_blurred_to_gp_147_11_select(blurred, root, blurred_ld6, blurred_ld5, dynamic_address);
	set_at<0, 32>(result, blurred_load_to_blurred_to_gp_147_11_res);
	return result;
}

struct blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_to_blurred_FIFO_buf16_diff_16_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurred_FIFO_buf16_cache {
  // Reader addrs...
    // { diff[root = 0, y, x] -> blurred_FIFO_buf16[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
  // # of banks: 1
  blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_to_blurred_FIFO_buf16_diff_16_cache blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_to_blurred_FIFO_buf16_diff_16;
};



inline void blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_write(hw_uint<32> & blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12, blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int blurred_to_gp_14_ld18, int blurred_to_gp_14_ld17, int dynamic_address) {
  blurred_FIFO_buf16.blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_to_blurred_FIFO_buf16_diff_16.push(blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12);
}

inline hw_uint<32>  blurred_FIFO_buf16_diff_16_select(blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_FIFO_buf16_diff_16 read pattern: { diff[root = 0, y, x] -> blurred_FIFO_buf16[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
  // Read schedule : { diff[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_blurred_FIFO_buf1619[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12 = blurred_FIFO_buf16.blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_to_blurred_FIFO_buf16_diff_16.peek(/* one reader or all rams */ 0);
  return value_blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12;
  return 0;
}

// # of bundles = 2
// diff_read
//	blurred_FIFO_buf16_diff_16
inline hw_uint<32> blurred_FIFO_buf16_diff_read_bundle_read(blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int y, int x, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_FIFO_buf16_diff_16

	hw_uint<32> result;
	hw_uint<32>  blurred_FIFO_buf16_diff_16_res = blurred_FIFO_buf16_diff_16_select(blurred_FIFO_buf16, root, y, x, dynamic_address);
	set_at<0, 32>(result, blurred_FIFO_buf16_diff_16_res);
	return result;
}

// load_to_blurred_FIFO_buf1619_write
//	blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12
inline void blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_write_bundle_write(hw_uint<32>& load_to_blurred_FIFO_buf1619_write, blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int blurred_to_gp_14_ld18, int blurred_to_gp_14_ld17, int dynamic_address) {
	hw_uint<32>  blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_res = load_to_blurred_FIFO_buf1619_write.extract<0, 31>();
	blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_write(blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_12_res, blurred_FIFO_buf16, root, blurred_to_gp_14_ld18, blurred_to_gp_14_ld17, dynamic_address);
}

struct gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_1811_5_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_21215_3_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gray_cache {
  // Reader addrs...
    // { load_to_gray_to_gp_1811[root = 0, gray_ld10, gray_ld9] -> gray[gray_ld9, gray_ld10] : 0 <= gray_ld10 <= 63 and 0 <= gray_ld9 <= 63 }
    // { load_to_gray_to_gp_21215[root = 0, gray_ld14, gray_ld13] -> gray[gray_ld13, gray_ld14] : 0 <= gray_ld14 <= 63 and 0 <= gray_ld13 <= 63 }
  // # of banks: 2
  gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_1811_5_cache gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_1811_5;
  gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_21215_3_cache gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_21215_3;
};



inline void gray_oc_load_in03_0_write(hw_uint<32> & gray_oc_load_in03_0, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
  gray.gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_1811_5.push(gray_oc_load_in03_0);
  gray.gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_21215_3.push(gray_oc_load_in03_0);
}

inline hw_uint<32>  gray_load_to_gray_to_gp_1811_5_select(gray_cache& gray, int root, int gray_ld10, int gray_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_load_to_gray_to_gp_1811_5 read pattern: { load_to_gray_to_gp_1811[root = 0, gray_ld10, gray_ld9] -> gray[gray_ld9, gray_ld10] : 0 <= gray_ld10 <= 63 and 0 <= gray_ld9 <= 63 }
  // Read schedule : { load_to_gray_to_gp_1811[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gray_oc_load_in03_0 = gray.gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_1811_5.peek(/* one reader or all rams */ 0);
  return value_gray_oc_load_in03_0;
  return 0;
}

inline hw_uint<32>  gray_load_to_gray_to_gp_21215_3_select(gray_cache& gray, int root, int gray_ld14, int gray_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_load_to_gray_to_gp_21215_3 read pattern: { load_to_gray_to_gp_21215[root = 0, gray_ld14, gray_ld13] -> gray[gray_ld13, gray_ld14] : 0 <= gray_ld14 <= 63 and 0 <= gray_ld13 <= 63 }
  // Read schedule : { load_to_gray_to_gp_21215[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gray_oc_load_in03_0 = gray.gray_oc_load_in03_0_to_gray_load_to_gray_to_gp_21215_3.peek(/* one reader or all rams */ 0);
  return value_gray_oc_load_in03_0;
  return 0;
}

// # of bundles = 3
// load_to_gray_to_gp_1811_read
//	gray_load_to_gray_to_gp_1811_5
inline hw_uint<32> gray_load_to_gray_to_gp_1811_read_bundle_read(gray_cache& gray, int root, int gray_ld10, int gray_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_load_to_gray_to_gp_1811_5

	hw_uint<32> result;
	hw_uint<32>  gray_load_to_gray_to_gp_1811_5_res = gray_load_to_gray_to_gp_1811_5_select(gray, root, gray_ld10, gray_ld9, dynamic_address);
	set_at<0, 32>(result, gray_load_to_gray_to_gp_1811_5_res);
	return result;
}

// load_to_gray_to_gp_21215_read
//	gray_load_to_gray_to_gp_21215_3
inline hw_uint<32> gray_load_to_gray_to_gp_21215_read_bundle_read(gray_cache& gray, int root, int gray_ld14, int gray_ld13, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_load_to_gray_to_gp_21215_3

	hw_uint<32> result;
	hw_uint<32>  gray_load_to_gray_to_gp_21215_3_res = gray_load_to_gray_to_gp_21215_3_select(gray, root, gray_ld14, gray_ld13, dynamic_address);
	set_at<0, 32>(result, gray_load_to_gray_to_gp_21215_3_res);
	return result;
}

// oc_load_in03_write
//	gray_oc_load_in03_0
inline void gray_oc_load_in03_write_bundle_write(hw_uint<32>& oc_load_in03_write, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
	hw_uint<32>  gray_oc_load_in03_0_res = oc_load_in03_write.extract<0, 31>();
	gray_oc_load_in03_0_write(gray_oc_load_in03_0_res, gray, root, oc_load_in01, oc_load_in02, dynamic_address);
}

struct gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_to_gray_FIFO_buf20_diff_15_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gray_FIFO_buf20_cache {
  // Reader addrs...
    // { diff[root = 0, y, x] -> gray_FIFO_buf20[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
  // # of banks: 1
  gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_to_gray_FIFO_buf20_diff_15_cache gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_to_gray_FIFO_buf20_diff_15;
};



inline void gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_write(hw_uint<32> & gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8, gray_FIFO_buf20_cache& gray_FIFO_buf20, int root, int gray_to_gp_18_ld22, int gray_to_gp_18_ld21, int dynamic_address) {
  gray_FIFO_buf20.gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_to_gray_FIFO_buf20_diff_15.push(gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8);
}

inline hw_uint<32>  gray_FIFO_buf20_diff_15_select(gray_FIFO_buf20_cache& gray_FIFO_buf20, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf20_diff_15 read pattern: { diff[root = 0, y, x] -> gray_FIFO_buf20[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
  // Read schedule : { diff[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_FIFO_buf2023[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8 = gray_FIFO_buf20.gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_to_gray_FIFO_buf20_diff_15.peek(/* one reader or all rams */ 0);
  return value_gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8;
  return 0;
}

// # of bundles = 2
// diff_read
//	gray_FIFO_buf20_diff_15
inline hw_uint<32> gray_FIFO_buf20_diff_read_bundle_read(gray_FIFO_buf20_cache& gray_FIFO_buf20, int root, int y, int x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf20_diff_15

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf20_diff_15_res = gray_FIFO_buf20_diff_15_select(gray_FIFO_buf20, root, y, x, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf20_diff_15_res);
	return result;
}

// load_to_gray_FIFO_buf2023_write
//	gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8
inline void gray_FIFO_buf20_load_to_gray_FIFO_buf2023_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf2023_write, gray_FIFO_buf20_cache& gray_FIFO_buf20, int root, int gray_to_gp_18_ld22, int gray_to_gp_18_ld21, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_res = load_to_gray_FIFO_buf2023_write.extract<0, 31>();
	gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_write(gray_FIFO_buf20_load_to_gray_FIFO_buf2023_8_res, gray_FIFO_buf20, root, gray_to_gp_18_ld22, gray_to_gp_18_ld21, dynamic_address);
}

struct gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_to_gray_FIFO_buf24_blur_18_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gray_FIFO_buf24_cache {
  // Reader addrs...
    // { blur[root = 0, yb, xb] -> gray_FIFO_buf24[xb, yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // # of banks: 1
  gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_to_gray_FIFO_buf24_blur_18_cache gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_to_gray_FIFO_buf24_blur_18;
};



inline void gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_write(hw_uint<32> & gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6, gray_FIFO_buf24_cache& gray_FIFO_buf24, int root, int gray_to_gp_212_ld26, int gray_to_gp_212_ld25, int dynamic_address) {
  gray_FIFO_buf24.gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_to_gray_FIFO_buf24_blur_18.push(gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6);
}

inline hw_uint<32>  gray_FIFO_buf24_blur_18_select(gray_FIFO_buf24_cache& gray_FIFO_buf24, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf24_blur_18 read pattern: { blur[root = 0, yb, xb] -> gray_FIFO_buf24[xb, yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_FIFO_buf2427[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6 = gray_FIFO_buf24.gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_to_gray_FIFO_buf24_blur_18.peek(/* one reader or all rams */ 0);
  return value_gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6;
  return 0;
}

// # of bundles = 2
// blur_read
//	gray_FIFO_buf24_blur_18
inline hw_uint<32> gray_FIFO_buf24_blur_read_bundle_read(gray_FIFO_buf24_cache& gray_FIFO_buf24, int root, int yb, int xb, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf24_blur_18

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf24_blur_18_res = gray_FIFO_buf24_blur_18_select(gray_FIFO_buf24, root, yb, xb, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf24_blur_18_res);
	return result;
}

// load_to_gray_FIFO_buf2427_write
//	gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6
inline void gray_FIFO_buf24_load_to_gray_FIFO_buf2427_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf2427_write, gray_FIFO_buf24_cache& gray_FIFO_buf24, int root, int gray_to_gp_212_ld26, int gray_to_gp_212_ld25, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_res = load_to_gray_FIFO_buf2427_write.extract<0, 31>();
	gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_write(gray_FIFO_buf24_load_to_gray_FIFO_buf2427_6_res, gray_FIFO_buf24, root, gray_to_gp_212_ld26, gray_to_gp_212_ld25, dynamic_address);
}

// Operation logic
inline void oc_load_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, gray_cache& gray, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_oc_load_in02_p_0_c___oc_load_in01_p_0_value = in.read();
	// Produce: gray
	gray_oc_load_in03_write_bundle_write(/* arg names */in_oc_load_in02_p_0_c___oc_load_in01_p_0_value, gray, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_to_gp_21215(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_212, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld13_c__gray_ld14_value = gray_load_to_gray_to_gp_21215_read_bundle_read(gray/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_212
	gray_to_gp_212.write(gray_gray_ld13_c__gray_ld14_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_to_gp_1811(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_18, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld9_c__gray_ld10_value = gray_load_to_gray_to_gp_1811_read_bundle_read(gray/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_18
	gray_to_gp_18.write(gray_gray_ld9_c__gray_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_ld10_gray_ld14_oc_load_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_18, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_212) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_ld10_gray_ld14_oc_load_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_cache gray;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gray_to_gp_1811[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gray_to_gp_21215[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for oc_load_in03(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { load_to_gray_to_gp_1811[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gray_to_gp_1811(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { load_to_gray_to_gp_21215[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gray_to_gp_21215(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 63 and 0 <= i2 <= 63 and 0 <= i3 <= 1; [0, i1, i2, 3] : 0 <= i1 <= 63 and 0 <= i2 <= 63 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 63; i1++) {
	    for (int i2 = 0; i2 <= 63; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          oc_load_in03(in /* buf name */, gray, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_to_gp_21215(gray /* buf name */, gray_to_gp_212, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_to_gp_1811(gray /* buf name */, gray_to_gp_18, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_blurred_FIFO_buf1619(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_14, blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurred_to_gp_14
	auto blurred_to_gp_14_blurred_to_gp_14_ld17_c__blurred_to_gp_14_ld18_value = blurred_to_gp_14.read();
	// Produce: blurred_FIFO_buf16
	blurred_FIFO_buf16_load_to_blurred_FIFO_buf1619_write_bundle_write(/* arg names */blurred_to_gp_14_blurred_to_gp_14_ld17_c__blurred_to_gp_14_ld18_value, blurred_FIFO_buf16, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_FIFO_buf2023(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_18, gray_FIFO_buf20_cache& gray_FIFO_buf20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_to_gp_18
	auto gray_to_gp_18_gray_to_gp_18_ld21_c__gray_to_gp_18_ld22_value = gray_to_gp_18.read();
	// Produce: gray_FIFO_buf20
	gray_FIFO_buf20_load_to_gray_FIFO_buf2023_write_bundle_write(/* arg names */gray_to_gp_18_gray_to_gp_18_ld21_c__gray_to_gp_18_ld22_value, gray_FIFO_buf20, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff(gray_FIFO_buf20_cache& gray_FIFO_buf20, blurred_FIFO_buf16_cache& blurred_FIFO_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf20
	auto gray_FIFO_buf20_x_p_0_c___y_p_0_value = gray_FIFO_buf20_diff_read_bundle_read(gray_FIFO_buf20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: blurred_FIFO_buf16
	auto blurred_FIFO_buf16_x_p_0_c___y_p_0_value = blurred_FIFO_buf16_diff_read_bundle_read(blurred_FIFO_buf16/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff(gray_FIFO_buf20_x_p_0_c___y_p_0_value, blurred_FIFO_buf16_x_p_0_c___y_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurred_to_gp_14_ld18_gray_to_gp_18_ld22_y_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_14, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_18, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurred_to_gp_14_ld18_gray_to_gp_18_ld22_y__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_FIFO_buf16_cache blurred_FIFO_buf16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf20_cache gray_FIFO_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_FIFO_buf2023[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_blurred_FIFO_buf1619[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 63 and 0 <= d2 <= 63; diff[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { load_to_gray_FIFO_buf2023[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gray_FIFO_buf2023(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { load_to_blurred_FIFO_buf1619[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_blurred_FIFO_buf1619(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { diff[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for diff(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 63 and 0 <= i2 <= 63 and 7 <= i3 <= 8; [0, i1, i2, 5] : 0 <= i1 <= 63 and 0 <= i2 <= 63 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 63; i1++) {
	    for (int i2 = 0; i2 <= 63; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_FIFO_buf2023(gray_to_gp_18 /* buf name */, gray_FIFO_buf20, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurred_FIFO_buf1619(blurred_to_gp_14 /* buf name */, blurred_FIFO_buf16, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          diff(gray_FIFO_buf20 /* buf name */, blurred_FIFO_buf16 /* buf name */, out, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gray_FIFO_buf2427(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_212, gray_FIFO_buf24_cache& gray_FIFO_buf24, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_to_gp_212
	auto gray_to_gp_212_gray_to_gp_212_ld25_c__gray_to_gp_212_ld26_value = gray_to_gp_212.read();
	// Produce: gray_FIFO_buf24
	gray_FIFO_buf24_load_to_gray_FIFO_buf2427_write_bundle_write(/* arg names */gray_to_gp_212_gray_to_gp_212_ld25_c__gray_to_gp_212_ld26_value, gray_FIFO_buf24, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur(gray_FIFO_buf24_cache& gray_FIFO_buf24, blurred_cache& blurred, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf24
	auto gray_FIFO_buf24_xb_p_0_c___yb_p_0_value = gray_FIFO_buf24_blur_read_bundle_read(gray_FIFO_buf24/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3_float_one(gray_FIFO_buf24_xb_p_0_c___yb_p_0_value);
	// Produce: blurred
	blurred_blur_write_bundle_write(/* arg names */compute_result, blurred, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurred_to_gp_147(blurred_cache& blurred, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_14, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurred
	auto blurred_blurred_ld5_c__blurred_ld6_value = blurred_load_to_blurred_to_gp_147_read_bundle_read(blurred/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurred_to_gp_14
	blurred_to_gp_14.write(blurred_blurred_ld5_c__blurred_ld6_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurred_ld6_gray_to_gp_212_ld26_yb_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_212, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_14) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurred_ld6_gray_to_gp_212_ld26_yb__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_cache blurred;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf24_cache gray_FIFO_buf24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_FIFO_buf2427[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 63 and 0 <= d2 <= 63; blur[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_blurred_to_gp_147[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { load_to_gray_FIFO_buf2427[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gray_FIFO_buf2427(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { blur[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for blur(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { load_to_blurred_to_gp_147[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_blurred_to_gp_147(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((63 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 6] : 0 <= i1 <= 63 and 0 <= i2 <= 63; [0, i1, i2, 4] : 0 <= i1 <= 63 and 0 <= i2 <= 63; [0, i1, i2, 2] : 0 <= i1 <= 63 and 0 <= i2 <= 63 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 63; i1++) {
	    for (int i2 = 0; i2 <= 63; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_FIFO_buf2427(gray_to_gp_212 /* buf name */, gray_FIFO_buf24, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          blur(gray_FIFO_buf24 /* buf name */, blurred, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurred_to_gp_147(blurred /* buf name */, blurred_to_gp_14, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void art_dead(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("art_dead_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<32> > gray_to_gp_18("gray_to_gp_18");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_18.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gray_to_gp_212("gray_to_gp_212");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_212.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > blurred_to_gp_14("blurred_to_gp_14");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurred_to_gp_14.values depth=1
#endif //__VIVADO_SYNTH__


  Extracted_gray_ld10_gray_ld14_oc_load_in01_(in, gray_to_gp_18, gray_to_gp_212);
  Extracted_blurred_ld6_gray_to_gp_212_ld26_yb_(gray_to_gp_212, blurred_to_gp_14);
  Extracted_blurred_to_gp_14_ld18_gray_to_gp_18_ld22_y_(blurred_to_gp_14, gray_to_gp_18, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void art_dead_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    art_dead(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> in[oc_load_in02, oc_load_in01] : 0 <= oc_load_in01 <= 63 and 0 <= oc_load_in02 <= 63 }
const int oc_load_in03_read_pipe0_num_transfers = 4096;
  // { diff[root = 0, y, x] -> out[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
const int diff_write_pipe0_num_transfers = 4096;


extern "C" {

void art_dead_accel(hw_uint<32>* oc_load_in03_read_pipe0, hw_uint<32>* diff_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = oc_load_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = diff_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = oc_load_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = diff_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > oc_load_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > diff_write_pipe0_channel;

  burst_read<32>(oc_load_in03_read_pipe0, oc_load_in03_read_pipe0_channel, oc_load_in03_read_pipe0_num_transfers*size);

  art_dead_wrapper(oc_load_in03_read_pipe0_channel, diff_write_pipe0_channel, size);

  burst_write<32>(diff_write_pipe0, diff_write_pipe0_channel, diff_write_pipe0_num_transfers*size);
}

}
extern "C" {

void art_dead_rdai(HWStream<hw_uint<32> >& oc_load_in03_read_pipe0, HWStream<hw_uint<32> >&  diff_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = oc_load_in03_read_pipe0
#pragma HLS INTERFACE axis register port = diff_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  art_dead(oc_load_in03_read_pipe0, diff_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

