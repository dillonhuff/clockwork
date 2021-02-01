#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: bxy_d_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "bxy_d_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurx_blurx_update_0_14_to_blurx_load_to_blurx_to_gp_103_5_cache {
	// RAM Box: {[0, 1079], [0, 1921]}
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
    // { load_to_blurx_to_gp_103[root = 0, blurx_ld2, blurx_ld1] -> blurx[blurx_ld1, blurx_ld2] : 0 <= blurx_ld2 <= 1921 and 0 <= blurx_ld1 <= 1079 }
  // # of banks: 1
  blurx_blurx_update_0_14_to_blurx_load_to_blurx_to_gp_103_5_cache blurx_blurx_update_0_14_to_blurx_load_to_blurx_to_gp_103_5;
};



inline void blurx_blurx_update_0_14_write(hw_uint<16>& blurx_blurx_update_0_14, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_update_0_14_to_blurx_load_to_blurx_to_gp_103_5.push(blurx_blurx_update_0_14);
}

inline hw_uint<16> blurx_load_to_blurx_to_gp_103_5_select(blurx_cache& blurx, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_load_to_blurx_to_gp_103_5 read pattern: { load_to_blurx_to_gp_103[root = 0, blurx_ld2, blurx_ld1] -> blurx[blurx_ld1, blurx_ld2] : 0 <= blurx_ld2 <= 1921 and 0 <= blurx_ld1 <= 1079 }
  // Read schedule : { load_to_blurx_to_gp_103[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 4] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
  // Write schedule: { blurx_update_0[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
  auto value_blurx_blurx_update_0_14 = blurx.blurx_blurx_update_0_14_to_blurx_load_to_blurx_to_gp_103_5.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_update_0_14;
  return 0;
}

// # of bundles = 2
// blurx_update_0_write
//	blurx_blurx_update_0_14
inline void blurx_blurx_update_0_write_bundle_write(hw_uint<16>& blurx_update_0_write, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_14_res = blurx_update_0_write.extract<0, 15>();
	blurx_blurx_update_0_14_write(blurx_blurx_update_0_14_res, blurx, root, blurx_0, blurx_1, dynamic_address);
}

// load_to_blurx_to_gp_103_read
//	blurx_load_to_blurx_to_gp_103_5
inline hw_uint<16> blurx_load_to_blurx_to_gp_103_read_bundle_read(blurx_cache& blurx, int root, int blurx_ld2, int blurx_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // blurx_load_to_blurx_to_gp_103_5

	hw_uint<16> result;
	hw_uint<16> blurx_load_to_blurx_to_gp_103_5_res = blurx_load_to_blurx_to_gp_103_5_select(blurx, root, blurx_ld2, blurx_ld1, dynamic_address);
	set_at<0, 16>(result, blurx_load_to_blurx_to_gp_103_5_res);
	return result;
}

struct blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_merged_banks_3_cache {
	// RAM Box: {[0, 1079], [0, 1921]}
	// Capacity: 2161
	// # of read delays: 3
  // 0, 1080, 2160
	hw_uint<16> f0;
	fifo<hw_uint<16>, 1079> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1079> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1079() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_1080() {
		return f2;
	}

