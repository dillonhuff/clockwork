#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blur3_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blur3_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurx_blurx_update_0_sm1_05_sm26_034_10_to_blurx_load_to_blurx_to_gp_0912_sm28_038_5_cache {
	// RAM Box: {[0, 1081], [0, 1079]}
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

struct blurx_cache {
  // Reader addrs...
    // { load_to_blurx_to_gp_0912_sm28_038[root = 0, blurx_ld11, blurx_ld10] -> blurx[blurx_ld10, blurx_ld11] : 0 <= blurx_ld11 <= 1079 and 0 <= blurx_ld10 <= 1081 }
  // # of banks: 1
  blurx_blurx_update_0_sm1_05_sm26_034_10_to_blurx_load_to_blurx_to_gp_0912_sm28_038_5_cache blurx_blurx_update_0_sm1_05_sm26_034_10_to_blurx_load_to_blurx_to_gp_0912_sm28_038_5;
};



inline void blurx_blurx_update_0_sm1_05_sm26_034_10_write(hw_uint<16>& blurx_blurx_update_0_sm1_05_sm26_034_10, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_update_0_sm1_05_sm26_034_10_to_blurx_load_to_blurx_to_gp_0912_sm28_038_5.push(blurx_blurx_update_0_sm1_05_sm26_034_10);
}

