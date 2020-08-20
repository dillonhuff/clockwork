#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: down_sample_compute.h
#include "down_sample_compute.h"

#include "hw_classes.h"

struct avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_to_avg_pool_stencil_op_hcompute_hw_output_stencil_10_cache {
	// RAM Box: {[0, 31], [0, 31], [0, 3]}
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

struct avg_pool_stencil_cache {
  // # of banks: 1
  avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_to_avg_pool_stencil_op_hcompute_hw_output_stencil_10_cache avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_to_avg_pool_stencil_op_hcompute_hw_output_stencil_10;
};



inline void avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_write(hw_uint<16>& avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3, avg_pool_stencil_cache& avg_pool_stencil, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
  avg_pool_stencil.avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_to_avg_pool_stencil_op_hcompute_hw_output_stencil_10.push(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3);
}

inline hw_uint<16> avg_pool_stencil_op_hcompute_hw_output_stencil_10_select(avg_pool_stencil_cache& avg_pool_stencil, int root, int hw_output_s0_z, int hw_output_s0_y_xo, int hw_output_s0_x_yi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // avg_pool_stencil_op_hcompute_hw_output_stencil_10 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_z, hw_output_s0_y_xo, hw_output_s0_x_yi] -> avg_pool_stencil[hw_output_s0_x_yi, hw_output_s0_y_xo, hw_output_s0_z] : 0 <= hw_output_s0_z <= 3 and 0 <= hw_output_s0_y_xo <= 31 and 0 <= hw_output_s0_x_yi <= 31 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 3] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
  // Write schedule: { op_hcompute_avg_pool_stencil_1[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
  auto value_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3 = avg_pool_stencil.avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_to_avg_pool_stencil_op_hcompute_hw_output_stencil_10.peek(/* one reader or all rams */ 0);
  return value_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3;
  return 0;
}

// # of bundles = 2
// op_hcompute_avg_pool_stencil_1_write
//	avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3
inline void avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_avg_pool_stencil_1_write, avg_pool_stencil_cache& avg_pool_stencil, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
	hw_uint<16> avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_res = op_hcompute_avg_pool_stencil_1_write.extract<0, 15>();
	avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_write(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_3_res, avg_pool_stencil, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	avg_pool_stencil_op_hcompute_hw_output_stencil_10
inline hw_uint<16> avg_pool_stencil_op_hcompute_hw_output_stencil_read_bundle_read(avg_pool_stencil_cache& avg_pool_stencil, int root, int hw_output_s0_z, int hw_output_s0_y_xo, int hw_output_s0_x_yi, int dynamic_address) {
  // # of ports in bundle: 1
    // avg_pool_stencil_op_hcompute_hw_output_stencil_10

	hw_uint<16> result;
	hw_uint<16> avg_pool_stencil_op_hcompute_hw_output_stencil_10_res = avg_pool_stencil_op_hcompute_hw_output_stencil_10_select(avg_pool_stencil, root, hw_output_s0_z, hw_output_s0_y_xo, hw_output_s0_x_yi, dynamic_address);
	set_at<0, 16>(result, avg_pool_stencil_op_hcompute_hw_output_stencil_10_res);
	return result;
}

#include "hw_classes.h"

struct avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_to_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4_cache {
	// RAM Box: {[0, 31], [0, 31], [0, 3]}
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

struct avg_pool_stencil_clkwrk_dsa0_cache {
  // # of banks: 1
  avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_to_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4_cache avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_to_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4;
};



inline void avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_write(hw_uint<16>& avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2, avg_pool_stencil_clkwrk_dsa0_cache& avg_pool_stencil_clkwrk_dsa0, int root, int avg_pool_s0_z, int avg_pool_s0_y, int avg_pool_s0_x, int dynamic_address) {
  avg_pool_stencil_clkwrk_dsa0.avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_to_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4.push(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2);
}

inline hw_uint<16> avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4_select(avg_pool_stencil_clkwrk_dsa0_cache& avg_pool_stencil_clkwrk_dsa0, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4 read pattern: { op_hcompute_avg_pool_stencil_1[root = 0, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x] -> avg_pool_stencil_clkwrk_dsa0[avg_pool_s1_x, avg_pool_s1_y, avg_pool_s1_z] : 0 <= avg_pool_s1_z <= 3 and 0 <= avg_pool_s1_y <= 31 and 0 <= avg_pool_s1_x <= 31 }
  // Read schedule : { op_hcompute_avg_pool_stencil_1[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
  // Write schedule: { op_hcompute_avg_pool_stencil[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 1] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
  auto value_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2 = avg_pool_stencil_clkwrk_dsa0.avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_to_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4.peek(/* one reader or all rams */ 0);
  return value_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_avg_pool_stencil_1_read
//	avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4
inline hw_uint<16> avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_bundle_read(avg_pool_stencil_clkwrk_dsa0_cache& avg_pool_stencil_clkwrk_dsa0, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4

	hw_uint<16> result;
	hw_uint<16> avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4_res = avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4_select(avg_pool_stencil_clkwrk_dsa0, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, dynamic_address);
	set_at<0, 16>(result, avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_4_res);
	return result;
}

// op_hcompute_avg_pool_stencil_write
//	avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2
inline void avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_bundle_write(hw_uint<16>& op_hcompute_avg_pool_stencil_write, avg_pool_stencil_clkwrk_dsa0_cache& avg_pool_stencil_clkwrk_dsa0, int root, int avg_pool_s0_z, int avg_pool_s0_y, int avg_pool_s0_x, int dynamic_address) {
	hw_uint<16> avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_res = op_hcompute_avg_pool_stencil_write.extract<0, 15>();
	avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_write(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_2_res, avg_pool_stencil_clkwrk_dsa0, root, avg_pool_s0_z, avg_pool_s0_y, avg_pool_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_4_cache {
	// RAM Box: {[0, 63], [0, 63], [0, 3]}
	// Capacity: 66
	// # of read delays: 4
  // 0, 1, 64, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 62> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_64() {
		return f4;
	}

	inline hw_uint<16> peek_65() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 62
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 62 reading from capacity: 1
    f3.push(f2);
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
  hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_4_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_4;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_z, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_4.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_avg_pool_stencil_1_5_select(hw_input_stencil_cache& hw_input_stencil, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_avg_pool_stencil_1_5 read pattern: { op_hcompute_avg_pool_stencil_1[root = 0, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x] -> hw_input_stencil[2avg_pool_s1_x, 2avg_pool_s1_y, avg_pool_s1_z] : 0 <= avg_pool_s1_z <= 3 and 0 <= avg_pool_s1_y <= 31 and 0 <= avg_pool_s1_x <= 31 }
  // Read schedule : { op_hcompute_avg_pool_stencil_1[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2, d3] -> [0, d1, d2, d3, 0] : 0 <= d1 <= 3 and 0 <= d2 <= 63 and 0 <= d3 <= 63 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_4.peek_65();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_select(hw_input_stencil_cache& hw_input_stencil, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_avg_pool_stencil_1_6 read pattern: { op_hcompute_avg_pool_stencil_1[root = 0, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x] -> hw_input_stencil[1 + 2avg_pool_s1_x, 2avg_pool_s1_y, avg_pool_s1_z] : 0 <= avg_pool_s1_z <= 3 and 0 <= avg_pool_s1_y <= 31 and 0 <= avg_pool_s1_x <= 31 }
  // Read schedule : { op_hcompute_avg_pool_stencil_1[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2, d3] -> [0, d1, d2, d3, 0] : 0 <= d1 <= 3 and 0 <= d2 <= 63 and 0 <= d3 <= 63 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_4.peek_64();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_avg_pool_stencil_1_7 read pattern: { op_hcompute_avg_pool_stencil_1[root = 0, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x] -> hw_input_stencil[1 + 2avg_pool_s1_x, 1 + 2avg_pool_s1_y, avg_pool_s1_z] : 0 <= avg_pool_s1_z <= 3 and 0 <= avg_pool_s1_y <= 31 and 0 <= avg_pool_s1_x <= 31 }
  // Read schedule : { op_hcompute_avg_pool_stencil_1[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2, d3] -> [0, d1, d2, d3, 0] : 0 <= d1 <= 3 and 0 <= d2 <= 63 and 0 <= d3 <= 63 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_4.peek_0();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_avg_pool_stencil_1_8 read pattern: { op_hcompute_avg_pool_stencil_1[root = 0, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x] -> hw_input_stencil[2avg_pool_s1_x, 1 + 2avg_pool_s1_y, avg_pool_s1_z] : 0 <= avg_pool_s1_z <= 3 and 0 <= avg_pool_s1_y <= 31 and 0 <= avg_pool_s1_x <= 31 }
  // Read schedule : { op_hcompute_avg_pool_stencil_1[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2, d3] -> [0, d1, d2, d3, 0] : 0 <= d1 <= 3 and 0 <= d2 <= 63 and 0 <= d3 <= 63 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_merged_banks_4.peek_1();
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_avg_pool_stencil_1_read
//	hw_input_stencil_op_hcompute_avg_pool_stencil_1_5
//	hw_input_stencil_op_hcompute_avg_pool_stencil_1_6
//	hw_input_stencil_op_hcompute_avg_pool_stencil_1_7
//	hw_input_stencil_op_hcompute_avg_pool_stencil_1_8
inline hw_uint<64> hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x, int dynamic_address) {
  // # of ports in bundle: 4
    // hw_input_stencil_op_hcompute_avg_pool_stencil_1_5
    // hw_input_stencil_op_hcompute_avg_pool_stencil_1_6
    // hw_input_stencil_op_hcompute_avg_pool_stencil_1_7
    // hw_input_stencil_op_hcompute_avg_pool_stencil_1_8

	hw_uint<64> result;
	hw_uint<16> hw_input_stencil_op_hcompute_avg_pool_stencil_1_5_res = hw_input_stencil_op_hcompute_avg_pool_stencil_1_5_select(hw_input_stencil, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, dynamic_address);
	set_at<0, 64>(result, hw_input_stencil_op_hcompute_avg_pool_stencil_1_5_res);
	hw_uint<16> hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_res = hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_select(hw_input_stencil, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, dynamic_address);
	set_at<16, 64>(result, hw_input_stencil_op_hcompute_avg_pool_stencil_1_6_res);
	hw_uint<16> hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_res = hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_select(hw_input_stencil, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, dynamic_address);
	set_at<32, 64>(result, hw_input_stencil_op_hcompute_avg_pool_stencil_1_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_res = hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_select(hw_input_stencil, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, dynamic_address);
	set_at<48, 64>(result, hw_input_stencil_op_hcompute_avg_pool_stencil_1_8_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_0
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_z, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_0_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_input_stencil_op_hcompute_hw_input_stencil_0_res, hw_input_stencil, root, hw_input_s0_z, hw_input_s0_y, hw_input_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 1040 bits


// Operation logic
inline void op_hcompute_hw_input_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_copy_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_z, int hw_input_s0_y, int hw_input_s0_x) {
  // Dynamic address computation

	// Consume: input_copy_stencil
	auto input_copy_stencil_hw_input_s0_x_c__hw_input_s0_y_c__hw_input_s0_z_value = input_copy_stencil.read();
	auto compute_result = hcompute_hw_input_stencil(input_copy_stencil_hw_input_s0_x_c__hw_input_s0_y_c__hw_input_s0_z_value);
	// Produce: hw_input_stencil
	hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(/* arg names */compute_result, hw_input_stencil, root, hw_input_s0_z, hw_input_s0_y, hw_input_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_avg_pool_stencil(avg_pool_stencil_clkwrk_dsa0_cache& avg_pool_stencil_clkwrk_dsa0, int root, int avg_pool_s0_z, int avg_pool_s0_y, int avg_pool_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_avg_pool_stencil();
	// Produce: avg_pool_stencil_clkwrk_dsa0
	avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_bundle_write(/* arg names */compute_result, avg_pool_stencil_clkwrk_dsa0, root, avg_pool_s0_z, avg_pool_s0_y, avg_pool_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_avg_pool_stencil_1(avg_pool_stencil_clkwrk_dsa0_cache& avg_pool_stencil_clkwrk_dsa0, hw_input_stencil_cache& hw_input_stencil, avg_pool_stencil_cache& avg_pool_stencil, int root, int avg_pool_s1_z, int avg_pool_s1_y, int avg_pool_s1_x) {
  // Dynamic address computation

	// Consume: avg_pool_stencil_clkwrk_dsa0
	auto avg_pool_stencil_clkwrk_dsa0_avg_pool_s1_x_c__avg_pool_s1_y_c__avg_pool_s1_z_value = avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_bundle_read(avg_pool_stencil_clkwrk_dsa0/* source_delay */, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_avg_pool_s1_x_m_2_rp__c___lp_avg_pool_s1_y_m_2_rp__c__avg_pool_s1_z_value = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_avg_pool_stencil_1(avg_pool_stencil_clkwrk_dsa0_avg_pool_s1_x_c__avg_pool_s1_y_c__avg_pool_s1_z_value, hw_input_stencil__lp_avg_pool_s1_x_m_2_rp__c___lp_avg_pool_s1_y_m_2_rp__c__avg_pool_s1_z_value);
	// Produce: avg_pool_stencil
	avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_bundle_write(/* arg names */compute_result, avg_pool_stencil, root, avg_pool_s1_z, avg_pool_s1_y, avg_pool_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(avg_pool_stencil_cache& avg_pool_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_z, int hw_output_s0_y_xo, int hw_output_s0_x_yi) {
  // Dynamic address computation

	// Consume: avg_pool_stencil
	auto avg_pool_stencil_hw_output_s0_x_yi_c__hw_output_s0_y_xo_c__hw_output_s0_z_value = avg_pool_stencil_op_hcompute_hw_output_stencil_read_bundle_read(avg_pool_stencil/* source_delay */, root, hw_output_s0_z, hw_output_s0_y_xo, hw_output_s0_x_yi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(avg_pool_stencil_hw_output_s0_x_yi_c__hw_output_s0_y_xo_c__hw_output_s0_z_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void down_sample(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("down_sample_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  avg_pool_stencil_cache avg_pool_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  avg_pool_stencil_clkwrk_dsa0_cache avg_pool_stencil_clkwrk_dsa0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_avg_pool_stencil[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 1] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31; op_hcompute_hw_output_stencil[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 3] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31; op_hcompute_avg_pool_stencil_1[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31; op_hcompute_hw_input_stencil[d0 = 0, d1, d2, d3] -> [0, d1, d2, d3, 0] : 0 <= d1 <= 3 and 0 <= d2 <= 63 and 0 <= d3 <= 63 }
//   { op_hcompute_avg_pool_stencil[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 1] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
// Condition for op_hcompute_avg_pool_stencil(((-1 - i3 + 2*floord(1 + i3, 2) == 0) && (-1 - i2 + 2*floord(1 + i2, 2) == 0) && (-1 + i4 == 0) && (i0 == 0) && (i1 >= 0) && (3 - i1 >= 0) && (-1 + i2 >= 0) && (63 - i2 >= 0) && (-1 + i3 >= 0) && (63 - i3 >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 3] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
// Condition for op_hcompute_hw_output_stencil(((-1 - i3 + 2*floord(1 + i3, 2) == 0) && (-1 - i2 + 2*floord(1 + i2, 2) == 0) && (-3 + i4 == 0) && (i0 == 0) && (i1 >= 0) && (3 - i1 >= 0) && (-1 + i2 >= 0) && (63 - i2 >= 0) && (-1 + i3 >= 0) && (63 - i3 >= 0)))
//   { op_hcompute_avg_pool_stencil_1[d0 = 0, d1, d2, d3] -> [0, d1, 1 + 2d2, 1 + 2d3, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 31 and 0 <= d3 <= 31 }
// Condition for op_hcompute_avg_pool_stencil_1(((-1 - i3 + 2*floord(1 + i3, 2) == 0) && (-1 - i2 + 2*floord(1 + i2, 2) == 0) && (-2 + i4 == 0) && (i0 == 0) && (i1 >= 0) && (3 - i1 >= 0) && (-1 + i2 >= 0) && (63 - i2 >= 0) && (-1 + i3 >= 0) && (63 - i3 >= 0)))
//   { op_hcompute_hw_input_stencil[d0 = 0, d1, d2, d3] -> [0, d1, d2, d3, 0] : 0 <= d1 <= 3 and 0 <= d2 <= 63 and 0 <= d3 <= 63 }
// Condition for op_hcompute_hw_input_stencil(((i4 == 0) && (i0 == 0) && (i1 >= 0) && (3 - i1 >= 0) && (i2 >= 0) && (63 - i2 >= 0) && (i3 >= 0) && (63 - i3 >= 0)))

  /*
for (int c1 = 0; c1 <= 3; c1 += 1)
  for (int c2 = 0; c2 <= 63; c2 += 1)
    for (int c3 = 0; c3 <= 63; c3 += 1) {
      op_hcompute_hw_input_stencil(0, c1, c2, c3);
      if ((c2 + 1) % 2 == 0 && (c3 + 1) % 2 == 0) {
        op_hcompute_avg_pool_stencil(0, c1, (c2 - 1) / 2, (c3 - 1) / 2);
        op_hcompute_avg_pool_stencil_1(0, c1, (c2 - 1) / 2, (c3 - 1) / 2);
        op_hcompute_hw_output_stencil(0, c1, (c2 - 1) / 2, (c3 - 1) / 2);
      }
    }

  */
	for (int c1 = 0; c1 <= 3; c1 += 1)
	  for (int c2 = 0; c2 <= 63; c2 += 1)
	    for (int c3 = 0; c3 <= 63; c3 += 1) {
	      op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c1, c2, c3);
	      if ((c2 + 1) % 2 == 0 && (c3 + 1) % 2 == 0) {
	        op_hcompute_avg_pool_stencil(avg_pool_stencil_clkwrk_dsa0, 0, c1, (c2 - 1) / 2, (c3 - 1) / 2);
	        op_hcompute_avg_pool_stencil_1(avg_pool_stencil_clkwrk_dsa0 /* buf name */, hw_input_stencil /* buf name */, avg_pool_stencil, 0, c1, (c2 - 1) / 2, (c3 - 1) / 2);
	        op_hcompute_hw_output_stencil(avg_pool_stencil /* buf name */, hw_output_stencil, 0, c1, (c2 - 1) / 2, (c3 - 1) / 2);
	      }
	    }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void down_sample_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    down_sample(input_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_z, hw_output_s0_y_xo, hw_output_s0_x_yi] -> hw_output_stencil[hw_output_s0_x_yi, hw_output_s0_y_xo, hw_output_s0_z] : 0 <= hw_output_s0_z <= 3 and 0 <= hw_output_s0_y_xo <= 31 and 0 <= hw_output_s0_x_yi <= 31 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 4096;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_z, hw_input_s0_y, hw_input_s0_x] -> input_copy_stencil[hw_input_s0_x, hw_input_s0_y, hw_input_s0_z] : 0 <= hw_input_s0_z <= 3 and 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 16384;


extern "C" {

void down_sample_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
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

  down_sample_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void down_sample_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  down_sample(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

