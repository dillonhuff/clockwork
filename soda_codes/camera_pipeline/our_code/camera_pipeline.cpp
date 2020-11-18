#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: camera_pipeline_compute.h
#include "camera_pipeline_compute.h"

#include "hw_classes.h"

struct corrected_stencil_op_hcompute_corrected_stencil_1_48_to_corrected_stencil_op_hcompute_curved_stencil_1_41_cache {
	// RAM Box: {[1, 1], [0, 57], [0, 57]}
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

struct corrected_stencil_op_hcompute_corrected_stencil_2_44_to_corrected_stencil_op_hcompute_curved_stencil_2_39_cache {
	// RAM Box: {[2, 2], [0, 57], [0, 57]}
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

struct corrected_stencil_op_hcompute_corrected_stencil_52_to_corrected_stencil_op_hcompute_curved_stencil_43_cache {
	// RAM Box: {[0, 0], [0, 57], [0, 57]}
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

struct corrected_stencil_cache {
  // # of banks: 3
  corrected_stencil_op_hcompute_corrected_stencil_1_48_to_corrected_stencil_op_hcompute_curved_stencil_1_41_cache corrected_stencil_op_hcompute_corrected_stencil_1_48_to_corrected_stencil_op_hcompute_curved_stencil_1_41;
  corrected_stencil_op_hcompute_corrected_stencil_2_44_to_corrected_stencil_op_hcompute_curved_stencil_2_39_cache corrected_stencil_op_hcompute_corrected_stencil_2_44_to_corrected_stencil_op_hcompute_curved_stencil_2_39;
  corrected_stencil_op_hcompute_corrected_stencil_52_to_corrected_stencil_op_hcompute_curved_stencil_43_cache corrected_stencil_op_hcompute_corrected_stencil_52_to_corrected_stencil_op_hcompute_curved_stencil_43;
};



inline void corrected_stencil_op_hcompute_corrected_stencil_1_48_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_1_48, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_1, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_1_48_to_corrected_stencil_op_hcompute_curved_stencil_1_41.push(corrected_stencil_op_hcompute_corrected_stencil_1_48);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_2_44_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_2_44, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_2, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_2_44_to_corrected_stencil_op_hcompute_curved_stencil_2_39.push(corrected_stencil_op_hcompute_corrected_stencil_2_44);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_52_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_52, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y, int corrected_s0_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_52_to_corrected_stencil_op_hcompute_curved_stencil_43.push(corrected_stencil_op_hcompute_corrected_stencil_52);
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_41_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_1, int curved_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // corrected_stencil_op_hcompute_curved_stencil_1_41 read pattern: { op_hcompute_curved_stencil_1[root = 0, curved_s0_y_1, curved_s0_x_1] -> corrected_stencil[1, curved_s0_y_1, curved_s0_x_1] : 0 <= curved_s0_y_1 <= 57 and 0 <= curved_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 6] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_1_48 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_1_48_to_corrected_stencil_op_hcompute_curved_stencil_1_41.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_1_48;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_39_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_2, int curved_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // corrected_stencil_op_hcompute_curved_stencil_2_39 read pattern: { op_hcompute_curved_stencil_2[root = 0, curved_s0_y_2, curved_s0_x_2] -> corrected_stencil[2, curved_s0_y_2, curved_s0_x_2] : 0 <= curved_s0_y_2 <= 57 and 0 <= curved_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 10] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 7] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_2_44 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_2_44_to_corrected_stencil_op_hcompute_curved_stencil_2_39.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_2_44;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_43_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y, int curved_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // corrected_stencil_op_hcompute_curved_stencil_43 read pattern: { op_hcompute_curved_stencil[root = 0, curved_s0_y, curved_s0_x] -> corrected_stencil[0, curved_s0_y, curved_s0_x] : 0 <= curved_s0_y <= 57 and 0 <= curved_s0_x <= 57 }
  // Read schedule : { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 8] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 5] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_52 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_52_to_corrected_stencil_op_hcompute_curved_stencil_43.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_52;
  return 0;
}

// # of bundles = 6
// op_hcompute_corrected_stencil_1_write
//	corrected_stencil_op_hcompute_corrected_stencil_1_48
inline void corrected_stencil_op_hcompute_corrected_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_1_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_1, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_1_48_res = op_hcompute_corrected_stencil_1_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_1_48_write(corrected_stencil_op_hcompute_corrected_stencil_1_48_res, corrected_stencil, root, corrected_s0_y_1, corrected_s0_x_1, dynamic_address);
}

// op_hcompute_corrected_stencil_2_write
//	corrected_stencil_op_hcompute_corrected_stencil_2_44
inline void corrected_stencil_op_hcompute_corrected_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_2_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_2, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_2_44_res = op_hcompute_corrected_stencil_2_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_2_44_write(corrected_stencil_op_hcompute_corrected_stencil_2_44_res, corrected_stencil, root, corrected_s0_y_2, corrected_s0_x_2, dynamic_address);
}

