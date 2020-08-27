#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: ef_fpga_naive_compute_units.h
#include "ef_fpga_naive_compute_units.h"

#include "hw_classes.h"

struct bright_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
  hw_uint<16> RAM[1927][1087];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_cache {
  // # of banks: 1
  bright_all_inputs_to_all_outputs_cache bright_all_inputs_to_all_outputs;
};



inline void bright_bright_update_0_write0_write(hw_uint<16>& bright_bright_update_0_write0, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_all_inputs_to_all_outputs.write(bright_bright_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd1_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd2_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd3_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd4_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd5_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd6_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd7_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd8_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

// # of bundles = 4
// bright_gauss_blur_1_update_0_read
//	bright_gauss_blur_1_rd0
//	bright_gauss_blur_1_rd1
//	bright_gauss_blur_1_rd2
//	bright_gauss_blur_1_rd3
//	bright_gauss_blur_1_rd4
//	bright_gauss_blur_1_rd5
//	bright_gauss_blur_1_rd6
//	bright_gauss_blur_1_rd7
//	bright_gauss_blur_1_rd8
inline hw_uint<144> bright_bright_gauss_blur_1_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_gauss_blur_1_rd0
    // bright_gauss_blur_1_rd1
    // bright_gauss_blur_1_rd2
    // bright_gauss_blur_1_rd3
    // bright_gauss_blur_1_rd4
    // bright_gauss_blur_1_rd5
    // bright_gauss_blur_1_rd6
    // bright_gauss_blur_1_rd7
    // bright_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_1_rd0_res = bright_gauss_blur_1_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_gauss_blur_1_rd0_res);
	hw_uint<16> bright_gauss_blur_1_rd1_res = bright_gauss_blur_1_rd1_select(bright, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_gauss_blur_1_rd1_res);
	hw_uint<16> bright_gauss_blur_1_rd2_res = bright_gauss_blur_1_rd2_select(bright, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_gauss_blur_1_rd2_res);
	hw_uint<16> bright_gauss_blur_1_rd3_res = bright_gauss_blur_1_rd3_select(bright, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_gauss_blur_1_rd3_res);
	hw_uint<16> bright_gauss_blur_1_rd4_res = bright_gauss_blur_1_rd4_select(bright, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_gauss_blur_1_rd4_res);
	hw_uint<16> bright_gauss_blur_1_rd5_res = bright_gauss_blur_1_rd5_select(bright, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_gauss_blur_1_rd5_res);
	hw_uint<16> bright_gauss_blur_1_rd6_res = bright_gauss_blur_1_rd6_select(bright, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_gauss_blur_1_rd6_res);
	hw_uint<16> bright_gauss_blur_1_rd7_res = bright_gauss_blur_1_rd7_select(bright, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_gauss_blur_1_rd7_res);
	hw_uint<16> bright_gauss_blur_1_rd8_res = bright_gauss_blur_1_rd8_select(bright, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_gauss_blur_1_rd8_res);
	return result;
}

// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
inline hw_uint<16> bright_bright_laplace_diff_0_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_0_rd0_res);
	return result;
}

// bright_update_0_write
//	bright_bright_update_0_write0
inline void bright_bright_update_0_write_bundle_write(hw_uint<16>& bright_update_0_write, bright_cache& bright, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_bright_update_0_write0_res = bright_update_0_write.extract<0, 15>();
	bright_bright_update_0_write0_write(bright_bright_update_0_write0_res, bright, d0, d1, dynamic_address);
}

// bright_weights_update_0_read
//	bright_weights_rd0
inline hw_uint<16> bright_bright_weights_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_rd0_res = bright_weights_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
  hw_uint<16> RAM[1925][1085];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_gauss_blur_1_cache {
  // # of banks: 1
  bright_gauss_blur_1_all_inputs_to_all_outputs_cache bright_gauss_blur_1_all_inputs_to_all_outputs;
};



inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_1.bright_gauss_blur_1_all_inputs_to_all_outputs.write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_gauss_ds_1_rd0_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_1_update_0_write
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0
inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_1_update_0_write, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res = bright_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res, bright_gauss_blur_1, d0, d1, dynamic_address);
}

// bright_gauss_ds_1_update_0_read
//	bright_gauss_ds_1_rd0
inline hw_uint<16> bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_1_rd0_res = bright_gauss_ds_1_rd0_select(bright_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 960], [0, 540]}
  hw_uint<16> RAM[961][541];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_gauss_blur_2_cache {
  // # of banks: 1
  bright_gauss_blur_2_all_inputs_to_all_outputs_cache bright_gauss_blur_2_all_inputs_to_all_outputs;
};



inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_2.bright_gauss_blur_2_all_inputs_to_all_outputs.write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_gauss_ds_2_rd0_select(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0 = bright_gauss_blur_2.bright_gauss_blur_2_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_2_update_0_write
//	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0
inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_2_update_0_write, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res = bright_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res, bright_gauss_blur_2, d0, d1, dynamic_address);
}

// bright_gauss_ds_2_update_0_read
//	bright_gauss_ds_2_rd0
inline hw_uint<16> bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_2_rd0_res = bright_gauss_ds_2_rd0_select(bright_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 478], [0, 268]}
  hw_uint<16> RAM[479][269];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_gauss_blur_3_cache {
  // # of banks: 1
  bright_gauss_blur_3_all_inputs_to_all_outputs_cache bright_gauss_blur_3_all_inputs_to_all_outputs;
};



inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_3.bright_gauss_blur_3_all_inputs_to_all_outputs.write(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_gauss_ds_3_rd0_select(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0 = bright_gauss_blur_3.bright_gauss_blur_3_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_3_update_0_write
//	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0
inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_3_update_0_write, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res = bright_gauss_blur_3_update_0_write.extract<0, 15>();
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res, bright_gauss_blur_3, d0, d1, dynamic_address);
}

// bright_gauss_ds_3_update_0_read
//	bright_gauss_ds_3_rd0
inline hw_uint<16> bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_3_rd0_res = bright_gauss_ds_3_rd0_select(bright_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 962], [0, 542]}
  hw_uint<16> RAM[963][543];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_gauss_ds_1_cache {
  // # of banks: 1
  bright_gauss_ds_1_all_inputs_to_all_outputs_cache bright_gauss_ds_1_all_inputs_to_all_outputs;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd3_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd4_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd5_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd6_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd7_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd8_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_us_0_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[o0, o1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 4
// bright_gauss_blur_2_update_0_read
//	bright_gauss_blur_2_rd0
//	bright_gauss_blur_2_rd1
//	bright_gauss_blur_2_rd2
//	bright_gauss_blur_2_rd3
//	bright_gauss_blur_2_rd4
//	bright_gauss_blur_2_rd5
//	bright_gauss_blur_2_rd6
//	bright_gauss_blur_2_rd7
//	bright_gauss_blur_2_rd8
inline hw_uint<144> bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_gauss_blur_2_rd0
    // bright_gauss_blur_2_rd1
    // bright_gauss_blur_2_rd2
    // bright_gauss_blur_2_rd3
    // bright_gauss_blur_2_rd4
    // bright_gauss_blur_2_rd5
    // bright_gauss_blur_2_rd6
    // bright_gauss_blur_2_rd7
    // bright_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_2_rd0_res = bright_gauss_blur_2_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_gauss_blur_2_rd0_res);
	hw_uint<16> bright_gauss_blur_2_rd1_res = bright_gauss_blur_2_rd1_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_gauss_blur_2_rd1_res);
	hw_uint<16> bright_gauss_blur_2_rd2_res = bright_gauss_blur_2_rd2_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_gauss_blur_2_rd2_res);
	hw_uint<16> bright_gauss_blur_2_rd3_res = bright_gauss_blur_2_rd3_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_gauss_blur_2_rd3_res);
	hw_uint<16> bright_gauss_blur_2_rd4_res = bright_gauss_blur_2_rd4_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_gauss_blur_2_rd4_res);
	hw_uint<16> bright_gauss_blur_2_rd5_res = bright_gauss_blur_2_rd5_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_gauss_blur_2_rd5_res);
	hw_uint<16> bright_gauss_blur_2_rd6_res = bright_gauss_blur_2_rd6_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_gauss_blur_2_rd6_res);
	hw_uint<16> bright_gauss_blur_2_rd7_res = bright_gauss_blur_2_rd7_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_gauss_blur_2_rd7_res);
	hw_uint<16> bright_gauss_blur_2_rd8_res = bright_gauss_blur_2_rd8_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_gauss_blur_2_rd8_res);
	return result;
}

// bright_gauss_ds_1_update_0_write
//	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0
inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_1_update_0_write, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res = bright_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res, bright_gauss_ds_1, d0, d1, dynamic_address);
}

// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<16> bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_read
//	bright_laplace_us_0_rd0
inline hw_uint<16> bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_us_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_0_rd0_res = bright_laplace_us_0_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_us_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 480], [0, 270]}
  hw_uint<16> RAM[481][271];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_gauss_ds_2_cache {
  // # of banks: 1
  bright_gauss_ds_2_all_inputs_to_all_outputs_cache bright_gauss_ds_2_all_inputs_to_all_outputs;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.write(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd1_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd2_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd3_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd4_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd5_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd6_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd7_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd8_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_us_1_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 4
// bright_gauss_blur_3_update_0_read
//	bright_gauss_blur_3_rd0
//	bright_gauss_blur_3_rd1
//	bright_gauss_blur_3_rd2
//	bright_gauss_blur_3_rd3
//	bright_gauss_blur_3_rd4
//	bright_gauss_blur_3_rd5
//	bright_gauss_blur_3_rd6
//	bright_gauss_blur_3_rd7
//	bright_gauss_blur_3_rd8
inline hw_uint<144> bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_gauss_blur_3_rd0
    // bright_gauss_blur_3_rd1
    // bright_gauss_blur_3_rd2
    // bright_gauss_blur_3_rd3
    // bright_gauss_blur_3_rd4
    // bright_gauss_blur_3_rd5
    // bright_gauss_blur_3_rd6
    // bright_gauss_blur_3_rd7
    // bright_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_3_rd0_res = bright_gauss_blur_3_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_gauss_blur_3_rd0_res);
	hw_uint<16> bright_gauss_blur_3_rd1_res = bright_gauss_blur_3_rd1_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_gauss_blur_3_rd1_res);
	hw_uint<16> bright_gauss_blur_3_rd2_res = bright_gauss_blur_3_rd2_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_gauss_blur_3_rd2_res);
	hw_uint<16> bright_gauss_blur_3_rd3_res = bright_gauss_blur_3_rd3_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_gauss_blur_3_rd3_res);
	hw_uint<16> bright_gauss_blur_3_rd4_res = bright_gauss_blur_3_rd4_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_gauss_blur_3_rd4_res);
	hw_uint<16> bright_gauss_blur_3_rd5_res = bright_gauss_blur_3_rd5_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_gauss_blur_3_rd5_res);
	hw_uint<16> bright_gauss_blur_3_rd6_res = bright_gauss_blur_3_rd6_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_gauss_blur_3_rd6_res);
	hw_uint<16> bright_gauss_blur_3_rd7_res = bright_gauss_blur_3_rd7_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_gauss_blur_3_rd7_res);
	hw_uint<16> bright_gauss_blur_3_rd8_res = bright_gauss_blur_3_rd8_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_gauss_blur_3_rd8_res);
	return result;
}

// bright_gauss_ds_2_update_0_write
//	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0
inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_2_update_0_write, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res = bright_gauss_ds_2_update_0_write.extract<0, 15>();
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res, bright_gauss_ds_2, d0, d1, dynamic_address);
}

// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<16> bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_read
//	bright_laplace_us_1_rd0
inline hw_uint<16> bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_1_rd0_res = bright_laplace_us_1_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 239], [0, 134]}
  hw_uint<16> RAM[240][135];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_gauss_ds_3_cache {
  // # of banks: 1
  bright_gauss_ds_3_all_inputs_to_all_outputs_cache bright_gauss_ds_3_all_inputs_to_all_outputs;
};



inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_3.bright_gauss_ds_3_all_inputs_to_all_outputs.write(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_laplace_us_2_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_3_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_gauss_ds_3_update_0_write
//	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0
inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_3_update_0_write, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res = bright_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res, bright_gauss_ds_3, d0, d1, dynamic_address);
}

// bright_laplace_us_2_update_0_read
//	bright_laplace_us_2_rd0
inline hw_uint<16> bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_2_rd0_res = bright_laplace_us_2_rd0_select(bright_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(bright_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
  hw_uint<16> RAM[1920][1080];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_laplace_diff_0_cache {
  // # of banks: 1
  bright_laplace_diff_0_all_inputs_to_all_outputs_cache bright_laplace_diff_0_all_inputs_to_all_outputs;
};



inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_0.bright_laplace_diff_0_all_inputs_to_all_outputs.write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> fused_level_0_rd0_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0 = bright_laplace_diff_0.bright_laplace_diff_0_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_write
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0
inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_0_update_0_write, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res = bright_laplace_diff_0_update_0_write.extract<0, 15>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res, bright_laplace_diff_0, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_laplace_diff_0, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 959], [0, 539]}
  hw_uint<16> RAM[960][540];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_laplace_diff_1_cache {
  // # of banks: 1
  bright_laplace_diff_1_all_inputs_to_all_outputs_cache bright_laplace_diff_1_all_inputs_to_all_outputs;
};



inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(hw_uint<16>& bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_1.bright_laplace_diff_1_all_inputs_to_all_outputs.write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> fused_level_1_rd0_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_write
//	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0
inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_1_update_0_write, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res = bright_laplace_diff_1_update_0_write.extract<0, 15>();
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res, bright_laplace_diff_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_laplace_diff_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 479], [0, 269]}
  hw_uint<16> RAM[480][270];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_laplace_diff_2_cache {
  // # of banks: 1
  bright_laplace_diff_2_all_inputs_to_all_outputs_cache bright_laplace_diff_2_all_inputs_to_all_outputs;
};



inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(hw_uint<16>& bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_2.bright_laplace_diff_2_all_inputs_to_all_outputs.write(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> fused_level_2_rd0_select(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0 = bright_laplace_diff_2.bright_laplace_diff_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_write
//	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0
inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_2_update_0_write, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res = bright_laplace_diff_2_update_0_write.extract<0, 15>();
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res, bright_laplace_diff_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_laplace_diff_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_us_0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
  hw_uint<16> RAM[1920][1080];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_laplace_us_0_cache {
  // # of banks: 1
  bright_laplace_us_0_all_inputs_to_all_outputs_cache bright_laplace_us_0_all_inputs_to_all_outputs;
};



inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write0, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
  bright_laplace_us_0.bright_laplace_us_0_all_inputs_to_all_outputs.write(bright_laplace_us_0_bright_laplace_us_0_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0 = bright_laplace_us_0.bright_laplace_us_0_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
inline hw_uint<16> bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright_laplace_us_0, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_0_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_write
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write0
inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_0_update_0_write, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res = bright_laplace_us_0_update_0_write.extract<0, 15>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res, bright_laplace_us_0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct bright_laplace_us_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 959], [0, 539]}
  hw_uint<16> RAM[960][540];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_laplace_us_1_cache {
  // # of banks: 1
  bright_laplace_us_1_all_inputs_to_all_outputs_cache bright_laplace_us_1_all_inputs_to_all_outputs;
};



inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(hw_uint<16>& bright_laplace_us_1_bright_laplace_us_1_update_0_write0, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
  bright_laplace_us_1.bright_laplace_us_1_all_inputs_to_all_outputs.write(bright_laplace_us_1_bright_laplace_us_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0 = bright_laplace_us_1.bright_laplace_us_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<16> bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_laplace_us_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_write
//	bright_laplace_us_1_bright_laplace_us_1_update_0_write0
inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_1_update_0_write, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res = bright_laplace_us_1_update_0_write.extract<0, 15>();
	bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res, bright_laplace_us_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct bright_laplace_us_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 479], [0, 269]}
  hw_uint<16> RAM[480][270];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_laplace_us_2_cache {
  // # of banks: 1
  bright_laplace_us_2_all_inputs_to_all_outputs_cache bright_laplace_us_2_all_inputs_to_all_outputs;
};



inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(hw_uint<16>& bright_laplace_us_2_bright_laplace_us_2_update_0_write0, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
  bright_laplace_us_2.bright_laplace_us_2_all_inputs_to_all_outputs.write(bright_laplace_us_2_bright_laplace_us_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0 = bright_laplace_us_2.bright_laplace_us_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<16> bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_laplace_us_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_2_update_0_write
//	bright_laplace_us_2_bright_laplace_us_2_update_0_write0
inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_2_update_0_write, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res = bright_laplace_us_2_update_0_write.extract<0, 15>();
	bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res, bright_laplace_us_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct bright_weights_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
  hw_uint<16> RAM[1927][1087];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_weights_cache {
  // # of banks: 1
  bright_weights_all_inputs_to_all_outputs_cache bright_weights_all_inputs_to_all_outputs;
};



inline void bright_weights_bright_weights_update_0_write0_write(hw_uint<16>& bright_weights_bright_weights_update_0_write0, bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  bright_weights.bright_weights_all_inputs_to_all_outputs.write(bright_weights_bright_weights_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_bright_weights_update_0_write0;
  return 0;
}

inline hw_uint<16> weight_sums_rd0_select(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_bright_weights_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<16> bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(bright_weights, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_rd0_res);
	return result;
}

// bright_weights_update_0_write
//	bright_weights_bright_weights_update_0_write0
inline void bright_weights_bright_weights_update_0_write_bundle_write(hw_uint<16>& bright_weights_update_0_write, bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_bright_weights_update_0_write0_res = bright_weights_update_0_write.extract<0, 15>();
	bright_weights_bright_weights_update_0_write0_write(bright_weights_bright_weights_update_0_write0_res, bright_weights, d0, d1, dynamic_address);
}

// weight_sums_update_0_read
//	weight_sums_rd0
inline hw_uint<16> bright_weights_weight_sums_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // weight_sums_rd0

	hw_uint<16> result;
	hw_uint<16> weight_sums_rd0_res = weight_sums_rd0_select(bright_weights, d0, d1, dynamic_address);
	set_at<0, 16>(result, weight_sums_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
  hw_uint<16> RAM[1927][1087];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_weights_normed_cache {
  // # of banks: 1
  bright_weights_normed_all_inputs_to_all_outputs_cache bright_weights_normed_all_inputs_to_all_outputs;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.write(bright_weights_normed_bright_weights_normed_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_1_update_0_read
//	bright_weights_normed_gauss_blur_1_rd0
//	bright_weights_normed_gauss_blur_1_rd1
//	bright_weights_normed_gauss_blur_1_rd2
//	bright_weights_normed_gauss_blur_1_rd3
//	bright_weights_normed_gauss_blur_1_rd4
//	bright_weights_normed_gauss_blur_1_rd5
//	bright_weights_normed_gauss_blur_1_rd6
//	bright_weights_normed_gauss_blur_1_rd7
//	bright_weights_normed_gauss_blur_1_rd8
inline hw_uint<144> bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_1_rd0
    // bright_weights_normed_gauss_blur_1_rd1
    // bright_weights_normed_gauss_blur_1_rd2
    // bright_weights_normed_gauss_blur_1_rd3
    // bright_weights_normed_gauss_blur_1_rd4
    // bright_weights_normed_gauss_blur_1_rd5
    // bright_weights_normed_gauss_blur_1_rd6
    // bright_weights_normed_gauss_blur_1_rd7
    // bright_weights_normed_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_res = bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_res = bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_res = bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_res = bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_res = bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_res = bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_res = bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_res = bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_res = bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_1_rd8_res);
	return result;
}

// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 15>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
  hw_uint<16> RAM[1925][1085];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_weights_normed_gauss_blur_1_cache {
  // # of banks: 1
  bright_weights_normed_gauss_blur_1_all_inputs_to_all_outputs_cache bright_weights_normed_gauss_blur_1_all_inputs_to_all_outputs;
};



inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_all_inputs_to_all_outputs.write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_1_update_0_write
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0
inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_update_0_write, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res, bright_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_1_update_0_read
//	bright_weights_normed_gauss_ds_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_res = bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 960], [0, 540]}
  hw_uint<16> RAM[961][541];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_weights_normed_gauss_blur_2_cache {
  // # of banks: 1
  bright_weights_normed_gauss_blur_2_all_inputs_to_all_outputs_cache bright_weights_normed_gauss_blur_2_all_inputs_to_all_outputs;
};



inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_all_inputs_to_all_outputs.write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0 = bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_2_update_0_write
//	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0
inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_update_0_write, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res = bright_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res, bright_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_2_update_0_read
//	bright_weights_normed_gauss_ds_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_res = bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 478], [0, 268]}
  hw_uint<16> RAM[479][269];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_weights_normed_gauss_blur_3_cache {
  // # of banks: 1
  bright_weights_normed_gauss_blur_3_all_inputs_to_all_outputs_cache bright_weights_normed_gauss_blur_3_all_inputs_to_all_outputs;
};



inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_all_inputs_to_all_outputs.write(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0 = bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_3_update_0_write
//	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0
inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_update_0_write, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res = bright_weights_normed_gauss_blur_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res, bright_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_3_update_0_read
//	bright_weights_normed_gauss_ds_3_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_res = bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 962], [0, 542]}
  hw_uint<16> RAM[963][543];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_weights_normed_gauss_ds_1_cache {
  // # of banks: 1
  bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs_cache bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_2_update_0_read
//	bright_weights_normed_gauss_blur_2_rd0
//	bright_weights_normed_gauss_blur_2_rd1
//	bright_weights_normed_gauss_blur_2_rd2
//	bright_weights_normed_gauss_blur_2_rd3
//	bright_weights_normed_gauss_blur_2_rd4
//	bright_weights_normed_gauss_blur_2_rd5
//	bright_weights_normed_gauss_blur_2_rd6
//	bright_weights_normed_gauss_blur_2_rd7
//	bright_weights_normed_gauss_blur_2_rd8
inline hw_uint<144> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_2_rd0
    // bright_weights_normed_gauss_blur_2_rd1
    // bright_weights_normed_gauss_blur_2_rd2
    // bright_weights_normed_gauss_blur_2_rd3
    // bright_weights_normed_gauss_blur_2_rd4
    // bright_weights_normed_gauss_blur_2_rd5
    // bright_weights_normed_gauss_blur_2_rd6
    // bright_weights_normed_gauss_blur_2_rd7
    // bright_weights_normed_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_res = bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_res = bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_res = bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_res = bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_res = bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_res = bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_res = bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_res = bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_res = bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_1_update_0_write
//	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0
inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_update_0_write, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res = bright_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res, bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 480], [0, 270]}
  hw_uint<16> RAM[481][271];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_weights_normed_gauss_ds_2_cache {
  // # of banks: 1
  bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs_cache bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.write(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_3_update_0_read
//	bright_weights_normed_gauss_blur_3_rd0
//	bright_weights_normed_gauss_blur_3_rd1
//	bright_weights_normed_gauss_blur_3_rd2
//	bright_weights_normed_gauss_blur_3_rd3
//	bright_weights_normed_gauss_blur_3_rd4
//	bright_weights_normed_gauss_blur_3_rd5
//	bright_weights_normed_gauss_blur_3_rd6
//	bright_weights_normed_gauss_blur_3_rd7
//	bright_weights_normed_gauss_blur_3_rd8
inline hw_uint<144> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_3_rd0
    // bright_weights_normed_gauss_blur_3_rd1
    // bright_weights_normed_gauss_blur_3_rd2
    // bright_weights_normed_gauss_blur_3_rd3
    // bright_weights_normed_gauss_blur_3_rd4
    // bright_weights_normed_gauss_blur_3_rd5
    // bright_weights_normed_gauss_blur_3_rd6
    // bright_weights_normed_gauss_blur_3_rd7
    // bright_weights_normed_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_res = bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd1_res = bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd2_res = bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd3_res = bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd4_res = bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd5_res = bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd6_res = bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd7_res = bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd8_res = bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_2_update_0_write
//	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0
inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_update_0_write, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res = bright_weights_normed_gauss_ds_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res, bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 239], [0, 134]}
  hw_uint<16> RAM[240][135];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct bright_weights_normed_gauss_ds_3_cache {
  // # of banks: 1
  bright_weights_normed_gauss_ds_3_all_inputs_to_all_outputs_cache bright_weights_normed_gauss_ds_3_all_inputs_to_all_outputs;
};



inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_all_inputs_to_all_outputs.write(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_ds_3_update_0_write
//	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0
inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_update_0_write, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res = bright_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res, bright_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
  hw_uint<16> RAM[1927][1087];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_cache {
  // # of banks: 1
  dark_all_inputs_to_all_outputs_cache dark_all_inputs_to_all_outputs;
};



inline void dark_dark_update_0_write0_write(hw_uint<16>& dark_dark_update_0_write0, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_all_inputs_to_all_outputs.write(dark_dark_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd1_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd2_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd3_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd4_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd5_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd6_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd7_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd8_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

// # of bundles = 4
// dark_gauss_blur_1_update_0_read
//	dark_gauss_blur_1_rd0
//	dark_gauss_blur_1_rd1
//	dark_gauss_blur_1_rd2
//	dark_gauss_blur_1_rd3
//	dark_gauss_blur_1_rd4
//	dark_gauss_blur_1_rd5
//	dark_gauss_blur_1_rd6
//	dark_gauss_blur_1_rd7
//	dark_gauss_blur_1_rd8
inline hw_uint<144> dark_dark_gauss_blur_1_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_gauss_blur_1_rd0
    // dark_gauss_blur_1_rd1
    // dark_gauss_blur_1_rd2
    // dark_gauss_blur_1_rd3
    // dark_gauss_blur_1_rd4
    // dark_gauss_blur_1_rd5
    // dark_gauss_blur_1_rd6
    // dark_gauss_blur_1_rd7
    // dark_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_1_rd0_res = dark_gauss_blur_1_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_gauss_blur_1_rd0_res);
	hw_uint<16> dark_gauss_blur_1_rd1_res = dark_gauss_blur_1_rd1_select(dark, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_gauss_blur_1_rd1_res);
	hw_uint<16> dark_gauss_blur_1_rd2_res = dark_gauss_blur_1_rd2_select(dark, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_gauss_blur_1_rd2_res);
	hw_uint<16> dark_gauss_blur_1_rd3_res = dark_gauss_blur_1_rd3_select(dark, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_gauss_blur_1_rd3_res);
	hw_uint<16> dark_gauss_blur_1_rd4_res = dark_gauss_blur_1_rd4_select(dark, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_gauss_blur_1_rd4_res);
	hw_uint<16> dark_gauss_blur_1_rd5_res = dark_gauss_blur_1_rd5_select(dark, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_gauss_blur_1_rd5_res);
	hw_uint<16> dark_gauss_blur_1_rd6_res = dark_gauss_blur_1_rd6_select(dark, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_gauss_blur_1_rd6_res);
	hw_uint<16> dark_gauss_blur_1_rd7_res = dark_gauss_blur_1_rd7_select(dark, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_gauss_blur_1_rd7_res);
	hw_uint<16> dark_gauss_blur_1_rd8_res = dark_gauss_blur_1_rd8_select(dark, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_gauss_blur_1_rd8_res);
	return result;
}

// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
inline hw_uint<16> dark_dark_laplace_diff_0_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_0_rd0_res);
	return result;
}

// dark_update_0_write
//	dark_dark_update_0_write0
inline void dark_dark_update_0_write_bundle_write(hw_uint<16>& dark_update_0_write, dark_cache& dark, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_dark_update_0_write0_res = dark_update_0_write.extract<0, 15>();
	dark_dark_update_0_write0_write(dark_dark_update_0_write0_res, dark, d0, d1, dynamic_address);
}

// dark_weights_update_0_read
//	dark_weights_rd0
inline hw_uint<16> dark_dark_weights_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_rd0_res = dark_weights_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
  hw_uint<16> RAM[1925][1085];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_gauss_blur_1_cache {
  // # of banks: 1
  dark_gauss_blur_1_all_inputs_to_all_outputs_cache dark_gauss_blur_1_all_inputs_to_all_outputs;
};



inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_1.dark_gauss_blur_1_all_inputs_to_all_outputs.write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_gauss_ds_1_rd0_select(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0 = dark_gauss_blur_1.dark_gauss_blur_1_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_1_update_0_write
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0
inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_1_update_0_write, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res = dark_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res, dark_gauss_blur_1, d0, d1, dynamic_address);
}

// dark_gauss_ds_1_update_0_read
//	dark_gauss_ds_1_rd0
inline hw_uint<16> dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_1_rd0_res = dark_gauss_ds_1_rd0_select(dark_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 960], [0, 540]}
  hw_uint<16> RAM[961][541];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_gauss_blur_2_cache {
  // # of banks: 1
  dark_gauss_blur_2_all_inputs_to_all_outputs_cache dark_gauss_blur_2_all_inputs_to_all_outputs;
};



inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_2.dark_gauss_blur_2_all_inputs_to_all_outputs.write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_gauss_ds_2_rd0_select(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0 = dark_gauss_blur_2.dark_gauss_blur_2_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_2_update_0_write
//	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0
inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_2_update_0_write, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res = dark_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res, dark_gauss_blur_2, d0, d1, dynamic_address);
}

// dark_gauss_ds_2_update_0_read
//	dark_gauss_ds_2_rd0
inline hw_uint<16> dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_2_rd0_res = dark_gauss_ds_2_rd0_select(dark_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 478], [0, 268]}
  hw_uint<16> RAM[479][269];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_gauss_blur_3_cache {
  // # of banks: 1
  dark_gauss_blur_3_all_inputs_to_all_outputs_cache dark_gauss_blur_3_all_inputs_to_all_outputs;
};



inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_3.dark_gauss_blur_3_all_inputs_to_all_outputs.write(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_gauss_ds_3_rd0_select(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0 = dark_gauss_blur_3.dark_gauss_blur_3_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_3_update_0_write
//	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0
inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_3_update_0_write, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res = dark_gauss_blur_3_update_0_write.extract<0, 15>();
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res, dark_gauss_blur_3, d0, d1, dynamic_address);
}

// dark_gauss_ds_3_update_0_read
//	dark_gauss_ds_3_rd0
inline hw_uint<16> dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_3_rd0_res = dark_gauss_ds_3_rd0_select(dark_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 962], [0, 542]}
  hw_uint<16> RAM[963][543];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_gauss_ds_1_cache {
  // # of banks: 1
  dark_gauss_ds_1_all_inputs_to_all_outputs_cache dark_gauss_ds_1_all_inputs_to_all_outputs;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd3_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd4_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd5_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd6_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd7_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd8_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_us_0_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[o0, o1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 4
// dark_gauss_blur_2_update_0_read
//	dark_gauss_blur_2_rd0
//	dark_gauss_blur_2_rd1
//	dark_gauss_blur_2_rd2
//	dark_gauss_blur_2_rd3
//	dark_gauss_blur_2_rd4
//	dark_gauss_blur_2_rd5
//	dark_gauss_blur_2_rd6
//	dark_gauss_blur_2_rd7
//	dark_gauss_blur_2_rd8
inline hw_uint<144> dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_gauss_blur_2_rd0
    // dark_gauss_blur_2_rd1
    // dark_gauss_blur_2_rd2
    // dark_gauss_blur_2_rd3
    // dark_gauss_blur_2_rd4
    // dark_gauss_blur_2_rd5
    // dark_gauss_blur_2_rd6
    // dark_gauss_blur_2_rd7
    // dark_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_2_rd0_res = dark_gauss_blur_2_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_gauss_blur_2_rd0_res);
	hw_uint<16> dark_gauss_blur_2_rd1_res = dark_gauss_blur_2_rd1_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_gauss_blur_2_rd1_res);
	hw_uint<16> dark_gauss_blur_2_rd2_res = dark_gauss_blur_2_rd2_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_gauss_blur_2_rd2_res);
	hw_uint<16> dark_gauss_blur_2_rd3_res = dark_gauss_blur_2_rd3_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_gauss_blur_2_rd3_res);
	hw_uint<16> dark_gauss_blur_2_rd4_res = dark_gauss_blur_2_rd4_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_gauss_blur_2_rd4_res);
	hw_uint<16> dark_gauss_blur_2_rd5_res = dark_gauss_blur_2_rd5_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_gauss_blur_2_rd5_res);
	hw_uint<16> dark_gauss_blur_2_rd6_res = dark_gauss_blur_2_rd6_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_gauss_blur_2_rd6_res);
	hw_uint<16> dark_gauss_blur_2_rd7_res = dark_gauss_blur_2_rd7_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_gauss_blur_2_rd7_res);
	hw_uint<16> dark_gauss_blur_2_rd8_res = dark_gauss_blur_2_rd8_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_gauss_blur_2_rd8_res);
	return result;
}

