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
	// RAM Box: {[0, 9], [0, 9]}
  hw_uint<32>  RAM[10][10];
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



inline void gp_gray_1_buf4_gp_gray_16_merged74_16_write(hw_uint<32> & gp_gray_1_buf4_gp_gray_16_merged74_16, gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
  gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.write(gp_gray_1_buf4_gp_gray_16_merged74_16, 2*gp_gray_16 + sm78 - 0, 2*gp_gray_15 + sm82 - 0);
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_10_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_10 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[2gp_gray_214, 1 + 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2*gp_gray_214 - 0, 1 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_11_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_11 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[1 + 2gp_gray_214, 1 + 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(1 + 2*gp_gray_214 - 0, 1 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_12_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_12 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[2 + 2gp_gray_214, 1 + 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2 + 2*gp_gray_214 - 0, 1 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_13_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_13 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[2gp_gray_214, 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2*gp_gray_214 - 0, 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_14_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_14 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[1 + 2gp_gray_214, 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(1 + 2*gp_gray_214 - 0, 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_15_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_15 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[2 + 2gp_gray_214, 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2 + 2*gp_gray_214 - 0, 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_7_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_7 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[2gp_gray_214, 2 + 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2*gp_gray_214 - 0, 2 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_8_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_8 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[1 + 2gp_gray_214, 2 + 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(1 + 2*gp_gray_214 - 0, 2 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

inline hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_9_select(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_1_buf4_gp_gray_214_merged77_9 read pattern: { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> gp_gray_1_buf4[2 + 2gp_gray_214, 2 + 2gp_gray_213] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
  auto value_gp_gray_1_buf4_gp_gray_16_merged74_16 = gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs.read(2 + 2*gp_gray_214 - 0, 2 + 2*gp_gray_213 - 0);
  return value_gp_gray_1_buf4_gp_gray_16_merged74_16;
  return 0;
}

// # of bundles = 2
// gp_gray_16_merged74_write
//	gp_gray_1_buf4_gp_gray_16_merged74_16
inline void gp_gray_1_buf4_gp_gray_16_merged74_write_bundle_write(hw_uint<32>& gp_gray_16_merged74_write, gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
	hw_uint<32>  gp_gray_1_buf4_gp_gray_16_merged74_16_res = gp_gray_16_merged74_write.extract<0, 31>();
	gp_gray_1_buf4_gp_gray_16_merged74_16_write(gp_gray_1_buf4_gp_gray_16_merged74_16_res, gp_gray_1_buf4, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
}

// gp_gray_214_merged77_read
//	gp_gray_1_buf4_gp_gray_214_merged77_7
//	gp_gray_1_buf4_gp_gray_214_merged77_8
//	gp_gray_1_buf4_gp_gray_214_merged77_9
//	gp_gray_1_buf4_gp_gray_214_merged77_10
//	gp_gray_1_buf4_gp_gray_214_merged77_11
//	gp_gray_1_buf4_gp_gray_214_merged77_12
//	gp_gray_1_buf4_gp_gray_214_merged77_13
//	gp_gray_1_buf4_gp_gray_214_merged77_14
//	gp_gray_1_buf4_gp_gray_214_merged77_15
inline hw_uint<288> gp_gray_1_buf4_gp_gray_214_merged77_read_bundle_read(gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_gray_1_buf4_gp_gray_214_merged77_7
    // gp_gray_1_buf4_gp_gray_214_merged77_8
    // gp_gray_1_buf4_gp_gray_214_merged77_9
    // gp_gray_1_buf4_gp_gray_214_merged77_10
    // gp_gray_1_buf4_gp_gray_214_merged77_11
    // gp_gray_1_buf4_gp_gray_214_merged77_12
    // gp_gray_1_buf4_gp_gray_214_merged77_13
    // gp_gray_1_buf4_gp_gray_214_merged77_14
    // gp_gray_1_buf4_gp_gray_214_merged77_15

	hw_uint<288> result;
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_7_res = gp_gray_1_buf4_gp_gray_214_merged77_7_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<0, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_7_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_8_res = gp_gray_1_buf4_gp_gray_214_merged77_8_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<32, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_8_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_9_res = gp_gray_1_buf4_gp_gray_214_merged77_9_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<64, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_9_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_10_res = gp_gray_1_buf4_gp_gray_214_merged77_10_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<96, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_10_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_11_res = gp_gray_1_buf4_gp_gray_214_merged77_11_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<128, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_11_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_12_res = gp_gray_1_buf4_gp_gray_214_merged77_12_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<160, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_12_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_13_res = gp_gray_1_buf4_gp_gray_214_merged77_13_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<192, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_13_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_14_res = gp_gray_1_buf4_gp_gray_214_merged77_14_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<224, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_14_res);
	hw_uint<32>  gp_gray_1_buf4_gp_gray_214_merged77_15_res = gp_gray_1_buf4_gp_gray_214_merged77_15_select(gp_gray_1_buf4, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
	set_at<256, 288>(result, gp_gray_1_buf4_gp_gray_214_merged77_15_res);
	return result;
}

#include "hw_classes.h"

struct gp_gray_2_buf12_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 3], [0, 3]}
  hw_uint<32>  RAM[4][4];
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



inline void gp_gray_2_buf12_gp_gray_214_merged77_6_write(hw_uint<32> & gp_gray_2_buf12_gp_gray_214_merged77_6, gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
  gp_gray_2_buf12.gp_gray_2_buf12_all_inputs_to_all_outputs.write(gp_gray_2_buf12_gp_gray_214_merged77_6, gp_gray_214 - 0, gp_gray_213 - 0);
}

inline hw_uint<32>  gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_3_select(gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int pw_math_gp_gray_2_buf122021, int pw_math_gp_gray_2_buf122022, int sm85, int sm81, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_3 read pattern: { pw_math_gp_gray_2_buf122023[root = 0, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022, sm85 = 0, sm81 = 0] -> gp_gray_2_buf12[pw_math_gp_gray_2_buf122022, pw_math_gp_gray_2_buf122021] : 0 <= pw_math_gp_gray_2_buf122021 <= 3 and 0 <= pw_math_gp_gray_2_buf122022 <= 3 }
  auto value_gp_gray_2_buf12_gp_gray_214_merged77_6 = gp_gray_2_buf12.gp_gray_2_buf12_all_inputs_to_all_outputs.read(pw_math_gp_gray_2_buf122022 - 0, pw_math_gp_gray_2_buf122021 - 0);
  return value_gp_gray_2_buf12_gp_gray_214_merged77_6;
  return 0;
}

// # of bundles = 2
// gp_gray_214_merged77_write
//	gp_gray_2_buf12_gp_gray_214_merged77_6
inline void gp_gray_2_buf12_gp_gray_214_merged77_write_bundle_write(hw_uint<32>& gp_gray_214_merged77_write, gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79, int dynamic_address) {
	hw_uint<32>  gp_gray_2_buf12_gp_gray_214_merged77_6_res = gp_gray_214_merged77_write.extract<0, 31>();
	gp_gray_2_buf12_gp_gray_214_merged77_6_write(gp_gray_2_buf12_gp_gray_214_merged77_6_res, gp_gray_2_buf12, root, gp_gray_213, gp_gray_214, sm83, sm79, dynamic_address);
}

// pw_math_gp_gray_2_buf122023_read
//	gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_3
inline hw_uint<32> gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_read_bundle_read(gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int pw_math_gp_gray_2_buf122021, int pw_math_gp_gray_2_buf122022, int sm85, int sm81, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_3

	hw_uint<32> result;
	hw_uint<32>  gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_3_res = gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_3_select(gp_gray_2_buf12, root, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022, sm85, sm81, dynamic_address);
	set_at<0, 32>(result, gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_3_res);
	return result;
}

#include "hw_classes.h"

struct gray_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 20], [0, 20]}
  hw_uint<32>  RAM[21][21];
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



inline void gray_oc_load_in03_4_write(hw_uint<32> & gray_oc_load_in03_4, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int sm84, int sm80, int dynamic_address) {
  gray.gray_all_inputs_to_all_outputs.write(gray_oc_load_in03_4, 4*oc_load_in02 + sm80 - 0, 4*oc_load_in01 + sm84 - 0);
}

inline hw_uint<32>  gray_gp_gray_16_merged74_17_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_17 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[4gp_gray_16 + 2sm78, 2 + 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(4*gp_gray_16 + 2*sm78 - 0, 2 + 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_18_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_18 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[1 + 4gp_gray_16 + 2sm78, 2 + 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(1 + 4*gp_gray_16 + 2*sm78 - 0, 2 + 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_19_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_19 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[2 + 4gp_gray_16 + 2sm78, 2 + 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(2 + 4*gp_gray_16 + 2*sm78 - 0, 2 + 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_20_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_20 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[4gp_gray_16 + 2sm78, 1 + 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(4*gp_gray_16 + 2*sm78 - 0, 1 + 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_21_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_21 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[1 + 4gp_gray_16 + 2sm78, 1 + 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(1 + 4*gp_gray_16 + 2*sm78 - 0, 1 + 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_22_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_22 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[2 + 4gp_gray_16 + 2sm78, 1 + 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(2 + 4*gp_gray_16 + 2*sm78 - 0, 1 + 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_23_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_23 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[4gp_gray_16 + 2sm78, 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(4*gp_gray_16 + 2*sm78 - 0, 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_24_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_24 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[1 + 4gp_gray_16 + 2sm78, 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(1 + 4*gp_gray_16 + 2*sm78 - 0, 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_gp_gray_16_merged74_25_select(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_gp_gray_16_merged74_25 read pattern: { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> gray[2 + 4gp_gray_16 + 2sm78, 4gp_gray_15 + 2sm82] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(2 + 4*gp_gray_16 + 2*sm78 - 0, 4*gp_gray_15 + 2*sm82 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

// # of bundles = 2
// gp_gray_16_merged74_read
//	gray_gp_gray_16_merged74_17
//	gray_gp_gray_16_merged74_18
//	gray_gp_gray_16_merged74_19
//	gray_gp_gray_16_merged74_20
//	gray_gp_gray_16_merged74_21
//	gray_gp_gray_16_merged74_22
//	gray_gp_gray_16_merged74_23
//	gray_gp_gray_16_merged74_24
//	gray_gp_gray_16_merged74_25
inline hw_uint<288> gray_gp_gray_16_merged74_read_bundle_read(gray_cache& gray, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78, int dynamic_address) {
  // # of ports in bundle: 9
    // gray_gp_gray_16_merged74_17
    // gray_gp_gray_16_merged74_18
    // gray_gp_gray_16_merged74_19
    // gray_gp_gray_16_merged74_20
    // gray_gp_gray_16_merged74_21
    // gray_gp_gray_16_merged74_22
    // gray_gp_gray_16_merged74_23
    // gray_gp_gray_16_merged74_24
    // gray_gp_gray_16_merged74_25

	hw_uint<288> result;
	hw_uint<32>  gray_gp_gray_16_merged74_17_res = gray_gp_gray_16_merged74_17_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<0, 288>(result, gray_gp_gray_16_merged74_17_res);
	hw_uint<32>  gray_gp_gray_16_merged74_18_res = gray_gp_gray_16_merged74_18_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<32, 288>(result, gray_gp_gray_16_merged74_18_res);
	hw_uint<32>  gray_gp_gray_16_merged74_19_res = gray_gp_gray_16_merged74_19_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<64, 288>(result, gray_gp_gray_16_merged74_19_res);
	hw_uint<32>  gray_gp_gray_16_merged74_20_res = gray_gp_gray_16_merged74_20_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<96, 288>(result, gray_gp_gray_16_merged74_20_res);
	hw_uint<32>  gray_gp_gray_16_merged74_21_res = gray_gp_gray_16_merged74_21_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<128, 288>(result, gray_gp_gray_16_merged74_21_res);
	hw_uint<32>  gray_gp_gray_16_merged74_22_res = gray_gp_gray_16_merged74_22_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<160, 288>(result, gray_gp_gray_16_merged74_22_res);
	hw_uint<32>  gray_gp_gray_16_merged74_23_res = gray_gp_gray_16_merged74_23_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<192, 288>(result, gray_gp_gray_16_merged74_23_res);
	hw_uint<32>  gray_gp_gray_16_merged74_24_res = gray_gp_gray_16_merged74_24_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<224, 288>(result, gray_gp_gray_16_merged74_24_res);
	hw_uint<32>  gray_gp_gray_16_merged74_25_res = gray_gp_gray_16_merged74_25_select(gray, root, gp_gray_15, gp_gray_16, sm82, sm78, dynamic_address);
	set_at<256, 288>(result, gray_gp_gray_16_merged74_25_res);
	return result;
}

// oc_load_in03_write
//	gray_oc_load_in03_4
inline void gray_oc_load_in03_write_bundle_write(hw_uint<32>& oc_load_in03_write, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int sm84, int sm80, int dynamic_address) {
	hw_uint<32>  gray_oc_load_in03_4_res = oc_load_in03_write.extract<0, 31>();
	gray_oc_load_in03_4_write(gray_oc_load_in03_4_res, gray, root, oc_load_in01, oc_load_in02, sm84, sm80, dynamic_address);
}

#include "hw_classes.h"

struct in_rob_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 19], [0, 19]}
  hw_uint<32>  RAM[20][20];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct in_rob_cache {
  // # of banks: 1
  in_rob_all_inputs_to_all_outputs_cache in_rob_all_inputs_to_all_outputs;
};



inline void in_rob_rob88_0_write(hw_uint<32> & in_rob_rob88_0, in_rob_cache& in_rob, int root, int reorder_load86, int d87, int dynamic_address) {
  in_rob.in_rob_all_inputs_to_all_outputs.write(in_rob_rob88_0, d87 - 0, reorder_load86 - 0);
}

inline hw_uint<32>  in_rob_oc_load_in03_5_select(in_rob_cache& in_rob, int root, int oc_load_in01, int oc_load_in02, int sm84, int sm80, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_rob_oc_load_in03_5 read pattern: { oc_load_in03[root = 0, oc_load_in01, oc_load_in02, sm84, sm80] -> in_rob[4oc_load_in02 + sm80, 4oc_load_in01 + sm84] : 0 <= oc_load_in01 <= 4 and 0 <= oc_load_in02 <= 4 and 0 <= sm84 <= 3 and 0 <= sm80 <= 3 }
  auto value_in_rob_rob88_0 = in_rob.in_rob_all_inputs_to_all_outputs.read(4*oc_load_in02 + sm80 - 0, 4*oc_load_in01 + sm84 - 0);
  return value_in_rob_rob88_0;
  return 0;
}

// # of bundles = 2
// oc_load_in03_read
//	in_rob_oc_load_in03_5
inline hw_uint<32> in_rob_oc_load_in03_read_bundle_read(in_rob_cache& in_rob, int root, int oc_load_in01, int oc_load_in02, int sm84, int sm80, int dynamic_address) {
  // # of ports in bundle: 1
    // in_rob_oc_load_in03_5

	hw_uint<32> result;
	hw_uint<32>  in_rob_oc_load_in03_5_res = in_rob_oc_load_in03_5_select(in_rob, root, oc_load_in01, oc_load_in02, sm84, sm80, dynamic_address);
	set_at<0, 32>(result, in_rob_oc_load_in03_5_res);
	return result;
}

// rob88_write
//	in_rob_rob88_0
inline void in_rob_rob88_write_bundle_write(hw_uint<32>& rob88_write, in_rob_cache& in_rob, int root, int reorder_load86, int d87, int dynamic_address) {
	hw_uint<32>  in_rob_rob88_0_res = rob88_write.extract<0, 31>();
	in_rob_rob88_0_write(in_rob_rob88_0_res, in_rob, root, reorder_load86, d87, dynamic_address);
}

// Total re-use buffer capacity: 30624 bits


// Operation logic
inline void oc_load_in03(in_rob_cache& in_rob, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int sm84, int sm80) {
  // Dynamic address computation

	// Consume: in_rob
	auto in_rob__lp__lp_4_m_oc_load_in02__p__sm80_rp___p___m_3_rp__p_3_c________lp__lp_4_m_oc_load_in01__p__sm84_rp___p___m_3_rp__p_3_value = in_rob_oc_load_in03_read_bundle_read(in_rob/* source_delay */, root, oc_load_in01, oc_load_in02, sm84, sm80, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray
	gray_oc_load_in03_write_bundle_write(/* arg names */in_rob__lp__lp_4_m_oc_load_in02__p__sm80_rp___p___m_3_rp__p_3_c________lp__lp_4_m_oc_load_in01__p__sm84_rp___p___m_3_rp__p_3_value, gray, root, oc_load_in01, oc_load_in02, sm84, sm80, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gp_gray_2_buf122023(gp_gray_2_buf12_cache& gp_gray_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int pw_math_gp_gray_2_buf122021, int pw_math_gp_gray_2_buf122022, int sm85, int sm81) {
  // Dynamic address computation

	// Consume: gp_gray_2_buf12
	auto gp_gray_2_buf12__lp_1_m_pw_math_gp_gray_2_buf122022__p__sm81_rp__p_0_c______lp_1_m_pw_math_gp_gray_2_buf122021__p__sm85_rp__p_0_value = gp_gray_2_buf12_pw_math_gp_gray_2_buf122023_read_bundle_read(gp_gray_2_buf12/* source_delay */, root, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022, sm85, sm81, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gp_gray_2_buf12__lp_1_m_pw_math_gp_gray_2_buf122022__p__sm81_rp__p_0_c______lp_1_m_pw_math_gp_gray_2_buf122021__p__sm85_rp__p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_gray_214_merged77(gp_gray_1_buf4_cache& gp_gray_1_buf4, gp_gray_2_buf12_cache& gp_gray_2_buf12, int root, int gp_gray_213, int gp_gray_214, int sm83, int sm79) {
  // Dynamic address computation

	// Consume: gp_gray_1_buf4
	auto gp_gray_1_buf4_2_m__lp_1_m_gp_gray_214__p__sm79_rp___p___m_1_p_1_c_______2_m__lp_1_m_gp_gray_213__p__sm83_rp___p__1_p_1_value = gp_gray_1_buf4_gp_gray_214_merged77_read_bundle_read(gp_gray_1_buf4/* source_delay */, root, gp_gray_213, gp_gray_214, sm83, sm79, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_gray_214_cu75(gp_gray_1_buf4_2_m__lp_1_m_gp_gray_214__p__sm79_rp___p___m_1_p_1_c_______2_m__lp_1_m_gp_gray_213__p__sm83_rp___p__1_p_1_value);
	// Produce: gp_gray_2_buf12
	gp_gray_2_buf12_gp_gray_214_merged77_write_bundle_write(/* arg names */compute_result, gp_gray_2_buf12, root, gp_gray_213, gp_gray_214, sm83, sm79, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_gray_16_merged74(gray_cache& gray, gp_gray_1_buf4_cache& gp_gray_1_buf4, int root, int gp_gray_15, int gp_gray_16, int sm82, int sm78) {
  // Dynamic address computation

	// Consume: gray
	auto gray_2_m__lp__lp_2_m_gp_gray_16__p__sm78_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp__lp_2_m_gp_gray_15__p__sm82_rp___p___m_1_rp___p__1_p_3_value = gray_gp_gray_16_merged74_read_bundle_read(gray/* source_delay */, root, gp_gray_15, gp_gray_16, sm82, sm78, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_gray_16_cu72(gray_2_m__lp__lp_2_m_gp_gray_16__p__sm78_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp__lp_2_m_gp_gray_15__p__sm82_rp___p___m_1_rp___p__1_p_3_value);
	// Produce: gp_gray_1_buf4
	gp_gray_1_buf4_gp_gray_16_merged74_write_bundle_write(/* arg names */compute_result, gp_gray_1_buf4, root, gp_gray_15, gp_gray_16, sm82, sm78, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rob88(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_rob_cache& in_rob, int root, int reorder_load86, int d87) {
  // Dynamic address computation

	// Consume: in
	auto in_d87_c__reorder_load86_value = in.read();
	// Produce: in_rob
	in_rob_rob88_write_bundle_write(/* arg names */in_d87_c__reorder_load86_value, in_rob, root, reorder_load86, d87, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_time_sharing_gauss_pyramid_tiled(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_time_sharing_gauss_pyramid_tiled_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_gray_1_buf4_cache gp_gray_1_buf4;

//#pragma HLS array_partition variable=gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs cyclic factor=3 dim=1
//#pragma HLS array_partition variable=gp_gray_1_buf4.gp_gray_1_buf4_all_inputs_to_all_outputs cyclic factor=3 dim=2

#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_gray_2_buf12_cache gp_gray_2_buf12;
//#pragma HLS array_partition variable=gp_gray_2_buf12.gp_gray_2_buf12_all_inputs_to_all_outputs cyclic factor=3 dim=1
//#pragma HLS array_partition variable=gp_gray_2_buf12.gp_gray_2_buf12_all_inputs_to_all_outputs cyclic factor=3 dim=2
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_cache gray;
//#pragma HLS array_partition variable=gray.gray_all_inputs_to_all_outputs complete dim=1
//#pragma HLS array_partition variable=gray.gray_all_inputs_to_all_outputs complete dim=2
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_rob_cache in_rob;
//#pragma HLS array_partition variable=in_rob.in_rob_all_inputs_to_all_outputs cyclic factor=3 dim=1
//#pragma HLS array_partition variable=in_rob.in_rob_all_inputs_to_all_outputs cyclic factor=3 dim=2
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_gp_gray_2_buf122023[root = 0, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022, sm85 = 0, sm81 = 0] -> [0, 0, 4, pw_math_gp_gray_2_buf122021, 0, pw_math_gp_gray_2_buf122022, 0, 0, 0, 0, 0] : 0 <= pw_math_gp_gray_2_buf122021 <= 3 and 0 <= pw_math_gp_gray_2_buf122022 <= 3; oc_load_in03[root = 0, oc_load_in01, oc_load_in02, sm84, sm80] -> [0, 0, 1, oc_load_in01, 0, oc_load_in02, 0, sm84, 0, sm80, 0] : 0 <= oc_load_in01 <= 4 and 0 <= oc_load_in02 <= 4 and 0 <= sm84 <= 3 and 0 <= sm80 <= 3; rob88[root = 0, reorder_load86, d87] -> [0, 0, 0, reorder_load86, 0, d87, 0, 0, 0, 0, 0] : 0 <= reorder_load86 <= 19 and 0 <= d87 <= 19; gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> [0, 0, 3, gp_gray_213, 0, gp_gray_214, 0, 0, 0, 0, 0] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3; gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> [0, 0, 2, gp_gray_15, 0, gp_gray_16, 0, sm82, 0, sm78, 0] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
//   { pw_math_gp_gray_2_buf122023[root = 0, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022, sm85 = 0, sm81 = 0] -> [0, 0, 4, pw_math_gp_gray_2_buf122021, 0, pw_math_gp_gray_2_buf122022, 0, 0, 0, 0, 0] : 0 <= pw_math_gp_gray_2_buf122021 <= 3 and 0 <= pw_math_gp_gray_2_buf122022 <= 3 }
// Condition for pw_math_gp_gray_2_buf122023(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i7 == 0) && (i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (3 - i3 >= 0) && (i5 >= 0) && (3 - i5 >= 0)))
//   { oc_load_in03[root = 0, oc_load_in01, oc_load_in02, sm84, sm80] -> [0, 0, 1, oc_load_in01, 0, oc_load_in02, 0, sm84, 0, sm80, 0] : 0 <= oc_load_in01 <= 4 and 0 <= oc_load_in02 <= 4 and 0 <= sm84 <= 3 and 0 <= sm80 <= 3 }
// Condition for oc_load_in03(((i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (4 - i3 >= 0) && (i5 >= 0) && (4 - i5 >= 0) && (i7 >= 0) && (3 - i7 >= 0) && (i9 >= 0) && (3 - i9 >= 0)))
//   { rob88[root = 0, reorder_load86, d87] -> [0, 0, 0, reorder_load86, 0, d87, 0, 0, 0, 0, 0] : 0 <= reorder_load86 <= 19 and 0 <= d87 <= 19 }
// Condition for rob88(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i7 == 0) && (i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (19 - i3 >= 0) && (i5 >= 0) && (19 - i5 >= 0)))
//   { gp_gray_214_merged77[root = 0, gp_gray_213, gp_gray_214, sm83 = 0, sm79 = 0] -> [0, 0, 3, gp_gray_213, 0, gp_gray_214, 0, 0, 0, 0, 0] : 0 <= gp_gray_213 <= 3 and 0 <= gp_gray_214 <= 3 }
// Condition for gp_gray_214_merged77(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i7 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (3 - i3 >= 0) && (i5 >= 0) && (3 - i5 >= 0)))
//   { gp_gray_16_merged74[root = 0, gp_gray_15, gp_gray_16, sm82, sm78] -> [0, 0, 2, gp_gray_15, 0, gp_gray_16, 0, sm82, 0, sm78, 0] : 0 <= gp_gray_15 <= 4 and 0 <= gp_gray_16 <= 4 and 0 <= sm82 <= 1 and 0 <= sm78 <= 1 }
// Condition for gp_gray_16_merged74(((i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (4 - i3 >= 0) && (i5 >= 0) && (4 - i5 >= 0) && (i7 >= 0) && (1 - i7 >= 0) && (i9 >= 0) && (1 - i9 >= 0)))

  /*
{
  for (int c3 = 0; c3 <= 19; c3 += 1)
    for (int c5 = 0; c5 <= 19; c5 += 1)
      rob88(0, c3, c5);
  for (int c3 = 0; c3 <= 4; c3 += 1)
    for (int c5 = 0; c5 <= 4; c5 += 1)
      for (int c7 = 0; c7 <= 3; c7 += 1)
        for (int c9 = 0; c9 <= 3; c9 += 1)
          oc_load_in03(0, c3, c5, c7, c9);
  for (int c3 = 0; c3 <= 4; c3 += 1)
    for (int c5 = 0; c5 <= 4; c5 += 1)
      for (int c7 = 0; c7 <= 1; c7 += 1)
        for (int c9 = 0; c9 <= 1; c9 += 1)
          gp_gray_16_merged74(0, c3, c5, c7, c9);
  for (int c3 = 0; c3 <= 3; c3 += 1)
    for (int c5 = 0; c5 <= 3; c5 += 1)
      gp_gray_214_merged77(0, c3, c5, 0, 0);
  for (int c3 = 0; c3 <= 3; c3 += 1)
    for (int c5 = 0; c5 <= 3; c5 += 1)
      pw_math_gp_gray_2_buf122023(0, c3, c5, 0, 0);
}

  */
	{
	  for (int c3 = 0; c3 <= 19; c3 += 1)
	    for (int c5 = 0; c5 <= 19; c5 += 1)
#pragma HLS pipeline II=1
	      rob88(in /* buf name */, in_rob, 0, c3, c5);
	  for (int c3 = 0; c3 <= 4; c3 += 1)
	    for (int c5 = 0; c5 <= 4; c5 += 1)
	      for (int c7 = 0; c7 <= 3; c7 += 1)
	        for (int c9 = 0; c9 <= 3; c9 += 1)
#pragma HLS pipeline II=1
	          oc_load_in03(in_rob /* buf name */, gray, 0, c3, c5, c7, c9);
	  for (int c3 = 0; c3 <= 4; c3 += 1)
	    for (int c5 = 0; c5 <= 4; c5 += 1)
	      for (int c7 = 0; c7 <= 1; c7 += 1)
	        for (int c9 = 0; c9 <= 1; c9 += 1)
#pragma HLS pipeline II=1
	          gp_gray_16_merged74(gray /* buf name */, gp_gray_1_buf4, 0, c3, c5, c7, c9);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c5 = 0; c5 <= 3; c5 += 1)
#pragma HLS pipeline II=1
	      gp_gray_214_merged77(gp_gray_1_buf4 /* buf name */, gp_gray_2_buf12, 0, c3, c5, 0, 0);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c5 = 0; c5 <= 3; c5 += 1)
#pragma HLS pipeline II=1
	      pw_math_gp_gray_2_buf122023(gp_gray_2_buf12 /* buf name */, out, 0, c3, c5, 0, 0);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_time_sharing_gauss_pyramid_tiled_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_time_sharing_gauss_pyramid_tiled(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { rob88[root = 0, reorder_load86, d87] -> in[d87, reorder_load86] : 0 <= reorder_load86 <= 19 and 0 <= d87 <= 19 }
const int rob88_read_pipe0_num_transfers = 400;
  // { pw_math_gp_gray_2_buf122023[root = 0, pw_math_gp_gray_2_buf122021, pw_math_gp_gray_2_buf122022, sm85 = 0, sm81 = 0] -> out[pw_math_gp_gray_2_buf122022, pw_math_gp_gray_2_buf122021] : 0 <= pw_math_gp_gray_2_buf122021 <= 3 and 0 <= pw_math_gp_gray_2_buf122022 <= 3 }
const int pw_math_gp_gray_2_buf122023_write_pipe0_num_transfers = 16;


extern "C" {

void unoptimized_time_sharing_gauss_pyramid_tiled_accel(hw_uint<32>* rob88_read_pipe0, hw_uint<32>* pw_math_gp_gray_2_buf122023_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = rob88_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_gp_gray_2_buf122023_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = rob88_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_gp_gray_2_buf122023_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > rob88_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_gp_gray_2_buf122023_write_pipe0_channel;

  burst_read<32>(rob88_read_pipe0, rob88_read_pipe0_channel, rob88_read_pipe0_num_transfers*size);

  unoptimized_time_sharing_gauss_pyramid_tiled_wrapper(rob88_read_pipe0_channel, pw_math_gp_gray_2_buf122023_write_pipe0_channel, size);

  burst_write<32>(pw_math_gp_gray_2_buf122023_write_pipe0, pw_math_gp_gray_2_buf122023_write_pipe0_channel, pw_math_gp_gray_2_buf122023_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_time_sharing_gauss_pyramid_tiled_rdai(HWStream<hw_uint<32> >& rob88_read_pipe0, HWStream<hw_uint<32> >&  pw_math_gp_gray_2_buf122023_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = rob88_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_gp_gray_2_buf122023_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_time_sharing_gauss_pyramid_tiled(rob88_read_pipe0, pw_math_gp_gray_2_buf122023_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

