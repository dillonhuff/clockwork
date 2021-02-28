#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blur3_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blur3_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurx_blurx_update_0_sm17_025_sm86_0124_34_to_blurx_load_to_blurx_to_gp_23740_sm93_0138_17_cache {
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
    // { load_to_blurx_to_gp_23740_sm93_0138[root = 0, blurx_ld39, blurx_ld38] -> blurx[blurx_ld38, blurx_ld39] : 0 <= blurx_ld39 <= 1079 and 0 <= blurx_ld38 <= 1081 }
  // # of banks: 1
  blurx_blurx_update_0_sm17_025_sm86_0124_34_to_blurx_load_to_blurx_to_gp_23740_sm93_0138_17_cache blurx_blurx_update_0_sm17_025_sm86_0124_34_to_blurx_load_to_blurx_to_gp_23740_sm93_0138_17;
};



inline void blurx_blurx_update_0_sm17_025_sm86_0124_34_write(hw_uint<16>& blurx_blurx_update_0_sm17_025_sm86_0124_34, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_update_0_sm17_025_sm86_0124_34_to_blurx_load_to_blurx_to_gp_23740_sm93_0138_17.push(blurx_blurx_update_0_sm17_025_sm86_0124_34);
}

inline hw_uint<16> blurx_load_to_blurx_to_gp_23740_sm93_0138_17_select(blurx_cache& blurx, int root, int blurx_ld39, int blurx_ld38, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_load_to_blurx_to_gp_23740_sm93_0138_17 read pattern: { load_to_blurx_to_gp_23740_sm93_0138[root = 0, blurx_ld39, blurx_ld38] -> blurx[blurx_ld38, blurx_ld39] : 0 <= blurx_ld39 <= 1079 and 0 <= blurx_ld38 <= 1081 }
  // Read schedule : { load_to_blurx_to_gp_23740_sm93_0138[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { blurx_update_0_sm17_025_sm86_0124[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_blurx_update_0_sm17_025_sm86_0124_34 = blurx.blurx_blurx_update_0_sm17_025_sm86_0124_34_to_blurx_load_to_blurx_to_gp_23740_sm93_0138_17.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_update_0_sm17_025_sm86_0124_34;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm17_025_sm86_0124_write
//	blurx_blurx_update_0_sm17_025_sm86_0124_34
inline void blurx_blurx_update_0_sm17_025_sm86_0124_write_bundle_write(hw_uint<16>& blurx_update_0_sm17_025_sm86_0124_write, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_sm17_025_sm86_0124_34_res = blurx_update_0_sm17_025_sm86_0124_write.extract<0, 15>();
	blurx_blurx_update_0_sm17_025_sm86_0124_34_write(blurx_blurx_update_0_sm17_025_sm86_0124_34_res, blurx, root, blurx_0, blurx_1, dynamic_address);
}

// load_to_blurx_to_gp_23740_sm93_0138_read
//	blurx_load_to_blurx_to_gp_23740_sm93_0138_17
inline hw_uint<16> blurx_load_to_blurx_to_gp_23740_sm93_0138_read_bundle_read(blurx_cache& blurx, int root, int blurx_ld39, int blurx_ld38, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_load_to_blurx_to_gp_23740_sm93_0138_17

	hw_uint<16> result;
	hw_uint<16> blurx_load_to_blurx_to_gp_23740_sm93_0138_17_res = blurx_load_to_blurx_to_gp_23740_sm93_0138_17_select(blurx, root, blurx_ld39, blurx_ld38, dynamic_address);
	set_at<0, 16>(result, blurx_load_to_blurx_to_gp_23740_sm93_0138_17_res);
	return result;
}

struct blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_to_blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23_cache {
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

struct blurx_FIFO_buf61_cache {
  // Reader addrs...
    // { load_to_blurx_to_gp_003_sm21_033_sm90_0132[root = 0, blurx_ld2, blurx_ld1] -> blurx_FIFO_buf61[blurx_ld1, blurx_ld2] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1081 }
  // # of banks: 1
  blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_to_blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23_cache blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_to_blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23;
};



inline void blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_write(hw_uint<16>& blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30, blurx_FIFO_buf61_cache& blurx_FIFO_buf61, int root, int blurx_to_gp_237_ld63, int blurx_to_gp_237_ld62, int dynamic_address) {
  blurx_FIFO_buf61.blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_to_blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23.push(blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30);
}

inline hw_uint<16> blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23_select(blurx_FIFO_buf61_cache& blurx_FIFO_buf61, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23 read pattern: { load_to_blurx_to_gp_003_sm21_033_sm90_0132[root = 0, blurx_ld2, blurx_ld1] -> blurx_FIFO_buf61[blurx_ld1, blurx_ld2] : 0 <= blurx_ld2 <= 1079 and 0 <= blurx_ld1 <= 1081 }
  // Read schedule : { load_to_blurx_to_gp_003_sm21_033_sm90_0132[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_blurx_FIFO_buf6164_sm97_0114[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 11] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30 = blurx_FIFO_buf61.blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_to_blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23.peek(/* one reader or all rams */ 0);
  return value_blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30;
  return 0;
}

// # of bundles = 2
// load_to_blurx_FIFO_buf6164_sm97_0114_write
//	blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30
inline void blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_write_bundle_write(hw_uint<16>& load_to_blurx_FIFO_buf6164_sm97_0114_write, blurx_FIFO_buf61_cache& blurx_FIFO_buf61, int root, int blurx_to_gp_237_ld63, int blurx_to_gp_237_ld62, int dynamic_address) {
	hw_uint<16> blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_res = load_to_blurx_FIFO_buf6164_sm97_0114_write.extract<0, 15>();
	blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_write(blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_30_res, blurx_FIFO_buf61, root, blurx_to_gp_237_ld63, blurx_to_gp_237_ld62, dynamic_address);
}

// load_to_blurx_to_gp_003_sm21_033_sm90_0132_read
//	blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23
inline hw_uint<16> blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_read_bundle_read(blurx_FIFO_buf61_cache& blurx_FIFO_buf61, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23

	hw_uint<16> result;
	hw_uint<16> blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23_res = blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23_select(blurx_FIFO_buf61, root, blurx_ld2, blurx_ld1, dynamic_address);
	set_at<0, 16>(result, blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_23_res);
	return result;
}

struct blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_to_blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25_cache {
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

struct blurx_FIFO_buf8_cache {
  // Reader addrs...
    // { load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106[root = 0, blurx_FIFO_buf8_ld43, blurx_FIFO_buf8_ld42] -> blurx_FIFO_buf8[blurx_FIFO_buf8_ld42, blurx_FIFO_buf8_ld43] : 0 <= blurx_FIFO_buf8_ld43 <= 1079 and 0 <= blurx_FIFO_buf8_ld42 <= 1081 }
  // # of banks: 1
  blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_to_blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25_cache blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_to_blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25;
};



inline void blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_write(hw_uint<16>& blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9, int dynamic_address) {
  blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_to_blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25.push(blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28);
}

inline hw_uint<16> blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25_select(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_FIFO_buf8_ld43, int blurx_FIFO_buf8_ld42, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25 read pattern: { load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106[root = 0, blurx_FIFO_buf8_ld43, blurx_FIFO_buf8_ld42] -> blurx_FIFO_buf8[blurx_FIFO_buf8_ld42, blurx_FIFO_buf8_ld43] : 0 <= blurx_FIFO_buf8_ld43 <= 1079 and 0 <= blurx_FIFO_buf8_ld42 <= 1081 }
  // Read schedule : { load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_blurx_FIFO_buf811_sm19_029_sm88_0128[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28 = blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_to_blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25.peek(/* one reader or all rams */ 0);
  return value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28;
  return 0;
}

// # of bundles = 2
// load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_write
//	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28
inline void blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_write_bundle_write(hw_uint<16>& load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_write, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9, int dynamic_address) {
	hw_uint<16> blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_res = load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_write.extract<0, 15>();
	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_write(blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_28_res, blurx_FIFO_buf8, root, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, dynamic_address);
}

// load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_read
//	blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25
inline hw_uint<16> blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_read_bundle_read(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_FIFO_buf8_ld43, int blurx_FIFO_buf8_ld42, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25

	hw_uint<16> result;
	hw_uint<16> blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25_res = blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25_select(blurx_FIFO_buf8, root, blurx_FIFO_buf8_ld43, blurx_FIFO_buf8_ld42, dynamic_address);
	set_at<0, 16>(result, blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_25_res);
	return result;
}

struct blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39_cache {
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

struct blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40_cache {
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

struct blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41_cache {
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

struct blurx_FIFO_buf8_FIFO_buf65_cache {
  // Reader addrs...
    // { blur3_1_update_0_sm18_027_sm87_0126[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8_FIFO_buf65[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
    // { blur3_1_update_0_sm18_027_sm87_0126[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8_FIFO_buf65[1 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
    // { blur3_1_update_0_sm18_027_sm87_0126[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8_FIFO_buf65[2 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // # of banks: 3
  blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39_cache blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39;
  blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40_cache blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40;
  blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41_cache blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41;
};



inline void blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_write(hw_uint<16>& blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26, blurx_FIFO_buf8_FIFO_buf65_cache& blurx_FIFO_buf8_FIFO_buf65, int root, int blurx_FIFO_buf8_to_gp_041_ld67, int blurx_FIFO_buf8_to_gp_041_ld66, int dynamic_address) {
  blurx_FIFO_buf8_FIFO_buf65.blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39.push(blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26);
  blurx_FIFO_buf8_FIFO_buf65.blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40.push(blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26);
  blurx_FIFO_buf8_FIFO_buf65.blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41.push(blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26);
}

inline hw_uint<16> blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39_select(blurx_FIFO_buf8_FIFO_buf65_cache& blurx_FIFO_buf8_FIFO_buf65, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39 read pattern: { blur3_1_update_0_sm18_027_sm87_0126[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8_FIFO_buf65[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm18_027_sm87_0126[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26 = blurx_FIFO_buf8_FIFO_buf65.blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39.peek(/* one reader or all rams */ 2);
  return value_blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40_select(blurx_FIFO_buf8_FIFO_buf65_cache& blurx_FIFO_buf8_FIFO_buf65, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40 read pattern: { blur3_1_update_0_sm18_027_sm87_0126[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8_FIFO_buf65[1 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm18_027_sm87_0126[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26 = blurx_FIFO_buf8_FIFO_buf65.blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40.peek(/* one reader or all rams */ 1);
  return value_blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41_select(blurx_FIFO_buf8_FIFO_buf65_cache& blurx_FIFO_buf8_FIFO_buf65, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41 read pattern: { blur3_1_update_0_sm18_027_sm87_0126[root = 0, blur3_1_0, blur3_1_1] -> blurx_FIFO_buf8_FIFO_buf65[2 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm18_027_sm87_0126[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26 = blurx_FIFO_buf8_FIFO_buf65.blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_to_blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41.peek(/* one reader or all rams */ 0);
  return value_blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26;
  return 0;
}

// # of bundles = 2
// blur3_1_update_0_sm18_027_sm87_0126_read
//	blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39
//	blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40
//	blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41
inline hw_uint<48> blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_read_bundle_read(blurx_FIFO_buf8_FIFO_buf65_cache& blurx_FIFO_buf8_FIFO_buf65, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
  // # of ports in bundle: 3
    // blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39
    // blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40
    // blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41

	hw_uint<48> result;
	hw_uint<16> blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39_res = blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39_select(blurx_FIFO_buf8_FIFO_buf65, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<0, 48>(result, blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_39_res);
	hw_uint<16> blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40_res = blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40_select(blurx_FIFO_buf8_FIFO_buf65, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<16, 48>(result, blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_40_res);
	hw_uint<16> blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41_res = blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41_select(blurx_FIFO_buf8_FIFO_buf65, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<32, 48>(result, blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_41_res);
	return result;
}

// load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_write
//	blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26
inline void blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_write_bundle_write(hw_uint<16>& load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_write, blurx_FIFO_buf8_FIFO_buf65_cache& blurx_FIFO_buf8_FIFO_buf65, int root, int blurx_FIFO_buf8_to_gp_041_ld67, int blurx_FIFO_buf8_to_gp_041_ld66, int dynamic_address) {
	hw_uint<16> blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_res = load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_write.extract<0, 15>();
	blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_write(blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_26_res, blurx_FIFO_buf8_FIFO_buf65, root, blurx_FIFO_buf8_to_gp_041_ld67, blurx_FIFO_buf8_to_gp_041_ld66, dynamic_address);
}

struct blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_to_blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19_cache {
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
    // { load_to_blurx_to_gp_00_to_gp_34548_sm94_0140[root = 0, blurx_to_gp_00_ld47, blurx_to_gp_00_ld46] -> blurx_to_gp_00[blurx_to_gp_00_ld46, blurx_to_gp_00_ld47] : 0 <= blurx_to_gp_00_ld47 <= 1079 and 0 <= blurx_to_gp_00_ld46 <= 1081 }
  // # of banks: 1
  blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_to_blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19_cache blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_to_blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19;
};



inline void blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_write(hw_uint<16>& blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22, blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
  blurx_to_gp_00.blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_to_blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19.push(blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22);
}

inline hw_uint<16> blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19_select(blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_to_gp_00_ld47, int blurx_to_gp_00_ld46, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19 read pattern: { load_to_blurx_to_gp_00_to_gp_34548_sm94_0140[root = 0, blurx_to_gp_00_ld47, blurx_to_gp_00_ld46] -> blurx_to_gp_00[blurx_to_gp_00_ld46, blurx_to_gp_00_ld47] : 0 <= blurx_to_gp_00_ld47 <= 1079 and 0 <= blurx_to_gp_00_ld46 <= 1081 }
  // Read schedule : { load_to_blurx_to_gp_00_to_gp_34548_sm94_0140[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_blurx_to_gp_003_sm21_033_sm90_0132[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22 = blurx_to_gp_00.blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_to_blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19.peek(/* one reader or all rams */ 0);
  return value_blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22;
  return 0;
}

// # of bundles = 2
// load_to_blurx_to_gp_003_sm21_033_sm90_0132_write
//	blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22
inline void blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_write_bundle_write(hw_uint<16>& load_to_blurx_to_gp_003_sm21_033_sm90_0132_write, blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
	hw_uint<16> blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_res = load_to_blurx_to_gp_003_sm21_033_sm90_0132_write.extract<0, 15>();
	blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_write(blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_22_res, blurx_to_gp_00, root, blurx_ld2, blurx_ld1, dynamic_address);
}

// load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_read
//	blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19
inline hw_uint<16> blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_read_bundle_read(blurx_to_gp_00_cache& blurx_to_gp_00, int root, int blurx_to_gp_00_ld47, int blurx_to_gp_00_ld46, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19

	hw_uint<16> result;
	hw_uint<16> blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19_res = blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19_select(blurx_to_gp_00, root, blurx_to_gp_00_ld47, blurx_to_gp_00_ld46, dynamic_address);
	set_at<0, 16>(result, blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_19_res);
	return result;
}

struct blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_to_blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29_cache {
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

struct blurx_to_gp_00_FIFO_buf69_cache {
  // Reader addrs...
    // { load_to_blurx_FIFO_buf811_sm19_029_sm88_0128[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> blurx_to_gp_00_FIFO_buf69[blurx_to_gp_00_ld9, blurx_to_gp_00_ld10] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
  // # of banks: 1
  blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_to_blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29_cache blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_to_blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29;
};



inline void blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_write(hw_uint<16>& blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20, blurx_to_gp_00_FIFO_buf69_cache& blurx_to_gp_00_FIFO_buf69, int root, int blurx_to_gp_00_to_gp_345_ld71, int blurx_to_gp_00_to_gp_345_ld70, int dynamic_address) {
  blurx_to_gp_00_FIFO_buf69.blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_to_blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29.push(blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20);
}

inline hw_uint<16> blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29_select(blurx_to_gp_00_FIFO_buf69_cache& blurx_to_gp_00_FIFO_buf69, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29 read pattern: { load_to_blurx_FIFO_buf811_sm19_029_sm88_0128[root = 0, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9] -> blurx_to_gp_00_FIFO_buf69[blurx_to_gp_00_ld9, blurx_to_gp_00_ld10] : 0 <= blurx_to_gp_00_ld10 <= 1079 and 0 <= blurx_to_gp_00_ld9 <= 1081 }
  // Read schedule : { load_to_blurx_FIFO_buf811_sm19_029_sm88_0128[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 14] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20 = blurx_to_gp_00_FIFO_buf69.blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_to_blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29.peek(/* one reader or all rams */ 0);
  return value_blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20;
  return 0;
}

// # of bundles = 2
// load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_read
//	blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29
inline hw_uint<16> blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_read_bundle_read(blurx_to_gp_00_FIFO_buf69_cache& blurx_to_gp_00_FIFO_buf69, int root, int blurx_to_gp_00_ld10, int blurx_to_gp_00_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29

	hw_uint<16> result;
	hw_uint<16> blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29_res = blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29_select(blurx_to_gp_00_FIFO_buf69, root, blurx_to_gp_00_ld10, blurx_to_gp_00_ld9, dynamic_address);
	set_at<0, 16>(result, blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_29_res);
	return result;
}

// load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_write
//	blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20
inline void blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_write_bundle_write(hw_uint<16>& load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_write, blurx_to_gp_00_FIFO_buf69_cache& blurx_to_gp_00_FIFO_buf69, int root, int blurx_to_gp_00_to_gp_345_ld71, int blurx_to_gp_00_to_gp_345_ld70, int dynamic_address) {
	hw_uint<16> blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_res = load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_write.extract<0, 15>();
	blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_write(blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_20_res, blurx_to_gp_00_FIFO_buf69, root, blurx_to_gp_00_to_gp_345_ld71, blurx_to_gp_00_to_gp_345_ld70, dynamic_address);
}

struct input_input_update_0_sm16_023_sm85_0122_32_to_input_load_to_input_to_gp_54952_sm101_0108_1_cache {
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
    // { load_to_input_to_gp_54952_sm101_0108[root = 0, input_ld51, input_ld50] -> input[input_ld50, input_ld51] : 0 <= input_ld51 <= 1081 and 0 <= input_ld50 <= 1081 }
  // # of banks: 1
  input_input_update_0_sm16_023_sm85_0122_32_to_input_load_to_input_to_gp_54952_sm101_0108_1_cache input_input_update_0_sm16_023_sm85_0122_32_to_input_load_to_input_to_gp_54952_sm101_0108_1;
};



inline void input_input_update_0_sm16_023_sm85_0122_32_write(hw_uint<16>& input_input_update_0_sm16_023_sm85_0122_32, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_update_0_sm16_023_sm85_0122_32_to_input_load_to_input_to_gp_54952_sm101_0108_1.push(input_input_update_0_sm16_023_sm85_0122_32);
}

inline hw_uint<16> input_load_to_input_to_gp_54952_sm101_0108_1_select(input_cache& input, int root, int input_ld51, int input_ld50, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_load_to_input_to_gp_54952_sm101_0108_1 read pattern: { load_to_input_to_gp_54952_sm101_0108[root = 0, input_ld51, input_ld50] -> input[input_ld50, input_ld51] : 0 <= input_ld51 <= 1081 and 0 <= input_ld50 <= 1081 }
  // Read schedule : { load_to_input_to_gp_54952_sm101_0108[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { input_update_0_sm16_023_sm85_0122[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_input_update_0_sm16_023_sm85_0122_32 = input.input_input_update_0_sm16_023_sm85_0122_32_to_input_load_to_input_to_gp_54952_sm101_0108_1.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_sm16_023_sm85_0122_32;
  return 0;
}

// # of bundles = 2
// input_update_0_sm16_023_sm85_0122_write
//	input_input_update_0_sm16_023_sm85_0122_32
inline void input_input_update_0_sm16_023_sm85_0122_write_bundle_write(hw_uint<16>& input_update_0_sm16_023_sm85_0122_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_update_0_sm16_023_sm85_0122_32_res = input_update_0_sm16_023_sm85_0122_write.extract<0, 15>();
	input_input_update_0_sm16_023_sm85_0122_32_write(input_input_update_0_sm16_023_sm85_0122_32_res, input, root, input_0, input_1, dynamic_address);
}

// load_to_input_to_gp_54952_sm101_0108_read
//	input_load_to_input_to_gp_54952_sm101_0108_1
inline hw_uint<16> input_load_to_input_to_gp_54952_sm101_0108_read_bundle_read(input_cache& input, int root, int input_ld51, int input_ld50, int dynamic_address) {
  // # of ports in bundle: 1
    // input_load_to_input_to_gp_54952_sm101_0108_1

	hw_uint<16> result;
	hw_uint<16> input_load_to_input_to_gp_54952_sm101_0108_1_res = input_load_to_input_to_gp_54952_sm101_0108_1_select(input, root, input_ld51, input_ld50, dynamic_address);
	set_at<0, 16>(result, input_load_to_input_to_gp_54952_sm101_0108_1_res);
	return result;
}

struct input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_to_input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11_cache {
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

struct input_FIFO_buf12_cache {
  // Reader addrs...
    // { load_to_input_FIFO_buf12_to_gp_15356_sm95_0112[root = 0, input_FIFO_buf12_ld55, input_FIFO_buf12_ld54] -> input_FIFO_buf12[input_FIFO_buf12_ld54, input_FIFO_buf12_ld55] : 0 <= input_FIFO_buf12_ld55 <= 1081 and 0 <= input_FIFO_buf12_ld54 <= 1081 }
  // # of banks: 1
  input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_to_input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11_cache input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_to_input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11;
};



inline void input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_write(hw_uint<16>& input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13, int dynamic_address) {
  input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_to_input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11.push(input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14);
}

inline hw_uint<16> input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_FIFO_buf12_ld55, int input_FIFO_buf12_ld54, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11 read pattern: { load_to_input_FIFO_buf12_to_gp_15356_sm95_0112[root = 0, input_FIFO_buf12_ld55, input_FIFO_buf12_ld54] -> input_FIFO_buf12[input_FIFO_buf12_ld54, input_FIFO_buf12_ld55] : 0 <= input_FIFO_buf12_ld55 <= 1081 and 0 <= input_FIFO_buf12_ld54 <= 1081 }
  // Read schedule : { load_to_input_FIFO_buf12_to_gp_15356_sm95_0112[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf1215_sm20_031_sm89_0130[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_to_input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11.peek(/* one reader or all rams */ 0);
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14;
  return 0;
}

// # of bundles = 2
// load_to_input_FIFO_buf1215_sm20_031_sm89_0130_write
//	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14
inline void input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_write_bundle_write(hw_uint<16>& load_to_input_FIFO_buf1215_sm20_031_sm89_0130_write, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13, int dynamic_address) {
	hw_uint<16> input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_res = load_to_input_FIFO_buf1215_sm20_031_sm89_0130_write.extract<0, 15>();
	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_write(input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_14_res, input_FIFO_buf12, root, input_to_gp_14_ld14, input_to_gp_14_ld13, dynamic_address);
}

// load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_read
//	input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11
inline hw_uint<16> input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_read_bundle_read(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_FIFO_buf12_ld55, int input_FIFO_buf12_ld54, int dynamic_address) {
  // # of ports in bundle: 1
    // input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11

	hw_uint<16> result;
	hw_uint<16> input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11_res = input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11_select(input_FIFO_buf12, root, input_FIFO_buf12_ld55, input_FIFO_buf12_ld54, dynamic_address);
	set_at<0, 16>(result, input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_11_res);
	return result;
}

struct input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_merged_banks_3_cache {
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

struct input_FIFO_buf12_FIFO_buf77_cache {
  // Reader addrs...
    // { blurx_update_0_sm17_025_sm86_0124[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12_FIFO_buf77[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
    // { blurx_update_0_sm17_025_sm86_0124[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12_FIFO_buf77[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
    // { blurx_update_0_sm17_025_sm86_0124[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12_FIFO_buf77[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // # of banks: 1
  input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_merged_banks_3_cache input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_merged_banks_3;
};



inline void input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_write(hw_uint<16>& input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12, input_FIFO_buf12_FIFO_buf77_cache& input_FIFO_buf12_FIFO_buf77, int root, int input_FIFO_buf12_to_gp_153_ld79, int input_FIFO_buf12_to_gp_153_ld78, int dynamic_address) {
  input_FIFO_buf12_FIFO_buf77.input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_merged_banks_3.push(input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12);
}

inline hw_uint<16> input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_35_select(input_FIFO_buf12_FIFO_buf77_cache& input_FIFO_buf12_FIFO_buf77, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_35 read pattern: { blurx_update_0_sm17_025_sm86_0124[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12_FIFO_buf77[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm17_025_sm86_0124[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12 = input_FIFO_buf12_FIFO_buf77.input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_merged_banks_3.peek_2164();
  return value_input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12;
  return 0;
}

inline hw_uint<16> input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_36_select(input_FIFO_buf12_FIFO_buf77_cache& input_FIFO_buf12_FIFO_buf77, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_36 read pattern: { blurx_update_0_sm17_025_sm86_0124[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12_FIFO_buf77[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm17_025_sm86_0124[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12 = input_FIFO_buf12_FIFO_buf77.input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_merged_banks_3.peek_1082();
  return value_input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12;
  return 0;
}

inline hw_uint<16> input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_37_select(input_FIFO_buf12_FIFO_buf77_cache& input_FIFO_buf12_FIFO_buf77, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_37 read pattern: { blurx_update_0_sm17_025_sm86_0124[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12_FIFO_buf77[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm17_025_sm86_0124[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12 = input_FIFO_buf12_FIFO_buf77.input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_merged_banks_3.peek_0();
  return value_input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm17_025_sm86_0124_read
//	input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_35
//	input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_36
//	input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_37
inline hw_uint<48> input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_read_bundle_read(input_FIFO_buf12_FIFO_buf77_cache& input_FIFO_buf12_FIFO_buf77, int root, int blurx_0, int blurx_1, int dynamic_address) {
  // # of ports in bundle: 3
    // input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_35
    // input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_36
    // input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_37

	hw_uint<48> result;
	hw_uint<16> input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_35_res = input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_35_select(input_FIFO_buf12_FIFO_buf77, root, blurx_0, blurx_1, dynamic_address);
	set_at<0, 48>(result, input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_35_res);
	hw_uint<16> input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_36_res = input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_36_select(input_FIFO_buf12_FIFO_buf77, root, blurx_0, blurx_1, dynamic_address);
	set_at<16, 48>(result, input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_36_res);
	hw_uint<16> input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_37_res = input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_37_select(input_FIFO_buf12_FIFO_buf77, root, blurx_0, blurx_1, dynamic_address);
	set_at<32, 48>(result, input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_37_res);
	return result;
}

// load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_write
//	input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12
inline void input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_write_bundle_write(hw_uint<16>& load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_write, input_FIFO_buf12_FIFO_buf77_cache& input_FIFO_buf12_FIFO_buf77, int root, int input_FIFO_buf12_to_gp_153_ld79, int input_FIFO_buf12_to_gp_153_ld78, int dynamic_address) {
	hw_uint<16> input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_res = load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_write.extract<0, 15>();
	input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_write(input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_12_res, input_FIFO_buf12_FIFO_buf77, root, input_FIFO_buf12_to_gp_153_ld79, input_FIFO_buf12_to_gp_153_ld78, dynamic_address);
}

struct input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_to_input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7_cache {
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

struct input_FIFO_buf73_cache {
  // Reader addrs...
    // { load_to_input_to_gp_147_sm22_035_sm91_0134[root = 0, input_ld6, input_ld5] -> input_FIFO_buf73[input_ld5, input_ld6] : 0 <= input_ld6 <= 1081 and 0 <= input_ld5 <= 1081 }
  // # of banks: 1
  input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_to_input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7_cache input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_to_input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7;
};



inline void input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_write(hw_uint<16>& input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8, input_FIFO_buf73_cache& input_FIFO_buf73, int root, int input_to_gp_549_ld75, int input_to_gp_549_ld74, int dynamic_address) {
  input_FIFO_buf73.input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_to_input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7.push(input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8);
}

inline hw_uint<16> input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7_select(input_FIFO_buf73_cache& input_FIFO_buf73, int root, int input_ld6, int input_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7 read pattern: { load_to_input_to_gp_147_sm22_035_sm91_0134[root = 0, input_ld6, input_ld5] -> input_FIFO_buf73[input_ld5, input_ld6] : 0 <= input_ld6 <= 1081 and 0 <= input_ld5 <= 1081 }
  // Read schedule : { load_to_input_to_gp_147_sm22_035_sm91_0134[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_FIFO_buf7376_sm103_0120[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8 = input_FIFO_buf73.input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_to_input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7.peek(/* one reader or all rams */ 0);
  return value_input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8;
  return 0;
}

// # of bundles = 2
// load_to_input_FIFO_buf7376_sm103_0120_write
//	input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8
inline void input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_write_bundle_write(hw_uint<16>& load_to_input_FIFO_buf7376_sm103_0120_write, input_FIFO_buf73_cache& input_FIFO_buf73, int root, int input_to_gp_549_ld75, int input_to_gp_549_ld74, int dynamic_address) {
	hw_uint<16> input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_res = load_to_input_FIFO_buf7376_sm103_0120_write.extract<0, 15>();
	input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_write(input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_8_res, input_FIFO_buf73, root, input_to_gp_549_ld75, input_to_gp_549_ld74, dynamic_address);
}

// load_to_input_to_gp_147_sm22_035_sm91_0134_read
//	input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7
inline hw_uint<16> input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_read_bundle_read(input_FIFO_buf73_cache& input_FIFO_buf73, int root, int input_ld6, int input_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7

	hw_uint<16> result;
	hw_uint<16> input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7_res = input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7_select(input_FIFO_buf73, root, input_ld6, input_ld5, dynamic_address);
	set_at<0, 16>(result, input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_7_res);
	return result;
}

struct input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_to_input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3_cache {
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
    // { load_to_input_to_gp_14_to_gp_65760_sm96_0104[root = 0, input_to_gp_14_ld59, input_to_gp_14_ld58] -> input_to_gp_14[input_to_gp_14_ld58, input_to_gp_14_ld59] : 0 <= input_to_gp_14_ld59 <= 1081 and 0 <= input_to_gp_14_ld58 <= 1081 }
  // # of banks: 1
  input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_to_input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3_cache input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_to_input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3;
};



inline void input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_write(hw_uint<16>& input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6, input_to_gp_14_cache& input_to_gp_14, int root, int input_ld6, int input_ld5, int dynamic_address) {
  input_to_gp_14.input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_to_input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3.push(input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6);
}

inline hw_uint<16> input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3_select(input_to_gp_14_cache& input_to_gp_14, int root, int input_to_gp_14_ld59, int input_to_gp_14_ld58, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3 read pattern: { load_to_input_to_gp_14_to_gp_65760_sm96_0104[root = 0, input_to_gp_14_ld59, input_to_gp_14_ld58] -> input_to_gp_14[input_to_gp_14_ld58, input_to_gp_14_ld59] : 0 <= input_to_gp_14_ld59 <= 1081 and 0 <= input_to_gp_14_ld58 <= 1081 }
  // Read schedule : { load_to_input_to_gp_14_to_gp_65760_sm96_0104[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_to_gp_147_sm22_035_sm91_0134[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6 = input_to_gp_14.input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_to_input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3.peek(/* one reader or all rams */ 0);
  return value_input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6;
  return 0;
}

// # of bundles = 2
// load_to_input_to_gp_147_sm22_035_sm91_0134_write
//	input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6
inline void input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_write_bundle_write(hw_uint<16>& load_to_input_to_gp_147_sm22_035_sm91_0134_write, input_to_gp_14_cache& input_to_gp_14, int root, int input_ld6, int input_ld5, int dynamic_address) {
	hw_uint<16> input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_res = load_to_input_to_gp_147_sm22_035_sm91_0134_write.extract<0, 15>();
	input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_write(input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_6_res, input_to_gp_14, root, input_ld6, input_ld5, dynamic_address);
}

// load_to_input_to_gp_14_to_gp_65760_sm96_0104_read
//	input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3
inline hw_uint<16> input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_read_bundle_read(input_to_gp_14_cache& input_to_gp_14, int root, int input_to_gp_14_ld59, int input_to_gp_14_ld58, int dynamic_address) {
  // # of ports in bundle: 1
    // input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3

	hw_uint<16> result;
	hw_uint<16> input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3_res = input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3_select(input_to_gp_14, root, input_to_gp_14_ld59, input_to_gp_14_ld58, dynamic_address);
	set_at<0, 16>(result, input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_3_res);
	return result;
}

struct input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_to_input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15_cache {
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

struct input_to_gp_14_FIFO_buf81_cache {
  // Reader addrs...
    // { load_to_input_FIFO_buf1215_sm20_031_sm89_0130[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> input_to_gp_14_FIFO_buf81[input_to_gp_14_ld13, input_to_gp_14_ld14] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
  // # of banks: 1
  input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_to_input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15_cache input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_to_input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15;
};



inline void input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_write(hw_uint<16>& input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4, input_to_gp_14_FIFO_buf81_cache& input_to_gp_14_FIFO_buf81, int root, int input_to_gp_14_to_gp_657_ld83, int input_to_gp_14_to_gp_657_ld82, int dynamic_address) {
  input_to_gp_14_FIFO_buf81.input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_to_input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15.push(input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4);
}

inline hw_uint<16> input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15_select(input_to_gp_14_FIFO_buf81_cache& input_to_gp_14_FIFO_buf81, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15 read pattern: { load_to_input_FIFO_buf1215_sm20_031_sm89_0130[root = 0, input_to_gp_14_ld14, input_to_gp_14_ld13] -> input_to_gp_14_FIFO_buf81[input_to_gp_14_ld13, input_to_gp_14_ld14] : 0 <= input_to_gp_14_ld14 <= 1081 and 0 <= input_to_gp_14_ld13 <= 1081 }
  // Read schedule : { load_to_input_FIFO_buf1215_sm20_031_sm89_0130[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_input_to_gp_14_FIFO_buf8184_sm99_0118[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4 = input_to_gp_14_FIFO_buf81.input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_to_input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15.peek(/* one reader or all rams */ 0);
  return value_input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4;
  return 0;
}

// # of bundles = 2
// load_to_input_FIFO_buf1215_sm20_031_sm89_0130_read
//	input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15
inline hw_uint<16> input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_read_bundle_read(input_to_gp_14_FIFO_buf81_cache& input_to_gp_14_FIFO_buf81, int root, int input_to_gp_14_ld14, int input_to_gp_14_ld13, int dynamic_address) {
  // # of ports in bundle: 1
    // input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15

	hw_uint<16> result;
	hw_uint<16> input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15_res = input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15_select(input_to_gp_14_FIFO_buf81, root, input_to_gp_14_ld14, input_to_gp_14_ld13, dynamic_address);
	set_at<0, 16>(result, input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_15_res);
	return result;
}

// load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_write
//	input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4
inline void input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_write_bundle_write(hw_uint<16>& load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_write, input_to_gp_14_FIFO_buf81_cache& input_to_gp_14_FIFO_buf81, int root, int input_to_gp_14_to_gp_657_ld83, int input_to_gp_14_to_gp_657_ld82, int dynamic_address) {
	hw_uint<16> input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_res = load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_write.extract<0, 15>();
	input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_write(input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_4_res, input_to_gp_14_FIFO_buf81, root, input_to_gp_14_to_gp_657_ld83, input_to_gp_14_to_gp_657_ld82, dynamic_address);
}

// Operation logic
inline void blur3_1_update_0_sm18_027_sm87_0126(blurx_FIFO_buf8_FIFO_buf65_cache& blurx_FIFO_buf8_FIFO_buf65, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blur3_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_FIFO_buf8_FIFO_buf65
	auto blurx_FIFO_buf8_FIFO_buf65_1_m__lp_1_m__lp_1_m_blur3_1_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blur3_1_0__p__0_p_0_value = blurx_FIFO_buf8_FIFO_buf65_blur3_1_update_0_sm18_027_sm87_0126_read_bundle_read(blurx_FIFO_buf8_FIFO_buf65/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blur3_1_generated_compute_unrolled_1(blurx_FIFO_buf8_FIFO_buf65_1_m__lp_1_m__lp_1_m_blur3_1_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blur3_1_0__p__0_p_0_value);
	// Produce: blur3_1
	blur3_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_FIFO_buf8_to_gp_041, blurx_FIFO_buf8_FIFO_buf65_cache& blurx_FIFO_buf8_FIFO_buf65, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_FIFO_buf8_to_gp_041
	auto blurx_FIFO_buf8_to_gp_041__lp_1_m_blurx_FIFO_buf8_to_gp_041_ld66__p__0_rp__c____blurx_FIFO_buf8_to_gp_041_ld67_value = blurx_FIFO_buf8_to_gp_041.read();
	// Produce: blurx_FIFO_buf8_FIFO_buf65
	blurx_FIFO_buf8_FIFO_buf65_load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110_write_bundle_write(/* arg names */blurx_FIFO_buf8_to_gp_041__lp_1_m_blurx_FIFO_buf8_to_gp_041_ld66__p__0_rp__c____blurx_FIFO_buf8_to_gp_041_ld67_value, blurx_FIFO_buf8_FIFO_buf65, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blur3_1_0_blurx_FIFO_buf8_to_gp_041_ld67_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_FIFO_buf8_to_gp_041, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blur3_1_0_blurx_FIFO_buf8_to_gp_041_ld67__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_FIFO_buf8_FIFO_buf65_cache blurx_FIFO_buf8_FIFO_buf65;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; blur3_1_update_0_sm18_027_sm87_0126[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { blur3_1_update_0_sm18_027_sm87_0126[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for blur3_1_update_0_sm18_027_sm87_0126(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 18] : 2 <= i1 <= 1081 and 2 <= i2 <= 1081; [0, i1, i2, 17] : 2 <= i1 <= 1081 and 0 <= i2 <= 1081 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_FIFO_buf8_FIFO_buf6568_sm102_0110(blurx_FIFO_buf8_to_gp_041 /* buf name */, blurx_FIFO_buf8_FIFO_buf65, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 2 }
	        // { [i0, i1, i2] : i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i2)) >= 0)))) {
	          blur3_1_update_0_sm18_027_sm87_0126(blurx_FIFO_buf8_FIFO_buf65 /* buf name */, blur3_1, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_FIFO_buf12_to_gp_153, input_FIFO_buf12_FIFO_buf77_cache& input_FIFO_buf12_FIFO_buf77, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_FIFO_buf12_to_gp_153
	auto input_FIFO_buf12_to_gp_153__lp_1_m_input_FIFO_buf12_to_gp_153_ld78__p__0_rp__c____input_FIFO_buf12_to_gp_153_ld79_value = input_FIFO_buf12_to_gp_153.read();
	// Produce: input_FIFO_buf12_FIFO_buf77
	input_FIFO_buf12_FIFO_buf77_load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116_write_bundle_write(/* arg names */input_FIFO_buf12_to_gp_153__lp_1_m_input_FIFO_buf12_to_gp_153_ld78__p__0_rp__c____input_FIFO_buf12_to_gp_153_ld79_value, input_FIFO_buf12_FIFO_buf77, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_update_0_sm17_025_sm86_0124(input_FIFO_buf12_FIFO_buf77_cache& input_FIFO_buf12_FIFO_buf77, blurx_cache& blurx, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_FIFO_buf12_FIFO_buf77
	auto input_FIFO_buf12_FIFO_buf77_1_m__lp_1_m__lp_1_m_blurx_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blurx_0__p__0_p_0_value = input_FIFO_buf12_FIFO_buf77_blurx_update_0_sm17_025_sm86_0124_read_bundle_read(input_FIFO_buf12_FIFO_buf77/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_1(input_FIFO_buf12_FIFO_buf77_1_m__lp_1_m__lp_1_m_blurx_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_blurx_0__p__0_p_0_value);
	// Produce: blurx
	blurx_blurx_update_0_sm17_025_sm86_0124_write_bundle_write(/* arg names */compute_result, blurx, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_to_gp_23740_sm93_0138(blurx_cache& blurx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_237, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx__lp_1_m_blurx_ld38__p__0_rp__c____blurx_ld39_value = blurx_load_to_blurx_to_gp_23740_sm93_0138_read_bundle_read(blurx/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_to_gp_237
	blurx_to_gp_237.write(blurx__lp_1_m_blurx_ld38__p__0_rp__c____blurx_ld39_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurx_0_blurx_ld39_input_FIFO_buf12_to_gp_153_ld79_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_FIFO_buf12_to_gp_153, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_237) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurx_0_blurx_ld39_input_FIFO_buf12_to_gp_153_ld79__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_FIFO_buf12_FIFO_buf77_cache input_FIFO_buf12_FIFO_buf77;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_blurx_to_gp_23740_sm93_0138[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; blurx_update_0_sm17_025_sm86_0124[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { load_to_blurx_to_gp_23740_sm93_0138[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_to_gp_23740_sm93_0138(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { blurx_update_0_sm17_025_sm86_0124[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for blurx_update_0_sm17_025_sm86_0124(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 0 <= i2 <= 1081 and 9 <= i3 <= 10; [0, i1, i2, 8] : 0 <= i1 <= 1081 and 0 <= i2 <= 1081 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_FIFO_buf12_FIFO_buf7780_sm98_0116(input_FIFO_buf12_to_gp_153 /* buf name */, input_FIFO_buf12_FIFO_buf77, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          blurx_update_0_sm17_025_sm86_0124(input_FIFO_buf12_FIFO_buf77 /* buf name */, blurx, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          load_to_blurx_to_gp_23740_sm93_0138(blurx /* buf name */, blurx_to_gp_237, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_blurx_FIFO_buf6164_sm97_0114(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_237, blurx_FIFO_buf61_cache& blurx_FIFO_buf61, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_to_gp_237
	auto blurx_to_gp_237__lp_1_m_blurx_to_gp_237_ld62__p__0_rp__c____blurx_to_gp_237_ld63_value = blurx_to_gp_237.read();
	// Produce: blurx_FIFO_buf61
	blurx_FIFO_buf61_load_to_blurx_FIFO_buf6164_sm97_0114_write_bundle_write(/* arg names */blurx_to_gp_237__lp_1_m_blurx_to_gp_237_ld62__p__0_rp__c____blurx_to_gp_237_ld63_value, blurx_FIFO_buf61, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_to_gp_003_sm21_033_sm90_0132(blurx_FIFO_buf61_cache& blurx_FIFO_buf61, blurx_to_gp_00_cache& blurx_to_gp_00, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_FIFO_buf61
	auto blurx_FIFO_buf61__lp_1_m__lp_1_m_blurx_ld1__p__0_rp___p__0_rp__c______blurx_ld2_value = blurx_FIFO_buf61_load_to_blurx_to_gp_003_sm21_033_sm90_0132_read_bundle_read(blurx_FIFO_buf61/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_to_gp_00
	blurx_to_gp_00_load_to_blurx_to_gp_003_sm21_033_sm90_0132_write_bundle_write(/* arg names */blurx_FIFO_buf61__lp_1_m__lp_1_m_blurx_ld1__p__0_rp___p__0_rp__c______blurx_ld2_value, blurx_to_gp_00, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_to_gp_00_to_gp_34548_sm94_0140(blurx_to_gp_00_cache& blurx_to_gp_00, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_00_to_gp_345, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_to_gp_00
	auto blurx_to_gp_00__lp_1_m_blurx_to_gp_00_ld46__p__0_rp__c____blurx_to_gp_00_ld47_value = blurx_to_gp_00_load_to_blurx_to_gp_00_to_gp_34548_sm94_0140_read_bundle_read(blurx_to_gp_00/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_to_gp_00_to_gp_345
	blurx_to_gp_00_to_gp_345.write(blurx_to_gp_00__lp_1_m_blurx_to_gp_00_ld46__p__0_rp__c____blurx_to_gp_00_ld47_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurx_ld2_blurx_to_gp_00_ld47_blurx_to_gp_237_ld63_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_237, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_00_to_gp_345) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurx_ld2_blurx_to_gp_00_ld47_blurx_to_gp_237_ld63__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_FIFO_buf61_cache blurx_FIFO_buf61;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blurx_to_gp_00_cache blurx_to_gp_00;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_blurx_to_gp_00_to_gp_34548_sm94_0140[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_blurx_to_gp_003_sm21_033_sm90_0132[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_blurx_FIFO_buf6164_sm97_0114[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 11] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
//   { load_to_blurx_to_gp_00_to_gp_34548_sm94_0140[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_to_gp_00_to_gp_34548_sm94_0140(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_blurx_to_gp_003_sm21_033_sm90_0132[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 12] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_to_gp_003_sm21_033_sm90_0132(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_blurx_FIFO_buf6164_sm97_0114[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 11] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_FIFO_buf6164_sm97_0114(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 0 <= i2 <= 1081 and 11 <= i3 <= 13 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_FIFO_buf6164_sm97_0114(blurx_to_gp_237 /* buf name */, blurx_FIFO_buf61, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_to_gp_003_sm21_033_sm90_0132(blurx_FIFO_buf61 /* buf name */, blurx_to_gp_00, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_to_gp_00_to_gp_34548_sm94_0140(blurx_to_gp_00 /* buf name */, blurx_to_gp_00_to_gp_345, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_00_to_gp_345, blurx_to_gp_00_FIFO_buf69_cache& blurx_to_gp_00_FIFO_buf69, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_to_gp_00_to_gp_345
	auto blurx_to_gp_00_to_gp_345__lp_1_m_blurx_to_gp_00_to_gp_345_ld70__p__0_rp__c____blurx_to_gp_00_to_gp_345_ld71_value = blurx_to_gp_00_to_gp_345.read();
	// Produce: blurx_to_gp_00_FIFO_buf69
	blurx_to_gp_00_FIFO_buf69_load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136_write_bundle_write(/* arg names */blurx_to_gp_00_to_gp_345__lp_1_m_blurx_to_gp_00_to_gp_345_ld70__p__0_rp__c____blurx_to_gp_00_to_gp_345_ld71_value, blurx_to_gp_00_FIFO_buf69, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_FIFO_buf811_sm19_029_sm88_0128(blurx_to_gp_00_FIFO_buf69_cache& blurx_to_gp_00_FIFO_buf69, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_to_gp_00_FIFO_buf69
	auto blurx_to_gp_00_FIFO_buf69__lp_1_m__lp_1_m_blurx_to_gp_00_ld9__p__0_rp___p__0_rp__c______blurx_to_gp_00_ld10_value = blurx_to_gp_00_FIFO_buf69_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_read_bundle_read(blurx_to_gp_00_FIFO_buf69/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_FIFO_buf8
	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_sm19_029_sm88_0128_write_bundle_write(/* arg names */blurx_to_gp_00_FIFO_buf69__lp_1_m__lp_1_m_blurx_to_gp_00_ld9__p__0_rp___p__0_rp__c______blurx_to_gp_00_ld10_value, blurx_FIFO_buf8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_FIFO_buf8_to_gp_041, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_FIFO_buf8
	auto blurx_FIFO_buf8__lp_1_m_blurx_FIFO_buf8_ld42__p__0_rp__c____blurx_FIFO_buf8_ld43_value = blurx_FIFO_buf8_load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106_read_bundle_read(blurx_FIFO_buf8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_FIFO_buf8_to_gp_041
	blurx_FIFO_buf8_to_gp_041.write(blurx_FIFO_buf8__lp_1_m_blurx_FIFO_buf8_ld42__p__0_rp__c____blurx_FIFO_buf8_ld43_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurx_FIFO_buf8_ld43_blurx_to_gp_00_ld10_blurx_to_gp_00_to_gp_345_ld71_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_00_to_gp_345, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_FIFO_buf8_to_gp_041) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurx_FIFO_buf8_ld43_blurx_to_gp_00_ld10_blurx_to_gp_00_to_gp_345_ld71__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_FIFO_buf8_cache blurx_FIFO_buf8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blurx_to_gp_00_FIFO_buf69_cache blurx_to_gp_00_FIFO_buf69;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 14] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_blurx_FIFO_buf811_sm19_029_sm88_0128[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
//   { load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 14] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_blurx_FIFO_buf811_sm19_029_sm88_0128[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_blurx_FIFO_buf811_sm19_029_sm88_0128(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 0 <= i2 <= 1081 and 14 <= i3 <= 16 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_to_gp_00_FIFO_buf6972_sm92_0136(blurx_to_gp_00_to_gp_345 /* buf name */, blurx_to_gp_00_FIFO_buf69, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_FIFO_buf811_sm19_029_sm88_0128(blurx_to_gp_00_FIFO_buf69 /* buf name */, blurx_FIFO_buf8, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_FIFO_buf8_to_gp_04144_sm100_0106(blurx_FIFO_buf8 /* buf name */, blurx_FIFO_buf8_to_gp_041, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void input_update_0_sm16_023_sm85_0122(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_1_m__lp_1_m_input_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_1_m__lp_1_m__lp_1_m_input_1__p__0_rp___p__0_rp___p__0_p_0_c_______1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_update_0_sm16_023_sm85_0122_write_bundle_write(/* arg names */compute_result, input, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_to_gp_54952_sm101_0108(input_cache& input, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_549, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input
	auto input__lp_1_m_input_ld50__p__0_rp__c____input_ld51_value = input_load_to_input_to_gp_54952_sm101_0108_read_bundle_read(input/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_to_gp_549
	input_to_gp_549.write(input__lp_1_m_input_ld50__p__0_rp__c____input_ld51_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_input_0_input_ld51_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_549) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_input_0_input_ld51__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { input_update_0_sm16_023_sm85_0122[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_input_to_gp_54952_sm101_0108[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { input_update_0_sm16_023_sm85_0122[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for input_update_0_sm16_023_sm85_0122(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_input_to_gp_54952_sm101_0108[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_to_gp_54952_sm101_0108(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1081 and 0 <= i2 <= 1081 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_update_0_sm16_023_sm85_0122(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_to_gp_54952_sm101_0108(input /* buf name */, input_to_gp_549, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_input_FIFO_buf7376_sm103_0120(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_549, input_FIFO_buf73_cache& input_FIFO_buf73, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_to_gp_549
	auto input_to_gp_549__lp_1_m_input_to_gp_549_ld74__p__0_rp__c____input_to_gp_549_ld75_value = input_to_gp_549.read();
	// Produce: input_FIFO_buf73
	input_FIFO_buf73_load_to_input_FIFO_buf7376_sm103_0120_write_bundle_write(/* arg names */input_to_gp_549__lp_1_m_input_to_gp_549_ld74__p__0_rp__c____input_to_gp_549_ld75_value, input_FIFO_buf73, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_to_gp_147_sm22_035_sm91_0134(input_FIFO_buf73_cache& input_FIFO_buf73, input_to_gp_14_cache& input_to_gp_14, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_FIFO_buf73
	auto input_FIFO_buf73__lp_1_m__lp_1_m_input_ld5__p__0_rp___p__0_rp__c______input_ld6_value = input_FIFO_buf73_load_to_input_to_gp_147_sm22_035_sm91_0134_read_bundle_read(input_FIFO_buf73/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_to_gp_14
	input_to_gp_14_load_to_input_to_gp_147_sm22_035_sm91_0134_write_bundle_write(/* arg names */input_FIFO_buf73__lp_1_m__lp_1_m_input_ld5__p__0_rp___p__0_rp__c______input_ld6_value, input_to_gp_14, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_to_gp_14_to_gp_65760_sm96_0104(input_to_gp_14_cache& input_to_gp_14, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_14_to_gp_657, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_to_gp_14
	auto input_to_gp_14__lp_1_m_input_to_gp_14_ld58__p__0_rp__c____input_to_gp_14_ld59_value = input_to_gp_14_load_to_input_to_gp_14_to_gp_65760_sm96_0104_read_bundle_read(input_to_gp_14/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_to_gp_14_to_gp_657
	input_to_gp_14_to_gp_657.write(input_to_gp_14__lp_1_m_input_to_gp_14_ld58__p__0_rp__c____input_to_gp_14_ld59_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_input_ld6_input_to_gp_14_ld59_input_to_gp_549_ld75_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_549, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_14_to_gp_657) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_input_ld6_input_to_gp_14_ld59_input_to_gp_549_ld75__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_FIFO_buf73_cache input_FIFO_buf73;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_to_gp_14_cache input_to_gp_14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_input_FIFO_buf7376_sm103_0120[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_input_to_gp_147_sm22_035_sm91_0134[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_input_to_gp_14_to_gp_65760_sm96_0104[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { load_to_input_FIFO_buf7376_sm103_0120[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_FIFO_buf7376_sm103_0120(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_input_to_gp_147_sm22_035_sm91_0134[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_to_gp_147_sm22_035_sm91_0134(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_input_to_gp_14_to_gp_65760_sm96_0104[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_to_gp_14_to_gp_65760_sm96_0104(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1081 and 0 <= i2 <= 1081 and 2 <= i3 <= 4 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_FIFO_buf7376_sm103_0120(input_to_gp_549 /* buf name */, input_FIFO_buf73, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_to_gp_147_sm22_035_sm91_0134(input_FIFO_buf73 /* buf name */, input_to_gp_14, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_to_gp_14_to_gp_65760_sm96_0104(input_to_gp_14 /* buf name */, input_to_gp_14_to_gp_657, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_input_to_gp_14_FIFO_buf8184_sm99_0118(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_14_to_gp_657, input_to_gp_14_FIFO_buf81_cache& input_to_gp_14_FIFO_buf81, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_to_gp_14_to_gp_657
	auto input_to_gp_14_to_gp_657__lp_1_m_input_to_gp_14_to_gp_657_ld82__p__0_rp__c____input_to_gp_14_to_gp_657_ld83_value = input_to_gp_14_to_gp_657.read();
	// Produce: input_to_gp_14_FIFO_buf81
	input_to_gp_14_FIFO_buf81_load_to_input_to_gp_14_FIFO_buf8184_sm99_0118_write_bundle_write(/* arg names */input_to_gp_14_to_gp_657__lp_1_m_input_to_gp_14_to_gp_657_ld82__p__0_rp__c____input_to_gp_14_to_gp_657_ld83_value, input_to_gp_14_FIFO_buf81, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_FIFO_buf1215_sm20_031_sm89_0130(input_to_gp_14_FIFO_buf81_cache& input_to_gp_14_FIFO_buf81, input_FIFO_buf12_cache& input_FIFO_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_to_gp_14_FIFO_buf81
	auto input_to_gp_14_FIFO_buf81__lp_1_m__lp_1_m_input_to_gp_14_ld13__p__0_rp___p__0_rp__c______input_to_gp_14_ld14_value = input_to_gp_14_FIFO_buf81_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_read_bundle_read(input_to_gp_14_FIFO_buf81/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_FIFO_buf12
	input_FIFO_buf12_load_to_input_FIFO_buf1215_sm20_031_sm89_0130_write_bundle_write(/* arg names */input_to_gp_14_FIFO_buf81__lp_1_m__lp_1_m_input_to_gp_14_ld13__p__0_rp___p__0_rp__c______input_to_gp_14_ld14_value, input_FIFO_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_FIFO_buf12_to_gp_15356_sm95_0112(input_FIFO_buf12_cache& input_FIFO_buf12, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_FIFO_buf12_to_gp_153, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_FIFO_buf12
	auto input_FIFO_buf12__lp_1_m_input_FIFO_buf12_ld54__p__0_rp__c____input_FIFO_buf12_ld55_value = input_FIFO_buf12_load_to_input_FIFO_buf12_to_gp_15356_sm95_0112_read_bundle_read(input_FIFO_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_FIFO_buf12_to_gp_153
	input_FIFO_buf12_to_gp_153.write(input_FIFO_buf12__lp_1_m_input_FIFO_buf12_ld54__p__0_rp__c____input_FIFO_buf12_ld55_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_input_FIFO_buf12_ld55_input_to_gp_14_ld14_input_to_gp_14_to_gp_657_ld83_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_14_to_gp_657, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_FIFO_buf12_to_gp_153) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_input_FIFO_buf12_ld55_input_to_gp_14_ld14_input_to_gp_14_to_gp_657_ld83__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_FIFO_buf12_cache input_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_to_gp_14_FIFO_buf81_cache input_to_gp_14_FIFO_buf81;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_input_FIFO_buf1215_sm20_031_sm89_0130[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_input_to_gp_14_FIFO_buf8184_sm99_0118[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_input_FIFO_buf12_to_gp_15356_sm95_0112[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { load_to_input_FIFO_buf1215_sm20_031_sm89_0130[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_FIFO_buf1215_sm20_031_sm89_0130(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_input_to_gp_14_FIFO_buf8184_sm99_0118[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_to_gp_14_FIFO_buf8184_sm99_0118(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_input_FIFO_buf12_to_gp_15356_sm95_0112[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_input_FIFO_buf12_to_gp_15356_sm95_0112(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1081 and 0 <= i2 <= 1081 and 5 <= i3 <= 7 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_to_gp_14_FIFO_buf8184_sm99_0118(input_to_gp_14_to_gp_657 /* buf name */, input_to_gp_14_FIFO_buf81, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_FIFO_buf1215_sm20_031_sm89_0130(input_to_gp_14_FIFO_buf81 /* buf name */, input_FIFO_buf12, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_FIFO_buf12_to_gp_15356_sm95_0112(input_FIFO_buf12 /* buf name */, input_FIFO_buf12_to_gp_153, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void blur3_1_opt_dis(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur3_1_opt_dis_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<16> > blurx_FIFO_buf8_to_gp_041;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurx_FIFO_buf8_to_gp_041.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > input_FIFO_buf12_to_gp_153;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=input_FIFO_buf12_to_gp_153.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > blurx_to_gp_237;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurx_to_gp_237.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > blurx_to_gp_00_to_gp_345;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurx_to_gp_00_to_gp_345.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > input_to_gp_549;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=input_to_gp_549.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > input_to_gp_14_to_gp_657;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=input_to_gp_14_to_gp_657.values depth=2
#endif //__VIVADO_SYNTH__


  Extracted_input_0_input_ld51_(input_arg, input_to_gp_549);
  Extracted_input_ld6_input_to_gp_14_ld59_input_to_gp_549_ld75_(input_to_gp_549, input_to_gp_14_to_gp_657);
  Extracted_input_FIFO_buf12_ld55_input_to_gp_14_ld14_input_to_gp_14_to_gp_657_ld83_(input_to_gp_14_to_gp_657, input_FIFO_buf12_to_gp_153);
  Extracted_blurx_0_blurx_ld39_input_FIFO_buf12_to_gp_153_ld79_(input_FIFO_buf12_to_gp_153, blurx_to_gp_237);
  Extracted_blurx_ld2_blurx_to_gp_00_ld47_blurx_to_gp_237_ld63_(blurx_to_gp_237, blurx_to_gp_00_to_gp_345);
  Extracted_blurx_FIFO_buf8_ld43_blurx_to_gp_00_ld10_blurx_to_gp_00_to_gp_345_ld71_(blurx_to_gp_00_to_gp_345, blurx_FIFO_buf8_to_gp_041);
  Extracted_blur3_1_0_blurx_FIFO_buf8_to_gp_041_ld67_(blurx_FIFO_buf8_to_gp_041, blur3_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blur3_1_opt_dis_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blur3_1_opt_dis(input_arg, blur3_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blur3_1_update_0_sm18_027_sm87_0126[root = 0, blur3_1_0, blur3_1_1] -> blur3_1[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
const int blur3_1_update_0_sm18_027_sm87_0126_write_pipe0_num_transfers = 1166400;
  // { input_update_0_sm16_023_sm85_0122[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1081 }
const int input_update_0_sm16_023_sm85_0122_read_pipe0_num_transfers = 1170724;


extern "C" {

void blur3_1_opt_dis_accel(hw_uint<16>* input_update_0_sm16_023_sm85_0122_read_pipe0, hw_uint<16>* blur3_1_update_0_sm18_027_sm87_0126_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_sm16_023_sm85_0122_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blur3_1_update_0_sm18_027_sm87_0126_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_sm16_023_sm85_0122_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blur3_1_update_0_sm18_027_sm87_0126_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_sm16_023_sm85_0122_read_pipe0_channel;
  static HWStream<hw_uint<16> > blur3_1_update_0_sm18_027_sm87_0126_write_pipe0_channel;

  burst_read<16>(input_update_0_sm16_023_sm85_0122_read_pipe0, input_update_0_sm16_023_sm85_0122_read_pipe0_channel, input_update_0_sm16_023_sm85_0122_read_pipe0_num_transfers*size);

  blur3_1_opt_dis_wrapper(input_update_0_sm16_023_sm85_0122_read_pipe0_channel, blur3_1_update_0_sm18_027_sm87_0126_write_pipe0_channel, size);

  burst_write<16>(blur3_1_update_0_sm18_027_sm87_0126_write_pipe0, blur3_1_update_0_sm18_027_sm87_0126_write_pipe0_channel, blur3_1_update_0_sm18_027_sm87_0126_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blur3_1_opt_dis_rdai(HWStream<hw_uint<16> >& input_update_0_sm16_023_sm85_0122_read_pipe0, HWStream<hw_uint<16> >&  blur3_1_update_0_sm18_027_sm87_0126_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_sm16_023_sm85_0122_read_pipe0
#pragma HLS INTERFACE axis register port = blur3_1_update_0_sm18_027_sm87_0126_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blur3_1_opt_dis(input_update_0_sm16_023_sm85_0122_read_pipe0, blur3_1_update_0_sm18_027_sm87_0126_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