// dark_gauss_ds_1_update_0_write
//	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0
inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_1_update_0_write, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res = dark_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res, dark_gauss_ds_1, d0, d1, dynamic_address);
}

// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<16> dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_read
//	dark_laplace_us_0_rd0
inline hw_uint<16> dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_us_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_0_rd0_res = dark_laplace_us_0_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_us_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 480], [0, 270]}
  hw_uint<16> RAM[481][271];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_gauss_ds_2_cache {
  // # of banks: 1
  dark_gauss_ds_2_all_inputs_to_all_outputs_cache dark_gauss_ds_2_all_inputs_to_all_outputs;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.write(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd1_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd2_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd3_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd4_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd5_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd6_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd7_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd8_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_us_1_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 4
// dark_gauss_blur_3_update_0_read
//	dark_gauss_blur_3_rd0
//	dark_gauss_blur_3_rd1
//	dark_gauss_blur_3_rd2
//	dark_gauss_blur_3_rd3
//	dark_gauss_blur_3_rd4
//	dark_gauss_blur_3_rd5
//	dark_gauss_blur_3_rd6
//	dark_gauss_blur_3_rd7
//	dark_gauss_blur_3_rd8
inline hw_uint<144> dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_gauss_blur_3_rd0
    // dark_gauss_blur_3_rd1
    // dark_gauss_blur_3_rd2
    // dark_gauss_blur_3_rd3
    // dark_gauss_blur_3_rd4
    // dark_gauss_blur_3_rd5
    // dark_gauss_blur_3_rd6
    // dark_gauss_blur_3_rd7
    // dark_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_3_rd0_res = dark_gauss_blur_3_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_gauss_blur_3_rd0_res);
	hw_uint<16> dark_gauss_blur_3_rd1_res = dark_gauss_blur_3_rd1_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_gauss_blur_3_rd1_res);
	hw_uint<16> dark_gauss_blur_3_rd2_res = dark_gauss_blur_3_rd2_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_gauss_blur_3_rd2_res);
	hw_uint<16> dark_gauss_blur_3_rd3_res = dark_gauss_blur_3_rd3_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_gauss_blur_3_rd3_res);
	hw_uint<16> dark_gauss_blur_3_rd4_res = dark_gauss_blur_3_rd4_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_gauss_blur_3_rd4_res);
	hw_uint<16> dark_gauss_blur_3_rd5_res = dark_gauss_blur_3_rd5_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_gauss_blur_3_rd5_res);
	hw_uint<16> dark_gauss_blur_3_rd6_res = dark_gauss_blur_3_rd6_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_gauss_blur_3_rd6_res);
	hw_uint<16> dark_gauss_blur_3_rd7_res = dark_gauss_blur_3_rd7_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_gauss_blur_3_rd7_res);
	hw_uint<16> dark_gauss_blur_3_rd8_res = dark_gauss_blur_3_rd8_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_gauss_blur_3_rd8_res);
	return result;
}

// dark_gauss_ds_2_update_0_write
//	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0
inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_2_update_0_write, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res = dark_gauss_ds_2_update_0_write.extract<0, 15>();
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res, dark_gauss_ds_2, d0, d1, dynamic_address);
}

// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<16> dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_read
//	dark_laplace_us_1_rd0
inline hw_uint<16> dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_1_rd0_res = dark_laplace_us_1_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 239], [0, 134]}
  hw_uint<16> RAM[240][135];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_gauss_ds_3_cache {
  // # of banks: 1
  dark_gauss_ds_3_all_inputs_to_all_outputs_cache dark_gauss_ds_3_all_inputs_to_all_outputs;
};



inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_3.dark_gauss_ds_3_all_inputs_to_all_outputs.write(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_laplace_us_2_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_3_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_gauss_ds_3_update_0_write
//	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0
inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_3_update_0_write, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res = dark_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res, dark_gauss_ds_3, d0, d1, dynamic_address);
}

// dark_laplace_us_2_update_0_read
//	dark_laplace_us_2_rd0
inline hw_uint<16> dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_2_rd0_res = dark_laplace_us_2_rd0_select(dark_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(dark_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
  hw_uint<16> RAM[1920][1080];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_laplace_diff_0_cache {
  // # of banks: 1
  dark_laplace_diff_0_all_inputs_to_all_outputs_cache dark_laplace_diff_0_all_inputs_to_all_outputs;
};



inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_0.dark_laplace_diff_0_all_inputs_to_all_outputs.write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> fused_level_0_rd0_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_write
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0
inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_0_update_0_write, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res = dark_laplace_diff_0_update_0_write.extract<0, 15>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res, dark_laplace_diff_0, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_laplace_diff_0, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 959], [0, 539]}
  hw_uint<16> RAM[960][540];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_laplace_diff_1_cache {
  // # of banks: 1
  dark_laplace_diff_1_all_inputs_to_all_outputs_cache dark_laplace_diff_1_all_inputs_to_all_outputs;
};



inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(hw_uint<16>& dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_1.dark_laplace_diff_1_all_inputs_to_all_outputs.write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> fused_level_1_rd0_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_write
//	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0
inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_1_update_0_write, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res = dark_laplace_diff_1_update_0_write.extract<0, 15>();
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res, dark_laplace_diff_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_laplace_diff_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 479], [0, 269]}
  hw_uint<16> RAM[480][270];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_laplace_diff_2_cache {
  // # of banks: 1
  dark_laplace_diff_2_all_inputs_to_all_outputs_cache dark_laplace_diff_2_all_inputs_to_all_outputs;
};



inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(hw_uint<16>& dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_2.dark_laplace_diff_2_all_inputs_to_all_outputs.write(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> fused_level_2_rd0_select(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0 = dark_laplace_diff_2.dark_laplace_diff_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_write
//	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0
inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_2_update_0_write, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res = dark_laplace_diff_2_update_0_write.extract<0, 15>();
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res, dark_laplace_diff_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_laplace_diff_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_us_0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
  hw_uint<16> RAM[1920][1080];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_laplace_us_0_cache {
  // # of banks: 1
  dark_laplace_us_0_all_inputs_to_all_outputs_cache dark_laplace_us_0_all_inputs_to_all_outputs;
};



inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write0, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
  dark_laplace_us_0.dark_laplace_us_0_all_inputs_to_all_outputs.write(dark_laplace_us_0_dark_laplace_us_0_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0 = dark_laplace_us_0.dark_laplace_us_0_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
inline hw_uint<16> dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark_laplace_us_0, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_0_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_write
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write0
inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_0_update_0_write, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res = dark_laplace_us_0_update_0_write.extract<0, 15>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res, dark_laplace_us_0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct dark_laplace_us_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 959], [0, 539]}
  hw_uint<16> RAM[960][540];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_laplace_us_1_cache {
  // # of banks: 1
  dark_laplace_us_1_all_inputs_to_all_outputs_cache dark_laplace_us_1_all_inputs_to_all_outputs;
};



inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(hw_uint<16>& dark_laplace_us_1_dark_laplace_us_1_update_0_write0, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
  dark_laplace_us_1.dark_laplace_us_1_all_inputs_to_all_outputs.write(dark_laplace_us_1_dark_laplace_us_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<16> dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_laplace_us_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_write
//	dark_laplace_us_1_dark_laplace_us_1_update_0_write0
inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_1_update_0_write, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res = dark_laplace_us_1_update_0_write.extract<0, 15>();
	dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res, dark_laplace_us_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct dark_laplace_us_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 479], [0, 269]}
  hw_uint<16> RAM[480][270];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_laplace_us_2_cache {
  // # of banks: 1
  dark_laplace_us_2_all_inputs_to_all_outputs_cache dark_laplace_us_2_all_inputs_to_all_outputs;
};



inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(hw_uint<16>& dark_laplace_us_2_dark_laplace_us_2_update_0_write0, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
  dark_laplace_us_2.dark_laplace_us_2_all_inputs_to_all_outputs.write(dark_laplace_us_2_dark_laplace_us_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0 = dark_laplace_us_2.dark_laplace_us_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<16> dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_laplace_us_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_2_update_0_write
//	dark_laplace_us_2_dark_laplace_us_2_update_0_write0
inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_2_update_0_write, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res = dark_laplace_us_2_update_0_write.extract<0, 15>();
	dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res, dark_laplace_us_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct dark_weights_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
  hw_uint<16> RAM[1927][1087];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_weights_cache {
  // # of banks: 1
  dark_weights_all_inputs_to_all_outputs_cache dark_weights_all_inputs_to_all_outputs;
};



inline void dark_weights_dark_weights_update_0_write0_write(hw_uint<16>& dark_weights_dark_weights_update_0_write0, dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  dark_weights.dark_weights_all_inputs_to_all_outputs.write(dark_weights_dark_weights_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_dark_weights_update_0_write0;
  return 0;
}

inline hw_uint<16> weight_sums_rd0_select(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_dark_weights_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<16> dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(dark_weights, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_rd0_res);
	return result;
}

// dark_weights_update_0_write
//	dark_weights_dark_weights_update_0_write0
inline void dark_weights_dark_weights_update_0_write_bundle_write(hw_uint<16>& dark_weights_update_0_write, dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_dark_weights_update_0_write0_res = dark_weights_update_0_write.extract<0, 15>();
	dark_weights_dark_weights_update_0_write0_write(dark_weights_dark_weights_update_0_write0_res, dark_weights, d0, d1, dynamic_address);
}

// weight_sums_update_0_read
//	weight_sums_rd0
inline hw_uint<16> dark_weights_weight_sums_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // weight_sums_rd0

	hw_uint<16> result;
	hw_uint<16> weight_sums_rd0_res = weight_sums_rd0_select(dark_weights, d0, d1, dynamic_address);
	set_at<0, 16>(result, weight_sums_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
  hw_uint<16> RAM[1927][1087];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_weights_normed_cache {
  // # of banks: 1
  dark_weights_normed_all_inputs_to_all_outputs_cache dark_weights_normed_all_inputs_to_all_outputs;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.write(dark_weights_normed_dark_weights_normed_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_1_update_0_read
//	dark_weights_normed_gauss_blur_1_rd0
//	dark_weights_normed_gauss_blur_1_rd1
//	dark_weights_normed_gauss_blur_1_rd2
//	dark_weights_normed_gauss_blur_1_rd3
//	dark_weights_normed_gauss_blur_1_rd4
//	dark_weights_normed_gauss_blur_1_rd5
//	dark_weights_normed_gauss_blur_1_rd6
//	dark_weights_normed_gauss_blur_1_rd7
//	dark_weights_normed_gauss_blur_1_rd8
inline hw_uint<144> dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_1_rd0
    // dark_weights_normed_gauss_blur_1_rd1
    // dark_weights_normed_gauss_blur_1_rd2
    // dark_weights_normed_gauss_blur_1_rd3
    // dark_weights_normed_gauss_blur_1_rd4
    // dark_weights_normed_gauss_blur_1_rd5
    // dark_weights_normed_gauss_blur_1_rd6
    // dark_weights_normed_gauss_blur_1_rd7
    // dark_weights_normed_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_res = dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_res = dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_res = dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_res = dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_res = dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_res = dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_res = dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_res = dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_res = dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_1_rd8_res);
	return result;
}

// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 15>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
  hw_uint<16> RAM[1925][1085];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_weights_normed_gauss_blur_1_cache {
  // # of banks: 1
  dark_weights_normed_gauss_blur_1_all_inputs_to_all_outputs_cache dark_weights_normed_gauss_blur_1_all_inputs_to_all_outputs;
};



inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_all_inputs_to_all_outputs.write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_1_update_0_write
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0
inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_update_0_write, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res, dark_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_1_update_0_read
//	dark_weights_normed_gauss_ds_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_res = dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 960], [0, 540]}
  hw_uint<16> RAM[961][541];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_weights_normed_gauss_blur_2_cache {
  // # of banks: 1
  dark_weights_normed_gauss_blur_2_all_inputs_to_all_outputs_cache dark_weights_normed_gauss_blur_2_all_inputs_to_all_outputs;
};



inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_all_inputs_to_all_outputs.write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0 = dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_2_update_0_write
//	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0
inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_update_0_write, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res = dark_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res, dark_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_2_update_0_read
//	dark_weights_normed_gauss_ds_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_res = dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 478], [0, 268]}
  hw_uint<16> RAM[479][269];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_weights_normed_gauss_blur_3_cache {
  // # of banks: 1
  dark_weights_normed_gauss_blur_3_all_inputs_to_all_outputs_cache dark_weights_normed_gauss_blur_3_all_inputs_to_all_outputs;
};



inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_all_inputs_to_all_outputs.write(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0 = dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0);
  return value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_3_update_0_write
//	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0
inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_update_0_write, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res = dark_weights_normed_gauss_blur_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res, dark_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_3_update_0_read
//	dark_weights_normed_gauss_ds_3_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_res = dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 962], [0, 542]}
  hw_uint<16> RAM[963][543];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_weights_normed_gauss_ds_1_cache {
  // # of banks: 1
  dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs_cache dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_2_update_0_read
//	dark_weights_normed_gauss_blur_2_rd0
//	dark_weights_normed_gauss_blur_2_rd1
//	dark_weights_normed_gauss_blur_2_rd2
//	dark_weights_normed_gauss_blur_2_rd3
//	dark_weights_normed_gauss_blur_2_rd4
//	dark_weights_normed_gauss_blur_2_rd5
//	dark_weights_normed_gauss_blur_2_rd6
//	dark_weights_normed_gauss_blur_2_rd7
//	dark_weights_normed_gauss_blur_2_rd8
inline hw_uint<144> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_2_rd0
    // dark_weights_normed_gauss_blur_2_rd1
    // dark_weights_normed_gauss_blur_2_rd2
    // dark_weights_normed_gauss_blur_2_rd3
    // dark_weights_normed_gauss_blur_2_rd4
    // dark_weights_normed_gauss_blur_2_rd5
    // dark_weights_normed_gauss_blur_2_rd6
    // dark_weights_normed_gauss_blur_2_rd7
    // dark_weights_normed_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_res = dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_res = dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_res = dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_res = dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_res = dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_res = dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_res = dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_res = dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_res = dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_1_update_0_write
//	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0
inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_update_0_write, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res = dark_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res, dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 480], [0, 270]}
  hw_uint<16> RAM[481][271];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_weights_normed_gauss_ds_2_cache {
  // # of banks: 1
  dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs_cache dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.write(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(1 + d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, 1 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(2 + d0 - 0, 2 + d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_3_update_0_read
//	dark_weights_normed_gauss_blur_3_rd0
//	dark_weights_normed_gauss_blur_3_rd1
//	dark_weights_normed_gauss_blur_3_rd2
//	dark_weights_normed_gauss_blur_3_rd3
//	dark_weights_normed_gauss_blur_3_rd4
//	dark_weights_normed_gauss_blur_3_rd5
//	dark_weights_normed_gauss_blur_3_rd6
//	dark_weights_normed_gauss_blur_3_rd7
//	dark_weights_normed_gauss_blur_3_rd8
inline hw_uint<144> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_3_rd0
    // dark_weights_normed_gauss_blur_3_rd1
    // dark_weights_normed_gauss_blur_3_rd2
    // dark_weights_normed_gauss_blur_3_rd3
    // dark_weights_normed_gauss_blur_3_rd4
    // dark_weights_normed_gauss_blur_3_rd5
    // dark_weights_normed_gauss_blur_3_rd6
    // dark_weights_normed_gauss_blur_3_rd7
    // dark_weights_normed_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_res = dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd1_res = dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd2_res = dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd3_res = dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd4_res = dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd5_res = dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd6_res = dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd7_res = dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd8_res = dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_2_update_0_write
//	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0
inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_update_0_write, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res = dark_weights_normed_gauss_ds_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res, dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 239], [0, 134]}
  hw_uint<16> RAM[240][135];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct dark_weights_normed_gauss_ds_3_cache {
  // # of banks: 1
  dark_weights_normed_gauss_ds_3_all_inputs_to_all_outputs_cache dark_weights_normed_gauss_ds_3_all_inputs_to_all_outputs;
};



inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_all_inputs_to_all_outputs.write(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_ds_3_update_0_write
//	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0
inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_update_0_write, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res = dark_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res, dark_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct final_merged_0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
  hw_uint<16> RAM[1920][1080];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct final_merged_0_cache {
  // # of banks: 1
  final_merged_0_all_inputs_to_all_outputs_cache final_merged_0_all_inputs_to_all_outputs;
};



inline void final_merged_0_final_merged_0_update_0_write0_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write0, final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
  final_merged_0.final_merged_0_all_inputs_to_all_outputs.write(final_merged_0_final_merged_0_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> ef_fpga_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ef_fpga_rd0 read pattern: { ef_fpga_update_0[d0, d1] -> final_merged_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_final_merged_0_final_merged_0_update_0_write0 = final_merged_0.final_merged_0_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_final_merged_0_final_merged_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// ef_fpga_update_0_read
//	ef_fpga_rd0
inline hw_uint<16> final_merged_0_ef_fpga_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // ef_fpga_rd0

	hw_uint<16> result;
	hw_uint<16> ef_fpga_rd0_res = ef_fpga_rd0_select(final_merged_0, d0, d1, dynamic_address);
	set_at<0, 16>(result, ef_fpga_rd0_res);
	return result;
}

// final_merged_0_update_0_write
//	final_merged_0_final_merged_0_update_0_write0
inline void final_merged_0_final_merged_0_update_0_write_bundle_write(hw_uint<16>& final_merged_0_update_0_write, final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_0_final_merged_0_update_0_write0_res = final_merged_0_update_0_write.extract<0, 15>();
	final_merged_0_final_merged_0_update_0_write0_write(final_merged_0_final_merged_0_update_0_write0_res, final_merged_0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct final_merged_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 959], [0, 539]}
  hw_uint<16> RAM[960][540];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct final_merged_1_cache {
  // # of banks: 1
  final_merged_1_all_inputs_to_all_outputs_cache final_merged_1_all_inputs_to_all_outputs;
};



inline void final_merged_1_final_merged_1_update_0_write0_write(hw_uint<16>& final_merged_1_final_merged_1_update_0_write0, final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
  final_merged_1.final_merged_1_all_inputs_to_all_outputs.write(final_merged_1_final_merged_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> final_merged_0_rd0_select(final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[o0, o1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_final_merged_1_final_merged_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
inline hw_uint<16> final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_0_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(final_merged_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_0_rd0_res);
	return result;
}

// final_merged_1_update_0_write
//	final_merged_1_final_merged_1_update_0_write0
inline void final_merged_1_final_merged_1_update_0_write_bundle_write(hw_uint<16>& final_merged_1_update_0_write, final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_1_final_merged_1_update_0_write0_res = final_merged_1_update_0_write.extract<0, 15>();
	final_merged_1_final_merged_1_update_0_write0_write(final_merged_1_final_merged_1_update_0_write0_res, final_merged_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct final_merged_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 479], [0, 269]}
  hw_uint<16> RAM[480][270];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct final_merged_2_cache {
  // # of banks: 1
  final_merged_2_all_inputs_to_all_outputs_cache final_merged_2_all_inputs_to_all_outputs;
};



inline void final_merged_2_final_merged_2_update_0_write0_write(hw_uint<16>& final_merged_2_final_merged_2_update_0_write0, final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
  final_merged_2.final_merged_2_all_inputs_to_all_outputs.write(final_merged_2_final_merged_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> final_merged_1_rd0_select(final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_final_merged_2_final_merged_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<16> final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_1_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(final_merged_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_1_rd0_res);
	return result;
}

// final_merged_2_update_0_write
//	final_merged_2_final_merged_2_update_0_write0
inline void final_merged_2_final_merged_2_update_0_write_bundle_write(hw_uint<16>& final_merged_2_update_0_write, final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_2_final_merged_2_update_0_write0_res = final_merged_2_update_0_write.extract<0, 15>();
	final_merged_2_final_merged_2_update_0_write0_write(final_merged_2_final_merged_2_update_0_write0_res, final_merged_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct fused_level_0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
  hw_uint<16> RAM[1920][1080];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct fused_level_0_cache {
  // # of banks: 1
  fused_level_0_all_inputs_to_all_outputs_cache fused_level_0_all_inputs_to_all_outputs;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
  fused_level_0.fused_level_0_all_inputs_to_all_outputs.write(fused_level_0_fused_level_0_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_fused_level_0_fused_level_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
inline hw_uint<16> fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_0_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(fused_level_0, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_0_rd0_res);
	return result;
}

// fused_level_0_update_0_write
//	fused_level_0_fused_level_0_update_0_write0
inline void fused_level_0_fused_level_0_update_0_write_bundle_write(hw_uint<16>& fused_level_0_update_0_write, fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_0_fused_level_0_update_0_write0_res = fused_level_0_update_0_write.extract<0, 15>();
	fused_level_0_fused_level_0_update_0_write0_write(fused_level_0_fused_level_0_update_0_write0_res, fused_level_0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct fused_level_1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 959], [0, 539]}
  hw_uint<16> RAM[960][540];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct fused_level_1_cache {
  // # of banks: 1
  fused_level_1_all_inputs_to_all_outputs_cache fused_level_1_all_inputs_to_all_outputs;
};



inline void fused_level_1_fused_level_1_update_0_write0_write(hw_uint<16>& fused_level_1_fused_level_1_update_0_write0, fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
  fused_level_1.fused_level_1_all_inputs_to_all_outputs.write(fused_level_1_fused_level_1_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> final_merged_1_rd0_select(fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_fused_level_1_fused_level_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<16> fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_1_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(fused_level_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_1_rd0_res);
	return result;
}

// fused_level_1_update_0_write
//	fused_level_1_fused_level_1_update_0_write0
inline void fused_level_1_fused_level_1_update_0_write_bundle_write(hw_uint<16>& fused_level_1_update_0_write, fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_1_fused_level_1_update_0_write0_res = fused_level_1_update_0_write.extract<0, 15>();
	fused_level_1_fused_level_1_update_0_write0_write(fused_level_1_fused_level_1_update_0_write0_res, fused_level_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct fused_level_2_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 479], [0, 269]}
  hw_uint<16> RAM[480][270];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct fused_level_2_cache {
  // # of banks: 1
  fused_level_2_all_inputs_to_all_outputs_cache fused_level_2_all_inputs_to_all_outputs;
};



inline void fused_level_2_fused_level_2_update_0_write0_write(hw_uint<16>& fused_level_2_fused_level_2_update_0_write0, fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
  fused_level_2.fused_level_2_all_inputs_to_all_outputs.write(fused_level_2_fused_level_2_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_fused_level_2_fused_level_2_update_0_write0 = fused_level_2.fused_level_2_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_fused_level_2_fused_level_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<16> fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_2_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_2_update_0_write
//	fused_level_2_fused_level_2_update_0_write0
inline void fused_level_2_fused_level_2_update_0_write_bundle_write(hw_uint<16>& fused_level_2_update_0_write, fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_2_fused_level_2_update_0_write0_res = fused_level_2_update_0_write.extract<0, 15>();
	fused_level_2_fused_level_2_update_0_write0_write(fused_level_2_fused_level_2_update_0_write0_res, fused_level_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct fused_level_3_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 239], [0, 134]}
  hw_uint<16> RAM[240][135];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct fused_level_3_cache {
  // # of banks: 1
  fused_level_3_all_inputs_to_all_outputs_cache fused_level_3_all_inputs_to_all_outputs;
};



inline void fused_level_3_fused_level_3_update_0_write0_write(hw_uint<16>& fused_level_3_fused_level_3_update_0_write0, fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
  fused_level_3.fused_level_3_all_inputs_to_all_outputs.write(fused_level_3_fused_level_3_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_all_inputs_to_all_outputs.read(floord(d0, 2) - 0, floord(d1, 2) - 0);
  return value_fused_level_3_fused_level_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<16> fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_2_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_3_update_0_write
//	fused_level_3_fused_level_3_update_0_write0
inline void fused_level_3_fused_level_3_update_0_write_bundle_write(hw_uint<16>& fused_level_3_update_0_write, fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_3_fused_level_3_update_0_write0_res = fused_level_3_update_0_write.extract<0, 15>();
	fused_level_3_fused_level_3_update_0_write0_write(fused_level_3_fused_level_3_update_0_write0_res, fused_level_3, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
  hw_uint<16> RAM[1927][1087];
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
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_update_0_read
//	bright_rd0
inline hw_uint<16> in_bright_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_rd0

	hw_uint<16> result;
	hw_uint<16> bright_rd0_res = bright_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_rd0_res);
	return result;
}

// dark_update_0_read
//	dark_rd0
inline hw_uint<16> in_dark_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_rd0

	hw_uint<16> result;
	hw_uint<16> dark_rd0_res = dark_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_rd0_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<16>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct weight_sums_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
  hw_uint<16> RAM[1927][1087];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct weight_sums_cache {
  // # of banks: 1
  weight_sums_all_inputs_to_all_outputs_cache weight_sums_all_inputs_to_all_outputs;
};



inline void weight_sums_weight_sums_update_0_write0_write(hw_uint<16>& weight_sums_weight_sums_update_0_write0, weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
  weight_sums.weight_sums_all_inputs_to_all_outputs.write(weight_sums_weight_sums_update_0_write0, d0 - 0, d1 - 0);
}

inline hw_uint<16> bright_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_weight_sums_weight_sums_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_weight_sums_weight_sums_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<16> weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(weight_sums, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_rd0_res);
	return result;
}

// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<16> weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(weight_sums, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_rd0_res);
	return result;
}

// weight_sums_update_0_write
//	weight_sums_weight_sums_update_0_write0
inline void weight_sums_weight_sums_update_0_write_bundle_write(hw_uint<16>& weight_sums_update_0_write, weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
	hw_uint<16> weight_sums_weight_sums_update_0_write0_res = weight_sums_update_0_write.extract<0, 15>();
	weight_sums_weight_sums_update_0_write0_write(weight_sums_weight_sums_update_0_write0_res, weight_sums, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 748981440 bits


// Operation logic
inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = exposure_weight_unrolled_1(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(/* arg names */compute_result, dark_weights, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_update_0(bright_cache& bright, bright_weights_cache& bright_weights, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_weights_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = exposure_weight_unrolled_1(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(/* arg names */compute_result, bright_weights, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void weight_sums_update_0(dark_weights_cache& dark_weights, bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_weight_sums_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_weight_sums_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(dark_weights_0_c__0_value, bright_weights_0_c__0_value);
	// Produce: weight_sums
	weight_sums_weight_sums_update_0_write_bundle_write(/* arg names */compute_result, weight_sums, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, weight_sums_cache& weight_sums, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f_divide_unrolled_1(dark_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_1_update_0(dark_cache& dark, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_gauss_blur_1_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_0_c__0_value);
	// Produce: dark_gauss_blur_1
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f_divide_unrolled_1(bright_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_1_update_0(bright_cache& bright, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_gauss_blur_1_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_0_c__0_value);
	// Produce: bright_gauss_blur_1
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_1
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_2_update_0(bright_gauss_blur_2_cache& bright_gauss_blur_2, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_2
	auto bright_gauss_blur_2_0_c__0_value = bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_2_0_c__0_value);
	// Produce: bright_gauss_ds_2
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_3_update_0(dark_gauss_blur_3_cache& dark_gauss_blur_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_3
	auto dark_gauss_blur_3_0_c__0_value = dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_3_0_c__0_value);
	// Produce: dark_gauss_ds_3
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_2
	auto bright_weights_normed_gauss_blur_2_0_c__0_value = bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_2
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_3
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_3_update_0(bright_gauss_blur_3_cache& bright_gauss_blur_3, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_3
	auto bright_gauss_blur_3_0_c__0_value = bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_3_0_c__0_value);
	// Produce: bright_gauss_ds_3
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_3
	auto dark_weights_normed_gauss_blur_3_0_c__0_value = dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_3
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_2_update_0(dark_gauss_ds_3_cache& dark_gauss_ds_3, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_3_0_c__0_value);
	// Produce: dark_laplace_us_2
	dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_1_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_laplace_us_1
	dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_2_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_3_0_c__0_value);
	// Produce: bright_laplace_us_2
	bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_1_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_laplace_us_1
	bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_0_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_laplace_us_0
	bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_2_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_2_cache& bright_laplace_us_2, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_2
	auto bright_laplace_us_2_0_c__0_value = bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_2_0_c__0_value, bright_laplace_us_2_0_c__0_value);
	// Produce: bright_laplace_diff_2
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_1_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_1_cache& bright_laplace_us_1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_1
	auto bright_laplace_us_1_0_c__0_value = bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_1_0_c__0_value, bright_laplace_us_1_0_c__0_value);
	// Produce: bright_laplace_diff_1
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_0_update_0(bright_cache& bright, bright_laplace_us_0_cache& bright_laplace_us_0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_laplace_diff_0_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_0
	auto bright_laplace_us_0_0_c__0_value = bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_0_c__0_value, bright_laplace_us_0_0_c__0_value);
	// Produce: bright_laplace_diff_0
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_3_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, fused_level_3_cache& fused_level_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(/* arg names */compute_result, fused_level_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(/* arg names */compute_result, fused_level_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(/* arg names */compute_result, fused_level_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, fused_level_0_cache& fused_level_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
	// Produce: fused_level_0
	fused_level_0_fused_level_0_update_0_write_bundle_write(/* arg names */compute_result, fused_level_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_2_update_0(fused_level_3_cache& fused_level_3, fused_level_2_cache& fused_level_2, final_merged_2_cache& final_merged_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: fused_level_3
	auto fused_level_3_0_c__0_value = fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_2
	auto fused_level_2_0_c__0_value = fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
	// Produce: final_merged_2
	final_merged_2_final_merged_2_update_0_write_bundle_write(/* arg names */compute_result, final_merged_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_1(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = scale_exposure_unrolled_1(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(/* arg names */compute_result, dark, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(/* arg names */compute_result, bright, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_1_update_0(dark_gauss_blur_1_cache& dark_gauss_blur_1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_1
	auto dark_gauss_blur_1_0_c__0_value = dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_1_0_c__0_value);
	// Produce: dark_gauss_ds_1
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_2_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_gauss_blur_2
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_1
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_1_update_0(bright_gauss_blur_1_cache& bright_gauss_blur_1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_1
	auto bright_gauss_blur_1_0_c__0_value = bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_1_0_c__0_value);
	// Produce: bright_gauss_ds_1
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_2_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_gauss_blur_2
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_3_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_gauss_blur_3
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_2
	auto dark_weights_normed_gauss_blur_2_0_c__0_value = dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_2
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_3
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_0_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_laplace_us_0
	dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_2_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_2_cache& dark_laplace_us_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_2
	auto dark_laplace_us_2_0_c__0_value = dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_2_0_c__0_value, dark_laplace_us_2_0_c__0_value);
	// Produce: dark_laplace_diff_2
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_1_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_1_cache& dark_laplace_us_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_1
	auto dark_laplace_us_1_0_c__0_value = dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_1_0_c__0_value, dark_laplace_us_1_0_c__0_value);
	// Produce: dark_laplace_diff_1
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_0_update_0(dark_cache& dark, dark_laplace_us_0_cache& dark_laplace_us_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_laplace_diff_0_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_0
	auto dark_laplace_us_0_0_c__0_value = dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_0_c__0_value, dark_laplace_us_0_0_c__0_value);
	// Produce: dark_laplace_diff_0
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_3
	auto bright_weights_normed_gauss_blur_3_0_c__0_value = bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_3
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_1_update_0(final_merged_2_cache& final_merged_2, fused_level_1_cache& fused_level_1, final_merged_1_cache& final_merged_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_2
	auto final_merged_2_0_c__0_value = final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_1
	auto fused_level_1_0_c__0_value = fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
	// Produce: final_merged_1
	final_merged_1_final_merged_1_update_0_write_bundle_write(/* arg names */compute_result, final_merged_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_0_update_0(final_merged_1_cache& final_merged_1, fused_level_0_cache& fused_level_0, final_merged_0_cache& final_merged_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_1
	auto final_merged_1_0_c__0_value = final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_0
	auto fused_level_0_0_c__0_value = fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(/* arg names */compute_result, final_merged_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ef_fpga_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */ef_fpga, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_ef_fpga_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(final_merged_0_0_c__0_value);
	// Produce: ef_fpga
	ef_fpga.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_1
	auto dark_weights_normed_gauss_blur_1_0_c__0_value = dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_1
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_2
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_2_update_0(dark_gauss_blur_2_cache& dark_gauss_blur_2, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_2
	auto dark_gauss_blur_2_0_c__0_value = dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_2_0_c__0_value);
	// Produce: dark_gauss_ds_2
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_3_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_gauss_blur_3
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_1
	auto bright_weights_normed_gauss_blur_1_0_c__0_value = bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_1
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_2
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void ef_fpga_naive(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */ef_fpga) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("ef_fpga_naive_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_1_cache bright_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_2_cache bright_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_3_cache bright_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_1_cache bright_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_2_cache bright_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_3_cache bright_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_0_cache bright_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_1_cache bright_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_2_cache bright_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_0_cache bright_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_1_cache bright_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_2_cache bright_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_cache bright_weights;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_cache bright_weights_normed;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_1_cache bright_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_2_cache bright_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_3_cache bright_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_1_cache bright_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_2_cache bright_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_3_cache bright_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_1_cache dark_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_2_cache dark_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_3_cache dark_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_1_cache dark_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_2_cache dark_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_3_cache dark_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_0_cache dark_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_1_cache dark_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_2_cache dark_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_0_cache dark_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_1_cache dark_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_2_cache dark_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_cache dark_weights;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_cache dark_weights_normed;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_1_cache dark_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_2_cache dark_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_3_cache dark_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_1_cache dark_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_2_cache dark_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_3_cache dark_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_0_cache final_merged_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_1_cache final_merged_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_2_cache final_merged_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_0_cache fused_level_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_1_cache fused_level_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_2_cache fused_level_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_3_cache fused_level_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  weight_sums_cache weight_sums;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { dark_weights_normed_update_0[d0, d1] -> [7, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086; dark_laplace_diff_1_update_0[d0, d1] -> [36, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539; dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [17, d1, d0] : 0 <= d0 <= 962 and 0 <= d1 <= 542; bright_gauss_blur_2_update_0[d0, d1] -> [16, d1, d0] : 0 <= d0 <= 960 and 0 <= d1 <= 540; bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [21, d1, d0] : 0 <= d0 <= 962 and 0 <= d1 <= 542; in_update_0[d0, d1] -> [1, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086; ef_fpga_update_0[d0, d1] -> [52, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; dark_gauss_ds_3_update_0[d0, d1] -> [27, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134; dark_laplace_us_0_update_0[d0, d1] -> [34, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; fused_level_0_update_0[d0, d1] -> [48, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; bright_gauss_blur_3_update_0[d0, d1] -> [24, d1, d0] : 0 <= d0 <= 478 and 0 <= d1 <= 268; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [29, d1, d0] : 0 <= d0 <= 478 and 0 <= d1 <= 268; bright_laplace_diff_0_update_0[d0, d1] -> [44, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; dark_gauss_blur_2_update_0[d0, d1] -> [13, d1, d0] : 0 <= d0 <= 960 and 0 <= d1 <= 540; bright_laplace_us_2_update_0[d0, d1] -> [39, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269; bright_laplace_us_0_update_0[d0, d1] -> [41, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; dark_laplace_diff_0_update_0[d0, d1] -> [37, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; bright_laplace_us_1_update_0[d0, d1] -> [40, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539; bright_weights_update_0[d0, d1] -> [5, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086; dark_gauss_ds_2_update_0[d0, d1] -> [19, d1, d0] : 0 <= d0 <= 480 and 0 <= d1 <= 270; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084; dark_gauss_blur_1_update_0[d0, d1] -> [8, d1, d0] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [26, d1, d0] : 0 <= d0 <= 478 and 0 <= d1 <= 268; final_merged_2_update_0[d0, d1] -> [49, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269; dark_laplace_us_1_update_0[d0, d1] -> [33, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539; final_merged_1_update_0[d0, d1] -> [50, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539; dark_gauss_blur_3_update_0[d0, d1] -> [20, d1, d0] : 0 <= d0 <= 478 and 0 <= d1 <= 268; bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [28, d1, d0] : 0 <= d0 <= 480 and 0 <= d1 <= 270; dark_weights_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086; weight_sums_update_0[d0, d1] -> [6, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [18, d1, d0] : 0 <= d0 <= 960 and 0 <= d1 <= 540; dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [31, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134; bright_gauss_ds_1_update_0[d0, d1] -> [15, d1, d0] : 0 <= d0 <= 962 and 0 <= d1 <= 542; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [22, d1, d0] : 0 <= d0 <= 960 and 0 <= d1 <= 540; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [14, d1, d0] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084; dark_update_0[d0, d1] -> [2, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086; bright_gauss_blur_1_update_0[d0, d1] -> [10, d1, d0] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084; bright_weights_normed_update_0[d0, d1] -> [9, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086; bright_laplace_diff_2_update_0[d0, d1] -> [42, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269; bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [38, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134; fused_level_3_update_0[d0, d1] -> [45, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134; dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [25, d1, d0] : 0 <= d0 <= 480 and 0 <= d1 <= 270; final_merged_0_update_0[d0, d1] -> [51, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; bright_laplace_diff_1_update_0[d0, d1] -> [43, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539; bright_gauss_ds_3_update_0[d0, d1] -> [30, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134; dark_gauss_ds_1_update_0[d0, d1] -> [12, d1, d0] : 0 <= d0 <= 962 and 0 <= d1 <= 542; fused_level_2_update_0[d0, d1] -> [46, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269; bright_update_0[d0, d1] -> [3, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086; dark_laplace_diff_2_update_0[d0, d1] -> [35, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269; fused_level_1_update_0[d0, d1] -> [47, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539; bright_gauss_ds_2_update_0[d0, d1] -> [23, d1, d0] : 0 <= d0 <= 480 and 0 <= d1 <= 270; dark_laplace_us_2_update_0[d0, d1] -> [32, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
//   { dark_weights_normed_update_0[d0, d1] -> [7, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for dark_weights_normed_update_0(((-7 + i0 == 0) && (i2 >= 0) && (1926 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { dark_laplace_diff_1_update_0[d0, d1] -> [36, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for dark_laplace_diff_1_update_0(((-36 + i0 == 0) && (i2 >= 0) && (959 - i2 >= 0) && (i1 >= 0) && (539 - i1 >= 0)))
//   { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [17, d1, d0] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
// Condition for dark_weights_normed_gauss_ds_1_update_0(((-17 + i0 == 0) && (i2 >= 0) && (962 - i2 >= 0) && (i1 >= 0) && (542 - i1 >= 0)))
//   { bright_gauss_blur_2_update_0[d0, d1] -> [16, d1, d0] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
// Condition for bright_gauss_blur_2_update_0(((-16 + i0 == 0) && (i2 >= 0) && (960 - i2 >= 0) && (i1 >= 0) && (540 - i1 >= 0)))
//   { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [21, d1, d0] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
// Condition for bright_weights_normed_gauss_ds_1_update_0(((-21 + i0 == 0) && (i2 >= 0) && (962 - i2 >= 0) && (i1 >= 0) && (542 - i1 >= 0)))
//   { in_update_0[d0, d1] -> [1, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for in_update_0(((-1 + i0 == 0) && (i2 >= 0) && (1926 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { ef_fpga_update_0[d0, d1] -> [52, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for ef_fpga_update_0(((-52 + i0 == 0) && (i2 >= 0) && (1919 - i2 >= 0) && (i1 >= 0) && (1079 - i1 >= 0)))
//   { dark_gauss_ds_3_update_0[d0, d1] -> [27, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for dark_gauss_ds_3_update_0(((-27 + i0 == 0) && (i2 >= 0) && (239 - i2 >= 0) && (i1 >= 0) && (134 - i1 >= 0)))
//   { dark_laplace_us_0_update_0[d0, d1] -> [34, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for dark_laplace_us_0_update_0(((-34 + i0 == 0) && (i2 >= 0) && (1919 - i2 >= 0) && (i1 >= 0) && (1079 - i1 >= 0)))
//   { fused_level_0_update_0[d0, d1] -> [48, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for fused_level_0_update_0(((-48 + i0 == 0) && (i2 >= 0) && (1919 - i2 >= 0) && (i1 >= 0) && (1079 - i1 >= 0)))
//   { bright_gauss_blur_3_update_0[d0, d1] -> [24, d1, d0] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for bright_gauss_blur_3_update_0(((-24 + i0 == 0) && (i2 >= 0) && (478 - i2 >= 0) && (i1 >= 0) && (268 - i1 >= 0)))
//   { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [29, d1, d0] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for bright_weights_normed_gauss_blur_3_update_0(((-29 + i0 == 0) && (i2 >= 0) && (478 - i2 >= 0) && (i1 >= 0) && (268 - i1 >= 0)))
//   { bright_laplace_diff_0_update_0[d0, d1] -> [44, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for bright_laplace_diff_0_update_0(((-44 + i0 == 0) && (i2 >= 0) && (1919 - i2 >= 0) && (i1 >= 0) && (1079 - i1 >= 0)))
//   { dark_gauss_blur_2_update_0[d0, d1] -> [13, d1, d0] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
// Condition for dark_gauss_blur_2_update_0(((-13 + i0 == 0) && (i2 >= 0) && (960 - i2 >= 0) && (i1 >= 0) && (540 - i1 >= 0)))
//   { bright_laplace_us_2_update_0[d0, d1] -> [39, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for bright_laplace_us_2_update_0(((-39 + i0 == 0) && (i2 >= 0) && (479 - i2 >= 0) && (i1 >= 0) && (269 - i1 >= 0)))
//   { bright_laplace_us_0_update_0[d0, d1] -> [41, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for bright_laplace_us_0_update_0(((-41 + i0 == 0) && (i2 >= 0) && (1919 - i2 >= 0) && (i1 >= 0) && (1079 - i1 >= 0)))
//   { dark_laplace_diff_0_update_0[d0, d1] -> [37, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for dark_laplace_diff_0_update_0(((-37 + i0 == 0) && (i2 >= 0) && (1919 - i2 >= 0) && (i1 >= 0) && (1079 - i1 >= 0)))
//   { bright_laplace_us_1_update_0[d0, d1] -> [40, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for bright_laplace_us_1_update_0(((-40 + i0 == 0) && (i2 >= 0) && (959 - i2 >= 0) && (i1 >= 0) && (539 - i1 >= 0)))
//   { bright_weights_update_0[d0, d1] -> [5, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for bright_weights_update_0(((-5 + i0 == 0) && (i2 >= 0) && (1926 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { dark_gauss_ds_2_update_0[d0, d1] -> [19, d1, d0] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
// Condition for dark_gauss_ds_2_update_0(((-19 + i0 == 0) && (i2 >= 0) && (480 - i2 >= 0) && (i1 >= 0) && (270 - i1 >= 0)))
//   { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [11, d1, d0] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
// Condition for dark_weights_normed_gauss_blur_1_update_0(((-11 + i0 == 0) && (i2 >= 0) && (1924 - i2 >= 0) && (i1 >= 0) && (1084 - i1 >= 0)))
//   { dark_gauss_blur_1_update_0[d0, d1] -> [8, d1, d0] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
// Condition for dark_gauss_blur_1_update_0(((-8 + i0 == 0) && (i2 >= 0) && (1924 - i2 >= 0) && (i1 >= 0) && (1084 - i1 >= 0)))
//   { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [26, d1, d0] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for dark_weights_normed_gauss_blur_3_update_0(((-26 + i0 == 0) && (i2 >= 0) && (478 - i2 >= 0) && (i1 >= 0) && (268 - i1 >= 0)))
//   { final_merged_2_update_0[d0, d1] -> [49, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for final_merged_2_update_0(((-49 + i0 == 0) && (i2 >= 0) && (479 - i2 >= 0) && (i1 >= 0) && (269 - i1 >= 0)))
//   { dark_laplace_us_1_update_0[d0, d1] -> [33, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for dark_laplace_us_1_update_0(((-33 + i0 == 0) && (i2 >= 0) && (959 - i2 >= 0) && (i1 >= 0) && (539 - i1 >= 0)))
//   { final_merged_1_update_0[d0, d1] -> [50, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for final_merged_1_update_0(((-50 + i0 == 0) && (i2 >= 0) && (959 - i2 >= 0) && (i1 >= 0) && (539 - i1 >= 0)))
//   { dark_gauss_blur_3_update_0[d0, d1] -> [20, d1, d0] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for dark_gauss_blur_3_update_0(((-20 + i0 == 0) && (i2 >= 0) && (478 - i2 >= 0) && (i1 >= 0) && (268 - i1 >= 0)))
//   { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [28, d1, d0] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
// Condition for bright_weights_normed_gauss_ds_2_update_0(((-28 + i0 == 0) && (i2 >= 0) && (480 - i2 >= 0) && (i1 >= 0) && (270 - i1 >= 0)))
//   { dark_weights_update_0[d0, d1] -> [4, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for dark_weights_update_0(((-4 + i0 == 0) && (i2 >= 0) && (1926 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { weight_sums_update_0[d0, d1] -> [6, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for weight_sums_update_0(((-6 + i0 == 0) && (i2 >= 0) && (1926 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [18, d1, d0] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
// Condition for dark_weights_normed_gauss_blur_2_update_0(((-18 + i0 == 0) && (i2 >= 0) && (960 - i2 >= 0) && (i1 >= 0) && (540 - i1 >= 0)))
//   { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [31, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for dark_weights_normed_gauss_ds_3_update_0(((-31 + i0 == 0) && (i2 >= 0) && (239 - i2 >= 0) && (i1 >= 0) && (134 - i1 >= 0)))
//   { bright_gauss_ds_1_update_0[d0, d1] -> [15, d1, d0] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
// Condition for bright_gauss_ds_1_update_0(((-15 + i0 == 0) && (i2 >= 0) && (962 - i2 >= 0) && (i1 >= 0) && (542 - i1 >= 0)))
//   { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [22, d1, d0] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
// Condition for bright_weights_normed_gauss_blur_2_update_0(((-22 + i0 == 0) && (i2 >= 0) && (960 - i2 >= 0) && (i1 >= 0) && (540 - i1 >= 0)))
//   { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [14, d1, d0] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
// Condition for bright_weights_normed_gauss_blur_1_update_0(((-14 + i0 == 0) && (i2 >= 0) && (1924 - i2 >= 0) && (i1 >= 0) && (1084 - i1 >= 0)))
//   { dark_update_0[d0, d1] -> [2, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for dark_update_0(((-2 + i0 == 0) && (i2 >= 0) && (1926 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { bright_gauss_blur_1_update_0[d0, d1] -> [10, d1, d0] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
// Condition for bright_gauss_blur_1_update_0(((-10 + i0 == 0) && (i2 >= 0) && (1924 - i2 >= 0) && (i1 >= 0) && (1084 - i1 >= 0)))
//   { bright_weights_normed_update_0[d0, d1] -> [9, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for bright_weights_normed_update_0(((-9 + i0 == 0) && (i2 >= 0) && (1926 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { bright_laplace_diff_2_update_0[d0, d1] -> [42, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for bright_laplace_diff_2_update_0(((-42 + i0 == 0) && (i2 >= 0) && (479 - i2 >= 0) && (i1 >= 0) && (269 - i1 >= 0)))
//   { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [38, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for bright_weights_normed_gauss_ds_3_update_0(((-38 + i0 == 0) && (i2 >= 0) && (239 - i2 >= 0) && (i1 >= 0) && (134 - i1 >= 0)))
//   { fused_level_3_update_0[d0, d1] -> [45, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for fused_level_3_update_0(((-45 + i0 == 0) && (i2 >= 0) && (239 - i2 >= 0) && (i1 >= 0) && (134 - i1 >= 0)))
//   { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [25, d1, d0] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
// Condition for dark_weights_normed_gauss_ds_2_update_0(((-25 + i0 == 0) && (i2 >= 0) && (480 - i2 >= 0) && (i1 >= 0) && (270 - i1 >= 0)))
//   { final_merged_0_update_0[d0, d1] -> [51, d1, d0] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for final_merged_0_update_0(((-51 + i0 == 0) && (i2 >= 0) && (1919 - i2 >= 0) && (i1 >= 0) && (1079 - i1 >= 0)))
//   { bright_laplace_diff_1_update_0[d0, d1] -> [43, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for bright_laplace_diff_1_update_0(((-43 + i0 == 0) && (i2 >= 0) && (959 - i2 >= 0) && (i1 >= 0) && (539 - i1 >= 0)))
//   { bright_gauss_ds_3_update_0[d0, d1] -> [30, d1, d0] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for bright_gauss_ds_3_update_0(((-30 + i0 == 0) && (i2 >= 0) && (239 - i2 >= 0) && (i1 >= 0) && (134 - i1 >= 0)))
//   { dark_gauss_ds_1_update_0[d0, d1] -> [12, d1, d0] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
// Condition for dark_gauss_ds_1_update_0(((-12 + i0 == 0) && (i2 >= 0) && (962 - i2 >= 0) && (i1 >= 0) && (542 - i1 >= 0)))
//   { fused_level_2_update_0[d0, d1] -> [46, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for fused_level_2_update_0(((-46 + i0 == 0) && (i2 >= 0) && (479 - i2 >= 0) && (i1 >= 0) && (269 - i1 >= 0)))
//   { bright_update_0[d0, d1] -> [3, d1, d0] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
// Condition for bright_update_0(((-3 + i0 == 0) && (i2 >= 0) && (1926 - i2 >= 0) && (i1 >= 0) && (1086 - i1 >= 0)))
//   { dark_laplace_diff_2_update_0[d0, d1] -> [35, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for dark_laplace_diff_2_update_0(((-35 + i0 == 0) && (i2 >= 0) && (479 - i2 >= 0) && (i1 >= 0) && (269 - i1 >= 0)))
//   { fused_level_1_update_0[d0, d1] -> [47, d1, d0] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for fused_level_1_update_0(((-47 + i0 == 0) && (i2 >= 0) && (959 - i2 >= 0) && (i1 >= 0) && (539 - i1 >= 0)))
//   { bright_gauss_ds_2_update_0[d0, d1] -> [23, d1, d0] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
// Condition for bright_gauss_ds_2_update_0(((-23 + i0 == 0) && (i2 >= 0) && (480 - i2 >= 0) && (i1 >= 0) && (270 - i1 >= 0)))
//   { dark_laplace_us_2_update_0[d0, d1] -> [32, d1, d0] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for dark_laplace_us_2_update_0(((-32 + i0 == 0) && (i2 >= 0) && (479 - i2 >= 0) && (i1 >= 0) && (269 - i1 >= 0)))

  /*
{
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 1926; c2 += 1)
      in_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 1926; c2 += 1)
      dark_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 1926; c2 += 1)
      bright_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 1926; c2 += 1)
      dark_weights_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 1926; c2 += 1)
      bright_weights_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 1926; c2 += 1)
      weight_sums_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 1926; c2 += 1)
      dark_weights_normed_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1084; c1 += 1)
    for (int c2 = 0; c2 <= 1924; c2 += 1)
      dark_gauss_blur_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1086; c1 += 1)
    for (int c2 = 0; c2 <= 1926; c2 += 1)
      bright_weights_normed_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1084; c1 += 1)
    for (int c2 = 0; c2 <= 1924; c2 += 1)
      bright_gauss_blur_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1084; c1 += 1)
    for (int c2 = 0; c2 <= 1924; c2 += 1)
      dark_weights_normed_gauss_blur_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 542; c1 += 1)
    for (int c2 = 0; c2 <= 962; c2 += 1)
      dark_gauss_ds_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 540; c1 += 1)
    for (int c2 = 0; c2 <= 960; c2 += 1)
      dark_gauss_blur_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1084; c1 += 1)
    for (int c2 = 0; c2 <= 1924; c2 += 1)
      bright_weights_normed_gauss_blur_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 542; c1 += 1)
    for (int c2 = 0; c2 <= 962; c2 += 1)
      bright_gauss_ds_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 540; c1 += 1)
    for (int c2 = 0; c2 <= 960; c2 += 1)
      bright_gauss_blur_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 542; c1 += 1)
    for (int c2 = 0; c2 <= 962; c2 += 1)
      dark_weights_normed_gauss_ds_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 540; c1 += 1)
    for (int c2 = 0; c2 <= 960; c2 += 1)
      dark_weights_normed_gauss_blur_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 270; c1 += 1)
    for (int c2 = 0; c2 <= 480; c2 += 1)
      dark_gauss_ds_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 268; c1 += 1)
    for (int c2 = 0; c2 <= 478; c2 += 1)
      dark_gauss_blur_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 542; c1 += 1)
    for (int c2 = 0; c2 <= 962; c2 += 1)
      bright_weights_normed_gauss_ds_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 540; c1 += 1)
    for (int c2 = 0; c2 <= 960; c2 += 1)
      bright_weights_normed_gauss_blur_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 270; c1 += 1)
    for (int c2 = 0; c2 <= 480; c2 += 1)
      bright_gauss_ds_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 268; c1 += 1)
    for (int c2 = 0; c2 <= 478; c2 += 1)
      bright_gauss_blur_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 270; c1 += 1)
    for (int c2 = 0; c2 <= 480; c2 += 1)
      dark_weights_normed_gauss_ds_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 268; c1 += 1)
    for (int c2 = 0; c2 <= 478; c2 += 1)
      dark_weights_normed_gauss_blur_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 134; c1 += 1)
    for (int c2 = 0; c2 <= 239; c2 += 1)
      dark_gauss_ds_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 270; c1 += 1)
    for (int c2 = 0; c2 <= 480; c2 += 1)
      bright_weights_normed_gauss_ds_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 268; c1 += 1)
    for (int c2 = 0; c2 <= 478; c2 += 1)
      bright_weights_normed_gauss_blur_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 134; c1 += 1)
    for (int c2 = 0; c2 <= 239; c2 += 1)
      bright_gauss_ds_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 134; c1 += 1)
    for (int c2 = 0; c2 <= 239; c2 += 1)
      dark_weights_normed_gauss_ds_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 269; c1 += 1)
    for (int c2 = 0; c2 <= 479; c2 += 1)
      dark_laplace_us_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 539; c1 += 1)
    for (int c2 = 0; c2 <= 959; c2 += 1)
      dark_laplace_us_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1079; c1 += 1)
    for (int c2 = 0; c2 <= 1919; c2 += 1)
      dark_laplace_us_0_update_0(c2, c1);
  for (int c1 = 0; c1 <= 269; c1 += 1)
    for (int c2 = 0; c2 <= 479; c2 += 1)
      dark_laplace_diff_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 539; c1 += 1)
    for (int c2 = 0; c2 <= 959; c2 += 1)
      dark_laplace_diff_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1079; c1 += 1)
    for (int c2 = 0; c2 <= 1919; c2 += 1)
      dark_laplace_diff_0_update_0(c2, c1);
  for (int c1 = 0; c1 <= 134; c1 += 1)
    for (int c2 = 0; c2 <= 239; c2 += 1)
      bright_weights_normed_gauss_ds_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 269; c1 += 1)
    for (int c2 = 0; c2 <= 479; c2 += 1)
      bright_laplace_us_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 539; c1 += 1)
    for (int c2 = 0; c2 <= 959; c2 += 1)
      bright_laplace_us_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1079; c1 += 1)
    for (int c2 = 0; c2 <= 1919; c2 += 1)
      bright_laplace_us_0_update_0(c2, c1);
  for (int c1 = 0; c1 <= 269; c1 += 1)
    for (int c2 = 0; c2 <= 479; c2 += 1)
      bright_laplace_diff_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 539; c1 += 1)
    for (int c2 = 0; c2 <= 959; c2 += 1)
      bright_laplace_diff_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1079; c1 += 1)
    for (int c2 = 0; c2 <= 1919; c2 += 1)
      bright_laplace_diff_0_update_0(c2, c1);
  for (int c1 = 0; c1 <= 134; c1 += 1)
    for (int c2 = 0; c2 <= 239; c2 += 1)
      fused_level_3_update_0(c2, c1);
  for (int c1 = 0; c1 <= 269; c1 += 1)
    for (int c2 = 0; c2 <= 479; c2 += 1)
      fused_level_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 539; c1 += 1)
    for (int c2 = 0; c2 <= 959; c2 += 1)
      fused_level_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1079; c1 += 1)
    for (int c2 = 0; c2 <= 1919; c2 += 1)
      fused_level_0_update_0(c2, c1);
  for (int c1 = 0; c1 <= 269; c1 += 1)
    for (int c2 = 0; c2 <= 479; c2 += 1)
      final_merged_2_update_0(c2, c1);
  for (int c1 = 0; c1 <= 539; c1 += 1)
    for (int c2 = 0; c2 <= 959; c2 += 1)
      final_merged_1_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1079; c1 += 1)
    for (int c2 = 0; c2 <= 1919; c2 += 1)
      final_merged_0_update_0(c2, c1);
  for (int c1 = 0; c1 <= 1079; c1 += 1)
    for (int c2 = 0; c2 <= 1919; c2 += 1)
      ef_fpga_update_0(c2, c1);
}

  */
	{
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 1926; c2 += 1)
	      in_update_0(in_off_chip /* buf name */, in, c2, c1);
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 1926; c2 += 1)
	      dark_update_0(in /* buf name */, dark, c2, c1);
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 1926; c2 += 1)
	      bright_update_0(in /* buf name */, bright, c2, c1);
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 1926; c2 += 1)
	      dark_weights_update_0(dark /* buf name */, dark_weights, c2, c1);
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 1926; c2 += 1)
	      bright_weights_update_0(bright /* buf name */, bright_weights, c2, c1);
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 1926; c2 += 1)
	      weight_sums_update_0(dark_weights /* buf name */, bright_weights /* buf name */, weight_sums, c2, c1);
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 1926; c2 += 1)
	      dark_weights_normed_update_0(dark_weights /* buf name */, weight_sums /* buf name */, dark_weights_normed, c2, c1);
	  for (int c1 = 0; c1 <= 1084; c1 += 1)
	    for (int c2 = 0; c2 <= 1924; c2 += 1)
	      dark_gauss_blur_1_update_0(dark /* buf name */, dark_gauss_blur_1, c2, c1);
	  for (int c1 = 0; c1 <= 1086; c1 += 1)
	    for (int c2 = 0; c2 <= 1926; c2 += 1)
	      bright_weights_normed_update_0(bright_weights /* buf name */, weight_sums /* buf name */, bright_weights_normed, c2, c1);
	  for (int c1 = 0; c1 <= 1084; c1 += 1)
	    for (int c2 = 0; c2 <= 1924; c2 += 1)
	      bright_gauss_blur_1_update_0(bright /* buf name */, bright_gauss_blur_1, c2, c1);
	  for (int c1 = 0; c1 <= 1084; c1 += 1)
	    for (int c2 = 0; c2 <= 1924; c2 += 1)
	      dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed /* buf name */, dark_weights_normed_gauss_blur_1, c2, c1);
	  for (int c1 = 0; c1 <= 542; c1 += 1)
	    for (int c2 = 0; c2 <= 962; c2 += 1)
	      dark_gauss_ds_1_update_0(dark_gauss_blur_1 /* buf name */, dark_gauss_ds_1, c2, c1);
	  for (int c1 = 0; c1 <= 540; c1 += 1)
	    for (int c2 = 0; c2 <= 960; c2 += 1)
	      dark_gauss_blur_2_update_0(dark_gauss_ds_1 /* buf name */, dark_gauss_blur_2, c2, c1);
	  for (int c1 = 0; c1 <= 1084; c1 += 1)
	    for (int c2 = 0; c2 <= 1924; c2 += 1)
	      bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed /* buf name */, bright_weights_normed_gauss_blur_1, c2, c1);
	  for (int c1 = 0; c1 <= 542; c1 += 1)
	    for (int c2 = 0; c2 <= 962; c2 += 1)
	      bright_gauss_ds_1_update_0(bright_gauss_blur_1 /* buf name */, bright_gauss_ds_1, c2, c1);
	  for (int c1 = 0; c1 <= 540; c1 += 1)
	    for (int c2 = 0; c2 <= 960; c2 += 1)
	      bright_gauss_blur_2_update_0(bright_gauss_ds_1 /* buf name */, bright_gauss_blur_2, c2, c1);
	  for (int c1 = 0; c1 <= 542; c1 += 1)
	    for (int c2 = 0; c2 <= 962; c2 += 1)
	      dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1 /* buf name */, dark_weights_normed_gauss_ds_1, c2, c1);
	  for (int c1 = 0; c1 <= 540; c1 += 1)
	    for (int c2 = 0; c2 <= 960; c2 += 1)
	      dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1 /* buf name */, dark_weights_normed_gauss_blur_2, c2, c1);
	  for (int c1 = 0; c1 <= 270; c1 += 1)
	    for (int c2 = 0; c2 <= 480; c2 += 1)
	      dark_gauss_ds_2_update_0(dark_gauss_blur_2 /* buf name */, dark_gauss_ds_2, c2, c1);
	  for (int c1 = 0; c1 <= 268; c1 += 1)
	    for (int c2 = 0; c2 <= 478; c2 += 1)
	      dark_gauss_blur_3_update_0(dark_gauss_ds_2 /* buf name */, dark_gauss_blur_3, c2, c1);
	  for (int c1 = 0; c1 <= 542; c1 += 1)
	    for (int c2 = 0; c2 <= 962; c2 += 1)
	      bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1 /* buf name */, bright_weights_normed_gauss_ds_1, c2, c1);
	  for (int c1 = 0; c1 <= 540; c1 += 1)
	    for (int c2 = 0; c2 <= 960; c2 += 1)
	      bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1 /* buf name */, bright_weights_normed_gauss_blur_2, c2, c1);
	  for (int c1 = 0; c1 <= 270; c1 += 1)
	    for (int c2 = 0; c2 <= 480; c2 += 1)
	      bright_gauss_ds_2_update_0(bright_gauss_blur_2 /* buf name */, bright_gauss_ds_2, c2, c1);
	  for (int c1 = 0; c1 <= 268; c1 += 1)
	    for (int c2 = 0; c2 <= 478; c2 += 1)
	      bright_gauss_blur_3_update_0(bright_gauss_ds_2 /* buf name */, bright_gauss_blur_3, c2, c1);
	  for (int c1 = 0; c1 <= 270; c1 += 1)
	    for (int c2 = 0; c2 <= 480; c2 += 1)
	      dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2 /* buf name */, dark_weights_normed_gauss_ds_2, c2, c1);
	  for (int c1 = 0; c1 <= 268; c1 += 1)
	    for (int c2 = 0; c2 <= 478; c2 += 1)
	      dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2 /* buf name */, dark_weights_normed_gauss_blur_3, c2, c1);
	  for (int c1 = 0; c1 <= 134; c1 += 1)
	    for (int c2 = 0; c2 <= 239; c2 += 1)
	      dark_gauss_ds_3_update_0(dark_gauss_blur_3 /* buf name */, dark_gauss_ds_3, c2, c1);
	  for (int c1 = 0; c1 <= 270; c1 += 1)
	    for (int c2 = 0; c2 <= 480; c2 += 1)
	      bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2 /* buf name */, bright_weights_normed_gauss_ds_2, c2, c1);
	  for (int c1 = 0; c1 <= 268; c1 += 1)
	    for (int c2 = 0; c2 <= 478; c2 += 1)
	      bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2 /* buf name */, bright_weights_normed_gauss_blur_3, c2, c1);
	  for (int c1 = 0; c1 <= 134; c1 += 1)
	    for (int c2 = 0; c2 <= 239; c2 += 1)
	      bright_gauss_ds_3_update_0(bright_gauss_blur_3 /* buf name */, bright_gauss_ds_3, c2, c1);
	  for (int c1 = 0; c1 <= 134; c1 += 1)
	    for (int c2 = 0; c2 <= 239; c2 += 1)
	      dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3 /* buf name */, dark_weights_normed_gauss_ds_3, c2, c1);
	  for (int c1 = 0; c1 <= 269; c1 += 1)
	    for (int c2 = 0; c2 <= 479; c2 += 1)
	      dark_laplace_us_2_update_0(dark_gauss_ds_3 /* buf name */, dark_laplace_us_2, c2, c1);
	  for (int c1 = 0; c1 <= 539; c1 += 1)
	    for (int c2 = 0; c2 <= 959; c2 += 1)
	      dark_laplace_us_1_update_0(dark_gauss_ds_2 /* buf name */, dark_laplace_us_1, c2, c1);
	  for (int c1 = 0; c1 <= 1079; c1 += 1)
	    for (int c2 = 0; c2 <= 1919; c2 += 1)
	      dark_laplace_us_0_update_0(dark_gauss_ds_1 /* buf name */, dark_laplace_us_0, c2, c1);
	  for (int c1 = 0; c1 <= 269; c1 += 1)
	    for (int c2 = 0; c2 <= 479; c2 += 1)
	      dark_laplace_diff_2_update_0(dark_gauss_ds_2 /* buf name */, dark_laplace_us_2 /* buf name */, dark_laplace_diff_2, c2, c1);
	  for (int c1 = 0; c1 <= 539; c1 += 1)
	    for (int c2 = 0; c2 <= 959; c2 += 1)
	      dark_laplace_diff_1_update_0(dark_gauss_ds_1 /* buf name */, dark_laplace_us_1 /* buf name */, dark_laplace_diff_1, c2, c1);
	  for (int c1 = 0; c1 <= 1079; c1 += 1)
	    for (int c2 = 0; c2 <= 1919; c2 += 1)
	      dark_laplace_diff_0_update_0(dark /* buf name */, dark_laplace_us_0 /* buf name */, dark_laplace_diff_0, c2, c1);
	  for (int c1 = 0; c1 <= 134; c1 += 1)
	    for (int c2 = 0; c2 <= 239; c2 += 1)
	      bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3 /* buf name */, bright_weights_normed_gauss_ds_3, c2, c1);
	  for (int c1 = 0; c1 <= 269; c1 += 1)
	    for (int c2 = 0; c2 <= 479; c2 += 1)
	      bright_laplace_us_2_update_0(bright_gauss_ds_3 /* buf name */, bright_laplace_us_2, c2, c1);
	  for (int c1 = 0; c1 <= 539; c1 += 1)
	    for (int c2 = 0; c2 <= 959; c2 += 1)
	      bright_laplace_us_1_update_0(bright_gauss_ds_2 /* buf name */, bright_laplace_us_1, c2, c1);
	  for (int c1 = 0; c1 <= 1079; c1 += 1)
	    for (int c2 = 0; c2 <= 1919; c2 += 1)
	      bright_laplace_us_0_update_0(bright_gauss_ds_1 /* buf name */, bright_laplace_us_0, c2, c1);
	  for (int c1 = 0; c1 <= 269; c1 += 1)
	    for (int c2 = 0; c2 <= 479; c2 += 1)
	      bright_laplace_diff_2_update_0(bright_gauss_ds_2 /* buf name */, bright_laplace_us_2 /* buf name */, bright_laplace_diff_2, c2, c1);
	  for (int c1 = 0; c1 <= 539; c1 += 1)
	    for (int c2 = 0; c2 <= 959; c2 += 1)
	      bright_laplace_diff_1_update_0(bright_gauss_ds_1 /* buf name */, bright_laplace_us_1 /* buf name */, bright_laplace_diff_1, c2, c1);
	  for (int c1 = 0; c1 <= 1079; c1 += 1)
	    for (int c2 = 0; c2 <= 1919; c2 += 1)
	      bright_laplace_diff_0_update_0(bright /* buf name */, bright_laplace_us_0 /* buf name */, bright_laplace_diff_0, c2, c1);
	  for (int c1 = 0; c1 <= 134; c1 += 1)
	    for (int c2 = 0; c2 <= 239; c2 += 1)
	      fused_level_3_update_0(bright_gauss_ds_3 /* buf name */, dark_gauss_ds_3 /* buf name */, bright_weights_normed_gauss_ds_3 /* buf name */, dark_weights_normed_gauss_ds_3 /* buf name */, fused_level_3, c2, c1);
	  for (int c1 = 0; c1 <= 269; c1 += 1)
	    for (int c2 = 0; c2 <= 479; c2 += 1)
	      fused_level_2_update_0(bright_laplace_diff_2 /* buf name */, dark_laplace_diff_2 /* buf name */, bright_weights_normed_gauss_ds_2 /* buf name */, dark_weights_normed_gauss_ds_2 /* buf name */, fused_level_2, c2, c1);
	  for (int c1 = 0; c1 <= 539; c1 += 1)
	    for (int c2 = 0; c2 <= 959; c2 += 1)
	      fused_level_1_update_0(bright_laplace_diff_1 /* buf name */, dark_laplace_diff_1 /* buf name */, bright_weights_normed_gauss_ds_1 /* buf name */, dark_weights_normed_gauss_ds_1 /* buf name */, fused_level_1, c2, c1);
	  for (int c1 = 0; c1 <= 1079; c1 += 1)
	    for (int c2 = 0; c2 <= 1919; c2 += 1)
	      fused_level_0_update_0(bright_laplace_diff_0 /* buf name */, dark_laplace_diff_0 /* buf name */, bright_weights_normed /* buf name */, dark_weights_normed /* buf name */, fused_level_0, c2, c1);
	  for (int c1 = 0; c1 <= 269; c1 += 1)
	    for (int c2 = 0; c2 <= 479; c2 += 1)
	      final_merged_2_update_0(fused_level_3 /* buf name */, fused_level_2 /* buf name */, final_merged_2, c2, c1);
	  for (int c1 = 0; c1 <= 539; c1 += 1)
	    for (int c2 = 0; c2 <= 959; c2 += 1)
	      final_merged_1_update_0(final_merged_2 /* buf name */, fused_level_1 /* buf name */, final_merged_1, c2, c1);
	  for (int c1 = 0; c1 <= 1079; c1 += 1)
	    for (int c2 = 0; c2 <= 1919; c2 += 1)
	      final_merged_0_update_0(final_merged_1 /* buf name */, fused_level_0 /* buf name */, final_merged_0, c2, c1);
	  for (int c1 = 0; c1 <= 1079; c1 += 1)
	    for (int c2 = 0; c2 <= 1919; c2 += 1)
	      ef_fpga_update_0(final_merged_0 /* buf name */, ef_fpga, c2, c1);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void ef_fpga_naive_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */ef_fpga, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    ef_fpga_naive(in_off_chip, ef_fpga);
  }
}
#ifdef __VIVADO_SYNTH__
  // { ef_fpga_update_0[root = 0, ef_fpga_0, ef_fpga_1] -> ef_fpga[0, 0] : 0 <= ef_fpga_0 <= 1919 and 0 <= ef_fpga_1 <= 1079 }
const int ef_fpga_update_0_write_pipe0_num_transfers = 2073600;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 1926 and 0 <= in_1 <= 1086 }
const int in_update_0_read_pipe0_num_transfers = 2094649;


extern "C" {

void ef_fpga_naive_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* ef_fpga_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = ef_fpga_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = ef_fpga_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > ef_fpga_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  ef_fpga_naive_wrapper(in_update_0_read_pipe0_channel, ef_fpga_update_0_write_pipe0_channel, size);

  burst_write<16>(ef_fpga_update_0_write_pipe0, ef_fpga_update_0_write_pipe0_channel, ef_fpga_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void ef_fpga_naive_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  ef_fpga_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = ef_fpga_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  ef_fpga_naive(in_update_0_read_pipe0, ef_fpga_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