// op_hcompute_corrected_stencil_write
//	corrected_stencil_op_hcompute_corrected_stencil_52
inline void corrected_stencil_op_hcompute_corrected_stencil_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y, int corrected_s0_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_52_res = op_hcompute_corrected_stencil_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_52_write(corrected_stencil_op_hcompute_corrected_stencil_52_res, corrected_stencil, root, corrected_s0_y, corrected_s0_x, dynamic_address);
}

// op_hcompute_curved_stencil_1_read
//	corrected_stencil_op_hcompute_curved_stencil_1_41
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_1, int curved_s0_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_1_41

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_41_res = corrected_stencil_op_hcompute_curved_stencil_1_41_select(corrected_stencil, root, curved_s0_y_1, curved_s0_x_1, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_1_41_res);
	return result;
}

// op_hcompute_curved_stencil_2_read
//	corrected_stencil_op_hcompute_curved_stencil_2_39
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_2, int curved_s0_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_2_39

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_39_res = corrected_stencil_op_hcompute_curved_stencil_2_39_select(corrected_stencil, root, curved_s0_y_2, curved_s0_x_2, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_2_39_res);
	return result;
}

// op_hcompute_curved_stencil_read
//	corrected_stencil_op_hcompute_curved_stencil_43
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y, int curved_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_43

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_43_res = corrected_stencil_op_hcompute_curved_stencil_43_select(corrected_stencil, root, curved_s0_y, curved_s0_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_43_res);
	return result;
}

#include "hw_classes.h"

struct curved_stencil_op_hcompute_curved_stencil_1_40_to_curved_stencil_op_hcompute_hw_output_stencil_1_3_cache {
	// RAM Box: {[1, 1], [0, 57], [0, 57]}
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

struct curved_stencil_op_hcompute_curved_stencil_2_38_to_curved_stencil_op_hcompute_hw_output_stencil_2_1_cache {
	// RAM Box: {[2, 2], [0, 57], [0, 57]}
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

struct curved_stencil_op_hcompute_curved_stencil_42_to_curved_stencil_op_hcompute_hw_output_stencil_5_cache {
	// RAM Box: {[0, 0], [0, 57], [0, 57]}
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

struct curved_stencil_cache {
  // # of banks: 3
  curved_stencil_op_hcompute_curved_stencil_1_40_to_curved_stencil_op_hcompute_hw_output_stencil_1_3_cache curved_stencil_op_hcompute_curved_stencil_1_40_to_curved_stencil_op_hcompute_hw_output_stencil_1_3;
  curved_stencil_op_hcompute_curved_stencil_2_38_to_curved_stencil_op_hcompute_hw_output_stencil_2_1_cache curved_stencil_op_hcompute_curved_stencil_2_38_to_curved_stencil_op_hcompute_hw_output_stencil_2_1;
  curved_stencil_op_hcompute_curved_stencil_42_to_curved_stencil_op_hcompute_hw_output_stencil_5_cache curved_stencil_op_hcompute_curved_stencil_42_to_curved_stencil_op_hcompute_hw_output_stencil_5;
};



inline void curved_stencil_op_hcompute_curved_stencil_1_40_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_1_40, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_1, int curved_s0_x_1, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_1_40_to_curved_stencil_op_hcompute_hw_output_stencil_1_3.push(curved_stencil_op_hcompute_curved_stencil_1_40);
}

inline void curved_stencil_op_hcompute_curved_stencil_2_38_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_2_38, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_2, int curved_s0_x_2, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_2_38_to_curved_stencil_op_hcompute_hw_output_stencil_2_1.push(curved_stencil_op_hcompute_curved_stencil_2_38);
}

inline void curved_stencil_op_hcompute_curved_stencil_42_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_42, curved_stencil_cache& curved_stencil, int root, int curved_s0_y, int curved_s0_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_42_to_curved_stencil_op_hcompute_hw_output_stencil_5.push(curved_stencil_op_hcompute_curved_stencil_42);
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_1_3_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_1, int hw_output_s0_x_xi_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // curved_stencil_op_hcompute_hw_output_stencil_1_3 read pattern: { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] -> curved_stencil[1, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] : 0 <= hw_output_s0_y_yi_1 <= 57 and 0 <= hw_output_s0_x_xi_1 <= 57 }
  // Read schedule : { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 12] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_curved_stencil_op_hcompute_curved_stencil_1_40 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_1_40_to_curved_stencil_op_hcompute_hw_output_stencil_1_3.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_1_40;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_2_1_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_2, int hw_output_s0_x_xi_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // curved_stencil_op_hcompute_hw_output_stencil_2_1 read pattern: { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] -> curved_stencil[2, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] : 0 <= hw_output_s0_y_yi_2 <= 57 and 0 <= hw_output_s0_x_xi_2 <= 57 }
  // Read schedule : { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 10] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_curved_stencil_op_hcompute_curved_stencil_2_38 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_2_38_to_curved_stencil_op_hcompute_hw_output_stencil_2_1.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_2_38;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_5_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // curved_stencil_op_hcompute_hw_output_stencil_5 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> curved_stencil[0, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 8] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_curved_stencil_op_hcompute_curved_stencil_42 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_42_to_curved_stencil_op_hcompute_hw_output_stencil_5.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_42;
  return 0;
}

