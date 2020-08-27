#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: gp_fpga_naive_compute_units.h
#include "gp_fpga_naive_compute_units.h"

#include "hw_classes.h"

struct in_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1943], [0, 1086]}
  hw_uint<16> RAM[1944][1087];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct in_cache {
  // # of banks: 1
  in_all_inputs_to_all_outputs_cache in_all_inputs_to_all_outputs;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write0, 8*d0 - 0, d1 - 0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write1, 1 + 8*d0 - 0, d1 - 0);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write2, 2 + 8*d0 - 0, d1 - 0);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write3, 3 + 8*d0 - 0, d1 - 0);
}

inline void in_in_update_0_write4_write(hw_uint<16>& in_in_update_0_write4, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write4, 4 + 8*d0 - 0, d1 - 0);
}

inline void in_in_update_0_write5_write(hw_uint<16>& in_in_update_0_write5, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write5, 5 + 8*d0 - 0, d1 - 0);
}

inline void in_in_update_0_write6_write(hw_uint<16>& in_in_update_0_write6, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write6, 6 + 8*d0 - 0, d1 - 0);
}

inline void in_in_update_0_write7_write(hw_uint<16>& in_in_update_0_write7, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write7, 7 + 8*d0 - 0, d1 - 0);
}

inline hw_uint<16> in_gauss_blur_1_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd0 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd1 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd10 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(1 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd11 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(1 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd12 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd13 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd14 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd15 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd16 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd17 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd18 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd19 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd2 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd20 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd21 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd22 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd23 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd24 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd25 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd26 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd27 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd28 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd29 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(3 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd3 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(1 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd30 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd31 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd32 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd33 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd34 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd35 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd36_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd36 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd37_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd37 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd38_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd38 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd39_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd39 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd4 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(1 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd40_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd40 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd41_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd41 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd42_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd42 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd43_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd43 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd44_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd44 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd45_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd45 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd46_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd46 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd47_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd47 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(5 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd48_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd48 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd49_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd49 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd5 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(1 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd50_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd50 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd51_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd51 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd52_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd52 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd53_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd53 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd54_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd54 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd55_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd55 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd56_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd56 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd57_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd57 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd58_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd58 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd59_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd59 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd6 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd60_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd60 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd61_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd61 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd62_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd62 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd63_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd63 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd64_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd64 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd65_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd65 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(7 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd66_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd66 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd67_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd67 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd68_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd68 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(8 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd69_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd69 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(9 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd7 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd70_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd70 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 8d0, 1 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(9 + 8*d0 - 0, 1 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd71_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd71 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(9 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd8 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 8d0, 2 + d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, 2 + d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd9 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 8d0, d1] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(1 + 8*d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_read
//	in_gauss_blur_1_rd0
//	in_gauss_blur_1_rd1
//	in_gauss_blur_1_rd2
//	in_gauss_blur_1_rd3
//	in_gauss_blur_1_rd4
//	in_gauss_blur_1_rd5
//	in_gauss_blur_1_rd6
//	in_gauss_blur_1_rd7
//	in_gauss_blur_1_rd8
//	in_gauss_blur_1_rd9
//	in_gauss_blur_1_rd10
//	in_gauss_blur_1_rd11
//	in_gauss_blur_1_rd12
//	in_gauss_blur_1_rd13
//	in_gauss_blur_1_rd14
//	in_gauss_blur_1_rd15
//	in_gauss_blur_1_rd16
//	in_gauss_blur_1_rd17
//	in_gauss_blur_1_rd18
//	in_gauss_blur_1_rd19
//	in_gauss_blur_1_rd20
//	in_gauss_blur_1_rd21
//	in_gauss_blur_1_rd22
//	in_gauss_blur_1_rd23
//	in_gauss_blur_1_rd24
//	in_gauss_blur_1_rd25
//	in_gauss_blur_1_rd26
//	in_gauss_blur_1_rd27
//	in_gauss_blur_1_rd28
//	in_gauss_blur_1_rd29
//	in_gauss_blur_1_rd30
//	in_gauss_blur_1_rd31
//	in_gauss_blur_1_rd32
//	in_gauss_blur_1_rd33
//	in_gauss_blur_1_rd34
//	in_gauss_blur_1_rd35
//	in_gauss_blur_1_rd36
//	in_gauss_blur_1_rd37
//	in_gauss_blur_1_rd38
//	in_gauss_blur_1_rd39
//	in_gauss_blur_1_rd40
//	in_gauss_blur_1_rd41
//	in_gauss_blur_1_rd42
//	in_gauss_blur_1_rd43
//	in_gauss_blur_1_rd44
//	in_gauss_blur_1_rd45
//	in_gauss_blur_1_rd46
//	in_gauss_blur_1_rd47
//	in_gauss_blur_1_rd48
//	in_gauss_blur_1_rd49
//	in_gauss_blur_1_rd50
//	in_gauss_blur_1_rd51
//	in_gauss_blur_1_rd52
//	in_gauss_blur_1_rd53
//	in_gauss_blur_1_rd54
//	in_gauss_blur_1_rd55
//	in_gauss_blur_1_rd56
//	in_gauss_blur_1_rd57
//	in_gauss_blur_1_rd58
//	in_gauss_blur_1_rd59
//	in_gauss_blur_1_rd60
//	in_gauss_blur_1_rd61
//	in_gauss_blur_1_rd62
//	in_gauss_blur_1_rd63
//	in_gauss_blur_1_rd64
//	in_gauss_blur_1_rd65
//	in_gauss_blur_1_rd66
//	in_gauss_blur_1_rd67
//	in_gauss_blur_1_rd68
//	in_gauss_blur_1_rd69
//	in_gauss_blur_1_rd70
//	in_gauss_blur_1_rd71
inline hw_uint<1152> in_in_gauss_blur_1_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 72
    // in_gauss_blur_1_rd0
    // in_gauss_blur_1_rd1
    // in_gauss_blur_1_rd2
    // in_gauss_blur_1_rd3
    // in_gauss_blur_1_rd4
    // in_gauss_blur_1_rd5
    // in_gauss_blur_1_rd6
    // in_gauss_blur_1_rd7
    // in_gauss_blur_1_rd8
    // in_gauss_blur_1_rd9
    // in_gauss_blur_1_rd10
    // in_gauss_blur_1_rd11
    // in_gauss_blur_1_rd12
    // in_gauss_blur_1_rd13
    // in_gauss_blur_1_rd14
    // in_gauss_blur_1_rd15
    // in_gauss_blur_1_rd16
    // in_gauss_blur_1_rd17
    // in_gauss_blur_1_rd18
    // in_gauss_blur_1_rd19
    // in_gauss_blur_1_rd20
    // in_gauss_blur_1_rd21
    // in_gauss_blur_1_rd22
    // in_gauss_blur_1_rd23
    // in_gauss_blur_1_rd24
    // in_gauss_blur_1_rd25
    // in_gauss_blur_1_rd26
    // in_gauss_blur_1_rd27
    // in_gauss_blur_1_rd28
    // in_gauss_blur_1_rd29
    // in_gauss_blur_1_rd30
    // in_gauss_blur_1_rd31
    // in_gauss_blur_1_rd32
    // in_gauss_blur_1_rd33
    // in_gauss_blur_1_rd34
    // in_gauss_blur_1_rd35
    // in_gauss_blur_1_rd36
    // in_gauss_blur_1_rd37
    // in_gauss_blur_1_rd38
    // in_gauss_blur_1_rd39
    // in_gauss_blur_1_rd40
    // in_gauss_blur_1_rd41
    // in_gauss_blur_1_rd42
    // in_gauss_blur_1_rd43
    // in_gauss_blur_1_rd44
    // in_gauss_blur_1_rd45
    // in_gauss_blur_1_rd46
    // in_gauss_blur_1_rd47
    // in_gauss_blur_1_rd48
    // in_gauss_blur_1_rd49
    // in_gauss_blur_1_rd50
    // in_gauss_blur_1_rd51
    // in_gauss_blur_1_rd52
    // in_gauss_blur_1_rd53
    // in_gauss_blur_1_rd54
    // in_gauss_blur_1_rd55
    // in_gauss_blur_1_rd56
    // in_gauss_blur_1_rd57
    // in_gauss_blur_1_rd58
    // in_gauss_blur_1_rd59
    // in_gauss_blur_1_rd60
    // in_gauss_blur_1_rd61
    // in_gauss_blur_1_rd62
    // in_gauss_blur_1_rd63
    // in_gauss_blur_1_rd64
    // in_gauss_blur_1_rd65
    // in_gauss_blur_1_rd66
    // in_gauss_blur_1_rd67
    // in_gauss_blur_1_rd68
    // in_gauss_blur_1_rd69
    // in_gauss_blur_1_rd70
    // in_gauss_blur_1_rd71

	hw_uint<1152> result;
	hw_uint<16> in_gauss_blur_1_rd0_res = in_gauss_blur_1_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 1152>(result, in_gauss_blur_1_rd0_res);
	hw_uint<16> in_gauss_blur_1_rd1_res = in_gauss_blur_1_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 1152>(result, in_gauss_blur_1_rd1_res);
	hw_uint<16> in_gauss_blur_1_rd2_res = in_gauss_blur_1_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 1152>(result, in_gauss_blur_1_rd2_res);
	hw_uint<16> in_gauss_blur_1_rd3_res = in_gauss_blur_1_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 1152>(result, in_gauss_blur_1_rd3_res);
	hw_uint<16> in_gauss_blur_1_rd4_res = in_gauss_blur_1_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 1152>(result, in_gauss_blur_1_rd4_res);
	hw_uint<16> in_gauss_blur_1_rd5_res = in_gauss_blur_1_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 1152>(result, in_gauss_blur_1_rd5_res);
	hw_uint<16> in_gauss_blur_1_rd6_res = in_gauss_blur_1_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 1152>(result, in_gauss_blur_1_rd6_res);
	hw_uint<16> in_gauss_blur_1_rd7_res = in_gauss_blur_1_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 1152>(result, in_gauss_blur_1_rd7_res);
	hw_uint<16> in_gauss_blur_1_rd8_res = in_gauss_blur_1_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 1152>(result, in_gauss_blur_1_rd8_res);
	hw_uint<16> in_gauss_blur_1_rd9_res = in_gauss_blur_1_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 1152>(result, in_gauss_blur_1_rd9_res);
	hw_uint<16> in_gauss_blur_1_rd10_res = in_gauss_blur_1_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 1152>(result, in_gauss_blur_1_rd10_res);
	hw_uint<16> in_gauss_blur_1_rd11_res = in_gauss_blur_1_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 1152>(result, in_gauss_blur_1_rd11_res);
	hw_uint<16> in_gauss_blur_1_rd12_res = in_gauss_blur_1_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 1152>(result, in_gauss_blur_1_rd12_res);
	hw_uint<16> in_gauss_blur_1_rd13_res = in_gauss_blur_1_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 1152>(result, in_gauss_blur_1_rd13_res);
	hw_uint<16> in_gauss_blur_1_rd14_res = in_gauss_blur_1_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 1152>(result, in_gauss_blur_1_rd14_res);
	hw_uint<16> in_gauss_blur_1_rd15_res = in_gauss_blur_1_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 1152>(result, in_gauss_blur_1_rd15_res);
	hw_uint<16> in_gauss_blur_1_rd16_res = in_gauss_blur_1_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 1152>(result, in_gauss_blur_1_rd16_res);
	hw_uint<16> in_gauss_blur_1_rd17_res = in_gauss_blur_1_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 1152>(result, in_gauss_blur_1_rd17_res);
	hw_uint<16> in_gauss_blur_1_rd18_res = in_gauss_blur_1_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 1152>(result, in_gauss_blur_1_rd18_res);
	hw_uint<16> in_gauss_blur_1_rd19_res = in_gauss_blur_1_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 1152>(result, in_gauss_blur_1_rd19_res);
	hw_uint<16> in_gauss_blur_1_rd20_res = in_gauss_blur_1_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 1152>(result, in_gauss_blur_1_rd20_res);
	hw_uint<16> in_gauss_blur_1_rd21_res = in_gauss_blur_1_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 1152>(result, in_gauss_blur_1_rd21_res);
	hw_uint<16> in_gauss_blur_1_rd22_res = in_gauss_blur_1_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 1152>(result, in_gauss_blur_1_rd22_res);
	hw_uint<16> in_gauss_blur_1_rd23_res = in_gauss_blur_1_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 1152>(result, in_gauss_blur_1_rd23_res);
	hw_uint<16> in_gauss_blur_1_rd24_res = in_gauss_blur_1_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 1152>(result, in_gauss_blur_1_rd24_res);
	hw_uint<16> in_gauss_blur_1_rd25_res = in_gauss_blur_1_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 1152>(result, in_gauss_blur_1_rd25_res);
	hw_uint<16> in_gauss_blur_1_rd26_res = in_gauss_blur_1_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 1152>(result, in_gauss_blur_1_rd26_res);
	hw_uint<16> in_gauss_blur_1_rd27_res = in_gauss_blur_1_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 1152>(result, in_gauss_blur_1_rd27_res);
	hw_uint<16> in_gauss_blur_1_rd28_res = in_gauss_blur_1_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 1152>(result, in_gauss_blur_1_rd28_res);
	hw_uint<16> in_gauss_blur_1_rd29_res = in_gauss_blur_1_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 1152>(result, in_gauss_blur_1_rd29_res);
	hw_uint<16> in_gauss_blur_1_rd30_res = in_gauss_blur_1_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 1152>(result, in_gauss_blur_1_rd30_res);
	hw_uint<16> in_gauss_blur_1_rd31_res = in_gauss_blur_1_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 1152>(result, in_gauss_blur_1_rd31_res);
	hw_uint<16> in_gauss_blur_1_rd32_res = in_gauss_blur_1_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 1152>(result, in_gauss_blur_1_rd32_res);
	hw_uint<16> in_gauss_blur_1_rd33_res = in_gauss_blur_1_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 1152>(result, in_gauss_blur_1_rd33_res);
	hw_uint<16> in_gauss_blur_1_rd34_res = in_gauss_blur_1_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 1152>(result, in_gauss_blur_1_rd34_res);
	hw_uint<16> in_gauss_blur_1_rd35_res = in_gauss_blur_1_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 1152>(result, in_gauss_blur_1_rd35_res);
	hw_uint<16> in_gauss_blur_1_rd36_res = in_gauss_blur_1_rd36_select(in, d0, d1, dynamic_address);
	set_at<576, 1152>(result, in_gauss_blur_1_rd36_res);
	hw_uint<16> in_gauss_blur_1_rd37_res = in_gauss_blur_1_rd37_select(in, d0, d1, dynamic_address);
	set_at<592, 1152>(result, in_gauss_blur_1_rd37_res);
	hw_uint<16> in_gauss_blur_1_rd38_res = in_gauss_blur_1_rd38_select(in, d0, d1, dynamic_address);
	set_at<608, 1152>(result, in_gauss_blur_1_rd38_res);
	hw_uint<16> in_gauss_blur_1_rd39_res = in_gauss_blur_1_rd39_select(in, d0, d1, dynamic_address);
	set_at<624, 1152>(result, in_gauss_blur_1_rd39_res);
	hw_uint<16> in_gauss_blur_1_rd40_res = in_gauss_blur_1_rd40_select(in, d0, d1, dynamic_address);
	set_at<640, 1152>(result, in_gauss_blur_1_rd40_res);
	hw_uint<16> in_gauss_blur_1_rd41_res = in_gauss_blur_1_rd41_select(in, d0, d1, dynamic_address);
	set_at<656, 1152>(result, in_gauss_blur_1_rd41_res);
	hw_uint<16> in_gauss_blur_1_rd42_res = in_gauss_blur_1_rd42_select(in, d0, d1, dynamic_address);
	set_at<672, 1152>(result, in_gauss_blur_1_rd42_res);
	hw_uint<16> in_gauss_blur_1_rd43_res = in_gauss_blur_1_rd43_select(in, d0, d1, dynamic_address);
	set_at<688, 1152>(result, in_gauss_blur_1_rd43_res);
	hw_uint<16> in_gauss_blur_1_rd44_res = in_gauss_blur_1_rd44_select(in, d0, d1, dynamic_address);
	set_at<704, 1152>(result, in_gauss_blur_1_rd44_res);
	hw_uint<16> in_gauss_blur_1_rd45_res = in_gauss_blur_1_rd45_select(in, d0, d1, dynamic_address);
	set_at<720, 1152>(result, in_gauss_blur_1_rd45_res);
	hw_uint<16> in_gauss_blur_1_rd46_res = in_gauss_blur_1_rd46_select(in, d0, d1, dynamic_address);
	set_at<736, 1152>(result, in_gauss_blur_1_rd46_res);
	hw_uint<16> in_gauss_blur_1_rd47_res = in_gauss_blur_1_rd47_select(in, d0, d1, dynamic_address);
	set_at<752, 1152>(result, in_gauss_blur_1_rd47_res);
	hw_uint<16> in_gauss_blur_1_rd48_res = in_gauss_blur_1_rd48_select(in, d0, d1, dynamic_address);
	set_at<768, 1152>(result, in_gauss_blur_1_rd48_res);
	hw_uint<16> in_gauss_blur_1_rd49_res = in_gauss_blur_1_rd49_select(in, d0, d1, dynamic_address);
	set_at<784, 1152>(result, in_gauss_blur_1_rd49_res);
	hw_uint<16> in_gauss_blur_1_rd50_res = in_gauss_blur_1_rd50_select(in, d0, d1, dynamic_address);
	set_at<800, 1152>(result, in_gauss_blur_1_rd50_res);
	hw_uint<16> in_gauss_blur_1_rd51_res = in_gauss_blur_1_rd51_select(in, d0, d1, dynamic_address);
	set_at<816, 1152>(result, in_gauss_blur_1_rd51_res);
	hw_uint<16> in_gauss_blur_1_rd52_res = in_gauss_blur_1_rd52_select(in, d0, d1, dynamic_address);
	set_at<832, 1152>(result, in_gauss_blur_1_rd52_res);
	hw_uint<16> in_gauss_blur_1_rd53_res = in_gauss_blur_1_rd53_select(in, d0, d1, dynamic_address);
	set_at<848, 1152>(result, in_gauss_blur_1_rd53_res);
	hw_uint<16> in_gauss_blur_1_rd54_res = in_gauss_blur_1_rd54_select(in, d0, d1, dynamic_address);
	set_at<864, 1152>(result, in_gauss_blur_1_rd54_res);
	hw_uint<16> in_gauss_blur_1_rd55_res = in_gauss_blur_1_rd55_select(in, d0, d1, dynamic_address);
	set_at<880, 1152>(result, in_gauss_blur_1_rd55_res);
	hw_uint<16> in_gauss_blur_1_rd56_res = in_gauss_blur_1_rd56_select(in, d0, d1, dynamic_address);
	set_at<896, 1152>(result, in_gauss_blur_1_rd56_res);
	hw_uint<16> in_gauss_blur_1_rd57_res = in_gauss_blur_1_rd57_select(in, d0, d1, dynamic_address);
	set_at<912, 1152>(result, in_gauss_blur_1_rd57_res);
	hw_uint<16> in_gauss_blur_1_rd58_res = in_gauss_blur_1_rd58_select(in, d0, d1, dynamic_address);
	set_at<928, 1152>(result, in_gauss_blur_1_rd58_res);
	hw_uint<16> in_gauss_blur_1_rd59_res = in_gauss_blur_1_rd59_select(in, d0, d1, dynamic_address);
	set_at<944, 1152>(result, in_gauss_blur_1_rd59_res);
	hw_uint<16> in_gauss_blur_1_rd60_res = in_gauss_blur_1_rd60_select(in, d0, d1, dynamic_address);
	set_at<960, 1152>(result, in_gauss_blur_1_rd60_res);
	hw_uint<16> in_gauss_blur_1_rd61_res = in_gauss_blur_1_rd61_select(in, d0, d1, dynamic_address);
	set_at<976, 1152>(result, in_gauss_blur_1_rd61_res);
	hw_uint<16> in_gauss_blur_1_rd62_res = in_gauss_blur_1_rd62_select(in, d0, d1, dynamic_address);
	set_at<992, 1152>(result, in_gauss_blur_1_rd62_res);
	hw_uint<16> in_gauss_blur_1_rd63_res = in_gauss_blur_1_rd63_select(in, d0, d1, dynamic_address);
	set_at<1008, 1152>(result, in_gauss_blur_1_rd63_res);
	hw_uint<16> in_gauss_blur_1_rd64_res = in_gauss_blur_1_rd64_select(in, d0, d1, dynamic_address);
	set_at<1024, 1152>(result, in_gauss_blur_1_rd64_res);
	hw_uint<16> in_gauss_blur_1_rd65_res = in_gauss_blur_1_rd65_select(in, d0, d1, dynamic_address);
	set_at<1040, 1152>(result, in_gauss_blur_1_rd65_res);
	hw_uint<16> in_gauss_blur_1_rd66_res = in_gauss_blur_1_rd66_select(in, d0, d1, dynamic_address);
	set_at<1056, 1152>(result, in_gauss_blur_1_rd66_res);
	hw_uint<16> in_gauss_blur_1_rd67_res = in_gauss_blur_1_rd67_select(in, d0, d1, dynamic_address);
	set_at<1072, 1152>(result, in_gauss_blur_1_rd67_res);
	hw_uint<16> in_gauss_blur_1_rd68_res = in_gauss_blur_1_rd68_select(in, d0, d1, dynamic_address);
	set_at<1088, 1152>(result, in_gauss_blur_1_rd68_res);
	hw_uint<16> in_gauss_blur_1_rd69_res = in_gauss_blur_1_rd69_select(in, d0, d1, dynamic_address);
	set_at<1104, 1152>(result, in_gauss_blur_1_rd69_res);
	hw_uint<16> in_gauss_blur_1_rd70_res = in_gauss_blur_1_rd70_select(in, d0, d1, dynamic_address);
	set_at<1120, 1152>(result, in_gauss_blur_1_rd70_res);
	hw_uint<16> in_gauss_blur_1_rd71_res = in_gauss_blur_1_rd71_select(in, d0, d1, dynamic_address);
	set_at<1136, 1152>(result, in_gauss_blur_1_rd71_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
//	in_in_update_0_write2
//	in_in_update_0_write3
//	in_in_update_0_write4
//	in_in_update_0_write5
//	in_in_update_0_write6
//	in_in_update_0_write7
inline void in_in_update_0_write_bundle_write(hw_uint<128>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write1_res = in_update_0_write.extract<16, 31>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write2_res = in_update_0_write.extract<32, 47>();
	in_in_update_0_write2_write(in_in_update_0_write2_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write3_res = in_update_0_write.extract<48, 63>();
	in_in_update_0_write3_write(in_in_update_0_write3_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write4_res = in_update_0_write.extract<64, 79>();
	in_in_update_0_write4_write(in_in_update_0_write4_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write5_res = in_update_0_write.extract<80, 95>();
	in_in_update_0_write5_write(in_in_update_0_write5_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write6_res = in_update_0_write.extract<96, 111>();
	in_in_update_0_write6_write(in_in_update_0_write6_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write7_res = in_update_0_write.extract<112, 127>();
	in_in_update_0_write7_write(in_in_update_0_write7_res, in, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_blur_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1935], [0, 1084]}
  hw_uint<16> RAM[1936][1085];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct in_gauss_blur_1_cache {
  // # of banks: 1
  in_gauss_blur_1_all_inputs_to_all_outputs_cache in_gauss_blur_1_all_inputs_to_all_outputs;
};



inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write0, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.write(in_gauss_blur_1_in_gauss_blur_1_update_0_write0, 8*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write1_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write1, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.write(in_gauss_blur_1_in_gauss_blur_1_update_0_write1, 1 + 8*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write2_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write2, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.write(in_gauss_blur_1_in_gauss_blur_1_update_0_write2, 2 + 8*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write3_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write3, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.write(in_gauss_blur_1_in_gauss_blur_1_update_0_write3, 3 + 8*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write4_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write4, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.write(in_gauss_blur_1_in_gauss_blur_1_update_0_write4, 4 + 8*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write5_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write5, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.write(in_gauss_blur_1_in_gauss_blur_1_update_0_write5, 5 + 8*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write6_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write6, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.write(in_gauss_blur_1_in_gauss_blur_1_update_0_write6, 6 + 8*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write7_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write7, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.write(in_gauss_blur_1_in_gauss_blur_1_update_0_write7, 7 + 8*d0 - 0, d1 - 0);
}

inline hw_uint<16> in_gauss_ds_1_rd0_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd0 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[8d0, 2d1] : 0 <= d0 <= 241 and 0 <= d1 <= 542 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.read(8*d0 - 0, 2*d1 - 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd1_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd1 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[2 + 8d0, 2d1] : 0 <= d0 <= 241 and 0 <= d1 <= 542 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.read(2 + 8*d0 - 0, 2*d1 - 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd2_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd2 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[4 + 8d0, 2d1] : 0 <= d0 <= 241 and 0 <= d1 <= 542 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.read(4 + 8*d0 - 0, 2*d1 - 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd3_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd3 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[6 + 8d0, 2d1] : 0 <= d0 <= 241 and 0 <= d1 <= 542 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_all_inputs_to_all_outputs.read(6 + 8*d0 - 0, 2*d1 - 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_write
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write0
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write1
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write2
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write3
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write4
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write5
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write6
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write7
inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(hw_uint<128>& in_gauss_blur_1_update_0_write, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res = in_gauss_blur_1_update_0_write.extract<0, 15>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write1_res = in_gauss_blur_1_update_0_write.extract<16, 31>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write1_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write1_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write2_res = in_gauss_blur_1_update_0_write.extract<32, 47>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write2_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write2_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write3_res = in_gauss_blur_1_update_0_write.extract<48, 63>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write3_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write3_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write4_res = in_gauss_blur_1_update_0_write.extract<64, 79>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write4_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write4_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write5_res = in_gauss_blur_1_update_0_write.extract<80, 95>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write5_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write5_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write6_res = in_gauss_blur_1_update_0_write.extract<96, 111>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write6_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write6_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write7_res = in_gauss_blur_1_update_0_write.extract<112, 127>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write7_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write7_res, in_gauss_blur_1, d0, d1, dynamic_address);
}

// in_gauss_ds_1_update_0_read
//	in_gauss_ds_1_rd0
//	in_gauss_ds_1_rd1
//	in_gauss_ds_1_rd2
//	in_gauss_ds_1_rd3
inline hw_uint<64> in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_gauss_ds_1_rd0
    // in_gauss_ds_1_rd1
    // in_gauss_ds_1_rd2
    // in_gauss_ds_1_rd3

	hw_uint<64> result;
	hw_uint<16> in_gauss_ds_1_rd0_res = in_gauss_ds_1_rd0_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 64>(result, in_gauss_ds_1_rd0_res);
	hw_uint<16> in_gauss_ds_1_rd1_res = in_gauss_ds_1_rd1_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<16, 64>(result, in_gauss_ds_1_rd1_res);
	hw_uint<16> in_gauss_ds_1_rd2_res = in_gauss_ds_1_rd2_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<32, 64>(result, in_gauss_ds_1_rd2_res);
	hw_uint<16> in_gauss_ds_1_rd3_res = in_gauss_ds_1_rd3_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<48, 64>(result, in_gauss_ds_1_rd3_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_blur_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 963], [0, 540]}
  hw_uint<16> RAM[964][541];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct in_gauss_blur_2_cache {
  // # of banks: 1
  in_gauss_blur_2_all_inputs_to_all_outputs_cache in_gauss_blur_2_all_inputs_to_all_outputs;
};



inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write0, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_all_inputs_to_all_outputs.write(in_gauss_blur_2_in_gauss_blur_2_update_0_write0, 4*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write1_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_all_inputs_to_all_outputs.write(in_gauss_blur_2_in_gauss_blur_2_update_0_write1, 1 + 4*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write2_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write2, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_all_inputs_to_all_outputs.write(in_gauss_blur_2_in_gauss_blur_2_update_0_write2, 2 + 4*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write3_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write3, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_all_inputs_to_all_outputs.write(in_gauss_blur_2_in_gauss_blur_2_update_0_write3, 3 + 4*d0 - 0, d1 - 0);
}

inline hw_uint<16> in_gauss_ds_2_rd0_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd0 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[4d0, 2d1] : 0 <= d0 <= 240 and 0 <= d1 <= 270 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0 = in_gauss_blur_2.in_gauss_blur_2_all_inputs_to_all_outputs.read(4*d0 - 0, 2*d1 - 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd1_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd1 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[2 + 4d0, 2d1] : 0 <= d0 <= 240 and 0 <= d1 <= 270 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0 = in_gauss_blur_2.in_gauss_blur_2_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, 2*d1 - 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_write
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write0
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write1
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write2
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write3
inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(hw_uint<64>& in_gauss_blur_2_update_0_write, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res = in_gauss_blur_2_update_0_write.extract<0, 15>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write1_res = in_gauss_blur_2_update_0_write.extract<16, 31>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write1_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write1_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write2_res = in_gauss_blur_2_update_0_write.extract<32, 47>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write2_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write2_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write3_res = in_gauss_blur_2_update_0_write.extract<48, 63>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write3_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write3_res, in_gauss_blur_2, d0, d1, dynamic_address);
}

// in_gauss_ds_2_update_0_read
//	in_gauss_ds_2_rd0
//	in_gauss_ds_2_rd1
inline hw_uint<32> in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // in_gauss_ds_2_rd0
    // in_gauss_ds_2_rd1

	hw_uint<32> result;
	hw_uint<16> in_gauss_ds_2_rd0_res = in_gauss_ds_2_rd0_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 32>(result, in_gauss_ds_2_rd0_res);
	hw_uint<16> in_gauss_ds_2_rd1_res = in_gauss_ds_2_rd1_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<16, 32>(result, in_gauss_ds_2_rd1_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_blur_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 479], [0, 268]}
  hw_uint<16> RAM[480][269];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct in_gauss_blur_3_cache {
  // # of banks: 1
  in_gauss_blur_3_all_inputs_to_all_outputs_cache in_gauss_blur_3_all_inputs_to_all_outputs;
};



inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write0, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_all_inputs_to_all_outputs.write(in_gauss_blur_3_in_gauss_blur_3_update_0_write0, 2*d0 - 0, d1 - 0);
}

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write1_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write1, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_all_inputs_to_all_outputs.write(in_gauss_blur_3_in_gauss_blur_3_update_0_write1, 1 + 2*d0 - 0, d1 - 0);
}

inline hw_uint<16> in_gauss_ds_3_rd0_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_3_rd0 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0 = in_gauss_blur_3.in_gauss_blur_3_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_write
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write0
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write1
inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& in_gauss_blur_3_update_0_write, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res = in_gauss_blur_3_update_0_write.extract<0, 15>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write1_res = in_gauss_blur_3_update_0_write.extract<16, 31>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write1_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write1_res, in_gauss_blur_3, d0, d1, dynamic_address);
}

// in_gauss_ds_3_update_0_read
//	in_gauss_ds_3_rd0
inline hw_uint<16> in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> in_gauss_ds_3_rd0_res = in_gauss_ds_3_rd0_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, in_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_ds_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 967], [0, 542]}
  hw_uint<16> RAM[968][543];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct in_gauss_ds_1_cache {
  // # of banks: 1
  in_gauss_ds_1_all_inputs_to_all_outputs_cache in_gauss_ds_1_all_inputs_to_all_outputs;
};



inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write0, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.write(in_gauss_ds_1_in_gauss_ds_1_update_0_write0, 4*d0 - 0, d1 - 0);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write1_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.write(in_gauss_ds_1_in_gauss_ds_1_update_0_write1, 1 + 4*d0 - 0, d1 - 0);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write2_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write2, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.write(in_gauss_ds_1_in_gauss_ds_1_update_0_write2, 2 + 4*d0 - 0, d1 - 0);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write3_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write3, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.write(in_gauss_ds_1_in_gauss_ds_1_update_0_write3, 3 + 4*d0 - 0, d1 - 0);
}

inline hw_uint<16> in_gauss_blur_2_rd0_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd0 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd1_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd1 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd10_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd10 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(1 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd11_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd11 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(1 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd12_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd12 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd13_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd13 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd14_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd14 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd15_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd15 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd16_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd16 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd17_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd17 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd18_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd18 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd19_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd19 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd2_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd2 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd20_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd20 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd21_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd21 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd22_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd22 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd23_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd23 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd24_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd24 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd25_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd25 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd26_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd26 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd27_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd27 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd28_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd28 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd29_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd29 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(3 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd3_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd3 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(1 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd30_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd30 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd31_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd31 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd32_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd32 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(4 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd33_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd33 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(5 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd34_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd34 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(5 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd35_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd35 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(5 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd4_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd4 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(1 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd5_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd5 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(1 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd6_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd6 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd7_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd7 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 1 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd8_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd8 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 4d0, 2 + d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(2 + 4*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd9_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd9 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 4d0, d1] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_all_inputs_to_all_outputs.read(1 + 4*d0 - 0, d1 - 0);
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_read
//	in_gauss_blur_2_rd0
//	in_gauss_blur_2_rd1
//	in_gauss_blur_2_rd2
//	in_gauss_blur_2_rd3
//	in_gauss_blur_2_rd4
//	in_gauss_blur_2_rd5
//	in_gauss_blur_2_rd6
//	in_gauss_blur_2_rd7
//	in_gauss_blur_2_rd8
//	in_gauss_blur_2_rd9
//	in_gauss_blur_2_rd10
//	in_gauss_blur_2_rd11
//	in_gauss_blur_2_rd12
//	in_gauss_blur_2_rd13
//	in_gauss_blur_2_rd14
//	in_gauss_blur_2_rd15
//	in_gauss_blur_2_rd16
//	in_gauss_blur_2_rd17
//	in_gauss_blur_2_rd18
//	in_gauss_blur_2_rd19
//	in_gauss_blur_2_rd20
//	in_gauss_blur_2_rd21
//	in_gauss_blur_2_rd22
//	in_gauss_blur_2_rd23
//	in_gauss_blur_2_rd24
//	in_gauss_blur_2_rd25
//	in_gauss_blur_2_rd26
//	in_gauss_blur_2_rd27
//	in_gauss_blur_2_rd28
//	in_gauss_blur_2_rd29
//	in_gauss_blur_2_rd30
//	in_gauss_blur_2_rd31
//	in_gauss_blur_2_rd32
//	in_gauss_blur_2_rd33
//	in_gauss_blur_2_rd34
//	in_gauss_blur_2_rd35
inline hw_uint<576> in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 36
    // in_gauss_blur_2_rd0
    // in_gauss_blur_2_rd1
    // in_gauss_blur_2_rd2
    // in_gauss_blur_2_rd3
    // in_gauss_blur_2_rd4
    // in_gauss_blur_2_rd5
    // in_gauss_blur_2_rd6
    // in_gauss_blur_2_rd7
    // in_gauss_blur_2_rd8
    // in_gauss_blur_2_rd9
    // in_gauss_blur_2_rd10
    // in_gauss_blur_2_rd11
    // in_gauss_blur_2_rd12
    // in_gauss_blur_2_rd13
    // in_gauss_blur_2_rd14
    // in_gauss_blur_2_rd15
    // in_gauss_blur_2_rd16
    // in_gauss_blur_2_rd17
    // in_gauss_blur_2_rd18
    // in_gauss_blur_2_rd19
    // in_gauss_blur_2_rd20
    // in_gauss_blur_2_rd21
    // in_gauss_blur_2_rd22
    // in_gauss_blur_2_rd23
    // in_gauss_blur_2_rd24
    // in_gauss_blur_2_rd25
    // in_gauss_blur_2_rd26
    // in_gauss_blur_2_rd27
    // in_gauss_blur_2_rd28
    // in_gauss_blur_2_rd29
    // in_gauss_blur_2_rd30
    // in_gauss_blur_2_rd31
    // in_gauss_blur_2_rd32
    // in_gauss_blur_2_rd33
    // in_gauss_blur_2_rd34
    // in_gauss_blur_2_rd35

	hw_uint<576> result;
	hw_uint<16> in_gauss_blur_2_rd0_res = in_gauss_blur_2_rd0_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 576>(result, in_gauss_blur_2_rd0_res);
	hw_uint<16> in_gauss_blur_2_rd1_res = in_gauss_blur_2_rd1_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 576>(result, in_gauss_blur_2_rd1_res);
	hw_uint<16> in_gauss_blur_2_rd2_res = in_gauss_blur_2_rd2_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 576>(result, in_gauss_blur_2_rd2_res);
	hw_uint<16> in_gauss_blur_2_rd3_res = in_gauss_blur_2_rd3_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 576>(result, in_gauss_blur_2_rd3_res);
	hw_uint<16> in_gauss_blur_2_rd4_res = in_gauss_blur_2_rd4_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 576>(result, in_gauss_blur_2_rd4_res);
	hw_uint<16> in_gauss_blur_2_rd5_res = in_gauss_blur_2_rd5_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 576>(result, in_gauss_blur_2_rd5_res);
	hw_uint<16> in_gauss_blur_2_rd6_res = in_gauss_blur_2_rd6_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 576>(result, in_gauss_blur_2_rd6_res);
	hw_uint<16> in_gauss_blur_2_rd7_res = in_gauss_blur_2_rd7_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 576>(result, in_gauss_blur_2_rd7_res);
	hw_uint<16> in_gauss_blur_2_rd8_res = in_gauss_blur_2_rd8_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 576>(result, in_gauss_blur_2_rd8_res);
	hw_uint<16> in_gauss_blur_2_rd9_res = in_gauss_blur_2_rd9_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<144, 576>(result, in_gauss_blur_2_rd9_res);
	hw_uint<16> in_gauss_blur_2_rd10_res = in_gauss_blur_2_rd10_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<160, 576>(result, in_gauss_blur_2_rd10_res);
	hw_uint<16> in_gauss_blur_2_rd11_res = in_gauss_blur_2_rd11_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<176, 576>(result, in_gauss_blur_2_rd11_res);
	hw_uint<16> in_gauss_blur_2_rd12_res = in_gauss_blur_2_rd12_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<192, 576>(result, in_gauss_blur_2_rd12_res);
	hw_uint<16> in_gauss_blur_2_rd13_res = in_gauss_blur_2_rd13_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<208, 576>(result, in_gauss_blur_2_rd13_res);
	hw_uint<16> in_gauss_blur_2_rd14_res = in_gauss_blur_2_rd14_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<224, 576>(result, in_gauss_blur_2_rd14_res);
	hw_uint<16> in_gauss_blur_2_rd15_res = in_gauss_blur_2_rd15_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<240, 576>(result, in_gauss_blur_2_rd15_res);
	hw_uint<16> in_gauss_blur_2_rd16_res = in_gauss_blur_2_rd16_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<256, 576>(result, in_gauss_blur_2_rd16_res);
	hw_uint<16> in_gauss_blur_2_rd17_res = in_gauss_blur_2_rd17_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<272, 576>(result, in_gauss_blur_2_rd17_res);
	hw_uint<16> in_gauss_blur_2_rd18_res = in_gauss_blur_2_rd18_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<288, 576>(result, in_gauss_blur_2_rd18_res);
	hw_uint<16> in_gauss_blur_2_rd19_res = in_gauss_blur_2_rd19_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<304, 576>(result, in_gauss_blur_2_rd19_res);
	hw_uint<16> in_gauss_blur_2_rd20_res = in_gauss_blur_2_rd20_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<320, 576>(result, in_gauss_blur_2_rd20_res);
	hw_uint<16> in_gauss_blur_2_rd21_res = in_gauss_blur_2_rd21_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<336, 576>(result, in_gauss_blur_2_rd21_res);
	hw_uint<16> in_gauss_blur_2_rd22_res = in_gauss_blur_2_rd22_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<352, 576>(result, in_gauss_blur_2_rd22_res);
	hw_uint<16> in_gauss_blur_2_rd23_res = in_gauss_blur_2_rd23_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<368, 576>(result, in_gauss_blur_2_rd23_res);
	hw_uint<16> in_gauss_blur_2_rd24_res = in_gauss_blur_2_rd24_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<384, 576>(result, in_gauss_blur_2_rd24_res);
	hw_uint<16> in_gauss_blur_2_rd25_res = in_gauss_blur_2_rd25_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<400, 576>(result, in_gauss_blur_2_rd25_res);
	hw_uint<16> in_gauss_blur_2_rd26_res = in_gauss_blur_2_rd26_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<416, 576>(result, in_gauss_blur_2_rd26_res);
	hw_uint<16> in_gauss_blur_2_rd27_res = in_gauss_blur_2_rd27_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<432, 576>(result, in_gauss_blur_2_rd27_res);
	hw_uint<16> in_gauss_blur_2_rd28_res = in_gauss_blur_2_rd28_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<448, 576>(result, in_gauss_blur_2_rd28_res);
	hw_uint<16> in_gauss_blur_2_rd29_res = in_gauss_blur_2_rd29_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<464, 576>(result, in_gauss_blur_2_rd29_res);
	hw_uint<16> in_gauss_blur_2_rd30_res = in_gauss_blur_2_rd30_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<480, 576>(result, in_gauss_blur_2_rd30_res);
	hw_uint<16> in_gauss_blur_2_rd31_res = in_gauss_blur_2_rd31_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<496, 576>(result, in_gauss_blur_2_rd31_res);
	hw_uint<16> in_gauss_blur_2_rd32_res = in_gauss_blur_2_rd32_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<512, 576>(result, in_gauss_blur_2_rd32_res);
	hw_uint<16> in_gauss_blur_2_rd33_res = in_gauss_blur_2_rd33_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<528, 576>(result, in_gauss_blur_2_rd33_res);
	hw_uint<16> in_gauss_blur_2_rd34_res = in_gauss_blur_2_rd34_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<544, 576>(result, in_gauss_blur_2_rd34_res);
	hw_uint<16> in_gauss_blur_2_rd35_res = in_gauss_blur_2_rd35_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<560, 576>(result, in_gauss_blur_2_rd35_res);
	return result;
}

// in_gauss_ds_1_update_0_write
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write0
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write1
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write2
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write3
inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(hw_uint<64>& in_gauss_ds_1_update_0_write, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res = in_gauss_ds_1_update_0_write.extract<0, 15>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write1_res = in_gauss_ds_1_update_0_write.extract<16, 31>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write1_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write1_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write2_res = in_gauss_ds_1_update_0_write.extract<32, 47>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write2_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write2_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write3_res = in_gauss_ds_1_update_0_write.extract<48, 63>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write3_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write3_res, in_gauss_ds_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_ds_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 481], [0, 270]}
  hw_uint<16> RAM[482][271];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct in_gauss_ds_2_cache {
  // # of banks: 1
  in_gauss_ds_2_all_inputs_to_all_outputs_cache in_gauss_ds_2_all_inputs_to_all_outputs;
};



inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write0, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.write(in_gauss_ds_2_in_gauss_ds_2_update_0_write0, 2*d0 - 0, d1 - 0);
}

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write1_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write1, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.write(in_gauss_ds_2_in_gauss_ds_2_update_0_write1, 1 + 2*d0 - 0, d1 - 0);
}

inline hw_uint<16> in_gauss_blur_3_rd0_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd0 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2*d0 - 0, d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd1_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd1 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd10_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd10 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(1 + 2*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd11_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd11 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, 2 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(1 + 2*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd12_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd12 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2 + 2*d0 - 0, d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd13_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd13 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2 + 2*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd14_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd14 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, 2 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2 + 2*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd15_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd15 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 2d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(3 + 2*d0 - 0, d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd16_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd16 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 2d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(3 + 2*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd17_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd17 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 2d0, 2 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(3 + 2*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd2_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd2 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2d0, 2 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd3_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd3 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(1 + 2*d0 - 0, d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd4_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd4 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(1 + 2*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd5_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd5 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, 2 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(1 + 2*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd6_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd6 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2 + 2*d0 - 0, d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd7_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd7 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2 + 2*d0 - 0, 1 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd8_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd8 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 2d0, 2 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(2 + 2*d0 - 0, 2 + d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd9_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd9 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 2d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_all_inputs_to_all_outputs.read(1 + 2*d0 - 0, d1 - 0);
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_read
//	in_gauss_blur_3_rd0
//	in_gauss_blur_3_rd1
//	in_gauss_blur_3_rd2
//	in_gauss_blur_3_rd3
//	in_gauss_blur_3_rd4
//	in_gauss_blur_3_rd5
//	in_gauss_blur_3_rd6
//	in_gauss_blur_3_rd7
//	in_gauss_blur_3_rd8
//	in_gauss_blur_3_rd9
//	in_gauss_blur_3_rd10
//	in_gauss_blur_3_rd11
//	in_gauss_blur_3_rd12
//	in_gauss_blur_3_rd13
//	in_gauss_blur_3_rd14
//	in_gauss_blur_3_rd15
//	in_gauss_blur_3_rd16
//	in_gauss_blur_3_rd17
inline hw_uint<288> in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // in_gauss_blur_3_rd0
    // in_gauss_blur_3_rd1
    // in_gauss_blur_3_rd2
    // in_gauss_blur_3_rd3
    // in_gauss_blur_3_rd4
    // in_gauss_blur_3_rd5
    // in_gauss_blur_3_rd6
    // in_gauss_blur_3_rd7
    // in_gauss_blur_3_rd8
    // in_gauss_blur_3_rd9
    // in_gauss_blur_3_rd10
    // in_gauss_blur_3_rd11
    // in_gauss_blur_3_rd12
    // in_gauss_blur_3_rd13
    // in_gauss_blur_3_rd14
    // in_gauss_blur_3_rd15
    // in_gauss_blur_3_rd16
    // in_gauss_blur_3_rd17

	hw_uint<288> result;
	hw_uint<16> in_gauss_blur_3_rd0_res = in_gauss_blur_3_rd0_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 288>(result, in_gauss_blur_3_rd0_res);
	hw_uint<16> in_gauss_blur_3_rd1_res = in_gauss_blur_3_rd1_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 288>(result, in_gauss_blur_3_rd1_res);
	hw_uint<16> in_gauss_blur_3_rd2_res = in_gauss_blur_3_rd2_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 288>(result, in_gauss_blur_3_rd2_res);
	hw_uint<16> in_gauss_blur_3_rd3_res = in_gauss_blur_3_rd3_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 288>(result, in_gauss_blur_3_rd3_res);
	hw_uint<16> in_gauss_blur_3_rd4_res = in_gauss_blur_3_rd4_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 288>(result, in_gauss_blur_3_rd4_res);
	hw_uint<16> in_gauss_blur_3_rd5_res = in_gauss_blur_3_rd5_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 288>(result, in_gauss_blur_3_rd5_res);
	hw_uint<16> in_gauss_blur_3_rd6_res = in_gauss_blur_3_rd6_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 288>(result, in_gauss_blur_3_rd6_res);
	hw_uint<16> in_gauss_blur_3_rd7_res = in_gauss_blur_3_rd7_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 288>(result, in_gauss_blur_3_rd7_res);
	hw_uint<16> in_gauss_blur_3_rd8_res = in_gauss_blur_3_rd8_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 288>(result, in_gauss_blur_3_rd8_res);
	hw_uint<16> in_gauss_blur_3_rd9_res = in_gauss_blur_3_rd9_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<144, 288>(result, in_gauss_blur_3_rd9_res);
	hw_uint<16> in_gauss_blur_3_rd10_res = in_gauss_blur_3_rd10_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<160, 288>(result, in_gauss_blur_3_rd10_res);
	hw_uint<16> in_gauss_blur_3_rd11_res = in_gauss_blur_3_rd11_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<176, 288>(result, in_gauss_blur_3_rd11_res);
	hw_uint<16> in_gauss_blur_3_rd12_res = in_gauss_blur_3_rd12_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<192, 288>(result, in_gauss_blur_3_rd12_res);
	hw_uint<16> in_gauss_blur_3_rd13_res = in_gauss_blur_3_rd13_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<208, 288>(result, in_gauss_blur_3_rd13_res);
	hw_uint<16> in_gauss_blur_3_rd14_res = in_gauss_blur_3_rd14_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<224, 288>(result, in_gauss_blur_3_rd14_res);
	hw_uint<16> in_gauss_blur_3_rd15_res = in_gauss_blur_3_rd15_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<240, 288>(result, in_gauss_blur_3_rd15_res);
	hw_uint<16> in_gauss_blur_3_rd16_res = in_gauss_blur_3_rd16_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<256, 288>(result, in_gauss_blur_3_rd16_res);
	hw_uint<16> in_gauss_blur_3_rd17_res = in_gauss_blur_3_rd17_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<272, 288>(result, in_gauss_blur_3_rd17_res);
	return result;
}

// in_gauss_ds_2_update_0_write
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write0
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write1
inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& in_gauss_ds_2_update_0_write, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res = in_gauss_ds_2_update_0_write.extract<0, 15>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write1_res = in_gauss_ds_2_update_0_write.extract<16, 31>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write1_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write1_res, in_gauss_ds_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_ds_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 239], [0, 134]}
  hw_uint<16> RAM[240][135];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct in_gauss_ds_3_cache {
  // # of banks: 1
  in_gauss_ds_3_all_inputs_to_all_outputs_cache in_gauss_ds_3_all_inputs_to_all_outputs;
};



inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write0, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_all_inputs_to_all_outputs.write(in_gauss_ds_3_in_gauss_ds_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> gp_fpga_rd0_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_fpga_rd0 read pattern: { gp_fpga_update_0[d0, d1] -> in_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0 = in_gauss_ds_3.in_gauss_ds_3_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// gp_fpga_update_0_read
//	gp_fpga_rd0
inline hw_uint<16> in_gauss_ds_3_gp_fpga_update_0_read_bundle_read(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_fpga_rd0

	hw_uint<16> result;
	hw_uint<16> gp_fpga_rd0_res = gp_fpga_rd0_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, gp_fpga_rd0_res);
	return result;
}

// in_gauss_ds_3_update_0_write
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write0
inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& in_gauss_ds_3_update_0_write, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res = in_gauss_ds_3_update_0_write.extract<0, 15>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res, in_gauss_ds_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 88847648 bits


// Operation logic
inline void in_gauss_blur_1_update_0(in_cache& in, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_in_gauss_blur_1_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_8(in_0_c__0_value);
	// Produce: in_gauss_blur_1
	in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_2_update_0(in_gauss_ds_1_cache& in_gauss_ds_1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_1
	auto in_gauss_ds_1_0_c__0_value = in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(in_gauss_ds_1_0_c__0_value);
	// Produce: in_gauss_blur_2
	in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_1_update_0(in_gauss_blur_1_cache& in_gauss_blur_1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_1
	auto in_gauss_blur_1_0_c__0_value = in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(in_gauss_blur_1_0_c__0_value);
	// Produce: in_gauss_ds_1
	in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_8(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_2_update_0(in_gauss_blur_2_cache& in_gauss_blur_2, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_2
	auto in_gauss_blur_2_0_c__0_value = in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(in_gauss_blur_2_0_c__0_value);
	// Produce: in_gauss_ds_2
	in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_3_update_0(in_gauss_ds_2_cache& in_gauss_ds_2, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_2
	auto in_gauss_ds_2_0_c__0_value = in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(in_gauss_ds_2_0_c__0_value);
	// Produce: in_gauss_blur_3
	in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_3_update_0(in_gauss_blur_3_cache& in_gauss_blur_3, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_3
	auto in_gauss_blur_3_0_c__0_value = in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(in_gauss_blur_3_0_c__0_value);
	// Produce: in_gauss_ds_3
	in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_fpga_update_0(in_gauss_ds_3_cache& in_gauss_ds_3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */gp_fpga, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_3
	auto in_gauss_ds_3_0_c__0_value = in_gauss_ds_3_gp_fpga_update_0_read_bundle_read(in_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(in_gauss_ds_3_0_c__0_value);
	// Produce: gp_fpga
	gp_fpga.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void gp_fpga_naive(HWStream<hw_uint<128> >& /* get_args num ports = 8 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_fpga) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gp_fpga_naive_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_1_cache in_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_2_cache in_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_3_cache in_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_1_cache in_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_2_cache in_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_3_cache in_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_gauss_blur_2_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 240 and 0 <= d1 <= 540; in_gauss_blur_3_update_0[d0, d1] -> [6, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 268; gp_fpga_update_0[d0, d1] -> [8, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134; in_gauss_ds_2_update_0[d0, d1] -> [5, d1, d0] : 0 <= d0 <= 240 and 0 <= d1 <= 270; in_gauss_ds_1_update_0[d0, d1] -> [3, d1, d0] : 0 <= d0 <= 241 and 0 <= d1 <= 542; in_gauss_blur_1_update_0[d0, d1] -> [2, d1, d0] : 0 <= d0 <= 241 and 0 <= d1 <= 1084; in_update_0[d0, d1] -> [1, d1, d0] : 0 <= d0 <= 242 and 0 <= d1 <= 1086; in_gauss_ds_3_update_0[d0, d1] -> [7, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
//   { in_gauss_blur_2_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 240 and 0 <= d1 <= 540 }
// Condition for in_gauss_blur_2_update_0(((-4 + i0 == 0) && (i2 >= 0) && (240 - i2 >= 0) && (i1 >= 0) && (540 - i1 >= 0)))
//   { in_gauss_blur_3_update_0[d0, d1] -> [6, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 268 }
// Condition for in_gauss_blur_3_update_0(((-6 + i0 == 0) && (i2 >= 0) && (239 - i2 >= 0) && (i1 >= 0) && (268 - i1 >= 0)))
//   { gp_fpga_update_0[d0, d1] -> [8, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for gp_fpga_update_0(((-8 + i0 == 0) && (i2 >= 0) && (239 - i2 >= 0) && (i1 >= 0) && (134 - i1 >= 0)))
//   { in_gauss_ds_2_update_0[d0, d1] -> [5, d1, d0] : 0 <= d0 <= 240 and 0 <= d1 <= 270 }
// Condition for in_gauss_ds_2_update_0(((-5 + i0 == 0) && (i2 >= 0) && (240 - i2 >= 0) && (i1 >= 0) && (270 - i1 >= 0)))
//   { in_gauss_ds_1_update_0[d0, d1] -> [3, d1, d0] : 0 <= d0 <= 241 and 0 <= d1 <= 542 }
// Condition for in_gauss_ds_1_update_0(((-3 + i0 == 0) && (i2 >= 0) && (241 - i2 >= 0) && (i1 >= 0) && (542 - i1 >= 0)))
//   { in_gauss_blur_1_update_0[d0, d1] -> [2, d1, d0] : 0 <= d0 <= 241 and 0 <= d1 <= 1084 }
// Condition for in_gauss_blur_1_update_0(((-2 + i0 == 0) && (i2 >= 0) && (241 - i2 >= 0) && (i1 >= 0) && (1084 - i1 >= 0)))
//   { in_update_0[d0, d1] -> [1, d1, d0] : 0 <= d0 <= 242 and 0 <= d1 <= 1086 }
// Condition for in_update_0(((-1 + i0 == 0) && (i2 >= 0) && (242 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { in_gauss_ds_3_update_0[d0, d1] -> [7, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for in_gauss_ds_3_update_0(((-7 + i0 == 0) && (i2 >= 0) && (239 - i2 >= 0) && (i1 >= 0) && (134 - i1 >= 0)))

  /*
{
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 242; c2 += 1)
      in_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1084; c1 += 1)
    for (int c2 = 0; c2 <= 241; c2 += 1)
      in_gauss_blur_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 542; c1 += 1)
    for (int c2 = 0; c2 <= 241; c2 += 1)
      in_gauss_ds_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 540; c1 += 1)
    for (int c2 = 0; c2 <= 240; c2 += 1)
      in_gauss_blur_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 270; c1 += 1)
    for (int c2 = 0; c2 <= 240; c2 += 1)
      in_gauss_ds_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 268; c1 += 1)
    for (int c2 = 0; c2 <= 239; c2 += 1)
      in_gauss_blur_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 134; c1 += 1)
    for (int c2 = 0; c2 <= 239; c2 += 1)
      in_gauss_ds_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 134; c1 += 1)
    for (int c2 = 0; c2 <= 239; c2 += 1)
      gp_fpga_update_0(c2, c1);
}

  */
	{
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 242; c2 += 1)
	      in_update_0(in_off_chip /* buf name */, in, c2, c1);
	  for (int c1 = 0; c1 <= 1084; c1 += 1)
	    for (int c2 = 0; c2 <= 241; c2 += 1)
	      in_gauss_blur_1_update_0(in /* buf name */, in_gauss_blur_1, c2, c1);
	  for (int c1 = 0; c1 <= 542; c1 += 1)
	    for (int c2 = 0; c2 <= 241; c2 += 1)
	      in_gauss_ds_1_update_0(in_gauss_blur_1 /* buf name */, in_gauss_ds_1, c2, c1);
	  for (int c1 = 0; c1 <= 540; c1 += 1)
	    for (int c2 = 0; c2 <= 240; c2 += 1)
	      in_gauss_blur_2_update_0(in_gauss_ds_1 /* buf name */, in_gauss_blur_2, c2, c1);
	  for (int c1 = 0; c1 <= 270; c1 += 1)
	    for (int c2 = 0; c2 <= 240; c2 += 1)
	      in_gauss_ds_2_update_0(in_gauss_blur_2 /* buf name */, in_gauss_ds_2, c2, c1);
	  for (int c1 = 0; c1 <= 268; c1 += 1)
	    for (int c2 = 0; c2 <= 239; c2 += 1)
	      in_gauss_blur_3_update_0(in_gauss_ds_2 /* buf name */, in_gauss_blur_3, c2, c1);
	  for (int c1 = 0; c1 <= 134; c1 += 1)
	    for (int c2 = 0; c2 <= 239; c2 += 1)
	      in_gauss_ds_3_update_0(in_gauss_blur_3 /* buf name */, in_gauss_ds_3, c2, c1);
	  for (int c1 = 0; c1 <= 134; c1 += 1)
	    for (int c2 = 0; c2 <= 239; c2 += 1)
	      gp_fpga_update_0(in_gauss_ds_3 /* buf name */, gp_fpga, c2, c1);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void gp_fpga_naive_wrapper(HWStream<hw_uint<128> >& /* get_args num ports = 8 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_fpga, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp_fpga_naive(in_off_chip, gp_fpga);
  }
}
#ifdef __VIVADO_SYNTH__
  // { gp_fpga_update_0[root = 0, gp_fpga_0, gp_fpga_1] -> gp_fpga[0, 0] : 0 <= gp_fpga_0 <= 239 and 0 <= gp_fpga_1 <= 134 }
const int gp_fpga_update_0_write_pipe0_num_transfers = 32400;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 242 and 0 <= in_1 <= 1086 }
const int in_update_0_read_pipe0_num_transfers = 264141;


extern "C" {

void gp_fpga_naive_accel(hw_uint<128>* in_update_0_read_pipe0, hw_uint<16>* gp_fpga_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp_fpga_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp_fpga_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > gp_fpga_update_0_write_pipe0_channel;

  burst_read<128>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp_fpga_naive_wrapper(in_update_0_read_pipe0_channel, gp_fpga_update_0_write_pipe0_channel, size);

  burst_write<16>(gp_fpga_update_0_write_pipe0, gp_fpga_update_0_write_pipe0_channel, gp_fpga_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp_fpga_naive_rdai(HWStream<hw_uint<128> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  gp_fpga_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp_fpga_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp_fpga_naive(in_update_0_read_pipe0, gp_fpga_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

