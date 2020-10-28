#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: time_sharing_gauss_pyramid_merged_compute_units.h
#include "time_sharing_gauss_pyramid_merged_compute_units.h"

#include "hw_classes.h"

struct gp_gray_1_buf4_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 33], [0, 33]}
  hw_uint<32>  RAM[34][34];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gp_gray_1_buf4_cache {
  // # of banks: 1
  gp_gray_1_buf4_all_inputs_to_all_outputs_cache gp_gray_1_buf4_all_inputs_to_all_outputs;
};



inline void gp_gray_1_buf4_gp_gray_16_merged74_14_write(hw_uint<32> & gp_gray_1_buf4_gp_gray_16_merged74_14, gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
  gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.write(gp_gray_1_buf4_gp_gray_16_merged74_14, gp_gray_16 - 0, gp_gray_15 - 0);
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_10_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_10 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[2 + 2gp_gray_214, 1 + 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2 + 2*gp_gray_214 - 0, 1 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_11_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_11 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[2gp_gray_214, 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2*gp_gray_214 - 0, 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_12_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_12 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[1 + 2gp_gray_214, 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(1 + 2*gp_gray_214 - 0, 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_13_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_13 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[2 + 2gp_gray_214, 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2 + 2*gp_gray_214 - 0, 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_5_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_5 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[2gp_gray_214, 2 + 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2*gp_gray_214 - 0, 2 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_6_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_6 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[1 + 2gp_gray_214, 2 + 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(1 + 2*gp_gray_214 - 0, 2 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_7_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_7 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[2 + 2gp_gray_214, 2 + 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2 + 2*gp_gray_214 - 0, 2 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_8_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_8 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[2gp_gray_214, 1 + 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2*gp_gray_214 - 0, 1 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_9_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_9 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> gp_gray_1_buf4[1 + 2gp_gray_214, 1 + 2gp_gray_213] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_14 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(1 + 2*gp_gray_214 - 0, 1 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_14;
  return 0;
}

// # of bundles = 2
// gp_gray_16_merged74_write
//	gp_gray_1_buf4_gp_gray_16_merged74_14
inline void gp_gray_1_buf4_gp_gray_16_merged74_write_bundle_write(hw_uint<32>& gp_gray_16_merged74_write, gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf4_gp_gray_16_merged74_14_res = gp_gray_16_merged74_write.extract<0, 31>();
	gp_gray_1_buf4_gp_gray_16_merged74_14_write(gp_gray_1_buf4_gp_gray_16_merged74_14_res, gp_gray_1_buf4, root, gp_gray_15, gp_gray_16, dynamic_address);
}

// gp_gray_214_merged77_read
//	gp_gray_1_buf4_gp_gray_214_merged77_5
//	gp_gray_1_buf4_gp_gray_214_merged77_6
//	gp_gray_1_buf4_gp_gray_214_merged77_7
//	gp_gray_1_buf4_gp_gray_214_merged77_8
//	gp_gray_1_buf4_gp_gray_214_merged77_9
//	gp_gray_1_buf4_gp_gray_214_merged77_10
//	gp_gray_1_buf4_gp_gray_214_merged77_11
//	gp_gray_1_buf4_gp_gray_214_merged77_12
//	gp_gray_1_buf4_gp_gray_214_merged77_13
inline hw_uint<288> gp_gray_1_buf4_gp_gray_214_merged77_read_bundle_read(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_gray_1_buf4_gp_gray_214_merged77_5
    // gp_gray_1_buf4_gp_gray_214_merged77_6
    // gp_gray_1_buf4_gp_gray_214_merged77_7
    // gp_gray_1_buf4_gp_gray_214_merged77_8
    // gp_gray_1_buf4_gp_gray_214_merged77_9
    // gp_gray_1_buf4_gp_gray_214_merged77_10
    // gp_gray_1_buf4_gp_gray_214_merged77_11
    // gp_gray_1_buf4_gp_gray_214_merged77_12
    // gp_gray_1_buf4_gp_gray_214_merged77_13

	hw_uint<288> result;
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_5_res = gp_gray_1_buf4_gp_gray_214_merged77_5_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<0, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_5_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_6_res = gp_gray_1_buf4_gp_gray_214_merged77_6_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<32, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_6_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_7_res = gp_gray_1_buf4_gp_gray_214_merged77_7_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<64, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_7_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_8_res = gp_gray_1_buf4_gp_gray_214_merged77_8_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<96, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_8_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_9_res = gp_gray_1_buf4_gp_gray_214_merged77_9_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<128, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_9_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_10_res = gp_gray_1_buf4_gp_gray_214_merged77_10_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<160, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_10_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_11_res = gp_gray_1_buf4_gp_gray_214_merged77_11_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<192, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_11_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_12_res = gp_gray_1_buf4_gp_gray_214_merged77_12_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<224, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_12_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_13_res = gp_gray_1_buf4_gp_gray_214_merged77_13_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, dynamic_address);
	set_at<256, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_13_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_2_buf12_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 15], [0, 15]}
  hw_uint<32>  RAM[16][16];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gp_gray_2_buf12_cache {
  // # of banks: 1
  gp_gray_2_buf12_all_inputs_to_all_outputs_cache gp_gray_2_buf12_all_inputs_to_all_outputs;
};



inline void gp_gray_2_buf12_gp_gray_214_merged77_4_write(hw_uint<32> & gp_gray_2_buf12_gp_gray_214_merged77_4, gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
  gp_gray_2_buf12.gp_gray_2_buf12_all_inputs_to_all_outputs.write(gp_gray_2_buf12_gp_gray_214_merged77_4, gp_gray_214 - 0, gp_gray_213 - 0);
}

inline hw_uint<32>  gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_1_select(gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int pw_math_gp_gray_2_buf122021, int pw_math_gp_gray_2_buf122022, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_1 read pattern: { pw_math_gp_gray_2_buf122023[root = 0, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022] -> gp_gray_2_buf12[pw_math_gp_gray_2_buf122022, pw_math_gp_gray_2_buf122021] : 0 <= pw_math_gp_gray_2_buf122021 <= 15 and 0 <= pw_math_gp_gray_2_buf122022 <= 15 }
  auto value_gp_gray_2_buf12_gp_gray_214_merged77_4 = gp_gray_2_buf12.gp_gray_2_buf12_all_inputs_to_all_outputs.read(pw_math_gp_gray_2_buf122022 - 0, pw_math_gp_gray_2_buf122021 - 0);
  return value_gp_gray_2_buf12_gp_gray_214_merged77_4;
  return 0;
}

// # of bundles = 2
// gp_gray_214_merged77_write
//	gp_gray_2_buf12_gp_gray_214_merged77_4
inline void gp_gray_2_buf12_gp_gray_214_merged77_write_bundle_write(hw_uint<32>& gp_gray_214_merged77_write, gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int gp_gray_213, int gp_gray_214, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf12_gp_gray_214_merged77_4_res = gp_gray_214_merged77_write.extract<0, 31>();
	gp_gray_2_buf12_gp_gray_214_merged77_4_write(gp_gray_2_buf12_gp_gray_214_merged77_4_res, gp_gray_2_buf12, root, gp_gray_213, gp_gray_214, dynamic_address);
}

// pw_math_gp_gray_2_buf122023_read
//	gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_1
inline hw_uint<32> gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_read_bundle_read(gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int pw_math_gp_gray_2_buf122021, int pw_math_gp_gray_2_buf122022, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_1

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_1_res = gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_1_select(gp_gray_2_buf12, root, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_1_res);
	return result;
}

#include "hw_classes.h"

struct gray_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 68], [0, 68]}
  hw_uint<32>  RAM[69][69];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_cache {
  // # of banks: 1
  gray_all_inputs_to_all_outputs_cache gray_all_inputs_to_all_outputs;
};



inline void gray_oc_load_in03_2_write(hw_uint<32> & gray_oc_load_in03_2, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
  gray.gray_all_inputs_to_all_outputs.write(gray_oc_load_in03_2, oc_load_in02 - 0, oc_load_in01 - 0);
}

inline hw_uint<32>  gray_gp_gray_16_merged74_15_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_15 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[2gp_gray_16, 2 + 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(2*gp_gray_16 - 0, 2 + 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_16_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_16 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[1 + 2gp_gray_16, 2 + 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(1 + 2*gp_gray_16 - 0, 2 + 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_17_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_17 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[2 + 2gp_gray_16, 2 + 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(2 + 2*gp_gray_16 - 0, 2 + 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_18_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_18 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[2gp_gray_16, 1 + 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(2*gp_gray_16 - 0, 1 + 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_19_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_19 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[1 + 2gp_gray_16, 1 + 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(1 + 2*gp_gray_16 - 0, 1 + 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_20_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_20 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[2 + 2gp_gray_16, 1 + 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(2 + 2*gp_gray_16 - 0, 1 + 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_21_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_21 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[2gp_gray_16, 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(2*gp_gray_16 - 0, 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_22_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_22 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[1 + 2gp_gray_16, 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(1 + 2*gp_gray_16 - 0, 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_23_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_23 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> gray[2 + 2gp_gray_16, 2gp_gray_15] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(2 + 2*gp_gray_16 - 0, 2*gp_gray_15 - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

// # of bundles = 2
// gp_gray_16_merged74_read
//	gray_gp_gray_16_merged74_15
//	gray_gp_gray_16_merged74_16
//	gray_gp_gray_16_merged74_17
//	gray_gp_gray_16_merged74_18
//	gray_gp_gray_16_merged74_19
//	gray_gp_gray_16_merged74_20
//	gray_gp_gray_16_merged74_21
//	gray_gp_gray_16_merged74_22
//	gray_gp_gray_16_merged74_23
inline hw_uint<288> gray_gp_gray_16_merged74_read_bundle_read(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int dynamic_address) {
  // # of ports in bundle: 9
    // gray_gp_gray_16_merged74_15
    // gray_gp_gray_16_merged74_16
    // gray_gp_gray_16_merged74_17
    // gray_gp_gray_16_merged74_18
    // gray_gp_gray_16_merged74_19
    // gray_gp_gray_16_merged74_20
    // gray_gp_gray_16_merged74_21
    // gray_gp_gray_16_merged74_22
    // gray_gp_gray_16_merged74_23

	hw_uint<288> result;
	hw_uint<32>  gray_gp_gray_16_merged74_15_res = gray_gp_gray_16_merged74_15_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<0, 288>(result, gray_gp_gray_16_merged74_15_res);
	hw_uint<32>  gray_gp_gray_16_merged74_16_res = gray_gp_gray_16_merged74_16_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<32, 288>(result, gray_gp_gray_16_merged74_16_res);
	hw_uint<32>  gray_gp_gray_16_merged74_17_res = gray_gp_gray_16_merged74_17_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<64, 288>(result, gray_gp_gray_16_merged74_17_res);
	hw_uint<32>  gray_gp_gray_16_merged74_18_res = gray_gp_gray_16_merged74_18_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<96, 288>(result, gray_gp_gray_16_merged74_18_res);
	hw_uint<32>  gray_gp_gray_16_merged74_19_res = gray_gp_gray_16_merged74_19_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<128, 288>(result, gray_gp_gray_16_merged74_19_res);
	hw_uint<32>  gray_gp_gray_16_merged74_20_res = gray_gp_gray_16_merged74_20_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<160, 288>(result, gray_gp_gray_16_merged74_20_res);
	hw_uint<32>  gray_gp_gray_16_merged74_21_res = gray_gp_gray_16_merged74_21_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<192, 288>(result, gray_gp_gray_16_merged74_21_res);
	hw_uint<32>  gray_gp_gray_16_merged74_22_res = gray_gp_gray_16_merged74_22_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<224, 288>(result, gray_gp_gray_16_merged74_22_res);
	hw_uint<32>  gray_gp_gray_16_merged74_23_res = gray_gp_gray_16_merged74_23_select(gray, root, gp_gray_15, gp_gray_16, dynamic_address);
	set_at<256, 288>(result, gray_gp_gray_16_merged74_23_res);
	return result;
}

// oc_load_in03_write
//	gray_oc_load_in03_2
inline void gray_oc_load_in03_write_bundle_write(hw_uint<32>& oc_load_in03_write, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
	hw_uint<32>  gray_oc_load_in03_2_res = oc_load_in03_write.extract<0, 31>();
	gray_oc_load_in03_2_write(gray_oc_load_in03_2_res, gray, root, oc_load_in01, oc_load_in02, dynamic_address);
}

// Total re-use buffer capacity: 197536 bits


// Operation logic
inline void oc_load_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_oc_load_in02__p___m_3_rp__p_3_c______lp_oc_load_in01__p___m_3_rp__p_3_value = in.read();
	// Produce: gray
	gray_oc_load_in03_write_bundle_write(/* arg names */in__lp_oc_load_in02__p___m_3_rp__p_3_c______lp_oc_load_in01__p___m_3_rp__p_3_value, gray, root, oc_load_in01, oc_load_in02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gp_gray_2_buf122023(gp_gray_2_buf12_cache& gp_gray_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int pw_math_gp_gray_2_buf122021, int pw_math_gp_gray_2_buf122022) {
  // Dynamic address computation

	// Consume: gp_gray_2_buf12
	auto gp_gray_2_buf12_pw_math_gp_gray_2_buf122022_p_0_c___pw_math_gp_gray_2_buf122021_p_0_value = gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_read_bundle_read(gp_gray_2_buf12/* source_delay */, root, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gp_gray_2_buf12_pw_math_gp_gray_2_buf122022_p_0_c___pw_math_gp_gray_2_buf122021_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_gray_16_merged74(gray_cache& gray, gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_15, int gp_gray_16) {
  // Dynamic address computation

	// Consume: gray
	auto gray_2_m__lp_gp_gray_16__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_gray_15__p___m_1_rp___p__1_p_3_value = gray_gp_gray_16_merged74_read_bundle_read(gray/* source_delay */, root, gp_gray_15, gp_gray_16, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_gray_16_cu72(gray_2_m__lp_gp_gray_16__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_gray_15__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_gray_1_buf4
	gp_gray_1_buf4_gp_gray_16_merged74_write_bundle_write(/* arg names */compute_result, gp_gray_1_buf4, root, gp_gray_15, gp_gray_16, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_gray_214_merged77(gp_gray_1_buf4_cache& gp_gray_1_buf4, gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int gp_gray_213, int gp_gray_214) {
  // Dynamic address computation

	// Consume: gp_gray_1_buf4
	auto gp_gray_1_buf4_2_m_gp_gray_214__p___m_1_p_1_c_____2_m_gp_gray_213__p__1_p_1_value = gp_gray_1_buf4_gp_gray_214_merged77_read_bundle_read(gp_gray_1_buf4/* source_delay */, root, gp_gray_213, gp_gray_214, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_gray_214_cu75(gp_gray_1_buf4_2_m_gp_gray_214__p___m_1_p_1_c_____2_m_gp_gray_213__p__1_p_1_value);
	// Produce: gp_gray_2_buf12
	gp_gray_2_buf12_gp_gray_214_merged77_write_bundle_write(/* arg names */compute_result, gp_gray_2_buf12, root, gp_gray_213, gp_gray_214, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_time_sharing_gauss_pyramid(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_time_sharing_gauss_pyramid_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_gray_1_buf4_cache gp_gray_1_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_gray_2_buf12_cache gp_gray_2_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_cache gray;
#pragma HLS array_partition variable=gray.gray_all_inputs_to_all_outputs cyclic factor=4 dim=1
#pragma HLS array_partition variable=gray.gray_all_inputs_to_all_outputs cyclic factor=4 dim=2

#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_gp_gray_2_buf122023[root = 0, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022] -> [0, 0, 3, pw_math_gp_gray_2_buf122021, 0, pw_math_gp_gray_2_buf122022, 0] : 0 <= pw_math_gp_gray_2_buf122021 <= 15 and 0 <= pw_math_gp_gray_2_buf122022 <= 15; oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> [0, 0, 0, oc_load_in01, 0, oc_load_in02, 0] : 0 <= oc_load_in01 <= 67 and 0 <= oc_load_in02 <= 67; gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> [0, 0, 1, gp_gray_15, 0, gp_gray_16, 0] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33; gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> [0, 0, 2, gp_gray_213, 0, gp_gray_214, 0] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
//   { pw_math_gp_gray_2_buf122023[root = 0, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022] -> [0, 0, 3, pw_math_gp_gray_2_buf122021, 0, pw_math_gp_gray_2_buf122022, 0] : 0 <= pw_math_gp_gray_2_buf122021 <= 15 and 0 <= pw_math_gp_gray_2_buf122022 <= 15 }
// Condition for pw_math_gp_gray_2_buf122023(((i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (15 - i5 >= 0)))
//   { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> [0, 0, 0, oc_load_in01, 0, oc_load_in02, 0] : 0 <= oc_load_in01 <= 67 and 0 <= oc_load_in02 <= 67 }
// Condition for oc_load_in03(((i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (67 - i3 >= 0) && (i5 >= 0) && (67 - i5 >= 0)))
//   { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16] -> [0, 0, 1, gp_gray_15, 0, gp_gray_16, 0] : 0 <= gp_gray_15 <= 33 and 0 <= gp_gray_16 <= 33 }
// Condition for gp_gray_16_merged74(((i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (33 - i3 >= 0) && (i5 >= 0) && (33 - i5 >= 0)))
//   { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214] -> [0, 0, 2, gp_gray_213, 0, gp_gray_214, 0] : 0 <= gp_gray_213 <= 15 and 0 <= gp_gray_214 <= 15 }
// Condition for gp_gray_214_merged77(((i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (15 - i5 >= 0)))

  /*
{
  for (int c3 = 0; c3 <= 67; c3 += 1)
    for (int c5 = 0; c5 <= 67; c5 += 1)
      oc_load_in03(0, c3, c5);
  for (int c3 = 0; c3 <= 33; c3 += 1)
    for (int c5 = 0; c5 <= 33; c5 += 1)
      gp_gray_16_merged74(0, c3, c5);
  for (int c3 = 0; c3 <= 15; c3 += 1)
    for (int c5 = 0; c5 <= 15; c5 += 1)
      gp_gray_214_merged77(0, c3, c5);
  for (int c3 = 0; c3 <= 15; c3 += 1)
    for (int c5 = 0; c5 <= 15; c5 += 1)
      pw_math_gp_gray_2_buf122023(0, c3, c5);
}

  */
	{
	  for (int c3 = 0; c3 <= 67; c3 += 1)
	    for (int c5 = 0; c5 <= 67; c5 += 1)
#pragma HLS pipeline II=1
	      oc_load_in03(in /* buf name */, gray, 0, c3, c5);
	  for (int c3 = 0; c3 <= 33; c3 += 1)
	    for (int c5 = 0; c5 <= 33; c5 += 1)
#pragma HLS pipeline II=1
	      gp_gray_16_merged74(gray /* buf name */, gp_gray_1_buf4, 0, c3, c5);
	  for (int c3 = 0; c3 <= 15; c3 += 1)
	    for (int c5 = 0; c5 <= 15; c5 += 1)
#pragma HLS pipeline II=1
	      gp_gray_214_merged77(gp_gray_1_buf4 /* buf name */, gp_gray_2_buf12, 0, c3, c5);
	  for (int c3 = 0; c3 <= 15; c3 += 1)
	    for (int c5 = 0; c5 <= 15; c5 += 1)
#pragma HLS pipeline II=1
	      pw_math_gp_gray_2_buf122023(gp_gray_2_buf12 /* buf name */, out, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_time_sharing_gauss_pyramid_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_time_sharing_gauss_pyramid(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> in[oc_load_in02, oc_load_in01] : 0 <= oc_load_in01 <= 67 and 0 <= oc_load_in02 <= 67 }
const int oc_load_in03_read_pipe0_num_transfers = 4624;
  // { pw_math_gp_gray_2_buf122023[root = 0, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022] -> out[pw_math_gp_gray_2_buf122022, pw_math_gp_gray_2_buf122021] : 0 <= pw_math_gp_gray_2_buf122021 <= 15 and 0 <= pw_math_gp_gray_2_buf122022 <= 15 }
const int pw_math_gp_gray_2_buf122023_write_pipe0_num_transfers = 256;


extern "C" {

void unoptimized_time_sharing_gauss_pyramid_accel(hw_uint<32>* oc_load_in03_read_pipe0, hw_uint<32>* pw_math_gp_gray_2_buf122023_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = oc_load_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_gp_gray_2_buf122023_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = oc_load_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_gp_gray_2_buf122023_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > oc_load_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_gp_gray_2_buf122023_write_pipe0_channel;

  burst_read<32>(oc_load_in03_read_pipe0, oc_load_in03_read_pipe0_channel, oc_load_in03_read_pipe0_num_transfers*size);

  unoptimized_time_sharing_gauss_pyramid_wrapper(oc_load_in03_read_pipe0_channel, pw_math_gp_gray_2_buf122023_write_pipe0_channel, size);

  burst_write<32>(pw_math_gp_gray_2_buf122023_write_pipe0, pw_math_gp_gray_2_buf122023_write_pipe0_channel, pw_math_gp_gray_2_buf122023_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_time_sharing_gauss_pyramid_rdai(HWStream<hw_uint<32> >& oc_load_in03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_gp_gray_2_buf122023_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = oc_load_in03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_gp_gray_2_buf122023_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_time_sharing_gauss_pyramid(oc_load_in03_read_pipe0, pw_math_gp_gray_2_buf122023_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