// # of bundles = 6
// op_hcompute_curved_stencil_1_write
//	curved_stencil_op_hcompute_curved_stencil_1_40
inline void curved_stencil_op_hcompute_curved_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_1_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_1, int curved_s0_x_1, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_1_40_res = op_hcompute_curved_stencil_1_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_1_40_write(curved_stencil_op_hcompute_curved_stencil_1_40_res, curved_stencil, root, curved_s0_y_1, curved_s0_x_1, dynamic_address);
}

// op_hcompute_curved_stencil_2_write
//	curved_stencil_op_hcompute_curved_stencil_2_38
inline void curved_stencil_op_hcompute_curved_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_2_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_2, int curved_s0_x_2, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_2_38_res = op_hcompute_curved_stencil_2_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_2_38_write(curved_stencil_op_hcompute_curved_stencil_2_38_res, curved_stencil, root, curved_s0_y_2, curved_s0_x_2, dynamic_address);
}

// op_hcompute_curved_stencil_write
//	curved_stencil_op_hcompute_curved_stencil_42
inline void curved_stencil_op_hcompute_curved_stencil_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y, int curved_s0_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_42_res = op_hcompute_curved_stencil_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_42_write(curved_stencil_op_hcompute_curved_stencil_42_res, curved_stencil, root, curved_s0_y, curved_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_1_read
//	curved_stencil_op_hcompute_hw_output_stencil_1_3
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_1, int hw_output_s0_x_xi_1, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_stencil_1_3

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_1_3_res = curved_stencil_op_hcompute_hw_output_stencil_1_3_select(curved_stencil, root, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_stencil_1_3_res);
	return result;
}

// op_hcompute_hw_output_stencil_2_read
//	curved_stencil_op_hcompute_hw_output_stencil_2_1
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_2, int hw_output_s0_x_xi_2, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_stencil_2_1

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_2_1_res = curved_stencil_op_hcompute_hw_output_stencil_2_1_select(curved_stencil, root, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_stencil_2_1_res);
	return result;
}

// op_hcompute_hw_output_stencil_read
//	curved_stencil_op_hcompute_hw_output_stencil_5
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_stencil_5

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_stencil_5_res = curved_stencil_op_hcompute_hw_output_stencil_5_select(curved_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_stencil_5_res);
	return result;
}

#include "hw_classes.h"

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_merged_banks_3_cache {
	// RAM Box: {[1, 1], [0, 57], [0, 57]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_merged_banks_3_cache {
	// RAM Box: {[0, 0], [0, 57], [0, 57]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_merged_banks_3_cache {
	// RAM Box: {[2, 2], [0, 57], [0, 57]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct demosaicked_1_stencil_cache {
  // # of banks: 3
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_merged_banks_3_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_merged_banks_3;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_merged_banks_3_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_merged_banks_3;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_merged_banks_3_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_merged_banks_3;
};



inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_merged_banks_3.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_merged_banks_3.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_merged_banks_3.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14);
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_1] -> demosaicked_1_stencil[1, corrected_s0_y_1, corrected_s0_x_1] : 0 <= corrected_s0_y_1 <= 57 and 0 <= corrected_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 6] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_1] -> demosaicked_1_stencil[0, corrected_s0_y_1, corrected_s0_x_1] : 0 <= corrected_s0_y_1 <= 57 and 0 <= corrected_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 6] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_1] -> demosaicked_1_stencil[2, corrected_s0_y_1, corrected_s0_x_1] : 0 <= corrected_s0_y_1 <= 57 and 0 <= corrected_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 6] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_2] -> demosaicked_1_stencil[2, corrected_s0_y_2, corrected_s0_x_2] : 0 <= corrected_s0_y_2 <= 57 and 0 <= corrected_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 7] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_2] -> demosaicked_1_stencil[1, corrected_s0_y_2, corrected_s0_x_2] : 0 <= corrected_s0_y_2 <= 57 and 0 <= corrected_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 7] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_2] -> demosaicked_1_stencil[0, corrected_s0_y_2, corrected_s0_x_2] : 0 <= corrected_s0_y_2 <= 57 and 0 <= corrected_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 7] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_53_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y, int corrected_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_53 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x] -> demosaicked_1_stencil[0, corrected_s0_y, corrected_s0_x] : 0 <= corrected_s0_y <= 57 and 0 <= corrected_s0_x <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 5] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_54_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y, int corrected_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_54 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x] -> demosaicked_1_stencil[2, corrected_s0_y, corrected_s0_x] : 0 <= corrected_s0_y <= 57 and 0 <= corrected_s0_x <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 5] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_55_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y, int corrected_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_55 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x] -> demosaicked_1_stencil[1, corrected_s0_y, corrected_s0_x] : 0 <= corrected_s0_y <= 57 and 0 <= corrected_s0_x <= 57 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 5] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_merged_banks_3.peek_0();
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23;
  return 0;
}

