#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "clockwork_standard_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurred_blur_35_to_blurred_load_to_blurred_to_gp_41619_29_cache {
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
    // { load_to_blurred_to_gp_41619[root = 0, blurred_ld18, blurred_ld17] -> blurred[blurred_ld17, blurred_ld18] : 0 <= blurred_ld18 <= 63 and 0 <= blurred_ld17 <= 63 }
  // # of banks: 1
  blurred_blur_35_to_blurred_load_to_blurred_to_gp_41619_29_cache blurred_blur_35_to_blurred_load_to_blurred_to_gp_41619_29;
};



inline void blurred_blur_35_write(hw_uint<32> & blurred_blur_35, blurred_cache& blurred, int root, int yb, int xb, int dynamic_address) {
  blurred.blurred_blur_35_to_blurred_load_to_blurred_to_gp_41619_29.push(blurred_blur_35);
}

inline hw_uint<32>  blurred_load_to_blurred_to_gp_41619_29_select(blurred_cache& blurred, int root, int blurred_ld18, int blurred_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_load_to_blurred_to_gp_41619_29 read pattern: { load_to_blurred_to_gp_41619[root = 0, blurred_ld18, blurred_ld17] -> blurred[blurred_ld17, blurred_ld18] : 0 <= blurred_ld18 <= 63 and 0 <= blurred_ld17 <= 63 }
  // Read schedule : { load_to_blurred_to_gp_41619[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_blurred_blur_35 = blurred.blurred_blur_35_to_blurred_load_to_blurred_to_gp_41619_29.peek(/* one reader or all rams */ 0);
  return value_blurred_blur_35;
  return 0;
}

// # of bundles = 2
// blur_write
//	blurred_blur_35
inline void blurred_blur_write_bundle_write(hw_uint<32>& blur_write, blurred_cache& blurred, int root, int yb, int xb, int dynamic_address) {
	hw_uint<32>  blurred_blur_35_res = blur_write.extract<0, 31>();
	blurred_blur_35_write(blurred_blur_35_res, blurred, root, yb, xb, dynamic_address);
}

// load_to_blurred_to_gp_41619_read
//	blurred_load_to_blurred_to_gp_41619_29
inline hw_uint<32> blurred_load_to_blurred_to_gp_41619_read_bundle_read(blurred_cache& blurred, int root, int blurred_ld18, int blurred_ld17, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_load_to_blurred_to_gp_41619_29

	hw_uint<32> result;
	hw_uint<32>  blurred_load_to_blurred_to_gp_41619_29_res = blurred_load_to_blurred_to_gp_41619_29_select(blurred, root, blurred_ld18, blurred_ld17, dynamic_address);
	set_at<0, 32>(result, blurred_load_to_blurred_to_gp_41619_29_res);
	return result;
}