inline hw_uint<16> blurx_load_to_blurx_to_gp_0912_sm28_038_5_select(blurx_cache& blurx, int root, int blurx_ld11, int blurx_ld10, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_load_to_blurx_to_gp_0912_sm28_038_5 read pattern: { load_to_blurx_to_gp_0912_sm28_038[root = 0, blurx_ld11, blurx_ld10] -> blurx[blurx_ld10, blurx_ld11] : 0 <= blurx_ld11 <= 1079 and 0 <= blurx_ld10 <= 1081 }
  // Read schedule : { load_to_blurx_to_gp_0912_sm28_038[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 4] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { blurx_update_0_sm1_05_sm26_034[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_blurx_update_0_sm1_05_sm26_034_10 = blurx.blurx_blurx_update_0_sm1_05_sm26_034_10_to_blurx_load_to_blurx_to_gp_0912_sm28_038_5.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_update_0_sm1_05_sm26_034_10;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm1_05_sm26_034_write
//	blurx_blurx_update_0_sm1_05_sm26_034_10
inline void blurx_blurx_update_0_sm1_05_sm26_034_write_bundle_write(hw_uint<16>& blurx_update_0_sm1_05_sm26_034_write, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_sm1_05_sm26_034_10_res = blurx_update_0_sm1_05_sm26_034_write.extract<0, 15>();
	blurx_blurx_update_0_sm1_05_sm26_034_10_write(blurx_blurx_update_0_sm1_05_sm26_034_10_res, blurx, root, blurx_0, blurx_1, dynamic_address);
}

// load_to_blurx_to_gp_0912_sm28_038_read
//	blurx_load_to_blurx_to_gp_0912_sm28_038_5
inline hw_uint<16> blurx_load_to_blurx_to_gp_0912_sm28_038_read_bundle_read(blurx_cache& blurx, int root, int blurx_ld11, int blurx_ld10, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_load_to_blurx_to_gp_0912_sm28_038_5

	hw_uint<16> result;
	hw_uint<16> blurx_load_to_blurx_to_gp_0912_sm28_038_5_res = blurx_load_to_blurx_to_gp_0912_sm28_038_5_select(blurx, root, blurx_ld11, blurx_ld10, dynamic_address);
	set_at<0, 16>(result, blurx_load_to_blurx_to_gp_0912_sm28_038_5_res);
	return result;
}

struct blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 3
	// # of read delays: 2
  // 0, 2
	fifo<hw_uint<16>, 3> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16_cache {
	// RAM Box: {[1, 1080], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17_cache {
	// RAM Box: {[2, 1081], [0, 1079]}
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

struct blurx_FIFO_buf17_cache {
  // Reader addrs...
    // { blur3_1_update_0_sm2_07_sm27_036[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf17[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
    // { blur3_1_update_0_sm2_07_sm27_036[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf17[1 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
    // { blur3_1_update_0_sm2_07_sm27_036[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf17[2 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // # of banks: 3
  blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15_cache blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15;
  blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16_cache blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16;
  blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17_cache blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17;
};



inline void blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_write(hw_uint<16>& blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6, blurx_FIFO_buf17_cache& blurx_FIFO_buf17, int root, int blurx_to_gp_09_ld19, int blurx_to_gp_09_ld18, int dynamic_address) {
  blurx_FIFO_buf17.blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15.push(blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6);
  blurx_FIFO_buf17.blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16.push(blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6);
  blurx_FIFO_buf17.blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17.push(blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6);
}

inline hw_uint<16> blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15_select(blurx_FIFO_buf17_cache& blurx_FIFO_buf17, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15 read pattern: { blur3_1_update_0_sm2_07_sm27_036[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf17[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm2_07_sm27_036[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf1720_sm30_042[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6 = blurx_FIFO_buf17.blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15.peek(/* one reader or all rams */ 2);
  return value_blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16_select(blurx_FIFO_buf17_cache& blurx_FIFO_buf17, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16 read pattern: { blur3_1_update_0_sm2_07_sm27_036[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf17[1 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm2_07_sm27_036[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf1720_sm30_042[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6 = blurx_FIFO_buf17.blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16.peek(/* one reader or all rams */ 1);
  return value_blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17_select(blurx_FIFO_buf17_cache& blurx_FIFO_buf17, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17 read pattern: { blur3_1_update_0_sm2_07_sm27_036[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf17[2 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm2_07_sm27_036[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf1720_sm30_042[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6 = blurx_FIFO_buf17.blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_to_blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17.peek(/* one reader or all rams */ 0);
  return value_blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6;
  return 0;
}

// # of bundles = 2
// blur3_1_update_0_sm2_07_sm27_036_read
//	blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15
//	blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16
//	blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17
inline hw_uint<48> blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_read_bundle_read(blurx_FIFO_buf17_cache& blurx_FIFO_buf17, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
  // # of ports in bundle: 3
    // blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15
    // blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16
    // blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17

	hw_uint<48> result;
	hw_uint<16> blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15_res = blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15_select(blurx_FIFO_buf17, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<0, 48>(result, blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_15_res);
	hw_uint<16> blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16_res = blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16_select(blurx_FIFO_buf17, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<16, 48>(result, blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_16_res);
	hw_uint<16> blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17_res = blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17_select(blurx_FIFO_buf17, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<32, 48>(result, blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_17_res);
	return result;
}

// load_to_blurx_FIFO_buf1720_sm30_042_write
//	blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6
inline void blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_write_bundle_write(hw_uint<16>& load_to_blurx_FIFO_buf1720_sm30_042_write, blurx_FIFO_buf17_cache& blurx_FIFO_buf17, int root, int blurx_to_gp_09_ld19, int blurx_to_gp_09_ld18, int dynamic_address) {
	hw_uint<16> blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_res = load_to_blurx_FIFO_buf1720_sm30_042_write.extract<0, 15>();
	blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_write(blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_6_res, blurx_FIFO_buf17, root, blurx_to_gp_09_ld19, blurx_to_gp_09_ld18, dynamic_address);
}

struct input_input_update_0_sm0_03_sm25_032_8_to_input_load_to_input_to_gp_11316_sm29_040_1_cache {
	// RAM Box: {[0, 1081], [0, 1081]}
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

struct input_cache {
  // Reader addrs...
    // { load_to_input_to_gp_11316_sm29_040[root = 0, input_ld15, input_ld14] -> input[input_ld14, input_ld15] : 0 <= input_ld15 <= 1081 and 0 <= input_ld14 <= 1081 }
  // # of banks: 1
  input_input_update_0_sm0_03_sm25_032_8_to_input_load_to_input_to_gp_11316_sm29_040_1_cache input_input_update_0_sm0_03_sm25_032_8_to_input_load_to_input_to_gp_11316_sm29_040_1;
};



inline void input_input_update_0_sm0_03_sm25_032_8_write(hw_uint<16>& input_input_update_0_sm0_03_sm25_032_8, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_update_0_sm0_03_sm25_032_8_to_input_load_to_input_to_gp_11316_sm29_040_1.push(input_input_update_0_sm0_03_sm25_032_8);
}

inline hw_uint<16> input_load_to_input_to_gp_11316_sm29_040_1_select(input_cache& input, int root, int input_ld15, int input_ld14, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_load_to_input_to_gp_11316_sm29_040_1 read pattern: { load_to_input_to_gp_11316_sm29_040[root = 0, input_ld15, input_ld14] -> input[input_ld14, input_ld15] : 0 <= input_ld15 <= 1081 and 0 <= input_ld14 <= 1081 }
  // Read schedule : { load_to_input_to_gp_11316_sm29_040[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { input_update_0_sm0_03_sm25_032[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_input_update_0_sm0_03_sm25_032_8 = input.input_input_update_0_sm0_03_sm25_032_8_to_input_load_to_input_to_gp_11316_sm29_040_1.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_sm0_03_sm25_032_8;
  return 0;
}

// # of bundles = 2
// input_update_0_sm0_03_sm25_032_write
//	input_input_update_0_sm0_03_sm25_032_8
inline void input_input_update_0_sm0_03_sm25_032_write_bundle_write(hw_uint<16>& input_update_0_sm0_03_sm25_032_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_update_0_sm0_03_sm25_032_8_res = input_update_0_sm0_03_sm25_032_write.extract<0, 15>();
	input_input_update_0_sm0_03_sm25_032_8_write(input_input_update_0_sm0_03_sm25_032_8_res, input, root, input_0, input_1, dynamic_address);
}

// load_to_input_to_gp_11316_sm29_040_read
//	input_load_to_input_to_gp_11316_sm29_040_1
inline hw_uint<16> input_load_to_input_to_gp_11316_sm29_040_read_bundle_read(input_cache& input, int root, int input_ld15, int input_ld14, int dynamic_address) {
  // # of ports in bundle: 1
    // input_load_to_input_to_gp_11316_sm29_040_1

	hw_uint<16> result;
	hw_uint<16> input_load_to_input_to_gp_11316_sm29_040_1_res = input_load_to_input_to_gp_11316_sm29_040_1_select(input, root, input_ld15, input_ld14, dynamic_address);
	set_at<0, 16>(result, input_load_to_input_to_gp_11316_sm29_040_1_res);
	return result;
}

struct input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_merged_banks_3_cache {
	// RAM Box: {[0, 1081], [0, 1081]}
	// Capacity: 2165
	// # of read delays: 3
  // 0, 1082, 2164
	hw_uint<16> f0;
	fifo<hw_uint<16>, 1081> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1081> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1081() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_1082() {
		return f2;
	}

	inline hw_uint<16> peek_2163() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_2164() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1081
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1081
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_FIFO_buf21_cache {
  // Reader addrs...
    // { blurx_update_0_sm1_05_sm26_034[root = 0, blurx_0, blurx_1] -> input_FIFO_buf21[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
    // { blurx_update_0_sm1_05_sm26_034[root = 0, blurx_0, blurx_1] -> input_FIFO_buf21[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
    // { blurx_update_0_sm1_05_sm26_034[root = 0, blurx_0, blurx_1] -> input_FIFO_buf21[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // # of banks: 1
  input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_merged_banks_3_cache input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_merged_banks_3;
};



inline void input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_write(hw_uint<16>& input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2, input_FIFO_buf21_cache& input_FIFO_buf21, int root, int input_to_gp_113_ld23, int input_to_gp_113_ld22, int dynamic_address) {
  input_FIFO_buf21.input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_merged_banks_3.push(input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2);
}

inline hw_uint<16> input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_11_select(input_FIFO_buf21_cache& input_FIFO_buf21, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_11 read pattern: { blurx_update_0_sm1_05_sm26_034[root = 0, blurx_0, blurx_1] -> input_FIFO_buf21[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm1_05_sm26_034[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf2124_sm31_044[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2 = input_FIFO_buf21.input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_merged_banks_3.peek_2164();
  return value_input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_12_select(input_FIFO_buf21_cache& input_FIFO_buf21, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_12 read pattern: { blurx_update_0_sm1_05_sm26_034[root = 0, blurx_0, blurx_1] -> input_FIFO_buf21[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm1_05_sm26_034[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf2124_sm31_044[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2 = input_FIFO_buf21.input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_merged_banks_3.peek_1082();
  return value_input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_13_select(input_FIFO_buf21_cache& input_FIFO_buf21, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_13 read pattern: { blurx_update_0_sm1_05_sm26_034[root = 0, blurx_0, blurx_1] -> input_FIFO_buf21[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm1_05_sm26_034[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf2124_sm31_044[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2 = input_FIFO_buf21.input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_merged_banks_3.peek_0();
  return value_input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm1_05_sm26_034_read
//	input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_11
//	input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_12
//	input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_13
inline hw_uint<48> input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_read_bundle_read(input_FIFO_buf21_cache& input_FIFO_buf21, int root, int blurx_0, int blurx_1, int dynamic_address) {
  // # of ports in bundle: 3
    // input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_11
    // input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_12
    // input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_13

	hw_uint<48> result;
	hw_uint<16> input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_11_res = input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_11_select(input_FIFO_buf21, root, blurx_0, blurx_1, dynamic_address);
	set_at<0, 48>(result, input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_11_res);
	hw_uint<16> input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_12_res = input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_12_select(input_FIFO_buf21, root, blurx_0, blurx_1, dynamic_address);
	set_at<16, 48>(result, input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_12_res);
	hw_uint<16> input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_13_res = input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_13_select(input_FIFO_buf21, root, blurx_0, blurx_1, dynamic_address);
	set_at<32, 48>(result, input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_13_res);
	return result;
}

// load_to_input_FIFO_buf2124_sm31_044_write
//	input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2
inline void input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_write_bundle_write(hw_uint<16>& load_to_input_FIFO_buf2124_sm31_044_write, input_FIFO_buf21_cache& input_FIFO_buf21, int root, int input_to_gp_113_ld23, int input_to_gp_113_ld22, int dynamic_address) {
	hw_uint<16> input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_res = load_to_input_FIFO_buf2124_sm31_044_write.extract<0, 15>();
	input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_write(input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_2_res, input_FIFO_buf21, root, input_to_gp_113_ld23, input_to_gp_113_ld22, dynamic_address);
}

// Operation logic
inline void load_to_blurx_FIFO_buf1720_sm30_042(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_09, blurx_FIFO_buf17_cache& blurx_FIFO_buf17, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_to_gp_09
	auto blurx_to_gp_09__lp_1_m_blurx_to_gp_09_ld18__p__0_rp__c____blurx_to_gp_09_ld19_value = blurx_to_gp_09.read();
	// Produce: blurx_FIFO_buf17
	blurx_FIFO_buf17_load_to_blurx_FIFO_buf1720_sm30_042_write_bundle_write(/* arg names */blurx_to_gp_09__lp_1_m_blurx_to_gp_09_ld18__p__0_rp__c____blurx_to_gp_09_ld19_value, blurx_FIFO_buf17, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur3_1_update_0_sm2_07_sm27_036(blurx_FIFO_buf17_cache& blurx_FIFO_buf17, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blur3_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_FIFO_buf17
	auto blurx_FIFO_buf17_1_m__lp_1_m__lp_1_m_blur3_1_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blur3_1_0__p__0_p_0_value = blurx_FIFO_buf17_blur3_1_update_0_sm2_07_sm27_036_read_bundle_read(blurx_FIFO_buf17/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blur3_1_generated_compute_unrolled_1(blurx_FIFO_buf17_1_m__lp_1_m__lp_1_m_blur3_1_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blur3_1_0__p__0_p_0_value);
	// Produce: blur3_1
	blur3_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blur3_1_0_blurx_to_gp_09_ld19_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_09, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blur3_1_0_blurx_to_gp_09_ld19__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_FIFO_buf17_cache blurx_FIFO_buf17;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { blur3_1_update_0_sm2_07_sm27_036[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_blurx_FIFO_buf1720_sm30_042[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
//   { blur3_1_update_0_sm2_07_sm27_036[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for blur3_1_update_0_sm2_07_sm27_036(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_blurx_FIFO_buf1720_sm30_042[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_FIFO_buf1720_sm30_042(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 6] : 2 <= i1 <= 1081 and 2 <= i2 <= 1081; [0, i1, i2, 5] : 2 <= i1 <= 1081 and 0 <= i2 <= 1081 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_FIFO_buf1720_sm30_042(blurx_to_gp_09 /* buf name */, blurx_FIFO_buf17, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 2 }
	        // { [i0, i1, i2] : i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i2)) >= 0)))) {
	          blur3_1_update_0_sm2_07_sm27_036(blurx_FIFO_buf17 /* buf name */, blur3_1, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_blurx_to_gp_0912_sm28_038(blurx_cache& blurx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_09, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx__lp_1_m_blurx_ld10__p__0_rp__c____blurx_ld11_value = blurx_load_to_blurx_to_gp_0912_sm28_038_read_bundle_read(blurx/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_to_gp_09
	blurx_to_gp_09.write(blurx__lp_1_m_blurx_ld10__p__0_rp__c____blurx_ld11_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_update_0_sm1_05_sm26_034(input_FIFO_buf21_cache& input_FIFO_buf21, blurx_cache& blurx, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_FIFO_buf21
	auto input_FIFO_buf21_1_m__lp_1_m__lp_1_m_blurx_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blurx_0__p__0_p_0_value = input_FIFO_buf21_blurx_update_0_sm1_05_sm26_034_read_bundle_read(input_FIFO_buf21/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_1(input_FIFO_buf21_1_m__lp_1_m__lp_1_m_blurx_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blurx_0__p__0_p_0_value);
	// Produce: blurx
	blurx_blurx_update_0_sm1_05_sm26_034_write_bundle_write(/* arg names */compute_result, blurx, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_FIFO_buf2124_sm31_044(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_113, input_FIFO_buf21_cache& input_FIFO_buf21, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_to_gp_113
	auto input_to_gp_113__lp_1_m_input_to_gp_113_ld22__p__0_rp__c____input_to_gp_113_ld23_value = input_to_gp_113.read();
	// Produce: input_FIFO_buf21
	input_FIFO_buf21_load_to_input_FIFO_buf2124_sm31_044_write_bundle_write(/* arg names */input_to_gp_113__lp_1_m_input_to_gp_113_ld22__p__0_rp__c____input_to_gp_113_ld23_value, input_FIFO_buf21, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurx_0_blurx_ld11_input_to_gp_113_ld23_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_113, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_09) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurx_0_blurx_ld11_input_to_gp_113_ld23__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_FIFO_buf21_cache input_FIFO_buf21;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { blurx_update_0_sm1_05_sm26_034[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_blurx_to_gp_0912_sm28_038[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 4] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_input_FIFO_buf2124_sm31_044[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { blurx_update_0_sm1_05_sm26_034[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for blurx_update_0_sm1_05_sm26_034(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_blurx_to_gp_0912_sm28_038[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 4] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_to_gp_0912_sm28_038(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_input_FIFO_buf2124_sm31_044[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_FIFO_buf2124_sm31_044(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 0 <= i2 <= 1081 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1081 and 0 <= i2 <= 1081 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_FIFO_buf2124_sm31_044(input_to_gp_113 /* buf name */, input_FIFO_buf21, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          blurx_update_0_sm1_05_sm26_034(input_FIFO_buf21 /* buf name */, blurx, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          load_to_blurx_to_gp_0912_sm28_038(blurx /* buf name */, blurx_to_gp_09, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void input_update_0_sm0_03_sm25_032(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_1_m__lp_1_m_input_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_1_m__lp_1_m__lp_1_m_input_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_update_0_sm0_03_sm25_032_write_bundle_write(/* arg names */compute_result, input, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_to_gp_11316_sm29_040(input_cache& input, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_113, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input
	auto input__lp_1_m_input_ld14__p__0_rp__c____input_ld15_value = input_load_to_input_to_gp_11316_sm29_040_read_bundle_read(input/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_to_gp_113
	input_to_gp_113.write(input__lp_1_m_input_ld14__p__0_rp__c____input_ld15_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_input_0_input_ld15_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_113) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_input_0_input_ld15__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_input_to_gp_11316_sm29_040[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; input_update_0_sm0_03_sm25_032[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { load_to_input_to_gp_11316_sm29_040[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_to_gp_11316_sm29_040(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { input_update_0_sm0_03_sm25_032[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for input_update_0_sm0_03_sm25_032(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1081 and 0 <= i2 <= 1081 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_update_0_sm0_03_sm25_032(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_to_gp_11316_sm29_040(input /* buf name */, input_to_gp_113, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void blur3_1_opt_d32(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur3_1_opt_d32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<16> > blurx_to_gp_09;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurx_to_gp_09.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > input_to_gp_113;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=input_to_gp_113.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_input_0_input_ld15_(input_arg, input_to_gp_113);
  Extracted_blurx_0_blurx_ld11_input_to_gp_113_ld23_(input_to_gp_113, blurx_to_gp_09);
  Extracted_blur3_1_0_blurx_to_gp_09_ld19_(blurx_to_gp_09, blur3_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blur3_1_opt_d32_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blur3_1_opt_d32(input_arg, blur3_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blur3_1_update_0_sm2_07_sm27_036[root = 0, blur3_1_0, blur3_1_1] -> blur3_1[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
const int blur3_1_update_0_sm2_07_sm27_036_write_pipe0_num_transfers = 1166400;
  // { input_update_0_sm0_03_sm25_032[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1081 }
const int input_update_0_sm0_03_sm25_032_read_pipe0_num_transfers = 1170724;


extern "C" {

void blur3_1_opt_d32_accel(hw_uint<16>* input_update_0_sm0_03_sm25_032_read_pipe0, hw_uint<16>* blur3_1_update_0_sm2_07_sm27_036_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_sm0_03_sm25_032_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blur3_1_update_0_sm2_07_sm27_036_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_sm0_03_sm25_032_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blur3_1_update_0_sm2_07_sm27_036_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_sm0_03_sm25_032_read_pipe0_channel;
  static HWStream<hw_uint<16> > blur3_1_update_0_sm2_07_sm27_036_write_pipe0_channel;

  burst_read<16>(input_update_0_sm0_03_sm25_032_read_pipe0, input_update_0_sm0_03_sm25_032_read_pipe0_channel, input_update_0_sm0_03_sm25_032_read_pipe0_num_transfers*size);

  blur3_1_opt_d32_wrapper(input_update_0_sm0_03_sm25_032_read_pipe0_channel, blur3_1_update_0_sm2_07_sm27_036_write_pipe0_channel, size);

  burst_write<16>(blur3_1_update_0_sm2_07_sm27_036_write_pipe0, blur3_1_update_0_sm2_07_sm27_036_write_pipe0_channel, blur3_1_update_0_sm2_07_sm27_036_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blur3_1_opt_d32_rdai(HWStream<hw_uint<16> >& input_update_0_sm0_03_sm25_032_read_pipe0, HWStream<hw_uint<16> >&  blur3_1_update_0_sm2_07_sm27_036_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_sm0_03_sm25_032_read_pipe0
#pragma HLS INTERFACE axis register port = blur3_1_update_0_sm2_07_sm27_036_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blur3_1_opt_d32(input_update_0_sm0_03_sm25_032_read_pipe0, blur3_1_update_0_sm2_07_sm27_036_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