// # of bundles = 6
// op_hcompute_corrected_stencil_1_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_select(demosaicked_1_stencil, root, corrected_s0_y_1, corrected_s0_x_1, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_49_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_select(demosaicked_1_stencil, root, corrected_s0_y_1, corrected_s0_x_1, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_50_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_select(demosaicked_1_stencil, root, corrected_s0_y_1, corrected_s0_x_1, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_51_res);
	return result;
}

// op_hcompute_corrected_stencil_2_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_2, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_select(demosaicked_1_stencil, root, corrected_s0_y_2, corrected_s0_x_2, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_45_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_select(demosaicked_1_stencil, root, corrected_s0_y_2, corrected_s0_x_2, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_46_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_select(demosaicked_1_stencil, root, corrected_s0_y_2, corrected_s0_x_2, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_47_res);
	return result;
}

// op_hcompute_corrected_stencil_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_53
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_54
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_55
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y, int corrected_s0_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_53
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_54
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_55

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_53_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_53_select(demosaicked_1_stencil, root, corrected_s0_y, corrected_s0_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_53_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_54_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_54_select(demosaicked_1_stencil, root, corrected_s0_y, corrected_s0_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_54_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_55_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_55_select(demosaicked_1_stencil, root, corrected_s0_y, corrected_s0_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_55_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_1_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_1_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_res = op_hcompute_demosaicked_1_stencil_1_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_23_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_2_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_2_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_res = op_hcompute_demosaicked_1_stencil_2_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_14_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_res = op_hcompute_demosaicked_1_stencil_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_29_res, demosaicked_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 123
	// # of read delays: 9
  // 0, 1, 2, 60, 61, 62, 120, 121, 122
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 57> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 57> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_59() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_60() {
		return f6;
	}

	inline hw_uint<16> peek_61() {
		return f8;
	}

	inline hw_uint<16> peek_62() {
		return f10;
	}

	inline hw_uint<16> peek_119() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_120() {
		return f12;
	}

	inline hw_uint<16> peek_121() {
		return f14;
	}

	inline hw_uint<16> peek_122() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 57
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 57 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 57
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 57 reading from capacity: 1
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

struct denoised_1_stencil_cache {
  // # of banks: 1
  denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21_cache denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21;
};



inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_8_write(hw_uint<16>& denoised_1_stencil_op_hcompute_denoised_1_stencil_8, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x, int dynamic_address) {
  denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.push(denoised_1_stencil_op_hcompute_denoised_1_stencil_8);
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1] -> denoised_1_stencil[demosaicked_1_s0_y_1, -1 + demosaicked_1_s0_x_1] : 0 <= demosaicked_1_s0_y_1 <= 57 and 0 <= demosaicked_1_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_62();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1] -> denoised_1_stencil[1 + demosaicked_1_s0_y_1, demosaicked_1_s0_x_1] : 0 <= demosaicked_1_s0_y_1 <= 57 and 0 <= demosaicked_1_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_1();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1] -> denoised_1_stencil[demosaicked_1_s0_y_1, 1 + demosaicked_1_s0_x_1] : 0 <= demosaicked_1_s0_y_1 <= 57 and 0 <= demosaicked_1_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_60();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1] -> denoised_1_stencil[-1 + demosaicked_1_s0_y_1, demosaicked_1_s0_x_1] : 0 <= demosaicked_1_s0_y_1 <= 57 and 0 <= demosaicked_1_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_121();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1] -> denoised_1_stencil[demosaicked_1_s0_y_1, demosaicked_1_s0_x_1] : 0 <= demosaicked_1_s0_y_1 <= 57 and 0 <= demosaicked_1_s0_x_1 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_61();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] -> denoised_1_stencil[demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] : 0 <= demosaicked_1_s0_y_2 <= 57 and 0 <= demosaicked_1_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_61();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] -> denoised_1_stencil[1 + demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] : 0 <= demosaicked_1_s0_y_2 <= 57 and 0 <= demosaicked_1_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_1();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] -> denoised_1_stencil[1 + demosaicked_1_s0_y_2, 1 + demosaicked_1_s0_x_2] : 0 <= demosaicked_1_s0_y_2 <= 57 and 0 <= demosaicked_1_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_0();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] -> denoised_1_stencil[demosaicked_1_s0_y_2, 1 + demosaicked_1_s0_x_2] : 0 <= demosaicked_1_s0_y_2 <= 57 and 0 <= demosaicked_1_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_60();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] -> denoised_1_stencil[-1 + demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] : 0 <= demosaicked_1_s0_y_2 <= 57 and 0 <= demosaicked_1_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_121();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] -> denoised_1_stencil[1 + demosaicked_1_s0_y_2, -1 + demosaicked_1_s0_x_2] : 0 <= demosaicked_1_s0_y_2 <= 57 and 0 <= demosaicked_1_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_2();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] -> denoised_1_stencil[demosaicked_1_s0_y_2, -1 + demosaicked_1_s0_x_2] : 0 <= demosaicked_1_s0_y_2 <= 57 and 0 <= demosaicked_1_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_62();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2] -> denoised_1_stencil[-1 + demosaicked_1_s0_y_2, -1 + demosaicked_1_s0_x_2] : 0 <= demosaicked_1_s0_y_2 <= 57 and 0 <= demosaicked_1_s0_x_2 <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_122();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x] -> denoised_1_stencil[demosaicked_1_s0_y, demosaicked_1_s0_x] : 0 <= demosaicked_1_s0_y <= 57 and 0 <= demosaicked_1_s0_x <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_61();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x] -> denoised_1_stencil[demosaicked_1_s0_y, 1 + demosaicked_1_s0_x] : 0 <= demosaicked_1_s0_y <= 57 and 0 <= demosaicked_1_s0_x <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_60();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x] -> denoised_1_stencil[1 + demosaicked_1_s0_y, 1 + demosaicked_1_s0_x] : 0 <= demosaicked_1_s0_y <= 57 and 0 <= demosaicked_1_s0_x <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_0();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x] -> denoised_1_stencil[demosaicked_1_s0_y, -1 + demosaicked_1_s0_x] : 0 <= demosaicked_1_s0_y <= 57 and 0 <= demosaicked_1_s0_x <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_62();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x] -> denoised_1_stencil[1 + demosaicked_1_s0_y, demosaicked_1_s0_x] : 0 <= demosaicked_1_s0_y <= 57 and 0 <= demosaicked_1_s0_x <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_1();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x] -> denoised_1_stencil[-1 + demosaicked_1_s0_y, 1 + demosaicked_1_s0_x] : 0 <= demosaicked_1_s0_y <= 57 and 0 <= demosaicked_1_s0_x <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_120();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x] -> denoised_1_stencil[-1 + demosaicked_1_s0_y, demosaicked_1_s0_x] : 0 <= demosaicked_1_s0_y <= 57 and 0 <= demosaicked_1_s0_x <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_121();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x] -> denoised_1_stencil[-1 + demosaicked_1_s0_y, -1 + demosaicked_1_s0_x] : 0 <= demosaicked_1_s0_y <= 57 and 0 <= demosaicked_1_s0_x <= 57 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_8_merged_banks_21.peek_122();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_8;
  return 0;
}

