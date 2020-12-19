#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: strided_conv_compute.h
#include "strided_conv_compute.h"

#include "hw_classes.h"

struct conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_14_cache {
	// RAM Box: {[0, 30], [0, 30]}
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

struct conv_stencil_cache {
  // # of banks: 1
  conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_14_cache conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_14;
};



inline void conv_stencil_op_hcompute_conv_stencil_1_3_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_3, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_14.push(conv_stencil_op_hcompute_conv_stencil_1_3);
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_14_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_14 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 30 and 0 <= hw_output_s0_x_xi <= 30 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 3] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_3 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_3_to_conv_stencil_op_hcompute_hw_output_stencil_14.peek(/* one reader or all rams */ 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_3;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_3
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_3_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_3_write(conv_stencil_op_hcompute_conv_stencil_1_3_res, conv_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_14
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_14

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_14_res = conv_stencil_op_hcompute_hw_output_stencil_14_select(conv_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_14_res);
	return result;
}

#include "hw_classes.h"

struct conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_to_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4_cache {
	// RAM Box: {[0, 30], [0, 30]}
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

struct conv_stencil_clkwrk_dsa0_cache {
  // # of banks: 1
  conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_to_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4_cache conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_to_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4;
};



inline void conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_write(hw_uint<16>& conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2, conv_stencil_clkwrk_dsa0_cache& conv_stencil_clkwrk_dsa0, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil_clkwrk_dsa0.conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_to_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4.push(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2);
}

inline hw_uint<16> conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4_select(conv_stencil_clkwrk_dsa0_cache& conv_stencil_clkwrk_dsa0, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> conv_stencil_clkwrk_dsa0[conv_s1_x, conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_conv_stencil[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 1] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  auto value_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2 = conv_stencil_clkwrk_dsa0.conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_to_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4.peek(/* one reader or all rams */ 0);
  return value_conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv_stencil_1_read
//	conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4
inline hw_uint<16> conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_clkwrk_dsa0_cache& conv_stencil_clkwrk_dsa0, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4

	hw_uint<16> result;
	hw_uint<16> conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4_res = conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4_select(conv_stencil_clkwrk_dsa0, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_4_res);
	return result;
}

// op_hcompute_conv_stencil_write
//	conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2
inline void conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_clkwrk_dsa0_cache& conv_stencil_clkwrk_dsa0, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_write(conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_2_res, conv_stencil_clkwrk_dsa0, root, conv_s0_y, conv_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8_cache {
	// RAM Box: {[0, 62], [0, 62]}
	// Capacity: 129
	// # of read delays: 8
  // 0, 1, 2, 63, 65, 126, 127, 128
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
	hw_uint<16> f6;
	hw_uint<16> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 60> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_63() {
		return f6;
	}

	inline hw_uint<16> peek_64() {
		return f7;
	}

	inline hw_uint<16> peek_65() {
		return f8;
	}

	inline hw_uint<16> peek_125() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_126() {
		return f10;
	}

	inline hw_uint<16> peek_127() {
		return f12;
	}

	inline hw_uint<16> peek_128() {
		return f14;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 60
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f7 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
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

struct hw_input_stencil_cache {
  // # of banks: 1
  hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_10 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> hw_input_stencil[2conv_s1_x, 2 + 2conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.peek_2();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_11 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> hw_input_stencil[2 + 2conv_s1_x, 2 + 2conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.peek_0();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_12 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> hw_input_stencil[1 + 2conv_s1_x, 2 + 2conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.peek_1();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_5_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_5 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> hw_input_stencil[2conv_s1_x, 2conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.peek_128();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_6_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_6 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> hw_input_stencil[1 + 2conv_s1_x, 2conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.peek_127();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_7 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> hw_input_stencil[2 + 2conv_s1_x, 2conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.peek_126();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_8 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> hw_input_stencil[2conv_s1_x, 1 + 2conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.peek_65();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_9 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x] -> hw_input_stencil[2 + 2conv_s1_x, 1 + 2conv_s1_y] : 0 <= conv_s1_y <= 30 and 0 <= conv_s1_x <= 30 }
  // Read schedule : { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_8.peek_63();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_5
//	hw_input_stencil_op_hcompute_conv_stencil_1_6
//	hw_input_stencil_op_hcompute_conv_stencil_1_7
//	hw_input_stencil_op_hcompute_conv_stencil_1_8
//	hw_input_stencil_op_hcompute_conv_stencil_1_9
//	hw_input_stencil_op_hcompute_conv_stencil_1_10
//	hw_input_stencil_op_hcompute_conv_stencil_1_11
//	hw_input_stencil_op_hcompute_conv_stencil_1_12
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_1_5
    // hw_input_stencil_op_hcompute_conv_stencil_1_6
    // hw_input_stencil_op_hcompute_conv_stencil_1_7
    // hw_input_stencil_op_hcompute_conv_stencil_1_8
    // hw_input_stencil_op_hcompute_conv_stencil_1_9
    // hw_input_stencil_op_hcompute_conv_stencil_1_10
    // hw_input_stencil_op_hcompute_conv_stencil_1_11
    // hw_input_stencil_op_hcompute_conv_stencil_1_12

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_5_res = hw_input_stencil_op_hcompute_conv_stencil_1_5_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_5_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_6_res = hw_input_stencil_op_hcompute_conv_stencil_1_6_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_6_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_res = hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_res = hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_res = hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_9_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_res = hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_10_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_res = hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_11_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_res = hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_12_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_0
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_0_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_input_stencil_op_hcompute_hw_input_stencil_0_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 2048 bits


// Operation logic
inline void op_hcompute_hw_input_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_copy_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x) {
  // Dynamic address computation

	// Consume: input_copy_stencil
	auto input_copy_stencil_hw_input_s0_x_c__hw_input_s0_y_value = input_copy_stencil.read();
	auto compute_result = hcompute_hw_input_stencil(input_copy_stencil_hw_input_s0_x_c__hw_input_s0_y_value);
	// Produce: hw_input_stencil
	hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(/* arg names */compute_result, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil(conv_stencil_clkwrk_dsa0_cache& conv_stencil_clkwrk_dsa0, int root, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil_clkwrk_dsa0
	conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil_clkwrk_dsa0, root, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_1(conv_stencil_clkwrk_dsa0_cache& conv_stencil_clkwrk_dsa0, hw_input_stencil_cache& hw_input_stencil, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil_clkwrk_dsa0
	auto conv_stencil_clkwrk_dsa0_conv_s1_x_c__conv_s1_y_value = conv_stencil_clkwrk_dsa0_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_clkwrk_dsa0/* source_delay */, root, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_x_m_2_rp__c___lp_conv_s1_y_m_2_rp__value = hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_clkwrk_dsa0_conv_s1_x_c__conv_s1_y_value, hw_input_stencil__lp_conv_s1_x_m_2_rp__c___lp_conv_s1_y_m_2_rp__value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void strided_conv(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("strided_conv_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  conv_stencil_clkwrk_dsa0_cache conv_stencil_clkwrk_dsa0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_conv_stencil[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 1] : 0 <= d1 <= 30 and 0 <= d2 <= 30; op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62; op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 3] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
//   { op_hcompute_conv_stencil[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 1] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
// Condition for op_hcompute_conv_stencil(((-i1 + 2*floord(i1, 2) == 0) && (-i2 + 2*floord(i2, 2) == 0) && (-1 + i3 == 0) && (i0 == 0) && (-2 + i1 >= 0) && (62 - i1 >= 0) && (-2 + i2 >= 0) && (62 - i2 >= 0)))
//   { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 62 and 0 <= d2 <= 62 }
// Condition for op_hcompute_hw_input_stencil(((i3 == 0) && (i0 == 0) && (i1 >= 0) && (62 - i1 >= 0) && (i2 >= 0) && (62 - i2 >= 0)))
//   { op_hcompute_conv_stencil_1[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
// Condition for op_hcompute_conv_stencil_1(((-i1 + 2*floord(i1, 2) == 0) && (-i2 + 2*floord(i2, 2) == 0) && (-2 + i3 == 0) && (i0 == 0) && (-2 + i1 >= 0) && (62 - i1 >= 0) && (-2 + i2 >= 0) && (62 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 3] : 0 <= d1 <= 30 and 0 <= d2 <= 30 }
// Condition for op_hcompute_hw_output_stencil(((-i1 + 2*floord(i1, 2) == 0) && (-i2 + 2*floord(i2, 2) == 0) && (-3 + i3 == 0) && (i0 == 0) && (-2 + i1 >= 0) && (62 - i1 >= 0) && (-2 + i2 >= 0) && (62 - i2 >= 0)))

  /*
for (int c1 = 0; c1 <= 62; c1 += 1)
  for (int c2 = 0; c2 <= 62; c2 += 1) {
    op_hcompute_hw_input_stencil(0, c1, c2);
    if (c1 >= 2 && c2 >= 2 && c1 % 2 == 0 && c2 % 2 == 0) {
      op_hcompute_conv_stencil(0, (c1 / 2) - 1, (c2 / 2) - 1);
      op_hcompute_conv_stencil_1(0, (c1 / 2) - 1, (c2 / 2) - 1);
      op_hcompute_hw_output_stencil(0, (c1 / 2) - 1, (c2 / 2) - 1);
    }
  }

  */
	for (int c1 = 0; c1 <= 62; c1 += 1)
	  for (int c2 = 0; c2 <= 62; c2 += 1) {
	    op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c1, c2);
	    if (c1 >= 2 && c2 >= 2 && c1 % 2 == 0 && c2 % 2 == 0) {
	      op_hcompute_conv_stencil(conv_stencil_clkwrk_dsa0, 0, (c1 / 2) - 1, (c2 / 2) - 1);
	      op_hcompute_conv_stencil_1(conv_stencil_clkwrk_dsa0 /* buf name */, hw_input_stencil /* buf name */, conv_stencil, 0, (c1 / 2) - 1, (c2 / 2) - 1);
	      op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, (c1 / 2) - 1, (c2 / 2) - 1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void strided_conv_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    strided_conv(input_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 30 and 0 <= hw_output_s0_x_xi <= 30 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 961;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x] -> input_copy_stencil[hw_input_s0_x, hw_input_s0_y] : 0 <= hw_input_s0_y <= 62 and 0 <= hw_input_s0_x <= 62 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 3969;


extern "C" {

void strided_conv_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_input_stencil_read_pipe0_num_transfers*size);

  strided_conv_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void strided_conv_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  strided_conv(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