struct blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_to_blurred_FIFO_buf20_diff_34_cache {
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

struct blurred_FIFO_buf20_cache {
  // Reader addrs...
    // { diff[root = 0, y, x] -> blurred_FIFO_buf20[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
  // # of banks: 1
  blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_to_blurred_FIFO_buf20_diff_34_cache blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_to_blurred_FIFO_buf20_diff_34;
};



inline void blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_write(hw_uint<32> & blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30, blurred_FIFO_buf20_cache& blurred_FIFO_buf20, int root, int blurred_to_gp_416_ld22, int blurred_to_gp_416_ld21, int dynamic_address) {
  blurred_FIFO_buf20.blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_to_blurred_FIFO_buf20_diff_34.push(blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30);
}

inline hw_uint<32>  blurred_FIFO_buf20_diff_34_select(blurred_FIFO_buf20_cache& blurred_FIFO_buf20, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_FIFO_buf20_diff_34 read pattern: { diff[root = 0, y, x] -> blurred_FIFO_buf20[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
  // Read schedule : { diff[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 17] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_blurred_FIFO_buf2023[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 16] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30 = blurred_FIFO_buf20.blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_to_blurred_FIFO_buf20_diff_34.peek(/* one reader or all rams */ 0);
  return value_blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30;
  return 0;
}

// # of bundles = 2
// diff_read
//	blurred_FIFO_buf20_diff_34
inline hw_uint<32> blurred_FIFO_buf20_diff_read_bundle_read(blurred_FIFO_buf20_cache& blurred_FIFO_buf20, int root, int y, int x, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_FIFO_buf20_diff_34

	hw_uint<32> result;
	hw_uint<32>  blurred_FIFO_buf20_diff_34_res = blurred_FIFO_buf20_diff_34_select(blurred_FIFO_buf20, root, y, x, dynamic_address);
	set_at<0, 32>(result, blurred_FIFO_buf20_diff_34_res);
	return result;
}

// load_to_blurred_FIFO_buf2023_write
//	blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30
inline void blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_write_bundle_write(hw_uint<32>& load_to_blurred_FIFO_buf2023_write, blurred_FIFO_buf20_cache& blurred_FIFO_buf20, int root, int blurred_to_gp_416_ld22, int blurred_to_gp_416_ld21, int dynamic_address) {
	hw_uint<32>  blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_res = load_to_blurred_FIFO_buf2023_write.extract<0, 31>();
	blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_write(blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_30_res, blurred_FIFO_buf20, root, blurred_to_gp_416_ld22, blurred_to_gp_416_ld21, dynamic_address);
}

struct gray_oc_load_in03_6_merged_banks_2_cache {
	// RAM Box: {[0, 65], [0, 65]}
	// Capacity: 135
	// # of read delays: 2
  // 0, 134
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 133> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_134() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct gray_cache {
  // Reader addrs...
    // { load_to_gray_to_gp_12427[root = 0, gray_ld26, gray_ld25] -> gray[gray_ld25, gray_ld26] : 0 <= gray_ld26 <= 63 and 0 <= gray_ld25 <= 63 }
    // { load_to_gray_to_gp_23235[root = 0, gray_ld34, gray_ld33] -> gray[gray_ld33, gray_ld34] : 0 <= gray_ld34 <= 65 and 0 <= gray_ld33 <= 65 }
  // # of banks: 1
  gray_oc_load_in03_6_merged_banks_2_cache gray_oc_load_in03_6_merged_banks_2;
};



inline void gray_oc_load_in03_6_write(hw_uint<32> & gray_oc_load_in03_6, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
  gray.gray_oc_load_in03_6_merged_banks_2.push(gray_oc_load_in03_6);
}

inline hw_uint<32>  gray_load_to_gray_to_gp_12427_11_select(gray_cache& gray, int root, int gray_ld26, int gray_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_load_to_gray_to_gp_12427_11 read pattern: { load_to_gray_to_gp_12427[root = 0, gray_ld26, gray_ld25] -> gray[gray_ld25, gray_ld26] : 0 <= gray_ld26 <= 63 and 0 <= gray_ld25 <= 63 }
  // Read schedule : { load_to_gray_to_gp_12427[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_oc_load_in03_6 = gray.gray_oc_load_in03_6_merged_banks_2.peek_134();
  return value_gray_oc_load_in03_6;
  return 0;
}

inline hw_uint<32>  gray_load_to_gray_to_gp_23235_9_select(gray_cache& gray, int root, int gray_ld34, int gray_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_load_to_gray_to_gp_23235_9 read pattern: { load_to_gray_to_gp_23235[root = 0, gray_ld34, gray_ld33] -> gray[gray_ld33, gray_ld34] : 0 <= gray_ld34 <= 65 and 0 <= gray_ld33 <= 65 }
  // Read schedule : { load_to_gray_to_gp_23235[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  // Write schedule: { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_oc_load_in03_6 = gray.gray_oc_load_in03_6_merged_banks_2.peek_0();
  return value_gray_oc_load_in03_6;
  return 0;
}

// # of bundles = 3
// load_to_gray_to_gp_12427_read
//	gray_load_to_gray_to_gp_12427_11
inline hw_uint<32> gray_load_to_gray_to_gp_12427_read_bundle_read(gray_cache& gray, int root, int gray_ld26, int gray_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_load_to_gray_to_gp_12427_11

	hw_uint<32> result;
	hw_uint<32>  gray_load_to_gray_to_gp_12427_11_res = gray_load_to_gray_to_gp_12427_11_select(gray, root, gray_ld26, gray_ld25, dynamic_address);
	set_at<0, 32>(result, gray_load_to_gray_to_gp_12427_11_res);
	return result;
}

// load_to_gray_to_gp_23235_read
//	gray_load_to_gray_to_gp_23235_9
inline hw_uint<32> gray_load_to_gray_to_gp_23235_read_bundle_read(gray_cache& gray, int root, int gray_ld34, int gray_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_load_to_gray_to_gp_23235_9

	hw_uint<32> result;
	hw_uint<32>  gray_load_to_gray_to_gp_23235_9_res = gray_load_to_gray_to_gp_23235_9_select(gray, root, gray_ld34, gray_ld33, dynamic_address);
	set_at<0, 32>(result, gray_load_to_gray_to_gp_23235_9_res);
	return result;
}

// oc_load_in03_write
//	gray_oc_load_in03_6
inline void gray_oc_load_in03_write_bundle_write(hw_uint<32>& oc_load_in03_write, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
	hw_uint<32>  gray_oc_load_in03_6_res = oc_load_in03_write.extract<0, 31>();
	gray_oc_load_in03_6_write(gray_oc_load_in03_6_res, gray, root, oc_load_in01, oc_load_in02, dynamic_address);
}

struct gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_to_gray_FIFO_buf28_pw_math_gray1215_5_cache {
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

struct gray_FIFO_buf28_cache {
  // Reader addrs...
    // { pw_math_gray1215[root = 0, pw_math_gray1213, pw_math_gray1214] -> gray_FIFO_buf28[pw_math_gray1214, pw_math_gray1213] : 0 <= pw_math_gray1213 <= 63 and 0 <= pw_math_gray1214 <= 63 }
  // # of banks: 1
  gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_to_gray_FIFO_buf28_pw_math_gray1215_5_cache gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_to_gray_FIFO_buf28_pw_math_gray1215_5;
};



inline void gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_write(hw_uint<32> & gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26, gray_FIFO_buf28_cache& gray_FIFO_buf28, int root, int gray_to_gp_124_ld30, int gray_to_gp_124_ld29, int dynamic_address) {
  gray_FIFO_buf28.gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_to_gray_FIFO_buf28_pw_math_gray1215_5.push(gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26);
}

inline hw_uint<32>  gray_FIFO_buf28_pw_math_gray1215_5_select(gray_FIFO_buf28_cache& gray_FIFO_buf28, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf28_pw_math_gray1215_5 read pattern: { pw_math_gray1215[root = 0, pw_math_gray1213, pw_math_gray1214] -> gray_FIFO_buf28[pw_math_gray1214, pw_math_gray1213] : 0 <= pw_math_gray1213 <= 63 and 0 <= pw_math_gray1214 <= 63 }
  // Read schedule : { pw_math_gray1215[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_FIFO_buf2831[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26 = gray_FIFO_buf28.gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_to_gray_FIFO_buf28_pw_math_gray1215_5.peek(/* one reader or all rams */ 0);
  return value_gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26;
  return 0;
}

// # of bundles = 2
// load_to_gray_FIFO_buf2831_write
//	gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26
inline void gray_FIFO_buf28_load_to_gray_FIFO_buf2831_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf2831_write, gray_FIFO_buf28_cache& gray_FIFO_buf28, int root, int gray_to_gp_124_ld30, int gray_to_gp_124_ld29, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_res = load_to_gray_FIFO_buf2831_write.extract<0, 31>();
	gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_write(gray_FIFO_buf28_load_to_gray_FIFO_buf2831_26_res, gray_FIFO_buf28, root, gray_to_gp_124_ld30, gray_to_gp_124_ld29, dynamic_address);
}

// pw_math_gray1215_read
//	gray_FIFO_buf28_pw_math_gray1215_5
inline hw_uint<32> gray_FIFO_buf28_pw_math_gray1215_read_bundle_read(gray_FIFO_buf28_cache& gray_FIFO_buf28, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf28_pw_math_gray1215_5

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf28_pw_math_gray1215_5_res = gray_FIFO_buf28_pw_math_gray1215_5_select(gray_FIFO_buf28, root, pw_math_gray1213, pw_math_gray1214, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf28_pw_math_gray1215_5_res);
	return result;
}

struct gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_to_gray_FIFO_buf36_pw_math_gray47_3_cache {
	// RAM Box: {[0, 65], [0, 65]}
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

struct gray_FIFO_buf36_cache {
  // Reader addrs...
    // { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> gray_FIFO_buf36[pw_math_gray46, pw_math_gray45] : 0 <= pw_math_gray45 <= 65 and 0 <= pw_math_gray46 <= 65 }
  // # of banks: 1
  gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_to_gray_FIFO_buf36_pw_math_gray47_3_cache gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_to_gray_FIFO_buf36_pw_math_gray47_3;
};



inline void gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_write(hw_uint<32> & gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24, gray_FIFO_buf36_cache& gray_FIFO_buf36, int root, int gray_to_gp_232_ld38, int gray_to_gp_232_ld37, int dynamic_address) {
  gray_FIFO_buf36.gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_to_gray_FIFO_buf36_pw_math_gray47_3.push(gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24);
}

inline hw_uint<32>  gray_FIFO_buf36_pw_math_gray47_3_select(gray_FIFO_buf36_cache& gray_FIFO_buf36, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf36_pw_math_gray47_3 read pattern: { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> gray_FIFO_buf36[pw_math_gray46, pw_math_gray45] : 0 <= pw_math_gray45 <= 65 and 0 <= pw_math_gray46 <= 65 }
  // Read schedule : { pw_math_gray47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  // Write schedule: { load_to_gray_FIFO_buf3639[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24 = gray_FIFO_buf36.gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_to_gray_FIFO_buf36_pw_math_gray47_3.peek(/* one reader or all rams */ 0);
  return value_gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24;
  return 0;
}

// # of bundles = 2
// load_to_gray_FIFO_buf3639_write
//	gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24
inline void gray_FIFO_buf36_load_to_gray_FIFO_buf3639_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf3639_write, gray_FIFO_buf36_cache& gray_FIFO_buf36, int root, int gray_to_gp_232_ld38, int gray_to_gp_232_ld37, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_res = load_to_gray_FIFO_buf3639_write.extract<0, 31>();
	gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_write(gray_FIFO_buf36_load_to_gray_FIFO_buf3639_24_res, gray_FIFO_buf36, root, gray_to_gp_232_ld38, gray_to_gp_232_ld37, dynamic_address);
}

// pw_math_gray47_read
//	gray_FIFO_buf36_pw_math_gray47_3
inline hw_uint<32> gray_FIFO_buf36_pw_math_gray47_read_bundle_read(gray_FIFO_buf36_cache& gray_FIFO_buf36, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf36_pw_math_gray47_3

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf36_pw_math_gray47_3_res = gray_FIFO_buf36_pw_math_gray47_3_select(gray_FIFO_buf36, root, pw_math_gray45, pw_math_gray46, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf36_pw_math_gray47_3_res);
	return result;
}

struct gray_blur_pw_math_gray47_2_to_gray_blur_load_to_gray_blur_to_gp_34043_17_cache {
	// RAM Box: {[0, 65], [0, 65]}
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

struct gray_blur_cache {
  // Reader addrs...
    // { load_to_gray_blur_to_gp_34043[root = 0, gray_blur_ld42, gray_blur_ld41] -> gray_blur[gray_blur_ld41, gray_blur_ld42] : 0 <= gray_blur_ld42 <= 65 and 0 <= gray_blur_ld41 <= 65 }
  // # of banks: 1
  gray_blur_pw_math_gray47_2_to_gray_blur_load_to_gray_blur_to_gp_34043_17_cache gray_blur_pw_math_gray47_2_to_gray_blur_load_to_gray_blur_to_gp_34043_17;
};



inline void gray_blur_pw_math_gray47_2_write(hw_uint<32> & gray_blur_pw_math_gray47_2, gray_blur_cache& gray_blur, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
  gray_blur.gray_blur_pw_math_gray47_2_to_gray_blur_load_to_gray_blur_to_gp_34043_17.push(gray_blur_pw_math_gray47_2);
}

inline hw_uint<32>  gray_blur_load_to_gray_blur_to_gp_34043_17_select(gray_blur_cache& gray_blur, int root, int gray_blur_ld42, int gray_blur_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_load_to_gray_blur_to_gp_34043_17 read pattern: { load_to_gray_blur_to_gp_34043[root = 0, gray_blur_ld42, gray_blur_ld41] -> gray_blur[gray_blur_ld41, gray_blur_ld42] : 0 <= gray_blur_ld42 <= 65 and 0 <= gray_blur_ld41 <= 65 }
  // Read schedule : { load_to_gray_blur_to_gp_34043[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  // Write schedule: { pw_math_gray47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_pw_math_gray47_2 = gray_blur.gray_blur_pw_math_gray47_2_to_gray_blur_load_to_gray_blur_to_gp_34043_17.peek(/* one reader or all rams */ 0);
  return value_gray_blur_pw_math_gray47_2;
  return 0;
}

// # of bundles = 2
// load_to_gray_blur_to_gp_34043_read
//	gray_blur_load_to_gray_blur_to_gp_34043_17
inline hw_uint<32> gray_blur_load_to_gray_blur_to_gp_34043_read_bundle_read(gray_blur_cache& gray_blur, int root, int gray_blur_ld42, int gray_blur_ld41, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_load_to_gray_blur_to_gp_34043_17

	hw_uint<32> result;
	hw_uint<32>  gray_blur_load_to_gray_blur_to_gp_34043_17_res = gray_blur_load_to_gray_blur_to_gp_34043_17_select(gray_blur, root, gray_blur_ld42, gray_blur_ld41, dynamic_address);
	set_at<0, 32>(result, gray_blur_load_to_gray_blur_to_gp_34043_17_res);
	return result;
}

// pw_math_gray47_write
//	gray_blur_pw_math_gray47_2
inline void gray_blur_pw_math_gray47_write_bundle_write(hw_uint<32>& pw_math_gray47_write, gray_blur_cache& gray_blur, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
	hw_uint<32>  gray_blur_pw_math_gray47_2_res = pw_math_gray47_write.extract<0, 31>();
	gray_blur_pw_math_gray47_2_write(gray_blur_pw_math_gray47_2_res, gray_blur, root, pw_math_gray45, pw_math_gray46, dynamic_address);
}

struct gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_to_gray_blur_FIFO_buf44_pw_math_gray_blur811_1_cache {
	// RAM Box: {[0, 65], [0, 65]}
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

struct gray_blur_FIFO_buf44_cache {
  // Reader addrs...
    // { pw_math_gray_blur811[root = 0, pw_math_gray_blur89, pw_math_gray_blur810] -> gray_blur_FIFO_buf44[pw_math_gray_blur810, pw_math_gray_blur89] : 0 <= pw_math_gray_blur89 <= 65 and 0 <= pw_math_gray_blur810 <= 65 }
  // # of banks: 1
  gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_to_gray_blur_FIFO_buf44_pw_math_gray_blur811_1_cache gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_to_gray_blur_FIFO_buf44_pw_math_gray_blur811_1;
};



inline void gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_write(hw_uint<32> & gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22, gray_blur_FIFO_buf44_cache& gray_blur_FIFO_buf44, int root, int gray_blur_to_gp_340_ld46, int gray_blur_to_gp_340_ld45, int dynamic_address) {
  gray_blur_FIFO_buf44.gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_to_gray_blur_FIFO_buf44_pw_math_gray_blur811_1.push(gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22);
}

inline hw_uint<32>  gray_blur_FIFO_buf44_pw_math_gray_blur811_1_select(gray_blur_FIFO_buf44_cache& gray_blur_FIFO_buf44, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_FIFO_buf44_pw_math_gray_blur811_1 read pattern: { pw_math_gray_blur811[root = 0, pw_math_gray_blur89, pw_math_gray_blur810] -> gray_blur_FIFO_buf44[pw_math_gray_blur810, pw_math_gray_blur89] : 0 <= pw_math_gray_blur89 <= 65 and 0 <= pw_math_gray_blur810 <= 65 }
  // Read schedule : { pw_math_gray_blur811[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  // Write schedule: { load_to_gray_blur_FIFO_buf4447[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22 = gray_blur_FIFO_buf44.gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_to_gray_blur_FIFO_buf44_pw_math_gray_blur811_1.peek(/* one reader or all rams */ 0);
  return value_gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22;
  return 0;
}

// # of bundles = 2
// load_to_gray_blur_FIFO_buf4447_write
//	gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22
inline void gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_write_bundle_write(hw_uint<32>& load_to_gray_blur_FIFO_buf4447_write, gray_blur_FIFO_buf44_cache& gray_blur_FIFO_buf44, int root, int gray_blur_to_gp_340_ld46, int gray_blur_to_gp_340_ld45, int dynamic_address) {
	hw_uint<32>  gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_res = load_to_gray_blur_FIFO_buf4447_write.extract<0, 31>();
	gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_write(gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_22_res, gray_blur_FIFO_buf44, root, gray_blur_to_gp_340_ld46, gray_blur_to_gp_340_ld45, dynamic_address);
}

// pw_math_gray_blur811_read
//	gray_blur_FIFO_buf44_pw_math_gray_blur811_1
inline hw_uint<32> gray_blur_FIFO_buf44_pw_math_gray_blur811_read_bundle_read(gray_blur_FIFO_buf44_cache& gray_blur_FIFO_buf44, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_FIFO_buf44_pw_math_gray_blur811_1

	hw_uint<32> result;
	hw_uint<32>  gray_blur_FIFO_buf44_pw_math_gray_blur811_1_res = gray_blur_FIFO_buf44_pw_math_gray_blur811_1_select(gray_blur_FIFO_buf44, root, pw_math_gray_blur89, pw_math_gray_blur810, dynamic_address);
	set_at<0, 32>(result, gray_blur_FIFO_buf44_pw_math_gray_blur811_1_res);
	return result;
}

struct gray_blur_cache_pw_math_gray_blur811_0_to_gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19_cache {
	// RAM Box: {[0, 65], [0, 65]}
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

struct gray_blur_cache_cache {
  // Reader addrs...
    // { load_to_gray_blur_cache_to_gp_54851[root = 0, gray_blur_cache_ld50, gray_blur_cache_ld49] -> gray_blur_cache[gray_blur_cache_ld49, gray_blur_cache_ld50] : 0 <= gray_blur_cache_ld50 <= 65 and 0 <= gray_blur_cache_ld49 <= 65 }
  // # of banks: 1
  gray_blur_cache_pw_math_gray_blur811_0_to_gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19_cache gray_blur_cache_pw_math_gray_blur811_0_to_gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19;
};



inline void gray_blur_cache_pw_math_gray_blur811_0_write(hw_uint<32> & gray_blur_cache_pw_math_gray_blur811_0, gray_blur_cache_cache& gray_blur_cache, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
  gray_blur_cache.gray_blur_cache_pw_math_gray_blur811_0_to_gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19.push(gray_blur_cache_pw_math_gray_blur811_0);
}

inline hw_uint<32>  gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19_select(gray_blur_cache_cache& gray_blur_cache, int root, int gray_blur_cache_ld50, int gray_blur_cache_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19 read pattern: { load_to_gray_blur_cache_to_gp_54851[root = 0, gray_blur_cache_ld50, gray_blur_cache_ld49] -> gray_blur_cache[gray_blur_cache_ld49, gray_blur_cache_ld50] : 0 <= gray_blur_cache_ld50 <= 65 and 0 <= gray_blur_cache_ld49 <= 65 }
  // Read schedule : { load_to_gray_blur_cache_to_gp_54851[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  // Write schedule: { pw_math_gray_blur811[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_pw_math_gray_blur811_0 = gray_blur_cache.gray_blur_cache_pw_math_gray_blur811_0_to_gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19.peek(/* one reader or all rams */ 0);
  return value_gray_blur_cache_pw_math_gray_blur811_0;
  return 0;
}

// # of bundles = 2
// load_to_gray_blur_cache_to_gp_54851_read
//	gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19
inline hw_uint<32> gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_read_bundle_read(gray_blur_cache_cache& gray_blur_cache, int root, int gray_blur_cache_ld50, int gray_blur_cache_ld49, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19

	hw_uint<32> result;
	hw_uint<32>  gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19_res = gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19_select(gray_blur_cache, root, gray_blur_cache_ld50, gray_blur_cache_ld49, dynamic_address);
	set_at<0, 32>(result, gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_19_res);
	return result;
}

// pw_math_gray_blur811_write
//	gray_blur_cache_pw_math_gray_blur811_0
inline void gray_blur_cache_pw_math_gray_blur811_write_bundle_write(hw_uint<32>& pw_math_gray_blur811_write, gray_blur_cache_cache& gray_blur_cache, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
	hw_uint<32>  gray_blur_cache_pw_math_gray_blur811_0_res = pw_math_gray_blur811_write.extract<0, 31>();
	gray_blur_cache_pw_math_gray_blur811_0_write(gray_blur_cache_pw_math_gray_blur811_0_res, gray_blur_cache, root, pw_math_gray_blur89, pw_math_gray_blur810, dynamic_address);
}

struct gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9_cache {
	// RAM Box: {[0, 65], [0, 65]}
	// Capacity: 135
	// # of read delays: 9
  // 0, 1, 2, 66, 67, 68, 132, 133, 134
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 63> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 63> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_66() {
		return f6;
	}

	inline hw_uint<32>  peek_67() {
		return f8;
	}

	inline hw_uint<32>  peek_68() {
		return f10;
	}

	inline hw_uint<32>  peek_131() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_132() {
		return f12;
	}

	inline hw_uint<32>  peek_133() {
		return f14;
	}

	inline hw_uint<32>  peek_134() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
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
    // cap: 1 reading from capacity: 63
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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

struct gray_blur_cache_FIFO_buf52_cache {
  // Reader addrs...
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[xb, yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[xb, 1 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[xb, 2 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[1 + xb, yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[1 + xb, 1 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[1 + xb, 2 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[2 + xb, yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[2 + xb, 1 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
    // { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[2 + xb, 2 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // # of banks: 1
  gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9_cache gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9;
};



inline void gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_write(hw_uint<32> & gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20, gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int gray_blur_cache_to_gp_548_ld54, int gray_blur_cache_to_gp_548_ld53, int dynamic_address) {
  gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.push(gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20);
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_36_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_36 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[xb, yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_134();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_37_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_37 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[xb, 1 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_68();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_38_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_38 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[xb, 2 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_2();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_39_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_39 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[1 + xb, yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_133();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_40_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_40 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[1 + xb, 1 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_67();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_41_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_41 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[1 + xb, 2 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_1();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_42_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_42 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[2 + xb, yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_132();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_43_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_43 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[2 + xb, 1 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_66();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_44_select(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf52_blur_44 read pattern: { blur[root = 0, yb, xb] -> gray_blur_cache_FIFO_buf52[2 + xb, 2 + yb] : 0 <= yb <= 63 and 0 <= xb <= 63 }
  // Read schedule : { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
  auto value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20 = gray_blur_cache_FIFO_buf52.gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_merged_banks_9.peek_0();
  return value_gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20;
  return 0;
}

// # of bundles = 2
// blur_read
//	gray_blur_cache_FIFO_buf52_blur_36
//	gray_blur_cache_FIFO_buf52_blur_37
//	gray_blur_cache_FIFO_buf52_blur_38
//	gray_blur_cache_FIFO_buf52_blur_39
//	gray_blur_cache_FIFO_buf52_blur_40
//	gray_blur_cache_FIFO_buf52_blur_41
//	gray_blur_cache_FIFO_buf52_blur_42
//	gray_blur_cache_FIFO_buf52_blur_43
//	gray_blur_cache_FIFO_buf52_blur_44
inline hw_uint<288> gray_blur_cache_FIFO_buf52_blur_read_bundle_read(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int yb, int xb, int dynamic_address) {
  // # of ports in bundle: 9
    // gray_blur_cache_FIFO_buf52_blur_36
    // gray_blur_cache_FIFO_buf52_blur_37
    // gray_blur_cache_FIFO_buf52_blur_38
    // gray_blur_cache_FIFO_buf52_blur_39
    // gray_blur_cache_FIFO_buf52_blur_40
    // gray_blur_cache_FIFO_buf52_blur_41
    // gray_blur_cache_FIFO_buf52_blur_42
    // gray_blur_cache_FIFO_buf52_blur_43
    // gray_blur_cache_FIFO_buf52_blur_44

	hw_uint<288> result;
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_36_res = gray_blur_cache_FIFO_buf52_blur_36_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<0, 288>(result, gray_blur_cache_FIFO_buf52_blur_36_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_37_res = gray_blur_cache_FIFO_buf52_blur_37_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<32, 288>(result, gray_blur_cache_FIFO_buf52_blur_37_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_38_res = gray_blur_cache_FIFO_buf52_blur_38_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<64, 288>(result, gray_blur_cache_FIFO_buf52_blur_38_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_39_res = gray_blur_cache_FIFO_buf52_blur_39_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<96, 288>(result, gray_blur_cache_FIFO_buf52_blur_39_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_40_res = gray_blur_cache_FIFO_buf52_blur_40_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<128, 288>(result, gray_blur_cache_FIFO_buf52_blur_40_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_41_res = gray_blur_cache_FIFO_buf52_blur_41_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<160, 288>(result, gray_blur_cache_FIFO_buf52_blur_41_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_42_res = gray_blur_cache_FIFO_buf52_blur_42_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<192, 288>(result, gray_blur_cache_FIFO_buf52_blur_42_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_43_res = gray_blur_cache_FIFO_buf52_blur_43_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<224, 288>(result, gray_blur_cache_FIFO_buf52_blur_43_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf52_blur_44_res = gray_blur_cache_FIFO_buf52_blur_44_select(gray_blur_cache_FIFO_buf52, root, yb, xb, dynamic_address);
	set_at<256, 288>(result, gray_blur_cache_FIFO_buf52_blur_44_res);
	return result;
}

// load_to_gray_blur_cache_FIFO_buf5255_write
//	gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20
inline void gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_write_bundle_write(hw_uint<32>& load_to_gray_blur_cache_FIFO_buf5255_write, gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int root, int gray_blur_cache_to_gp_548_ld54, int gray_blur_cache_to_gp_548_ld53, int dynamic_address) {
	hw_uint<32>  gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_res = load_to_gray_blur_cache_FIFO_buf5255_write.extract<0, 31>();
	gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_write(gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_20_res, gray_blur_cache_FIFO_buf52, root, gray_blur_cache_to_gp_548_ld54, gray_blur_cache_to_gp_548_ld53, dynamic_address);
}

struct gray_diff_pw_math_gray1215_4_to_gray_diff_load_to_gray_diff_to_gp_45659_13_cache {
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

struct gray_diff_cache {
  // Reader addrs...
    // { load_to_gray_diff_to_gp_45659[root = 0, gray_diff_ld58, gray_diff_ld57] -> gray_diff[gray_diff_ld57, gray_diff_ld58] : 0 <= gray_diff_ld58 <= 63 and 0 <= gray_diff_ld57 <= 63 }
  // # of banks: 1
  gray_diff_pw_math_gray1215_4_to_gray_diff_load_to_gray_diff_to_gp_45659_13_cache gray_diff_pw_math_gray1215_4_to_gray_diff_load_to_gray_diff_to_gp_45659_13;
};



inline void gray_diff_pw_math_gray1215_4_write(hw_uint<32> & gray_diff_pw_math_gray1215_4, gray_diff_cache& gray_diff, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
  gray_diff.gray_diff_pw_math_gray1215_4_to_gray_diff_load_to_gray_diff_to_gp_45659_13.push(gray_diff_pw_math_gray1215_4);
}

inline hw_uint<32>  gray_diff_load_to_gray_diff_to_gp_45659_13_select(gray_diff_cache& gray_diff, int root, int gray_diff_ld58, int gray_diff_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_diff_load_to_gray_diff_to_gp_45659_13 read pattern: { load_to_gray_diff_to_gp_45659[root = 0, gray_diff_ld58, gray_diff_ld57] -> gray_diff[gray_diff_ld57, gray_diff_ld58] : 0 <= gray_diff_ld58 <= 63 and 0 <= gray_diff_ld57 <= 63 }
  // Read schedule : { load_to_gray_diff_to_gp_45659[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { pw_math_gray1215[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gray_diff_pw_math_gray1215_4 = gray_diff.gray_diff_pw_math_gray1215_4_to_gray_diff_load_to_gray_diff_to_gp_45659_13.peek(/* one reader or all rams */ 0);
  return value_gray_diff_pw_math_gray1215_4;
  return 0;
}

// # of bundles = 2
// load_to_gray_diff_to_gp_45659_read
//	gray_diff_load_to_gray_diff_to_gp_45659_13
inline hw_uint<32> gray_diff_load_to_gray_diff_to_gp_45659_read_bundle_read(gray_diff_cache& gray_diff, int root, int gray_diff_ld58, int gray_diff_ld57, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_diff_load_to_gray_diff_to_gp_45659_13

	hw_uint<32> result;
	hw_uint<32>  gray_diff_load_to_gray_diff_to_gp_45659_13_res = gray_diff_load_to_gray_diff_to_gp_45659_13_select(gray_diff, root, gray_diff_ld58, gray_diff_ld57, dynamic_address);
	set_at<0, 32>(result, gray_diff_load_to_gray_diff_to_gp_45659_13_res);
	return result;
}

// pw_math_gray1215_write
//	gray_diff_pw_math_gray1215_4
inline void gray_diff_pw_math_gray1215_write_bundle_write(hw_uint<32>& pw_math_gray1215_write, gray_diff_cache& gray_diff, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
	hw_uint<32>  gray_diff_pw_math_gray1215_4_res = pw_math_gray1215_write.extract<0, 31>();
	gray_diff_pw_math_gray1215_4_write(gray_diff_pw_math_gray1215_4_res, gray_diff, root, pw_math_gray1213, pw_math_gray1214, dynamic_address);
}

struct gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_to_gray_diff_FIFO_buf60_diff_33_cache {
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

struct gray_diff_FIFO_buf60_cache {
  // Reader addrs...
    // { diff[root = 0, y, x] -> gray_diff_FIFO_buf60[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
  // # of banks: 1
  gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_to_gray_diff_FIFO_buf60_diff_33_cache gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_to_gray_diff_FIFO_buf60_diff_33;
};



inline void gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_write(hw_uint<32> & gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14, gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int gray_diff_to_gp_456_ld62, int gray_diff_to_gp_456_ld61, int dynamic_address) {
  gray_diff_FIFO_buf60.gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_to_gray_diff_FIFO_buf60_diff_33.push(gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14);
}

inline hw_uint<32>  gray_diff_FIFO_buf60_diff_33_select(gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_diff_FIFO_buf60_diff_33 read pattern: { diff[root = 0, y, x] -> gray_diff_FIFO_buf60[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
  // Read schedule : { diff[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 17] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gray_diff_FIFO_buf6063[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 9] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14 = gray_diff_FIFO_buf60.gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_to_gray_diff_FIFO_buf60_diff_33.peek(/* one reader or all rams */ 0);
  return value_gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14;
  return 0;
}

// # of bundles = 2
// diff_read
//	gray_diff_FIFO_buf60_diff_33
inline hw_uint<32> gray_diff_FIFO_buf60_diff_read_bundle_read(gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int y, int x, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_diff_FIFO_buf60_diff_33

	hw_uint<32> result;
	hw_uint<32>  gray_diff_FIFO_buf60_diff_33_res = gray_diff_FIFO_buf60_diff_33_select(gray_diff_FIFO_buf60, root, y, x, dynamic_address);
	set_at<0, 32>(result, gray_diff_FIFO_buf60_diff_33_res);
	return result;
}

// load_to_gray_diff_FIFO_buf6063_write
//	gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14
inline void gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_write_bundle_write(hw_uint<32>& load_to_gray_diff_FIFO_buf6063_write, gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int gray_diff_to_gp_456_ld62, int gray_diff_to_gp_456_ld61, int dynamic_address) {
	hw_uint<32>  gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_res = load_to_gray_diff_FIFO_buf6063_write.extract<0, 31>();
	gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_write(gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_14_res, gray_diff_FIFO_buf60, root, gray_diff_to_gp_456_ld62, gray_diff_to_gp_456_ld61, dynamic_address);
}

// Total re-use buffer capacity: 8576 bits
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

inline void load_to_gray_to_gp_23235(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_232, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld33_c__gray_ld34_value = gray_load_to_gray_to_gp_23235_read_bundle_read(gray/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_232
	gray_to_gp_232.write(gray_gray_ld33_c__gray_ld34_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_to_gp_12427(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld25_c__gray_ld26_value = gray_load_to_gray_to_gp_12427_read_bundle_read(gray/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_124
	gray_to_gp_124.write(gray_gray_ld25_c__gray_ld26_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_ld26_gray_ld34_oc_load_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_124, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_232) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_ld26_gray_ld34_oc_load_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_cache gray;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_to_gp_12427[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63; oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 65 and 0 <= d2 <= 65; load_to_gray_to_gp_23235[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
//   { load_to_gray_to_gp_12427[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gray_to_gp_12427(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for oc_load_in03(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { load_to_gray_to_gp_23235[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for load_to_gray_to_gp_23235(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 65 and 0 <= i2 <= 65 and 0 <= i3 <= 1; [0, i1, i2, 4] : 2 <= i1 <= 65 and 2 <= i2 <= 65 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 65; i1++) {
	    for (int i2 = 0; i2 <= 65; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          oc_load_in03(in /* buf name */, gray, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_to_gp_23235(gray /* buf name */, gray_to_gp_232, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_gray_to_gp_12427(gray /* buf name */, gray_to_gp_124, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gray_FIFO_buf2831(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_124, gray_FIFO_buf28_cache& gray_FIFO_buf28, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_to_gp_124
	auto gray_to_gp_124_gray_to_gp_124_ld29_c__gray_to_gp_124_ld30_value = gray_to_gp_124.read();
	// Produce: gray_FIFO_buf28
	gray_FIFO_buf28_load_to_gray_FIFO_buf2831_write_bundle_write(/* arg names */gray_to_gp_124_gray_to_gp_124_ld29_c__gray_to_gp_124_ld30_value, gray_FIFO_buf28, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gray1215(gray_FIFO_buf28_cache& gray_FIFO_buf28, gray_diff_cache& gray_diff, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf28
	auto gray_FIFO_buf28_pw_math_gray1214_p_0_c___pw_math_gray1213_p_0_value = gray_FIFO_buf28_pw_math_gray1215_read_bundle_read(gray_FIFO_buf28/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_FIFO_buf28_pw_math_gray1214_p_0_c___pw_math_gray1213_p_0_value);
	// Produce: gray_diff
	gray_diff_pw_math_gray1215_write_bundle_write(/* arg names */compute_result, gray_diff, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_diff_to_gp_45659(gray_diff_cache& gray_diff, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_diff_to_gp_456, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_diff
	auto gray_diff_gray_diff_ld57_c__gray_diff_ld58_value = gray_diff_load_to_gray_diff_to_gp_45659_read_bundle_read(gray_diff/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_diff_to_gp_456
	gray_diff_to_gp_456.write(gray_diff_gray_diff_ld57_c__gray_diff_ld58_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_diff_ld58_gray_to_gp_124_ld30_pw_math_gray1213_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_124, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_456) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_diff_ld58_gray_to_gp_124_ld30_pw_math_gray1213__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf28_cache gray_FIFO_buf28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_diff_cache gray_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_FIFO_buf2831[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 63 and 0 <= d2 <= 63; pw_math_gray1215[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gray_diff_to_gp_45659[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { load_to_gray_FIFO_buf2831[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gray_FIFO_buf2831(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { pw_math_gray1215[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for pw_math_gray1215(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { load_to_gray_diff_to_gp_45659[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gray_diff_to_gp_45659(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 65 and 2 <= i2 <= 65 and 7 <= i3 <= 8; [0, i1, i2, 5] : 2 <= i1 <= 65 and 2 <= i2 <= 65 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 65; i1++) {
	    for (int i2 = 2; i2 <= 65; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_FIFO_buf2831(gray_to_gp_124 /* buf name */, gray_FIFO_buf28, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_gray1215(gray_FIFO_buf28 /* buf name */, gray_diff, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_diff_to_gp_45659(gray_diff /* buf name */, gray_diff_to_gp_456, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gray_FIFO_buf3639(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_232, gray_FIFO_buf36_cache& gray_FIFO_buf36, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_to_gp_232
	auto gray_to_gp_232_gray_to_gp_232_ld37_c__gray_to_gp_232_ld38_value = gray_to_gp_232.read();
	// Produce: gray_FIFO_buf36
	gray_FIFO_buf36_load_to_gray_FIFO_buf3639_write_bundle_write(/* arg names */gray_to_gp_232_gray_to_gp_232_ld37_c__gray_to_gp_232_ld38_value, gray_FIFO_buf36, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gray47(gray_FIFO_buf36_cache& gray_FIFO_buf36, gray_blur_cache& gray_blur, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf36
	auto gray_FIFO_buf36_pw_math_gray46_p_0_c___pw_math_gray45_p_0_value = gray_FIFO_buf36_pw_math_gray47_read_bundle_read(gray_FIFO_buf36/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_FIFO_buf36_pw_math_gray46_p_0_c___pw_math_gray45_p_0_value);
	// Produce: gray_blur
	gray_blur_pw_math_gray47_write_bundle_write(/* arg names */compute_result, gray_blur, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_blur_to_gp_34043(gray_blur_cache& gray_blur, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_to_gp_340, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_blur
	auto gray_blur_gray_blur_ld41_c__gray_blur_ld42_value = gray_blur_load_to_gray_blur_to_gp_34043_read_bundle_read(gray_blur/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_blur_to_gp_340
	gray_blur_to_gp_340.write(gray_blur_gray_blur_ld41_c__gray_blur_ld42_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_blur_ld42_gray_to_gp_232_ld38_pw_math_gray45_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_232, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_340) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_blur_ld42_gray_to_gp_232_ld38_pw_math_gray45__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf36_cache gray_FIFO_buf36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache gray_blur;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_blur_to_gp_34043[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 65 and 0 <= d2 <= 65; load_to_gray_FIFO_buf3639[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 65 and 0 <= d2 <= 65; pw_math_gray47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
//   { load_to_gray_blur_to_gp_34043[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for load_to_gray_blur_to_gp_34043(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { load_to_gray_FIFO_buf3639[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for load_to_gray_FIFO_buf3639(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { pw_math_gray47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for pw_math_gray47(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 65 and 0 <= i2 <= 65 and 2 <= i3 <= 3; [0, i1, i2, 6] : 0 <= i1 <= 65 and 0 <= i2 <= 65 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 65; i1++) {
	    for (int i2 = 0; i2 <= 65; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_FIFO_buf3639(gray_to_gp_232 /* buf name */, gray_FIFO_buf36, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_gray47(gray_FIFO_buf36 /* buf name */, gray_blur, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_blur_to_gp_34043(gray_blur /* buf name */, gray_blur_to_gp_340, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gray_blur_FIFO_buf4447(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_to_gp_340, gray_blur_FIFO_buf44_cache& gray_blur_FIFO_buf44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_blur_to_gp_340
	auto gray_blur_to_gp_340_gray_blur_to_gp_340_ld45_c__gray_blur_to_gp_340_ld46_value = gray_blur_to_gp_340.read();
	// Produce: gray_blur_FIFO_buf44
	gray_blur_FIFO_buf44_load_to_gray_blur_FIFO_buf4447_write_bundle_write(/* arg names */gray_blur_to_gp_340_gray_blur_to_gp_340_ld45_c__gray_blur_to_gp_340_ld46_value, gray_blur_FIFO_buf44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gray_blur811(gray_blur_FIFO_buf44_cache& gray_blur_FIFO_buf44, gray_blur_cache_cache& gray_blur_cache, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_blur_FIFO_buf44
	auto gray_blur_FIFO_buf44_pw_math_gray_blur810_p_0_c___pw_math_gray_blur89_p_0_value = gray_blur_FIFO_buf44_pw_math_gray_blur811_read_bundle_read(gray_blur_FIFO_buf44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_blur_FIFO_buf44_pw_math_gray_blur810_p_0_c___pw_math_gray_blur89_p_0_value);
	// Produce: gray_blur_cache
	gray_blur_cache_pw_math_gray_blur811_write_bundle_write(/* arg names */compute_result, gray_blur_cache, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_blur_cache_to_gp_54851(gray_blur_cache_cache& gray_blur_cache, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_cache_to_gp_548, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_blur_cache
	auto gray_blur_cache_gray_blur_cache_ld49_c__gray_blur_cache_ld50_value = gray_blur_cache_load_to_gray_blur_cache_to_gp_54851_read_bundle_read(gray_blur_cache/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_blur_cache_to_gp_548
	gray_blur_cache_to_gp_548.write(gray_blur_cache_gray_blur_cache_ld49_c__gray_blur_cache_ld50_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_blur_cache_ld50_gray_blur_to_gp_340_ld46_pw_math_gray_blur89_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_340, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_548) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_blur_cache_ld50_gray_blur_to_gp_340_ld46_pw_math_gray_blur89__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_blur_FIFO_buf44_cache gray_blur_FIFO_buf44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache_cache gray_blur_cache;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_blur_cache_to_gp_54851[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 65 and 0 <= d2 <= 65; pw_math_gray_blur811[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 65 and 0 <= d2 <= 65; load_to_gray_blur_FIFO_buf4447[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
//   { load_to_gray_blur_cache_to_gp_54851[d0 = 0, d1, d2] -> [0, d1, d2, 12] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for load_to_gray_blur_cache_to_gp_54851(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { pw_math_gray_blur811[d0 = 0, d1, d2] -> [0, d1, d2, 11] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for pw_math_gray_blur811(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { load_to_gray_blur_FIFO_buf4447[d0 = 0, d1, d2] -> [0, d1, d2, 10] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for load_to_gray_blur_FIFO_buf4447(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 65 and 0 <= i2 <= 65 and 10 <= i3 <= 12 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 65; i1++) {
	    for (int i2 = 0; i2 <= 65; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_blur_FIFO_buf4447(gray_blur_to_gp_340 /* buf name */, gray_blur_FIFO_buf44, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_gray_blur811(gray_blur_FIFO_buf44 /* buf name */, gray_blur_cache, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_blur_cache_to_gp_54851(gray_blur_cache /* buf name */, gray_blur_cache_to_gp_548, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_blurred_FIFO_buf2023(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_416, blurred_FIFO_buf20_cache& blurred_FIFO_buf20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurred_to_gp_416
	auto blurred_to_gp_416_blurred_to_gp_416_ld21_c__blurred_to_gp_416_ld22_value = blurred_to_gp_416.read();
	// Produce: blurred_FIFO_buf20
	blurred_FIFO_buf20_load_to_blurred_FIFO_buf2023_write_bundle_write(/* arg names */blurred_to_gp_416_blurred_to_gp_416_ld21_c__blurred_to_gp_416_ld22_value, blurred_FIFO_buf20, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_diff_FIFO_buf6063(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_diff_to_gp_456, gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_diff_to_gp_456
	auto gray_diff_to_gp_456_gray_diff_to_gp_456_ld61_c__gray_diff_to_gp_456_ld62_value = gray_diff_to_gp_456.read();
	// Produce: gray_diff_FIFO_buf60
	gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_write_bundle_write(/* arg names */gray_diff_to_gp_456_gray_diff_to_gp_456_ld61_c__gray_diff_to_gp_456_ld62_value, gray_diff_FIFO_buf60, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff(gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, blurred_FIFO_buf20_cache& blurred_FIFO_buf20, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_diff_FIFO_buf60
	auto gray_diff_FIFO_buf60_x_p_0_c___y_p_0_value = gray_diff_FIFO_buf60_diff_read_bundle_read(gray_diff_FIFO_buf60/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: blurred_FIFO_buf20
	auto blurred_FIFO_buf20_x_p_0_c___y_p_0_value = blurred_FIFO_buf20_diff_read_bundle_read(blurred_FIFO_buf20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff(gray_diff_FIFO_buf60_x_p_0_c___y_p_0_value, blurred_FIFO_buf20_x_p_0_c___y_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurred_to_gp_416_ld22_gray_diff_to_gp_456_ld62_y_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_416, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_456, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurred_to_gp_416_ld22_gray_diff_to_gp_456_ld62_y__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_FIFO_buf20_cache blurred_FIFO_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_diff_FIFO_buf60_cache gray_diff_FIFO_buf60;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_blurred_FIFO_buf2023[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 16] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gray_diff_FIFO_buf6063[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 9] : 0 <= d1 <= 63 and 0 <= d2 <= 63; diff[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 17] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { load_to_blurred_FIFO_buf2023[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 16] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_blurred_FIFO_buf2023(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { load_to_gray_diff_FIFO_buf6063[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 9] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gray_diff_FIFO_buf6063(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { diff[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 17] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for diff(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 65 and 2 <= i2 <= 65 and 16 <= i3 <= 17; [0, i1, i2, 9] : 2 <= i1 <= 65 and 2 <= i2 <= 65 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 65; i1++) {
	    for (int i2 = 2; i2 <= 65; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_diff_FIFO_buf6063(gray_diff_to_gp_456 /* buf name */, gray_diff_FIFO_buf60, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurred_FIFO_buf2023(blurred_to_gp_416 /* buf name */, blurred_FIFO_buf20, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          diff(gray_diff_FIFO_buf60 /* buf name */, blurred_FIFO_buf20 /* buf name */, out, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gray_blur_cache_FIFO_buf5255(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_cache_to_gp_548, gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_blur_cache_to_gp_548
	auto gray_blur_cache_to_gp_548_gray_blur_cache_to_gp_548_ld53_c__gray_blur_cache_to_gp_548_ld54_value = gray_blur_cache_to_gp_548.read();
	// Produce: gray_blur_cache_FIFO_buf52
	gray_blur_cache_FIFO_buf52_load_to_gray_blur_cache_FIFO_buf5255_write_bundle_write(/* arg names */gray_blur_cache_to_gp_548_gray_blur_cache_to_gp_548_ld53_c__gray_blur_cache_to_gp_548_ld54_value, gray_blur_cache_FIFO_buf52, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur(gray_blur_cache_FIFO_buf52_cache& gray_blur_cache_FIFO_buf52, blurred_cache& blurred, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_blur_cache_FIFO_buf52
	auto gray_blur_cache_FIFO_buf52_xb__p__0_p_0_c___yb__p__0_p_0_value = gray_blur_cache_FIFO_buf52_blur_read_bundle_read(gray_blur_cache_FIFO_buf52/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(gray_blur_cache_FIFO_buf52_xb__p__0_p_0_c___yb__p__0_p_0_value);
	// Produce: blurred
	blurred_blur_write_bundle_write(/* arg names */compute_result, blurred, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurred_to_gp_41619(blurred_cache& blurred, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_416, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurred
	auto blurred_blurred_ld17_c__blurred_ld18_value = blurred_load_to_blurred_to_gp_41619_read_bundle_read(blurred/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurred_to_gp_416
	blurred_to_gp_416.write(blurred_blurred_ld17_c__blurred_ld18_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurred_ld18_gray_blur_cache_to_gp_548_ld54_yb_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_548, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_416) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurred_ld18_gray_blur_cache_to_gp_548_ld54_yb__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_cache blurred;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache_FIFO_buf52_cache gray_blur_cache_FIFO_buf52;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_blurred_to_gp_41619[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
//   { blur[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 14] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for blur(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { load_to_blurred_to_gp_41619[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_blurred_to_gp_41619(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))
//   { load_to_gray_blur_cache_FIFO_buf5255[d0 = 0, d1, d2] -> [0, d1, d2, 13] : 0 <= d1 <= 65 and 0 <= d2 <= 65 }
// Condition for load_to_gray_blur_cache_FIFO_buf5255(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((65 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((65 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 65 and 2 <= i2 <= 65 and 14 <= i3 <= 15; [0, i1, i2, 13] : 0 <= i1 <= 65 and 0 <= i2 <= 65 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 65; i1++) {
	    for (int i2 = 0; i2 <= 65; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gray_blur_cache_FIFO_buf5255(gray_blur_cache_to_gp_548 /* buf name */, gray_blur_cache_FIFO_buf52, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          blur(gray_blur_cache_FIFO_buf52 /* buf name */, blurred, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_blurred_to_gp_41619(blurred /* buf name */, blurred_to_gp_416, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void us_mk1_ii1(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("us_mk1_ii1_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match blurred_to_gp_416 = 16000
// Bits to slack match blurred_to_gp_416 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gray_blur_cache_to_gp_548 = 16000
// Bits to slack match gray_blur_cache_to_gp_548 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gray_blur_to_gp_340 = 16000
// Bits to slack match gray_blur_to_gp_340 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gray_diff_to_gp_456 = 16000
// Bits to slack match gray_diff_to_gp_456 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gray_to_gp_124 = 16000
// Bits to slack match gray_to_gp_124 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gray_to_gp_232 = 16000
// Bits to slack match gray_to_gp_232 = 16000
// Bits in internal re-use buffers               : 8576 bits
// Bits in channels needed to guarantee causality: 0
// Bits in channels needed to match slack        : 96000
  HWStream< hw_uint<32> > gray_to_gp_124;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_124.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gray_to_gp_232;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_232.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gray_diff_to_gp_456;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_diff_to_gp_456.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gray_blur_to_gp_340;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_blur_to_gp_340.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gray_blur_cache_to_gp_548;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_blur_cache_to_gp_548.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > blurred_to_gp_416;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurred_to_gp_416.values depth=500
#endif //__VIVADO_SYNTH__


  Extracted_gray_ld26_gray_ld34_oc_load_in01_(in, gray_to_gp_124, gray_to_gp_232);
  Extracted_gray_diff_ld58_gray_to_gp_124_ld30_pw_math_gray1213_(gray_to_gp_124, gray_diff_to_gp_456);
  Extracted_gray_blur_ld42_gray_to_gp_232_ld38_pw_math_gray45_(gray_to_gp_232, gray_blur_to_gp_340);
  Extracted_gray_blur_cache_ld50_gray_blur_to_gp_340_ld46_pw_math_gray_blur89_(gray_blur_to_gp_340, gray_blur_cache_to_gp_548);
  Extracted_blurred_ld18_gray_blur_cache_to_gp_548_ld54_yb_(gray_blur_cache_to_gp_548, blurred_to_gp_416);
  Extracted_blurred_to_gp_416_ld22_gray_diff_to_gp_456_ld62_y_(blurred_to_gp_416, gray_diff_to_gp_456, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void us_mk1_ii1_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    us_mk1_ii1(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> in[oc_load_in02, oc_load_in01] : 0 <= oc_load_in01 <= 65 and 0 <= oc_load_in02 <= 65 }
const int oc_load_in03_read_pipe0_num_transfers = 4356;
  // { diff[root = 0, y, x] -> out[x, y] : 0 <= y <= 63 and 0 <= x <= 63 }
const int diff_write_pipe0_num_transfers = 4096;


extern "C" {

void us_mk1_ii1_accel(hw_uint<32>* oc_load_in03_read_pipe0, hw_uint<32>* diff_write_pipe0, const int size) { 
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

  us_mk1_ii1_wrapper(oc_load_in03_read_pipe0_channel, diff_write_pipe0_channel, size);

  burst_write<32>(diff_write_pipe0, diff_write_pipe0_channel, diff_write_pipe0_num_transfers*size);
}

}
extern "C" {

void us_mk1_ii1_rdai(HWStream<hw_uint<32> >& oc_load_in03_read_pipe0, HWStream<hw_uint<32> >&  diff_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = oc_load_in03_read_pipe0
#pragma HLS INTERFACE axis register port = diff_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  us_mk1_ii1(oc_load_in03_read_pipe0, diff_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

