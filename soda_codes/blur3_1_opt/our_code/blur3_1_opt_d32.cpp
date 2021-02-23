#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blur3_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blur3_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurx_blurx_update_0_sm17_025_sm41_054_10_to_blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5_cache {
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
    // { load_to_blurx_to_gp_003_sm19_029_sm43_056[root = 0, blurx_ld2, blurx_ld1] -> blurx[blurx_ld1, blurx_ld2] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1081 }
  // # of banks: 1
  blurx_blurx_update_0_sm17_025_sm41_054_10_to_blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5_cache blurx_blurx_update_0_sm17_025_sm41_054_10_to_blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5;
};



inline void blurx_blurx_update_0_sm17_025_sm41_054_10_write(hw_uint<16>& blurx_blurx_update_0_sm17_025_sm41_054_10, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_update_0_sm17_025_sm41_054_10_to_blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5.push(blurx_blurx_update_0_sm17_025_sm41_054_10);
}

inline hw_uint<16> blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5_select(blurx_cache& blurx, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5 read pattern: { load_to_blurx_to_gp_003_sm19_029_sm43_056[root = 0, blurx_ld2, blurx_ld1] -> blurx[blurx_ld1, blurx_ld2] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1081 }
  // Read schedule : { load_to_blurx_to_gp_003_sm19_029_sm43_056[root = 0, blurx_ld2, blurx_ld1] -> [2 + blurx_ld2, blurx_ld1, 4] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1081 }
  // Write schedule: { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> [2 + blurx_0, blurx_1, 3] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  auto value_blurx_blurx_update_0_sm17_025_sm41_054_10 = blurx.blurx_blurx_update_0_sm17_025_sm41_054_10_to_blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_update_0_sm17_025_sm41_054_10;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm17_025_sm41_054_write
//	blurx_blurx_update_0_sm17_025_sm41_054_10
inline void blurx_blurx_update_0_sm17_025_sm41_054_write_bundle_write(hw_uint<16>& blurx_update_0_sm17_025_sm41_054_write, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_sm17_025_sm41_054_10_res = blurx_update_0_sm17_025_sm41_054_write.extract<0, 15>();
	blurx_blurx_update_0_sm17_025_sm41_054_10_write(blurx_blurx_update_0_sm17_025_sm41_054_10_res, blurx, root, blurx_0, blurx_1, dynamic_address);
}

// load_to_blurx_to_gp_003_sm19_029_sm43_056_read
//	blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5
inline hw_uint<16> blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_read_bundle_read(blurx_cache& blurx, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5

	hw_uint<16> result;
	hw_uint<16> blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5_res = blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5_select(blurx, root, blurx_ld2, blurx_ld1, dynamic_address);
	set_at<0, 16>(result, blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_5_res);
	return result;
}

struct blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15_cache {
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

struct blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16_cache {
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

struct blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17_cache {
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

struct blurx_FIFO_buf8_cache {
  // Reader addrs...
    // { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
    // { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8[1 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
    // { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8[2 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // # of banks: 3
  blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15_cache blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15;
  blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16_cache blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16;
  blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17_cache blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17;
};



inline void blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_write(hw_uint<16>& blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9, int dynamic_address) {
  blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15.push(blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6);
  blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16.push(blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6);
  blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17.push(blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6);
}

inline hw_uint<16> blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15_select(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15 read pattern: { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> [2 + blur3_1_0, 2 + blur3_1_1, 6] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf811_sm21_033_sm40_048[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> [2 + blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, 5] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
  auto value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6 = blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15.peek(/* one reader or all rams */ 2);
  return value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16_select(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16 read pattern: { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8[1 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> [2 + blur3_1_0, 2 + blur3_1_1, 6] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf811_sm21_033_sm40_048[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> [2 + blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, 5] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
  auto value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6 = blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16.peek(/* one reader or all rams */ 1);
  return value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17_select(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17 read pattern: { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8[2 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> [2 + blur3_1_0, 2 + blur3_1_1, 6] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf811_sm21_033_sm40_048[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> [2 + blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, 5] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
  auto value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6 = blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_to_blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17.peek(/* one reader or all rams */ 0);
  return value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6;
  return 0;
}

// # of bundles = 2
// blur3_1_update_0_sm18_027_sm38_050_read
//	blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15
//	blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16
//	blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17
inline hw_uint<48> blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_read_bundle_read(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
  // # of ports in bundle: 3
    // blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15
    // blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16
    // blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17

	hw_uint<48> result;
	hw_uint<16> blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15_res = blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15_select(blurx_FIFO_buf8, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<0, 48>(result, blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_15_res);
	hw_uint<16> blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16_res = blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16_select(blurx_FIFO_buf8, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<16, 48>(result, blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_16_res);
	hw_uint<16> blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17_res = blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17_select(blurx_FIFO_buf8, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<32, 48>(result, blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_17_res);
	return result;
}

// load_to_blurx_FIFO_buf811_sm21_033_sm40_048_write
//	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6
inline void blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_write_bundle_write(hw_uint<16>& load_to_blurx_FIFO_buf811_sm21_033_sm40_048_write, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9, int dynamic_address) {
	hw_uint<16> blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_res = load_to_blurx_FIFO_buf811_sm21_033_sm40_048_write.extract<0, 15>();
	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_write(blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_6_res, blurx_FIFO_buf8, root, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, dynamic_address);
}

struct blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_to_blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7_cache {
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

struct blurx_to_gp_00_cache {
  // Reader addrs...
    // { load_to_blurx_FIFO_buf811_sm21_033_sm40_048[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> blurx_to_gp_00[blurx_to_gp_00_ld9, blurx_to_gp_00_ld10] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
  // # of banks: 1
  blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_to_blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7_cache blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_to_blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7;
};



inline void blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_write(hw_uint<16>& blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4, blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
  blurx_to_gp_00.blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_to_blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7.push(blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4);
}

inline hw_uint<16> blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7_select(blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7 read pattern: { load_to_blurx_FIFO_buf811_sm21_033_sm40_048[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> blurx_to_gp_00[blurx_to_gp_00_ld9, blurx_to_gp_00_ld10] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
  // Read schedule : { load_to_blurx_FIFO_buf811_sm21_033_sm40_048[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> [2 + blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, 5] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
  // Write schedule: { load_to_blurx_to_gp_003_sm19_029_sm43_056[root = 0, blurx_ld2, blurx_ld1] -> [2 + blurx_ld2, blurx_ld1, 4] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1081 }
  auto value_blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4 = blurx_to_gp_00.blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_to_blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7.peek(/* one reader or all rams */ 0);
  return value_blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4;
  return 0;
}

// # of bundles = 2
// load_to_blurx_FIFO_buf811_sm21_033_sm40_048_read
//	blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7
inline hw_uint<16> blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_read_bundle_read(blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7

	hw_uint<16> result;
	hw_uint<16> blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7_res = blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7_select(blurx_to_gp_00, root, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, dynamic_address);
	set_at<0, 16>(result, blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_7_res);
	return result;
}

// load_to_blurx_to_gp_003_sm19_029_sm43_056_write
//	blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4
inline void blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_write_bundle_write(hw_uint<16>& load_to_blurx_to_gp_003_sm19_029_sm43_056_write, blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
	hw_uint<16> blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_res = load_to_blurx_to_gp_003_sm19_029_sm43_056_write.extract<0, 15>();
	blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_write(blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_4_res, blurx_to_gp_00, root, blurx_ld2, blurx_ld1, dynamic_address);
}

struct input_input_update_0_sm16_023_sm42_044_8_to_input_load_to_input_to_gp_147_sm20_031_sm39_052_1_cache {
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
    // { load_to_input_to_gp_147_sm20_031_sm39_052[root = 0, input_ld6, input_ld5] -> input[input_ld5, input_ld6] : 0 <= input_ld6 <= 1081 and 0 <= input_ld5 <= 1081 }
  // # of banks: 1
  input_input_update_0_sm16_023_sm42_044_8_to_input_load_to_input_to_gp_147_sm20_031_sm39_052_1_cache input_input_update_0_sm16_023_sm42_044_8_to_input_load_to_input_to_gp_147_sm20_031_sm39_052_1;
};



inline void input_input_update_0_sm16_023_sm42_044_8_write(hw_uint<16>& input_input_update_0_sm16_023_sm42_044_8, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_update_0_sm16_023_sm42_044_8_to_input_load_to_input_to_gp_147_sm20_031_sm39_052_1.push(input_input_update_0_sm16_023_sm42_044_8);
}

inline hw_uint<16> input_load_to_input_to_gp_147_sm20_031_sm39_052_1_select(input_cache& input, int root, int input_ld6, int input_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_load_to_input_to_gp_147_sm20_031_sm39_052_1 read pattern: { load_to_input_to_gp_147_sm20_031_sm39_052[root = 0, input_ld6, input_ld5] -> input[input_ld5, input_ld6] : 0 <= input_ld6 <= 1081 and 0 <= input_ld5 <= 1081 }
  // Read schedule : { load_to_input_to_gp_147_sm20_031_sm39_052[root = 0, input_ld6, input_ld5] -> [input_ld6, input_ld5, 1] : 0 <= input_ld6 <= 1081 and 0 <= input_ld5 <= 1081 }
  // Write schedule: { input_update_0_sm16_023_sm42_044[root = 0, input_0, input_1] -> [input_0, input_1, 0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1081 }
  auto value_input_input_update_0_sm16_023_sm42_044_8 = input.input_input_update_0_sm16_023_sm42_044_8_to_input_load_to_input_to_gp_147_sm20_031_sm39_052_1.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_sm16_023_sm42_044_8;
  return 0;
}

// # of bundles = 2
// input_update_0_sm16_023_sm42_044_write
//	input_input_update_0_sm16_023_sm42_044_8
inline void input_input_update_0_sm16_023_sm42_044_write_bundle_write(hw_uint<16>& input_update_0_sm16_023_sm42_044_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_update_0_sm16_023_sm42_044_8_res = input_update_0_sm16_023_sm42_044_write.extract<0, 15>();
	input_input_update_0_sm16_023_sm42_044_8_write(input_input_update_0_sm16_023_sm42_044_8_res, input, root, input_0, input_1, dynamic_address);
}

// load_to_input_to_gp_147_sm20_031_sm39_052_read
//	input_load_to_input_to_gp_147_sm20_031_sm39_052_1
inline hw_uint<16> input_load_to_input_to_gp_147_sm20_031_sm39_052_read_bundle_read(input_cache& input, int root, int input_ld6, int input_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // input_load_to_input_to_gp_147_sm20_031_sm39_052_1

	hw_uint<16> result;
	hw_uint<16> input_load_to_input_to_gp_147_sm20_031_sm39_052_1_res = input_load_to_input_to_gp_147_sm20_031_sm39_052_1_select(input, root, input_ld6, input_ld5, dynamic_address);
	set_at<0, 16>(result, input_load_to_input_to_gp_147_sm20_031_sm39_052_1_res);
	return result;
}

struct input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_merged_banks_3_cache {
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

struct input_FIFO_buf12_cache {
  // Reader addrs...
    // { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
    // { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
    // { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // # of banks: 1
  input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_merged_banks_3_cache input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_merged_banks_3;
};



inline void input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_write(hw_uint<16>& input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13, int dynamic_address) {
  input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_merged_banks_3.push(input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2);
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_11_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_11 read pattern: { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> [2 + blurx_0, blurx_1, 3] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf1215_sm22_035_sm37_046[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> [input_to_gp_14_ld14, input_to_gp_14_ld13, 2] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_merged_banks_3.peek_2164();
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_12_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_12 read pattern: { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> [2 + blurx_0, blurx_1, 3] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf1215_sm22_035_sm37_046[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> [input_to_gp_14_ld14, input_to_gp_14_ld13, 2] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_merged_banks_3.peek_1082();
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_13_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_13 read pattern: { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> [2 + blurx_0, blurx_1, 3] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf1215_sm22_035_sm37_046[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> [input_to_gp_14_ld14, input_to_gp_14_ld13, 2] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_merged_banks_3.peek_0();
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm17_025_sm41_054_read
//	input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_11
//	input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_12
//	input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_13
inline hw_uint<48> input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_read_bundle_read(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
  // # of ports in bundle: 3
    // input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_11
    // input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_12
    // input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_13

	hw_uint<48> result;
	hw_uint<16> input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_11_res = input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_11_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<0, 48>(result, input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_11_res);
	hw_uint<16> input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_12_res = input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_12_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<16, 48>(result, input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_12_res);
	hw_uint<16> input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_13_res = input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_13_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<32, 48>(result, input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_13_res);
	return result;
}

// load_to_input_FIFO_buf1215_sm22_035_sm37_046_write
//	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2
inline void input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_write_bundle_write(hw_uint<16>& load_to_input_FIFO_buf1215_sm22_035_sm37_046_write, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13, int dynamic_address) {
	hw_uint<16> input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_res = load_to_input_FIFO_buf1215_sm22_035_sm37_046_write.extract<0, 15>();
	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_write(input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_2_res, input_FIFO_buf12, root, input_to_gp_14_ld14, input_to_gp_14_ld13, dynamic_address);
}

struct input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_to_input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3_cache {
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

struct input_to_gp_14_cache {
  // Reader addrs...
    // { load_to_input_FIFO_buf1215_sm22_035_sm37_046[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> input_to_gp_14[input_to_gp_14_ld13, input_to_gp_14_ld14] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
  // # of banks: 1
  input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_to_input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3_cache input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_to_input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3;
};



inline void input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_write(hw_uint<16>& input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0, input_to_gp_14_cache& input_to_gp_14, int root, int input_ld6, int input_ld5, int dynamic_address) {
  input_to_gp_14.input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_to_input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3.push(input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0);
}

inline hw_uint<16> input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3_select(input_to_gp_14_cache& input_to_gp_14, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3 read pattern: { load_to_input_FIFO_buf1215_sm22_035_sm37_046[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> input_to_gp_14[input_to_gp_14_ld13, input_to_gp_14_ld14] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
  // Read schedule : { load_to_input_FIFO_buf1215_sm22_035_sm37_046[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> [input_to_gp_14_ld14, input_to_gp_14_ld13, 2] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
  // Write schedule: { load_to_input_to_gp_147_sm20_031_sm39_052[root = 0, input_ld6, input_ld5] -> [input_ld6, input_ld5, 1] : 0 <= input_ld6 <= 1081 and 0 <= input_ld5 <= 1081 }
  auto value_input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0 = input_to_gp_14.input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_to_input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3.peek(/* one reader or all rams */ 0);
  return value_input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0;
  return 0;
}

// # of bundles = 2
// load_to_input_FIFO_buf1215_sm22_035_sm37_046_read
//	input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3
inline hw_uint<16> input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_read_bundle_read(input_to_gp_14_cache& input_to_gp_14, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13, int dynamic_address) {
  // # of ports in bundle: 1
    // input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3

	hw_uint<16> result;
	hw_uint<16> input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3_res = input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3_select(input_to_gp_14, root, input_to_gp_14_ld14, input_to_gp_14_ld13, dynamic_address);
	set_at<0, 16>(result, input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_3_res);
	return result;
}

// load_to_input_to_gp_147_sm20_031_sm39_052_write
//	input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0
inline void input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_write_bundle_write(hw_uint<16>& load_to_input_to_gp_147_sm20_031_sm39_052_write, input_to_gp_14_cache& input_to_gp_14, int root, int input_ld6, int input_ld5, int dynamic_address) {
	hw_uint<16> input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_res = load_to_input_to_gp_147_sm20_031_sm39_052_write.extract<0, 15>();
	input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_write(input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_0_res, input_to_gp_14, root, input_ld6, input_ld5, dynamic_address);
}

// Total re-use buffer capacity: 34672 bits


// Operation logic
inline void load_to_input_to_gp_147_sm20_031_sm39_052(input_cache& input, input_to_gp_14_cache& input_to_gp_14, int root, int input_ld6, int input_ld5) {
  // Dynamic address computation

	// Consume: input
	auto input__lp_1_m__lp_1_m_input_ld5__p__0_rp___p__0_rp__c______input_ld6_value = input_load_to_input_to_gp_147_sm20_031_sm39_052_read_bundle_read(input/* source_delay */, root, input_ld6, input_ld5, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_to_gp_14
	input_to_gp_14_load_to_input_to_gp_147_sm20_031_sm39_052_write_bundle_write(/* arg names */input__lp_1_m__lp_1_m_input_ld5__p__0_rp___p__0_rp__c______input_ld6_value, input_to_gp_14, root, input_ld6, input_ld5, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_update_0_sm17_025_sm41_054(input_FIFO_buf12_cache& input_FIFO_buf12, blurx_cache& blurx, int root, int blurx_0, int blurx_1) {
  // Dynamic address computation

	// Consume: input_FIFO_buf12
	auto input_FIFO_buf12_1_m__lp_1_m__lp_1_m_blurx_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blurx_0__p__0_p_0_value = input_FIFO_buf12_blurx_update_0_sm17_025_sm41_054_read_bundle_read(input_FIFO_buf12/* source_delay */, root, blurx_0, blurx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_1(input_FIFO_buf12_1_m__lp_1_m__lp_1_m_blurx_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blurx_0__p__0_p_0_value);
	// Produce: blurx
	blurx_blurx_update_0_sm17_025_sm41_054_write_bundle_write(/* arg names */compute_result, blurx, root, blurx_0, blurx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_to_gp_003_sm19_029_sm43_056(blurx_cache& blurx, blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_ld2, int blurx_ld1) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx__lp_1_m__lp_1_m_blurx_ld1__p__0_rp___p__0_rp__c______blurx_ld2_value = blurx_load_to_blurx_to_gp_003_sm19_029_sm43_056_read_bundle_read(blurx/* source_delay */, root, blurx_ld2, blurx_ld1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_to_gp_00
	blurx_to_gp_00_load_to_blurx_to_gp_003_sm19_029_sm43_056_write_bundle_write(/* arg names */blurx__lp_1_m__lp_1_m_blurx_ld1__p__0_rp___p__0_rp__c______blurx_ld2_value, blurx_to_gp_00, root, blurx_ld2, blurx_ld1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_FIFO_buf1215_sm22_035_sm37_046(input_to_gp_14_cache& input_to_gp_14, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13) {
  // Dynamic address computation

	// Consume: input_to_gp_14
	auto input_to_gp_14__lp_1_m__lp_1_m_input_to_gp_14_ld13__p__0_rp___p__0_rp__c______input_to_gp_14_ld14_value = input_to_gp_14_load_to_input_FIFO_buf1215_sm22_035_sm37_046_read_bundle_read(input_to_gp_14/* source_delay */, root, input_to_gp_14_ld14, input_to_gp_14_ld13, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_FIFO_buf12
	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm22_035_sm37_046_write_bundle_write(/* arg names */input_to_gp_14__lp_1_m__lp_1_m_input_to_gp_14_ld13__p__0_rp___p__0_rp__c______input_to_gp_14_ld14_value, input_FIFO_buf12, root, input_to_gp_14_ld14, input_to_gp_14_ld13, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void input_update_0_sm16_023_sm42_044(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int root, int input_0, int input_1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_1_m__lp_1_m_input_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_1_m__lp_1_m__lp_1_m_input_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_update_0_sm16_023_sm42_044_write_bundle_write(/* arg names */compute_result, input, root, input_0, input_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_FIFO_buf811_sm21_033_sm40_048(blurx_to_gp_00_cache& blurx_to_gp_00, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9) {
  // Dynamic address computation

	// Consume: blurx_to_gp_00
	auto blurx_to_gp_00__lp_1_m__lp_1_m_blurx_to_gp_00_ld9__p__0_rp___p__0_rp__c______blurx_to_gp_00_ld10_value = blurx_to_gp_00_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_read_bundle_read(blurx_to_gp_00/* source_delay */, root, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_FIFO_buf8
	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm21_033_sm40_048_write_bundle_write(/* arg names */blurx_to_gp_00__lp_1_m__lp_1_m_blurx_to_gp_00_ld9__p__0_rp___p__0_rp__c______blurx_to_gp_00_ld10_value, blurx_FIFO_buf8, root, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur3_1_update_0_sm18_027_sm38_050(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blur3_1, int root, int blur3_1_0, int blur3_1_1) {
  // Dynamic address computation

	// Consume: blurx_FIFO_buf8
	auto blurx_FIFO_buf8_1_m__lp_1_m__lp_1_m_blur3_1_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blur3_1_0__p__0_p_0_value = blurx_FIFO_buf8_blur3_1_update_0_sm18_027_sm38_050_read_bundle_read(blurx_FIFO_buf8/* source_delay */, root, blur3_1_0, blur3_1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blur3_1_generated_compute_unrolled_1(blurx_FIFO_buf8_1_m__lp_1_m__lp_1_m_blur3_1_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blur3_1_0__p__0_p_0_value);
	// Produce: blur3_1
	blur3_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void blur3_1_opt_d32(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur3_1_opt_d32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blurx_FIFO_buf8_cache blurx_FIFO_buf8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blurx_to_gp_00_cache blurx_to_gp_00;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_FIFO_buf12_cache input_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_to_gp_14_cache input_to_gp_14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_input_FIFO_buf1215_sm22_035_sm37_046[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> [input_to_gp_14_ld14, input_to_gp_14_ld13, 2] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081; load_to_blurx_FIFO_buf811_sm21_033_sm40_048[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> [2 + blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, 5] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081; load_to_input_to_gp_147_sm20_031_sm39_052[root = 0, input_ld6, input_ld5] -> [input_ld6, input_ld5, 1] : 0 <= input_ld6 <= 1081 and 0 <= input_ld5 <= 1081; input_update_0_sm16_023_sm42_044[root = 0, input_0, input_1] -> [input_0, input_1, 0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1081; blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> [2 + blurx_0, blurx_1, 3] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081; blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> [2 + blur3_1_0, 2 + blur3_1_1, 6] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079; load_to_blurx_to_gp_003_sm19_029_sm43_056[root = 0, blurx_ld2, blurx_ld1] -> [2 + blurx_ld2, blurx_ld1, 4] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1081 }
//   { load_to_input_FIFO_buf1215_sm22_035_sm37_046[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> [input_to_gp_14_ld14, input_to_gp_14_ld13, 2] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
// Condition for load_to_input_FIFO_buf1215_sm22_035_sm37_046(((((-2 + 1*i2)) == 0) && (((1*i0)) >= 0) && (((1081 + -1*i0)) >= 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0)))
//   { load_to_blurx_FIFO_buf811_sm21_033_sm40_048[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> [2 + blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, 5] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
// Condition for load_to_blurx_FIFO_buf811_sm21_033_sm40_048(((((-5 + 1*i2)) == 0) && (((-2 + 1*i0)) >= 0) && (((1081 + -1*i0)) >= 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0)))
//   { load_to_input_to_gp_147_sm20_031_sm39_052[root = 0, input_ld6, input_ld5] -> [input_ld6, input_ld5, 1] : 0 <= input_ld6 <= 1081 and 0 <= input_ld5 <= 1081 }
// Condition for load_to_input_to_gp_147_sm20_031_sm39_052(((((-1 + 1*i2)) == 0) && (((1*i0)) >= 0) && (((1081 + -1*i0)) >= 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0)))
//   { input_update_0_sm16_023_sm42_044[root = 0, input_0, input_1] -> [input_0, input_1, 0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1081 }
// Condition for input_update_0_sm16_023_sm42_044(((((1*i2)) == 0) && (((1*i0)) >= 0) && (((1081 + -1*i0)) >= 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0)))
//   { blurx_update_0_sm17_025_sm41_054[root = 0, blurx_0, blurx_1] -> [2 + blurx_0, blurx_1, 3] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
// Condition for blurx_update_0_sm17_025_sm41_054(((((-3 + 1*i2)) == 0) && (((-2 + 1*i0)) >= 0) && (((1081 + -1*i0)) >= 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0)))
//   { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> [2 + blur3_1_0, 2 + blur3_1_1, 6] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
// Condition for blur3_1_update_0_sm18_027_sm38_050(((((-6 + 1*i2)) == 0) && (((-2 + 1*i0)) >= 0) && (((1081 + -1*i0)) >= 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0)))
//   { load_to_blurx_to_gp_003_sm19_029_sm43_056[root = 0, blurx_ld2, blurx_ld1] -> [2 + blurx_ld2, blurx_ld1, 4] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1081 }
// Condition for load_to_blurx_to_gp_003_sm19_029_sm43_056(((((-4 + 1*i2)) == 0) && (((-2 + 1*i0)) >= 0) && (((1081 + -1*i0)) >= 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0)))

	// time range: { [i0, i1, i2] : 0 <= i0 <= 1081 and 0 <= i1 <= 1081 and 0 <= i2 <= 5 and ((i0 >= 2 and i2 >= 3) or i2 <= 2); [i0, i1, 6] : 2 <= i0 <= 1081 and 2 <= i1 <= 1081 }
	// # sets: 1
	for (int i0 = 0; i0 <= 1081; i0++) {
	  for (int i1 = 0; i1 <= 1081; i1++) {
	#pragma HLS pipeline II=1
	      // { [i0, i1] }
	      // { [i0, i1] :  }
	      if ((true)) {
	        input_update_0_sm16_023_sm42_044(input_arg /* buf name */, input, 0, ((1*i0)), ((1*i1)));
	      }
	      // { [i0, i1] }
	      // { [i0, i1] :  }
	      if ((true)) {
	        load_to_input_to_gp_147_sm20_031_sm39_052(input /* buf name */, input_to_gp_14, 0, ((1*i0)), ((1*i1)));
	      }
	      // { [i0, i1] }
	      // { [i0, i1] :  }
	      if ((true)) {
	        load_to_input_FIFO_buf1215_sm22_035_sm37_046(input_to_gp_14 /* buf name */, input_FIFO_buf12, 0, ((1*i0)), ((1*i1)));
	      }
	      // { [i0, i1] : i0 >= 2 }
	      // { [i0, i1] : i0 >= 2 }
	        // { [i0, i1] : -2 + i0 >= 0 }
	      if ((((((-2 + 1*i0)) >= 0)))) {
	        blurx_update_0_sm17_025_sm41_054(input_FIFO_buf12 /* buf name */, blurx, 0, ((-2 + 1*i0)), ((1*i1)));
	      }
	      // { [i0, i1] : i0 >= 2 }
	      // { [i0, i1] : i0 >= 2 }
	        // { [i0, i1] : -2 + i0 >= 0 }
	      if ((((((-2 + 1*i0)) >= 0)))) {
	        load_to_blurx_to_gp_003_sm19_029_sm43_056(blurx /* buf name */, blurx_to_gp_00, 0, ((-2 + 1*i0)), ((1*i1)));
	      }
	      // { [i0, i1] : i0 >= 2 }
	      // { [i0, i1] : i0 >= 2 }
	        // { [i0, i1] : -2 + i0 >= 0 }
	      if ((((((-2 + 1*i0)) >= 0)))) {
	        load_to_blurx_FIFO_buf811_sm21_033_sm40_048(blurx_to_gp_00 /* buf name */, blurx_FIFO_buf8, 0, ((-2 + 1*i0)), ((1*i1)));
	      }
	      // { [i0, i1] : i0 >= 2 and i1 >= 2 }
	      // { [i0, i1] : i0 >= 2 and i1 >= 2 }
	        // { [i0, i1] : -2 + i0 >= 0 }
	        // { [i0, i1] : -2 + i1 >= 0 }
	      if ((((((-2 + 1*i0)) >= 0) && (((-2 + 1*i1)) >= 0)))) {
	        blur3_1_update_0_sm18_027_sm38_050(blurx_FIFO_buf8 /* buf name */, blur3_1, 0, ((-2 + 1*i0)), ((-2 + 1*i1)));
	      }
	    }
	  }
	
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
  // { blur3_1_update_0_sm18_027_sm38_050[root = 0, blur3_1_0, blur3_1_1] -> blur3_1[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
const int blur3_1_update_0_sm18_027_sm38_050_write_pipe0_num_transfers = 1166400;
  // { input_update_0_sm16_023_sm42_044[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1081 }
const int input_update_0_sm16_023_sm42_044_read_pipe0_num_transfers = 1170724;


extern "C" {

void blur3_1_opt_d32_accel(hw_uint<16>* input_update_0_sm16_023_sm42_044_read_pipe0, hw_uint<16>* blur3_1_update_0_sm18_027_sm38_050_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_sm16_023_sm42_044_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blur3_1_update_0_sm18_027_sm38_050_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_sm16_023_sm42_044_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blur3_1_update_0_sm18_027_sm38_050_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_sm16_023_sm42_044_read_pipe0_channel;
  static HWStream<hw_uint<16> > blur3_1_update_0_sm18_027_sm38_050_write_pipe0_channel;

  burst_read<16>(input_update_0_sm16_023_sm42_044_read_pipe0, input_update_0_sm16_023_sm42_044_read_pipe0_channel, input_update_0_sm16_023_sm42_044_read_pipe0_num_transfers*size);

  blur3_1_opt_d32_wrapper(input_update_0_sm16_023_sm42_044_read_pipe0_channel, blur3_1_update_0_sm18_027_sm38_050_write_pipe0_channel, size);

  burst_write<16>(blur3_1_update_0_sm18_027_sm38_050_write_pipe0, blur3_1_update_0_sm18_027_sm38_050_write_pipe0_channel, blur3_1_update_0_sm18_027_sm38_050_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blur3_1_opt_d32_rdai(HWStream<hw_uint<16> >& input_update_0_sm16_023_sm42_044_read_pipe0, HWStream<hw_uint<16> >&  blur3_1_update_0_sm18_027_sm38_050_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_sm16_023_sm42_044_read_pipe0
#pragma HLS INTERFACE axis register port = blur3_1_update_0_sm18_027_sm38_050_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blur3_1_opt_d32(input_update_0_sm16_023_sm42_044_read_pipe0, blur3_1_update_0_sm18_027_sm38_050_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