	inline hw_uint<16> peek_2159() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_2160() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1079
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1079 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1079
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1079 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct blurx_FIFO_buf8_cache {
  // Reader addrs...
    // { bxy_d_1_update_0[root = 0, bxy_d_1_0, bxy_d_1_1] -> blurx_FIFO_buf8[bxy_d_1_1, bxy_d_1_0] : 0 <= bxy_d_1_0 <= 1919 and 0 <= bxy_d_1_1 <= 1079 }
    // { bxy_d_1_update_0[root = 0, bxy_d_1_0, bxy_d_1_1] -> blurx_FIFO_buf8[bxy_d_1_1, 1 + bxy_d_1_0] : 0 <= bxy_d_1_0 <= 1919 and 0 <= bxy_d_1_1 <= 1079 }
    // { bxy_d_1_update_0[root = 0, bxy_d_1_0, bxy_d_1_1] -> blurx_FIFO_buf8[bxy_d_1_1, 2 + bxy_d_1_0] : 0 <= bxy_d_1_0 <= 1919 and 0 <= bxy_d_1_1 <= 1079 }
  // # of banks: 1
  blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_merged_banks_3_cache blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_merged_banks_3;
};



inline void blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_write(hw_uint<16>& blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_to_gp_10_ld10, int blurx_to_gp_10_ld9, int dynamic_address) {
  blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_merged_banks_3.push(blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6);
}

inline hw_uint<16> blurx_FIFO_buf8_bxy_d_1_update_0_11_select(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int bxy_d_1_0, int bxy_d_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_bxy_d_1_update_0_11 read pattern: { bxy_d_1_update_0[root = 0, bxy_d_1_0, bxy_d_1_1] -> blurx_FIFO_buf8[bxy_d_1_1, bxy_d_1_0] : 0 <= bxy_d_1_0 <= 1919 and 0 <= bxy_d_1_1 <= 1079 }
  // Read schedule : { bxy_d_1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf811[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 5] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
  auto value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6 = blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_merged_banks_3.peek_2160();
  return value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf8_bxy_d_1_update_0_12_select(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int bxy_d_1_0, int bxy_d_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_bxy_d_1_update_0_12 read pattern: { bxy_d_1_update_0[root = 0, bxy_d_1_0, bxy_d_1_1] -> blurx_FIFO_buf8[bxy_d_1_1, 1 + bxy_d_1_0] : 0 <= bxy_d_1_0 <= 1919 and 0 <= bxy_d_1_1 <= 1079 }
  // Read schedule : { bxy_d_1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf811[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 5] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
  auto value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6 = blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_merged_banks_3.peek_1080();
  return value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6;
  return 0;
}

inline hw_uint<16> blurx_FIFO_buf8_bxy_d_1_update_0_13_select(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int bxy_d_1_0, int bxy_d_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_FIFO_buf8_bxy_d_1_update_0_13 read pattern: { bxy_d_1_update_0[root = 0, bxy_d_1_0, bxy_d_1_1] -> blurx_FIFO_buf8[bxy_d_1_1, 2 + bxy_d_1_0] : 0 <= bxy_d_1_0 <= 1919 and 0 <= bxy_d_1_1 <= 1079 }
  // Read schedule : { bxy_d_1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_blurx_FIFO_buf811[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 5] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
  auto value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6 = blurx_FIFO_buf8.blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_merged_banks_3.peek_0();
  return value_blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6;
  return 0;
}

// # of bundles = 2
// bxy_d_1_update_0_read
//	blurx_FIFO_buf8_bxy_d_1_update_0_11
//	blurx_FIFO_buf8_bxy_d_1_update_0_12
//	blurx_FIFO_buf8_bxy_d_1_update_0_13
inline hw_uint<48> blurx_FIFO_buf8_bxy_d_1_update_0_read_bundle_read(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int bxy_d_1_0, int bxy_d_1_1, int dynamic_address) {
  // # of ports in bundle: 3
    // blurx_FIFO_buf8_bxy_d_1_update_0_11
    // blurx_FIFO_buf8_bxy_d_1_update_0_12
    // blurx_FIFO_buf8_bxy_d_1_update_0_13

	hw_uint<48> result;
	hw_uint<16> blurx_FIFO_buf8_bxy_d_1_update_0_11_res = blurx_FIFO_buf8_bxy_d_1_update_0_11_select(blurx_FIFO_buf8, root, bxy_d_1_0, bxy_d_1_1, dynamic_address);
	set_at<0, 48>(result, blurx_FIFO_buf8_bxy_d_1_update_0_11_res);
	hw_uint<16> blurx_FIFO_buf8_bxy_d_1_update_0_12_res = blurx_FIFO_buf8_bxy_d_1_update_0_12_select(blurx_FIFO_buf8, root, bxy_d_1_0, bxy_d_1_1, dynamic_address);
	set_at<16, 48>(result, blurx_FIFO_buf8_bxy_d_1_update_0_12_res);
	hw_uint<16> blurx_FIFO_buf8_bxy_d_1_update_0_13_res = blurx_FIFO_buf8_bxy_d_1_update_0_13_select(blurx_FIFO_buf8, root, bxy_d_1_0, bxy_d_1_1, dynamic_address);
	set_at<32, 48>(result, blurx_FIFO_buf8_bxy_d_1_update_0_13_res);
	return result;
}

// load_to_blurx_FIFO_buf811_write
//	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6
inline void blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_write_bundle_write(hw_uint<16>& load_to_blurx_FIFO_buf811_write, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int root, int blurx_to_gp_10_ld10, int blurx_to_gp_10_ld9, int dynamic_address) {
	hw_uint<16> blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_res = load_to_blurx_FIFO_buf811_write.extract<0, 15>();
	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_write(blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_6_res, blurx_FIFO_buf8, root, blurx_to_gp_10_ld10, blurx_to_gp_10_ld9, dynamic_address);
}

struct input_input_update_0_8_to_input_load_to_input_to_gp_047_1_cache {
	// RAM Box: {[0, 1081], [0, 1921]}
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
    // { load_to_input_to_gp_047[root = 0, input_ld6, input_ld5] -> input[input_ld5, input_ld6] : 0 <= input_ld6 <= 1921 and 0 <= input_ld5 <= 1081 }
  // # of banks: 1
  input_input_update_0_8_to_input_load_to_input_to_gp_047_1_cache input_input_update_0_8_to_input_load_to_input_to_gp_047_1;
};



inline void input_input_update_0_8_write(hw_uint<16>& input_input_update_0_8, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_update_0_8_to_input_load_to_input_to_gp_047_1.push(input_input_update_0_8);
}

inline hw_uint<16> input_load_to_input_to_gp_047_1_select(input_cache& input, int root, int input_ld6, int input_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_load_to_input_to_gp_047_1 read pattern: { load_to_input_to_gp_047[root = 0, input_ld6, input_ld5] -> input[input_ld5, input_ld6] : 0 <= input_ld6 <= 1921 and 0 <= input_ld5 <= 1081 }
  // Read schedule : { load_to_input_to_gp_047[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
  // Write schedule: { input_update_0[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
  auto value_input_input_update_0_8 = input.input_input_update_0_8_to_input_load_to_input_to_gp_047_1.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_8;
  return 0;
}

// # of bundles = 2
// input_update_0_write
//	input_input_update_0_8
inline void input_input_update_0_write_bundle_write(hw_uint<16>& input_update_0_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_update_0_8_res = input_update_0_write.extract<0, 15>();
	input_input_update_0_8_write(input_input_update_0_8_res, input, root, input_0, input_1, dynamic_address);
}

// load_to_input_to_gp_047_read
//	input_load_to_input_to_gp_047_1
inline hw_uint<16> input_load_to_input_to_gp_047_read_bundle_read(input_cache& input, int root, int input_ld6, int input_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // input_load_to_input_to_gp_047_1

	hw_uint<16> result;
	hw_uint<16> input_load_to_input_to_gp_047_1_res = input_load_to_input_to_gp_047_1_select(input, root, input_ld6, input_ld5, dynamic_address);
	set_at<0, 16>(result, input_load_to_input_to_gp_047_1_res);
	return result;
}

struct input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_15_cache {
	// RAM Box: {[0, 1079], [0, 1921]}
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

struct input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_16_cache {
	// RAM Box: {[1, 1080], [0, 1921]}
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

struct input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_17_cache {
	// RAM Box: {[2, 1081], [0, 1921]}
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
    // { blurx_update_0[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, blurx_0] : 0 <= blurx_0 <= 1921 and 0 <= blurx_1 <= 1079 }
    // { blurx_update_0[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[1 + blurx_1, blurx_0] : 0 <= blurx_0 <= 1921 and 0 <= blurx_1 <= 1079 }
    // { blurx_update_0[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[2 + blurx_1, blurx_0] : 0 <= blurx_0 <= 1921 and 0 <= blurx_1 <= 1079 }
  // # of banks: 3
  input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_15_cache input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_15;
  input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_16_cache input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_16;
  input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_17_cache input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_17;
};



inline void input_FIFO_buf12_load_to_input_FIFO_buf1215_2_write(hw_uint<16>& input_FIFO_buf12_load_to_input_FIFO_buf1215_2, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_04_ld14, int input_to_gp_04_ld13, int dynamic_address) {
  input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_15.push(input_FIFO_buf12_load_to_input_FIFO_buf1215_2);
  input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_16.push(input_FIFO_buf12_load_to_input_FIFO_buf1215_2);
  input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_17.push(input_FIFO_buf12_load_to_input_FIFO_buf1215_2);
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_15_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_15 read pattern: { blurx_update_0[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[blurx_1, blurx_0] : 0 <= blurx_0 <= 1921 and 0 <= blurx_1 <= 1079 }
  // Read schedule : { blurx_update_0[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_input_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_15.peek(/* one reader or all rams */ 2);
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_16_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_16 read pattern: { blurx_update_0[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[1 + blurx_1, blurx_0] : 0 <= blurx_0 <= 1921 and 0 <= blurx_1 <= 1079 }
  // Read schedule : { blurx_update_0[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_input_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_16.peek(/* one reader or all rams */ 1);
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf12_blurx_update_0_17_select(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf12_blurx_update_0_17 read pattern: { blurx_update_0[root = 0, blurx_0, blurx_1] -> input_FIFO_buf12[2 + blurx_1, blurx_0] : 0 <= blurx_0 <= 1921 and 0 <= blurx_1 <= 1079 }
  // Read schedule : { blurx_update_0[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_input_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
  auto value_input_FIFO_buf12_load_to_input_FIFO_buf1215_2 = input_FIFO_buf12.input_FIFO_buf12_load_to_input_FIFO_buf1215_2_to_input_FIFO_buf12_blurx_update_0_17.peek(/* one reader or all rams */ 0);
  return value_input_FIFO_buf12_load_to_input_FIFO_buf1215_2;
  return 0;
}

// # of bundles = 2
// blurx_update_0_read
//	input_FIFO_buf12_blurx_update_0_15
//	input_FIFO_buf12_blurx_update_0_16
//	input_FIFO_buf12_blurx_update_0_17
inline hw_uint<48> input_FIFO_buf12_blurx_update_0_read_bundle_read(input_FIFO_buf12_cache& input_FIFO_buf12, int root, int blurx_0, int blurx_1, int dynamic_address) {
  // # of ports in bundle: 3
    // input_FIFO_buf12_blurx_update_0_15
    // input_FIFO_buf12_blurx_update_0_16
    // input_FIFO_buf12_blurx_update_0_17

	hw_uint<48> result;
	hw_uint<16> input_FIFO_buf12_blurx_update_0_15_res = input_FIFO_buf12_blurx_update_0_15_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<0, 48>(result, input_FIFO_buf12_blurx_update_0_15_res);
	hw_uint<16> input_FIFO_buf12_blurx_update_0_16_res = input_FIFO_buf12_blurx_update_0_16_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<16, 48>(result, input_FIFO_buf12_blurx_update_0_16_res);
	hw_uint<16> input_FIFO_buf12_blurx_update_0_17_res = input_FIFO_buf12_blurx_update_0_17_select(input_FIFO_buf12, root, blurx_0, blurx_1, dynamic_address);
	set_at<32, 48>(result, input_FIFO_buf12_blurx_update_0_17_res);
	return result;
}

// load_to_input_FIFO_buf1215_write
//	input_FIFO_buf12_load_to_input_FIFO_buf1215_2
inline void input_FIFO_buf12_load_to_input_FIFO_buf1215_write_bundle_write(hw_uint<16>& load_to_input_FIFO_buf1215_write, input_FIFO_buf12_cache& input_FIFO_buf12, int root, int input_to_gp_04_ld14, int input_to_gp_04_ld13, int dynamic_address) {
	hw_uint<16> input_FIFO_buf12_load_to_input_FIFO_buf1215_2_res = load_to_input_FIFO_buf1215_write.extract<0, 15>();
	input_FIFO_buf12_load_to_input_FIFO_buf1215_2_write(input_FIFO_buf12_load_to_input_FIFO_buf1215_2_res, input_FIFO_buf12, root, input_to_gp_04_ld14, input_to_gp_04_ld13, dynamic_address);
}

// Operation logic
inline void load_to_input_FIFO_buf1215(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_04, input_FIFO_buf12_cache& input_FIFO_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_to_gp_04
	auto input_to_gp_04_input_to_gp_04_ld13_c__input_to_gp_04_ld14_value = input_to_gp_04.read();
	// Produce: input_FIFO_buf12
	input_FIFO_buf12_load_to_input_FIFO_buf1215_write_bundle_write(/* arg names */input_to_gp_04_input_to_gp_04_ld13_c__input_to_gp_04_ld14_value, input_FIFO_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_update_0(input_FIFO_buf12_cache& input_FIFO_buf12, blurx_cache& blurx, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_FIFO_buf12
	auto input_FIFO_buf12_1_m_blurx_1__p__0_p_0_c___1_m_blurx_0__p__0_p_0_value = input_FIFO_buf12_blurx_update_0_read_bundle_read(input_FIFO_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_1(input_FIFO_buf12_1_m_blurx_1__p__0_p_0_c___1_m_blurx_0__p__0_p_0_value);
	// Produce: blurx
	blurx_blurx_update_0_write_bundle_write(/* arg names */compute_result, blurx, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurx_to_gp_103(blurx_cache& blurx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx_blurx_ld1_c__blurx_ld2_value = blurx_load_to_blurx_to_gp_103_read_bundle_read(blurx/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurx_to_gp_10
	blurx_to_gp_10.write(blurx_blurx_ld1_c__blurx_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurx_0_blurx_ld2_input_to_gp_04_ld14_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_04, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_10) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurx_0_blurx_ld2_input_to_gp_04_ld14__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_FIFO_buf12_cache input_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { blurx_update_0[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079; load_to_input_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081; load_to_blurx_to_gp_103[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 4] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
//   { blurx_update_0[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
// Condition for blurx_update_0(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1921 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_input_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
// Condition for load_to_input_FIFO_buf1215(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1921 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_blurx_to_gp_103[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 4] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
// Condition for load_to_blurx_to_gp_103(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1921 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1921 and 2 <= i2 <= 1081 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1921 and 0 <= i2 <= 1081 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1921; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_FIFO_buf1215(input_to_gp_04 /* buf name */, input_FIFO_buf12, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 2 }
	        // { [i0, i1, i2] : i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i2)) >= 0)))) {
	          blurx_update_0(input_FIFO_buf12 /* buf name */, blurx, 0, ((1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 2 }
	        // { [i0, i1, i2] : i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i2)) >= 0)))) {
	          load_to_blurx_to_gp_103(blurx /* buf name */, blurx_to_gp_10, 0, ((1*i1)), ((-2 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_blurx_FIFO_buf811(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx_to_gp_10, blurx_FIFO_buf8_cache& blurx_FIFO_buf8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_to_gp_10
	auto blurx_to_gp_10_blurx_to_gp_10_ld9_c__blurx_to_gp_10_ld10_value = blurx_to_gp_10.read();
	// Produce: blurx_FIFO_buf8
	blurx_FIFO_buf8_load_to_blurx_FIFO_buf811_write_bundle_write(/* arg names */blurx_to_gp_10_blurx_to_gp_10_ld9_c__blurx_to_gp_10_ld10_value, blurx_FIFO_buf8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bxy_d_1_update_0(blurx_FIFO_buf8_cache& blurx_FIFO_buf8, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */bxy_d_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: blurx_FIFO_buf8
	auto blurx_FIFO_buf8_1_m_bxy_d_1_1__p__0_p_0_c___1_m_bxy_d_1_0__p__0_p_0_value = blurx_FIFO_buf8_bxy_d_1_update_0_read_bundle_read(blurx_FIFO_buf8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = bxy_d_1_generated_compute_unrolled_1(blurx_FIFO_buf8_1_m_bxy_d_1_1__p__0_p_0_c___1_m_bxy_d_1_0__p__0_p_0_value);
	// Produce: bxy_d_1
	bxy_d_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurx_to_gp_10_ld10_bxy_d_1_0_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */blurx_to_gp_10, HWStream<hw_uint<16> >& /* get_args num ports = 1 */bxy_d_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurx_to_gp_10_ld10_bxy_d_1_0__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_FIFO_buf8_cache blurx_FIFO_buf8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { bxy_d_1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079; load_to_blurx_FIFO_buf811[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 5] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
//   { bxy_d_1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1919 and 0 <= d2 <= 1079 }
// Condition for bxy_d_1_update_0(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1921 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { load_to_blurx_FIFO_buf811[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 5] : 0 <= d1 <= 1921 and 0 <= d2 <= 1079 }
// Condition for load_to_blurx_FIFO_buf811(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1921 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 6] : 2 <= i1 <= 1921 and 2 <= i2 <= 1081; [0, i1, i2, 5] : 0 <= i1 <= 1921 and 2 <= i2 <= 1081 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1921; i1++) {
	    for (int i2 = 2; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_blurx_FIFO_buf811(blurx_to_gp_10 /* buf name */, blurx_FIFO_buf8, 0, ((1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          bxy_d_1_update_0(blurx_FIFO_buf8 /* buf name */, bxy_d_1, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void input_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m_input_1__p__0_p_0_c___1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_1_m_input_1__p__0_p_0_c___1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_update_0_write_bundle_write(/* arg names */compute_result, input, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_to_gp_047(input_cache& input, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_04, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input
	auto input_input_ld5_c__input_ld6_value = input_load_to_input_to_gp_047_read_bundle_read(input/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_to_gp_04
	input_to_gp_04.write(input_input_ld5_c__input_ld6_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_input_0_input_ld6_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_04) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_input_0_input_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_input_to_gp_047[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081; input_update_0[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
//   { load_to_input_to_gp_047[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
// Condition for load_to_input_to_gp_047(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1921 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { input_update_0[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1921 and 0 <= d2 <= 1081 }
// Condition for input_update_0(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1921 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1921 and 0 <= i2 <= 1081 and 0 <= i3 <= 1 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1921; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_update_0(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_to_gp_047(input /* buf name */, input_to_gp_04, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void bxy_d_1_opt(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */bxy_d_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("bxy_d_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<16> > input_to_gp_04;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=input_to_gp_04.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > blurx_to_gp_10;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurx_to_gp_10.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_input_0_input_ld6_(input_arg, input_to_gp_04);
  Extracted_blurx_0_blurx_ld2_input_to_gp_04_ld14_(input_to_gp_04, blurx_to_gp_10);
  Extracted_blurx_to_gp_10_ld10_bxy_d_1_0_(blurx_to_gp_10, bxy_d_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void bxy_d_1_opt_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */bxy_d_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    bxy_d_1_opt(input_arg, bxy_d_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { bxy_d_1_update_0[root = 0, bxy_d_1_0, bxy_d_1_1] -> bxy_d_1[bxy_d_1_1, bxy_d_1_0] : 0 <= bxy_d_1_0 <= 1919 and 0 <= bxy_d_1_1 <= 1079 }
const int bxy_d_1_update_0_write_pipe0_num_transfers = 2073600;
  // { input_update_0[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1921 and 0 <= input_1 <= 1081 }
const int input_update_0_read_pipe0_num_transfers = 2079604;


extern "C" {

void bxy_d_1_opt_accel(hw_uint<16>* input_update_0_read_pipe0, hw_uint<16>* bxy_d_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = bxy_d_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = bxy_d_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > bxy_d_1_update_0_write_pipe0_channel;

  burst_read<16>(input_update_0_read_pipe0, input_update_0_read_pipe0_channel, input_update_0_read_pipe0_num_transfers*size);

  bxy_d_1_opt_wrapper(input_update_0_read_pipe0_channel, bxy_d_1_update_0_write_pipe0_channel, size);

  burst_write<16>(bxy_d_1_update_0_write_pipe0, bxy_d_1_update_0_write_pipe0_channel, bxy_d_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void bxy_d_1_opt_rdai(HWStream<hw_uint<16> >& input_update_0_read_pipe0, HWStream<hw_uint<16> >&  bxy_d_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = bxy_d_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  bxy_d_1_opt(input_update_0_read_pipe0, bxy_d_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