// # of bundles = 4
// op_hcompute_demosaicked_1_stencil_1_read
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28
inline hw_uint<80> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1, int dynamic_address) {
  // # of ports in bundle: 5
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28

	hw_uint<80> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_select(denoised_1_stencil, root, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1, dynamic_address);
	set_at<0, 80>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_24_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_select(denoised_1_stencil, root, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1, dynamic_address);
	set_at<16, 80>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_25_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_select(denoised_1_stencil, root, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1, dynamic_address);
	set_at<32, 80>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_26_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_select(denoised_1_stencil, root, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1, dynamic_address);
	set_at<48, 80>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_27_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_select(denoised_1_stencil, root, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1, dynamic_address);
	set_at<64, 80>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_28_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_2_read
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22
inline hw_uint<128> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2, int dynamic_address) {
  // # of ports in bundle: 8
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22

	hw_uint<128> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_select(denoised_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
	set_at<0, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_15_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_select(denoised_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
	set_at<16, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_16_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_select(denoised_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
	set_at<32, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_17_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_select(denoised_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
	set_at<48, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_18_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_select(denoised_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
	set_at<64, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_19_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_select(denoised_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
	set_at<80, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_20_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_select(denoised_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
	set_at<96, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_21_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_select(denoised_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, dynamic_address);
	set_at<112, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_22_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_read
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36
//	denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37
inline hw_uint<128> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x, int dynamic_address) {
  // # of ports in bundle: 8
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36
    // denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37

	hw_uint<128> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_select(denoised_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
	set_at<0, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_30_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_select(denoised_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
	set_at<16, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_31_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_select(denoised_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
	set_at<32, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_32_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_select(denoised_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
	set_at<48, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_33_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_select(denoised_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
	set_at<64, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_34_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_select(denoised_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
	set_at<80, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_35_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_select(denoised_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
	set_at<96, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_36_res);
	hw_uint<16> denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_res = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_select(denoised_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, dynamic_address);
	set_at<112, 128>(result, denoised_1_stencil_op_hcompute_demosaicked_1_stencil_37_res);
	return result;
}

// op_hcompute_denoised_1_stencil_write
//	denoised_1_stencil_op_hcompute_denoised_1_stencil_8
inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_write_bundle_write(hw_uint<16>& op_hcompute_denoised_1_stencil_write, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x, int dynamic_address) {
	hw_uint<16> denoised_1_stencil_op_hcompute_denoised_1_stencil_8_res = op_hcompute_denoised_1_stencil_write.extract<0, 15>();
	denoised_1_stencil_op_hcompute_denoised_1_stencil_8_write(denoised_1_stencil_op_hcompute_denoised_1_stencil_8_res, denoised_1_stencil, root, denoised_1_s0_y, denoised_1_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5_cache {
	// RAM Box: {[-3, 60], [-1, 58]}
	// Capacity: 259
	// # of read delays: 6
  // 0, 2, 128, 130, 132, 258
	hw_uint<16> f0;
	hw_uint<16> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	hw_uint<16> f5;
	hw_uint<16> f6;
	hw_uint<16> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 125> f9;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f1;
	}

	inline hw_uint<16> peek_2() {
		return f2;
	}

	inline hw_uint<16> peek_127() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_128() {
		return f4;
	}

	inline hw_uint<16> peek_129() {
		return f5;
	}

	inline hw_uint<16> peek_130() {
		return f6;
	}

	inline hw_uint<16> peek_131() {
		return f7;
	}

	inline hw_uint<16> peek_132() {
		return f8;
	}

	inline hw_uint<16> peek_257() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_258() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1
    f6 = f5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f5 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f1 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_stencil_cache {
  // # of banks: 1
  hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5_cache hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5.push(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x] -> hw_input_global_wrapper_stencil[2 + denoised_1_s0_y, denoised_1_s0_x] : -1 <= denoised_1_s0_y <= 58 and -1 <= denoised_1_s0_x <= 58 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5.peek_2();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x] -> hw_input_global_wrapper_stencil[-2 + denoised_1_s0_y, denoised_1_s0_x] : -1 <= denoised_1_s0_y <= 58 and -1 <= denoised_1_s0_x <= 58 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5.peek_258();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x] -> hw_input_global_wrapper_stencil[denoised_1_s0_y, -2 + denoised_1_s0_x] : -1 <= denoised_1_s0_y <= 58 and -1 <= denoised_1_s0_x <= 58 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5.peek_132();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x] -> hw_input_global_wrapper_stencil[denoised_1_s0_y, 2 + denoised_1_s0_x] : -1 <= denoised_1_s0_y <= 58 and -1 <= denoised_1_s0_x <= 58 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5.peek_128();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x] -> hw_input_global_wrapper_stencil[denoised_1_s0_y, denoised_1_s0_x] : -1 <= denoised_1_s0_y <= 58 and -1 <= denoised_1_s0_x <= 58 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_merged_banks_5.peek_130();
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6;
  return 0;
}

// # of bundles = 2
// op_hcompute_denoised_1_stencil_read
//	hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9
//	hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10
//	hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11
//	hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12
//	hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13
inline hw_uint<80> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x, int dynamic_address) {
  // # of ports in bundle: 5
    // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9
    // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10
    // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11
    // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12
    // hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13

	hw_uint<80> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_res = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_select(hw_input_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x, dynamic_address);
	set_at<0, 80>(result, hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_9_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_res = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_select(hw_input_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x, dynamic_address);
	set_at<16, 80>(result, hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_10_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_res = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_select(hw_input_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x, dynamic_address);
	set_at<32, 80>(result, hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_11_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_res = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_select(hw_input_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x, dynamic_address);
	set_at<48, 80>(result, hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_12_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_res = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_select(hw_input_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x, dynamic_address);
	set_at<64, 80>(result, hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_13_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 6080 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_denoised_1_stencil(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_denoised_1_s0_y_c__denoised_1_s0_x_value = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, denoised_1_s0_y, denoised_1_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_denoised_1_stencil(hw_input_global_wrapper_stencil_denoised_1_s0_y_c__denoised_1_s0_x_value);
	// Produce: denoised_1_stencil
	denoised_1_stencil_op_hcompute_denoised_1_stencil_write_bundle_write(/* arg names */compute_result, denoised_1_stencil, root, denoised_1_s0_y, denoised_1_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_demosaicked_1_stencil(denoised_1_stencil_cache& denoised_1_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil_demosaicked_1_s0_y_c__demosaicked_1_s0_x_value = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_demosaicked_1_stencil(denoised_1_stencil_demosaicked_1_s0_y_c__demosaicked_1_s0_x_value, demosaicked_1_s0_x, demosaicked_1_s0_y);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_demosaicked_1_stencil_1(denoised_1_stencil_cache& denoised_1_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_1, int demosaicked_1_s0_x_1) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil_demosaicked_1_s0_y_1_c___lp_demosaicked_1_s0_x_1__p___m_1_rp__value = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_bundle_read(denoised_1_stencil/* source_delay */, root, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_demosaicked_1_stencil_1(denoised_1_stencil_demosaicked_1_s0_y_1_c___lp_demosaicked_1_s0_x_1__p___m_1_rp__value, demosaicked_1_s0_x_1, demosaicked_1_s0_y_1);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_1, demosaicked_1_s0_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_demosaicked_1_stencil_2(denoised_1_stencil_cache& denoised_1_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_2, int demosaicked_1_s0_x_2) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil_demosaicked_1_s0_y_2_c__demosaicked_1_s0_x_2_value = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(denoised_1_stencil/* source_delay */, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_demosaicked_1_stencil_2(denoised_1_stencil_demosaicked_1_s0_y_2_c__demosaicked_1_s0_x_2_value, demosaicked_1_s0_x_2, demosaicked_1_s0_y_2);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_2, demosaicked_1_s0_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_corrected_stencil(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y, int corrected_s0_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c__corrected_s0_y_c__corrected_s0_x_value = demosaicked_1_stencil_op_hcompute_corrected_stencil_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y, corrected_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_corrected_stencil(demosaicked_1_stencil_0_c__corrected_s0_y_c__corrected_s0_x_value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y, corrected_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_corrected_stencil_1(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_1) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_1_c__corrected_s0_y_1_c__corrected_s0_x_1_value = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_1, corrected_s0_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_corrected_stencil_1(demosaicked_1_stencil_1_c__corrected_s0_y_1_c__corrected_s0_x_1_value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_1_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_1, corrected_s0_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_corrected_stencil_2(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_2) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_2_c__corrected_s0_y_2_c__corrected_s0_x_2_value = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_2, corrected_s0_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_corrected_stencil_2(demosaicked_1_stencil_2_c__corrected_s0_y_2_c__corrected_s0_x_2_value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_2_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_2, corrected_s0_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_curved_stencil(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y, int curved_s0_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_0_c__curved_s0_y_c__curved_s0_x_value = corrected_stencil_op_hcompute_curved_stencil_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y, curved_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_curved_stencil(corrected_stencil_0_c__curved_s0_y_c__curved_s0_x_value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y, curved_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_curved_stencil_1(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_1, int curved_s0_x_1) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_1_c__curved_s0_y_1_c__curved_s0_x_1_value = corrected_stencil_op_hcompute_curved_stencil_1_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_1, curved_s0_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_curved_stencil_1(corrected_stencil_1_c__curved_s0_y_1_c__curved_s0_x_1_value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_1_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_1, curved_s0_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_curved_stencil_2(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_2, int curved_s0_x_2) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_2_c__curved_s0_y_2_c__curved_s0_x_2_value = corrected_stencil_op_hcompute_curved_stencil_2_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_2, curved_s0_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_curved_stencil_2(corrected_stencil_2_c__curved_s0_y_2_c__curved_s0_x_2_value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_2_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_2, curved_s0_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(curved_stencil_cache& curved_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate0, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_0_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = curved_stencil_op_hcompute_hw_output_stencil_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(curved_stencil_0_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil_clkwrk_write_duplicate0
	hw_output_stencil_clkwrk_write_duplicate0.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_1(curved_stencil_cache& curved_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate1, int root, int hw_output_s0_y_yi_1, int hw_output_s0_x_xi_1) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_1_c__hw_output_s0_y_yi_1_c__hw_output_s0_x_xi_1_value = curved_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_1(curved_stencil_1_c__hw_output_s0_y_yi_1_c__hw_output_s0_x_xi_1_value);
	// Produce: hw_output_stencil_clkwrk_write_duplicate1
	hw_output_stencil_clkwrk_write_duplicate1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_2(curved_stencil_cache& curved_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate2, int root, int hw_output_s0_y_yi_2, int hw_output_s0_x_xi_2) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_2_c__hw_output_s0_y_yi_2_c__hw_output_s0_x_xi_2_value = curved_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_2(curved_stencil_2_c__hw_output_s0_y_yi_2_c__hw_output_s0_x_xi_2_value);
	// Produce: hw_output_stencil_clkwrk_write_duplicate2
	hw_output_stencil_clkwrk_write_duplicate2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void camera_pipeline(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("camera_pipeline_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  corrected_stencil_cache corrected_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  curved_stencil_cache curved_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaicked_1_stencil_cache demosaicked_1_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoised_1_stencil_cache denoised_1_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58; op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60; op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 12] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 8] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 7] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 6] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 5] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 10] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
//   { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
// Condition for op_hcompute_denoised_1_stencil(((-1 + i3 == 0) && (i0 == 0) && (-1 + i1 >= 0) && (60 - i1 >= 0) && (-1 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((i3 == 0) && (i0 == 0) && (3 + i1 >= 0) && (60 - i1 >= 0) && (3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 12] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_hw_output_stencil_1(((-12 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 4] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_demosaicked_1_stencil_2(((-4 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 8] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_curved_stencil(((-8 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 7] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_corrected_stencil_2(((-7 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 6] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_corrected_stencil_1(((-6 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 2] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_demosaicked_1_stencil(((-2 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_curved_stencil_1(((-9 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 3] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_demosaicked_1_stencil_1(((-3 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 5] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_corrected_stencil(((-5 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_hw_output_stencil(((-11 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 10] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_curved_stencil_2(((-10 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil_2[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_hw_output_stencil_2(((-13 + i3 == 0) && (i0 == 0) && (-3 + i1 >= 0) && (60 - i1 >= 0) && (-3 + i2 >= 0) && (60 - i2 >= 0)))

  /*
for (int c1 = -3; c1 <= 60; c1 += 1)
  for (int c2 = -3; c2 <= 60; c2 += 1) {
    op_hcompute_hw_input_global_wrapper_stencil(0, c1, c2);
    if (c1 >= 1 && c2 >= 1) {
      op_hcompute_denoised_1_stencil(0, c1 - 2, c2 - 2);
      if (c1 >= 3 && c2 >= 3) {
        op_hcompute_demosaicked_1_stencil(0, c1 - 3, c2 - 3);
        op_hcompute_demosaicked_1_stencil_1(0, c1 - 3, c2 - 3);
        op_hcompute_demosaicked_1_stencil_2(0, c1 - 3, c2 - 3);
        op_hcompute_corrected_stencil(0, c1 - 3, c2 - 3);
        op_hcompute_corrected_stencil_1(0, c1 - 3, c2 - 3);
        op_hcompute_corrected_stencil_2(0, c1 - 3, c2 - 3);
        op_hcompute_curved_stencil(0, c1 - 3, c2 - 3);
        op_hcompute_curved_stencil_1(0, c1 - 3, c2 - 3);
        op_hcompute_curved_stencil_2(0, c1 - 3, c2 - 3);
        op_hcompute_hw_output_stencil(0, c1 - 3, c2 - 3);
        op_hcompute_hw_output_stencil_1(0, c1 - 3, c2 - 3);
        op_hcompute_hw_output_stencil_2(0, c1 - 3, c2 - 3);
      }
    }
  }

  */
	for (int c1 = -3; c1 <= 60; c1 += 1)
	  for (int c2 = -3; c2 <= 60; c2 += 1) {
	    op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c1, c2);
	    if (c1 >= 1 && c2 >= 1) {
	      op_hcompute_denoised_1_stencil(hw_input_global_wrapper_stencil /* buf name */, denoised_1_stencil, 0, c1 - 2, c2 - 2);
	      if (c1 >= 3 && c2 >= 3) {
	        op_hcompute_demosaicked_1_stencil(denoised_1_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_demosaicked_1_stencil_1(denoised_1_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_demosaicked_1_stencil_2(denoised_1_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_corrected_stencil(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_corrected_stencil_1(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_corrected_stencil_2(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_curved_stencil(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_curved_stencil_1(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_curved_stencil_2(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 3, c2 - 3);
	        op_hcompute_hw_output_stencil(curved_stencil /* buf name */, hw_output_stencil_clkwrk_write_duplicate0, 0, c1 - 3, c2 - 3);
	        op_hcompute_hw_output_stencil_1(curved_stencil /* buf name */, hw_output_stencil_clkwrk_write_duplicate1, 0, c1 - 3, c2 - 3);
	        op_hcompute_hw_output_stencil_2(curved_stencil /* buf name */, hw_output_stencil_clkwrk_write_duplicate2, 0, c1 - 3, c2 - 3);
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void camera_pipeline_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_write_duplicate2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    camera_pipeline(hw_input_stencil, hw_output_stencil_clkwrk_write_duplicate0, hw_output_stencil_clkwrk_write_duplicate1, hw_output_stencil_clkwrk_write_duplicate2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : -3 <= hw_input_global_wrapper_s0_y <= 60 and -3 <= hw_input_global_wrapper_s0_x <= 60 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 4096;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil_clkwrk_write_duplicate0[0, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 3364;
  // { op_hcompute_hw_output_stencil_1[root = 0, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] -> hw_output_stencil_clkwrk_write_duplicate1[1, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] : 0 <= hw_output_s0_y_yi_1 <= 57 and 0 <= hw_output_s0_x_xi_1 <= 57 }
const int op_hcompute_hw_output_stencil_1_write_pipe0_num_transfers = 3364;
  // { op_hcompute_hw_output_stencil_2[root = 0, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] -> hw_output_stencil_clkwrk_write_duplicate2[2, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] : 0 <= hw_output_s0_y_yi_2 <= 57 and 0 <= hw_output_s0_x_xi_2 <= 57 }
const int op_hcompute_hw_output_stencil_2_write_pipe0_num_transfers = 3364;


extern "C" {

void camera_pipeline_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_1_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_2_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_1_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_2_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers*size);

  camera_pipeline_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_1_write_pipe0_channel, op_hcompute_hw_output_stencil_2_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_1_write_pipe0, op_hcompute_hw_output_stencil_1_write_pipe0_channel, op_hcompute_hw_output_stencil_1_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_2_write_pipe0, op_hcompute_hw_output_stencil_2_write_pipe0_channel, op_hcompute_hw_output_stencil_2_write_pipe0_num_transfers*size);
}

}
extern "C" {

void camera_pipeline_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_1_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_2_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_1_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_2_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  camera_pipeline(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_1_write_pipe0, op_hcompute_hw_output_stencil_2_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

