#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: camera_pipeline_glb_compute.h
#include "camera_pipeline_glb_compute.h"

struct b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29_cache {
	// RAM Box: {[0, 71], [0, 123]}
	// Capacity: 250
	// # of read delays: 126
  // 0, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249
	fifo<hw_uint<16>, 250> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(249 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30_cache {
	// RAM Box: {[1, 72], [0, 123]}
	// Capacity: 125
	// # of read delays: 126
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124
	fifo<hw_uint<16>, 125> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(124 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31_cache {
	// RAM Box: {[0, 71], [1, 124]}
	// Capacity: 249
	// # of read delays: 125
  // 0, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248
	fifo<hw_uint<16>, 249> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(248 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32_cache {
	// RAM Box: {[1, 72], [1, 124]}
	// Capacity: 124
	// # of read delays: 125
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123
	fifo<hw_uint<16>, 124> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(123 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct b_b_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> b_b_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> b_b_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> b_b_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> b_b_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // # of banks: 4
  b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29_cache b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29;
  b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30_cache b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30;
  b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31_cache b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31;
  b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32_cache b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32;
};



inline void b_b_stencil_op_hcompute_b_b_stencil_87_write(hw_uint<16>& b_b_stencil_op_hcompute_b_b_stencil_87, b_b_stencil_cache& b_b_stencil, int root, int b_b_s0_y, int b_b_s0_x_x, int dynamic_address) {
  b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29.push(b_b_stencil_op_hcompute_b_b_stencil_87);
  b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30.push(b_b_stencil_op_hcompute_b_b_stencil_87);
  b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31.push(b_b_stencil_op_hcompute_b_b_stencil_87);
  b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32.push(b_b_stencil_op_hcompute_b_b_stencil_87);
}

inline hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29_select(b_b_stencil_cache& b_b_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> b_b_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 3] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_87 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((249 - floord(demosaicked_1_s0_x_x, 2))) : ((demosaicked_1_s0_y == 0) || ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0)) ? (126) : 0);
  return value_b_b_stencil_op_hcompute_b_b_stencil_87;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30_select(b_b_stencil_cache& b_b_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> b_b_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 3] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_87 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30.peek(/* one reader or all rams */ ((-demosaicked_1_s0_y) % 2 == 0) ? (1) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((124 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_b_b_stencil_op_hcompute_b_b_stencil_87;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31_select(b_b_stencil_cache& b_b_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> b_b_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 3] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_87 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (125) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((248 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x == 0) ? (125) : ((-247 + demosaicked_1_s0_x_x == 0 && demosaicked_1_s0_y == 0) || ((-demosaicked_1_s0_y) % 2 == 0 && -247 + demosaicked_1_s0_x_x == 0 && -2 + demosaicked_1_s0_y >= 0)) ? (125) : ((demosaicked_1_s0_y == 0 && 245 - demosaicked_1_s0_x_x >= 0) || ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0 && 245 - demosaicked_1_s0_x_x >= 0)) ? (125) : 0);
  return value_b_b_stencil_op_hcompute_b_b_stencil_87;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32_select(b_b_stencil_cache& b_b_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> b_b_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 3] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_87 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_87_to_b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((123 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_b_b_stencil_op_hcompute_b_b_stencil_87;
  return 0;
}

// # of bundles = 2
// op_hcompute_b_b_stencil_write
//	b_b_stencil_op_hcompute_b_b_stencil_87
inline void b_b_stencil_op_hcompute_b_b_stencil_write_bundle_write(hw_uint<16>& op_hcompute_b_b_stencil_write, b_b_stencil_cache& b_b_stencil, int root, int b_b_s0_y, int b_b_s0_x_x, int dynamic_address) {
	hw_uint<16> b_b_stencil_op_hcompute_b_b_stencil_87_res = op_hcompute_b_b_stencil_write.extract<0, 15>();
	b_b_stencil_op_hcompute_b_b_stencil_87_write(b_b_stencil_op_hcompute_b_b_stencil_87_res, b_b_stencil, root, b_b_s0_y, b_b_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_2_read
//	b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29
//	b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30
//	b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31
//	b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32
inline hw_uint<64> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(b_b_stencil_cache& b_b_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 4
    // b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29
    // b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30
    // b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31
    // b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32

	hw_uint<64> result;
	hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29_res = b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29_select(b_b_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 64>(result, b_b_stencil_op_hcompute_demosaicked_1_stencil_2_29_res);
	hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30_res = b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30_select(b_b_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<16, 64>(result, b_b_stencil_op_hcompute_demosaicked_1_stencil_2_30_res);
	hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31_res = b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31_select(b_b_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<32, 64>(result, b_b_stencil_op_hcompute_demosaicked_1_stencil_2_31_res);
	hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32_res = b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32_select(b_b_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<48, 64>(result, b_b_stencil_op_hcompute_demosaicked_1_stencil_2_32_res);
	return result;
}

struct corrected_stencil_op_hcompute_corrected_stencil_1_79_to_corrected_stencil_op_hcompute_curved_stencil_1_72_cache {
	// RAM Box: {[1, 1], [0, 143], [0, 247]}
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

struct corrected_stencil_op_hcompute_corrected_stencil_2_75_to_corrected_stencil_op_hcompute_curved_stencil_2_70_cache {
	// RAM Box: {[2, 2], [0, 143], [0, 247]}
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

struct corrected_stencil_op_hcompute_corrected_stencil_83_to_corrected_stencil_op_hcompute_curved_stencil_74_cache {
	// RAM Box: {[0, 0], [0, 143], [0, 247]}
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
  // Reader addrs...
    // { op_hcompute_curved_stencil_1[root = 0, curved_s0_y_1, curved_s0_x_x_1] -> corrected_stencil[1, curved_s0_y_1, curved_s0_x_x_1] : 0 <= curved_s0_y_1 <= 143 and 0 <= curved_s0_x_x_1 <= 247 }
    // { op_hcompute_curved_stencil_2[root = 0, curved_s0_y_2, curved_s0_x_x_2] -> corrected_stencil[2, curved_s0_y_2, curved_s0_x_x_2] : 0 <= curved_s0_y_2 <= 143 and 0 <= curved_s0_x_x_2 <= 247 }
    // { op_hcompute_curved_stencil[root = 0, curved_s0_y, curved_s0_x_x] -> corrected_stencil[0, curved_s0_y, curved_s0_x_x] : 0 <= curved_s0_y <= 143 and 0 <= curved_s0_x_x <= 247 }
  // # of banks: 3
  corrected_stencil_op_hcompute_corrected_stencil_1_79_to_corrected_stencil_op_hcompute_curved_stencil_1_72_cache corrected_stencil_op_hcompute_corrected_stencil_1_79_to_corrected_stencil_op_hcompute_curved_stencil_1_72;
  corrected_stencil_op_hcompute_corrected_stencil_2_75_to_corrected_stencil_op_hcompute_curved_stencil_2_70_cache corrected_stencil_op_hcompute_corrected_stencil_2_75_to_corrected_stencil_op_hcompute_curved_stencil_2_70;
  corrected_stencil_op_hcompute_corrected_stencil_83_to_corrected_stencil_op_hcompute_curved_stencil_74_cache corrected_stencil_op_hcompute_corrected_stencil_83_to_corrected_stencil_op_hcompute_curved_stencil_74;
};



inline void corrected_stencil_op_hcompute_corrected_stencil_1_79_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_1_79, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_x_1, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_1_79_to_corrected_stencil_op_hcompute_curved_stencil_1_72.push(corrected_stencil_op_hcompute_corrected_stencil_1_79);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_2_75_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_2_75, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_x_2, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_2_75_to_corrected_stencil_op_hcompute_curved_stencil_2_70.push(corrected_stencil_op_hcompute_corrected_stencil_2_75);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_83_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_83, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_83_to_corrected_stencil_op_hcompute_curved_stencil_74.push(corrected_stencil_op_hcompute_corrected_stencil_83);
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_72_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_1, int curved_s0_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // corrected_stencil_op_hcompute_curved_stencil_1_72 read pattern: { op_hcompute_curved_stencil_1[root = 0, curved_s0_y_1, curved_s0_x_x_1] -> corrected_stencil[1, curved_s0_y_1, curved_s0_x_x_1] : 0 <= curved_s0_y_1 <= 143 and 0 <= curved_s0_x_x_1 <= 247 }
  // Read schedule : { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 14] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 11] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_1_79 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_1_79_to_corrected_stencil_op_hcompute_curved_stencil_1_72.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_1_79;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_70_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_2, int curved_s0_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // corrected_stencil_op_hcompute_curved_stencil_2_70 read pattern: { op_hcompute_curved_stencil_2[root = 0, curved_s0_y_2, curved_s0_x_x_2] -> corrected_stencil[2, curved_s0_y_2, curved_s0_x_x_2] : 0 <= curved_s0_y_2 <= 143 and 0 <= curved_s0_x_x_2 <= 247 }
  // Read schedule : { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 15] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 12] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_2_75 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_2_75_to_corrected_stencil_op_hcompute_curved_stencil_2_70.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_2_75;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_74_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y, int curved_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // corrected_stencil_op_hcompute_curved_stencil_74 read pattern: { op_hcompute_curved_stencil[root = 0, curved_s0_y, curved_s0_x_x] -> corrected_stencil[0, curved_s0_y, curved_s0_x_x] : 0 <= curved_s0_y <= 143 and 0 <= curved_s0_x_x <= 247 }
  // Read schedule : { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 13] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 10] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_83 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_83_to_corrected_stencil_op_hcompute_curved_stencil_74.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_83;
  return 0;
}

// # of bundles = 6
// op_hcompute_corrected_stencil_1_write
//	corrected_stencil_op_hcompute_corrected_stencil_1_79
inline void corrected_stencil_op_hcompute_corrected_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_1_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_x_1, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_1_79_res = op_hcompute_corrected_stencil_1_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_1_79_write(corrected_stencil_op_hcompute_corrected_stencil_1_79_res, corrected_stencil, root, corrected_s0_y_1, corrected_s0_x_x_1, dynamic_address);
}

// op_hcompute_corrected_stencil_2_write
//	corrected_stencil_op_hcompute_corrected_stencil_2_75
inline void corrected_stencil_op_hcompute_corrected_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_2_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_x_2, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_2_75_res = op_hcompute_corrected_stencil_2_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_2_75_write(corrected_stencil_op_hcompute_corrected_stencil_2_75_res, corrected_stencil, root, corrected_s0_y_2, corrected_s0_x_x_2, dynamic_address);
}

// op_hcompute_corrected_stencil_write
//	corrected_stencil_op_hcompute_corrected_stencil_83
inline void corrected_stencil_op_hcompute_corrected_stencil_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_83_res = op_hcompute_corrected_stencil_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_83_write(corrected_stencil_op_hcompute_corrected_stencil_83_res, corrected_stencil, root, corrected_s0_y, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_1_read
//	corrected_stencil_op_hcompute_curved_stencil_1_72
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_1, int curved_s0_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_1_72

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_72_res = corrected_stencil_op_hcompute_curved_stencil_1_72_select(corrected_stencil, root, curved_s0_y_1, curved_s0_x_x_1, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_1_72_res);
	return result;
}

// op_hcompute_curved_stencil_2_read
//	corrected_stencil_op_hcompute_curved_stencil_2_70
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_2, int curved_s0_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_2_70

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_70_res = corrected_stencil_op_hcompute_curved_stencil_2_70_select(corrected_stencil, root, curved_s0_y_2, curved_s0_x_x_2, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_2_70_res);
	return result;
}

// op_hcompute_curved_stencil_read
//	corrected_stencil_op_hcompute_curved_stencil_74
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_74

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_74_res = corrected_stencil_op_hcompute_curved_stencil_74_select(corrected_stencil, root, curved_s0_y, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_74_res);
	return result;
}

struct curved_stencil_op_hcompute_curved_stencil_73_to_curved_stencil_op_hcompute_hw_output_glb_stencil_13_cache {
	// RAM Box: {[0, 0], [0, 143], [0, 247]}
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

struct curved_stencil_op_hcompute_curved_stencil_1_71_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_11_cache {
	// RAM Box: {[1, 1], [0, 143], [0, 247]}
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

struct curved_stencil_op_hcompute_curved_stencil_2_69_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_9_cache {
	// RAM Box: {[2, 2], [0, 143], [0, 247]}
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
  // Reader addrs...
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> curved_stencil[0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 143 and 0 <= hw_output_s0_x_xi_xi <= 247 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> curved_stencil[1, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 143 and 0 <= hw_output_s0_x_xi_xi <= 247 }
    // { op_hcompute_hw_output_glb_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> curved_stencil[2, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 143 and 0 <= hw_output_s0_x_xi_xi <= 247 }
  // # of banks: 3
  curved_stencil_op_hcompute_curved_stencil_73_to_curved_stencil_op_hcompute_hw_output_glb_stencil_13_cache curved_stencil_op_hcompute_curved_stencil_73_to_curved_stencil_op_hcompute_hw_output_glb_stencil_13;
  curved_stencil_op_hcompute_curved_stencil_1_71_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_11_cache curved_stencil_op_hcompute_curved_stencil_1_71_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_11;
  curved_stencil_op_hcompute_curved_stencil_2_69_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_9_cache curved_stencil_op_hcompute_curved_stencil_2_69_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_9;
};



inline void curved_stencil_op_hcompute_curved_stencil_1_71_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_1_71, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_1, int curved_s0_x_x_1, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_1_71_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_11.push(curved_stencil_op_hcompute_curved_stencil_1_71);
}

inline void curved_stencil_op_hcompute_curved_stencil_2_69_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_2_69, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_2, int curved_s0_x_x_2, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_2_69_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_9.push(curved_stencil_op_hcompute_curved_stencil_2_69);
}

inline void curved_stencil_op_hcompute_curved_stencil_73_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_73, curved_stencil_cache& curved_stencil, int root, int curved_s0_y, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_73_to_curved_stencil_op_hcompute_hw_output_glb_stencil_13.push(curved_stencil_op_hcompute_curved_stencil_73);
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_13_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_13 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> curved_stencil[0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 143 and 0 <= hw_output_s0_x_xi_xi <= 247 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 16] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 13] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_curved_stencil_op_hcompute_curved_stencil_73 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_73_to_curved_stencil_op_hcompute_hw_output_glb_stencil_13.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_73;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_1_11_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_1_11 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> curved_stencil[1, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 143 and 0 <= hw_output_s0_x_xi_xi <= 247 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 17] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 14] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_curved_stencil_op_hcompute_curved_stencil_1_71 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_1_71_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_11.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_1_71;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_2_9_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_2_9 read pattern: { op_hcompute_hw_output_glb_stencil_2[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> curved_stencil[2, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 143 and 0 <= hw_output_s0_x_xi_xi <= 247 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 18] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 15] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_curved_stencil_op_hcompute_curved_stencil_2_69 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_2_69_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_9.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_2_69;
  return 0;
}

// # of bundles = 6
// op_hcompute_curved_stencil_1_write
//	curved_stencil_op_hcompute_curved_stencil_1_71
inline void curved_stencil_op_hcompute_curved_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_1_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_1, int curved_s0_x_x_1, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_1_71_res = op_hcompute_curved_stencil_1_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_1_71_write(curved_stencil_op_hcompute_curved_stencil_1_71_res, curved_stencil, root, curved_s0_y_1, curved_s0_x_x_1, dynamic_address);
}

// op_hcompute_curved_stencil_2_write
//	curved_stencil_op_hcompute_curved_stencil_2_69
inline void curved_stencil_op_hcompute_curved_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_2_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_2, int curved_s0_x_x_2, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_2_69_res = op_hcompute_curved_stencil_2_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_2_69_write(curved_stencil_op_hcompute_curved_stencil_2_69_res, curved_stencil, root, curved_s0_y_2, curved_s0_x_x_2, dynamic_address);
}

// op_hcompute_curved_stencil_write
//	curved_stencil_op_hcompute_curved_stencil_73
inline void curved_stencil_op_hcompute_curved_stencil_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_73_res = op_hcompute_curved_stencil_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_73_write(curved_stencil_op_hcompute_curved_stencil_73_res, curved_stencil, root, curved_s0_y, curved_s0_x_x, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_1_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_1_11
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_1_11

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_1_11_res = curved_stencil_op_hcompute_hw_output_glb_stencil_1_11_select(curved_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_1_11_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_2_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_2_9
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_2_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_2_9

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_2_9_res = curved_stencil_op_hcompute_hw_output_glb_stencil_2_9_select(curved_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_2_9_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_13
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_13

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_13_res = curved_stencil_op_hcompute_hw_output_glb_stencil_13_select(curved_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_13_res);
	return result;
}

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80_cache {
	// RAM Box: {[0, 0], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81_cache {
	// RAM Box: {[1, 1], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82_cache {
	// RAM Box: {[2, 2], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76_cache {
	// RAM Box: {[0, 0], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77_cache {
	// RAM Box: {[1, 1], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78_cache {
	// RAM Box: {[2, 2], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_84_cache {
	// RAM Box: {[0, 0], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_85_cache {
	// RAM Box: {[1, 1], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_86_cache {
	// RAM Box: {[2, 2], [0, 143], [0, 247]}
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

struct demosaicked_1_stencil_cache {
  // Reader addrs...
    // { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_x_1] -> demosaicked_1_stencil[0, corrected_s0_y_1, corrected_s0_x_x_1] : 0 <= corrected_s0_y_1 <= 143 and 0 <= corrected_s0_x_x_1 <= 247 }
    // { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_x_1] -> demosaicked_1_stencil[1, corrected_s0_y_1, corrected_s0_x_x_1] : 0 <= corrected_s0_y_1 <= 143 and 0 <= corrected_s0_x_x_1 <= 247 }
    // { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_x_1] -> demosaicked_1_stencil[2, corrected_s0_y_1, corrected_s0_x_x_1] : 0 <= corrected_s0_y_1 <= 143 and 0 <= corrected_s0_x_x_1 <= 247 }
    // { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_x_2] -> demosaicked_1_stencil[0, corrected_s0_y_2, corrected_s0_x_x_2] : 0 <= corrected_s0_y_2 <= 143 and 0 <= corrected_s0_x_x_2 <= 247 }
    // { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_x_2] -> demosaicked_1_stencil[1, corrected_s0_y_2, corrected_s0_x_x_2] : 0 <= corrected_s0_y_2 <= 143 and 0 <= corrected_s0_x_x_2 <= 247 }
    // { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_x_2] -> demosaicked_1_stencil[2, corrected_s0_y_2, corrected_s0_x_x_2] : 0 <= corrected_s0_y_2 <= 143 and 0 <= corrected_s0_x_x_2 <= 247 }
    // { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x_x] -> demosaicked_1_stencil[0, corrected_s0_y, corrected_s0_x_x] : 0 <= corrected_s0_y <= 143 and 0 <= corrected_s0_x_x <= 247 }
    // { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x_x] -> demosaicked_1_stencil[1, corrected_s0_y, corrected_s0_x_x] : 0 <= corrected_s0_y <= 143 and 0 <= corrected_s0_x_x <= 247 }
    // { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x_x] -> demosaicked_1_stencil[2, corrected_s0_y, corrected_s0_x_x] : 0 <= corrected_s0_y <= 143 and 0 <= corrected_s0_x_x <= 247 }
  // # of banks: 9
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_84_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_84;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_85_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_85;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_86_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_86;
};



inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_85.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_86.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_84.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52);
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_x_1] -> demosaicked_1_stencil[0, corrected_s0_y_1, corrected_s0_x_x_1] : 0 <= corrected_s0_y_1 <= 143 and 0 <= corrected_s0_x_x_1 <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 11] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_x_1] -> demosaicked_1_stencil[1, corrected_s0_y_1, corrected_s0_x_x_1] : 0 <= corrected_s0_y_1 <= 143 and 0 <= corrected_s0_x_x_1 <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 11] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_1, corrected_s0_x_x_1] -> demosaicked_1_stencil[2, corrected_s0_y_1, corrected_s0_x_x_1] : 0 <= corrected_s0_y_1 <= 143 and 0 <= corrected_s0_x_x_1 <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 11] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_x_2] -> demosaicked_1_stencil[0, corrected_s0_y_2, corrected_s0_x_x_2] : 0 <= corrected_s0_y_2 <= 143 and 0 <= corrected_s0_x_x_2 <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 12] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_x_2] -> demosaicked_1_stencil[1, corrected_s0_y_2, corrected_s0_x_x_2] : 0 <= corrected_s0_y_2 <= 143 and 0 <= corrected_s0_x_x_2 <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 12] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_2, corrected_s0_x_x_2] -> demosaicked_1_stencil[2, corrected_s0_y_2, corrected_s0_x_x_2] : 0 <= corrected_s0_y_2 <= 143 and 0 <= corrected_s0_x_x_2 <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 12] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_84_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y, int corrected_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_84 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x_x] -> demosaicked_1_stencil[0, corrected_s0_y, corrected_s0_x_x] : 0 <= corrected_s0_y <= 143 and 0 <= corrected_s0_x_x <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 10] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_84.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_85_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y, int corrected_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_85 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x_x] -> demosaicked_1_stencil[1, corrected_s0_y, corrected_s0_x_x] : 0 <= corrected_s0_y <= 143 and 0 <= corrected_s0_x_x <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 10] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_85.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_86_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y, int corrected_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_86 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y, corrected_s0_x_x] -> demosaicked_1_stencil[2, corrected_s0_y, corrected_s0_x_x] : 0 <= corrected_s0_y <= 143 and 0 <= corrected_s0_x_x <= 247 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 10] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_86.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28;
  return 0;
}

// # of bundles = 6
// op_hcompute_corrected_stencil_1_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_x_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80_select(demosaicked_1_stencil, root, corrected_s0_y_1, corrected_s0_x_x_1, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_80_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81_select(demosaicked_1_stencil, root, corrected_s0_y_1, corrected_s0_x_x_1, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_81_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82_select(demosaicked_1_stencil, root, corrected_s0_y_1, corrected_s0_x_x_1, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_82_res);
	return result;
}

// op_hcompute_corrected_stencil_2_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_x_2, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76_select(demosaicked_1_stencil, root, corrected_s0_y_2, corrected_s0_x_x_2, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_76_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77_select(demosaicked_1_stencil, root, corrected_s0_y_2, corrected_s0_x_x_2, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_77_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78_select(demosaicked_1_stencil, root, corrected_s0_y_2, corrected_s0_x_x_2, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_78_res);
	return result;
}

// op_hcompute_corrected_stencil_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_84
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_85
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_86
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_84
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_85
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_86

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_84_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_84_select(demosaicked_1_stencil, root, corrected_s0_y, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_84_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_85_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_85_select(demosaicked_1_stencil, root, corrected_s0_y, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_85_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_86_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_86_select(demosaicked_1_stencil, root, corrected_s0_y, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_86_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_1_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_1_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_res = op_hcompute_demosaicked_1_stencil_1_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_45_res, demosaicked_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_2_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_2_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_res = op_hcompute_demosaicked_1_stencil_2_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_28_res, demosaicked_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_res = op_hcompute_demosaicked_1_stencil_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_52_res, demosaicked_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
}

struct denoised_1_stencil_op_hcompute_denoised_1_stencil_22_merged_banks_4_cache {
	// RAM Box: {[0, 147], [0, 251]}
	// Capacity: 506
	// # of read delays: 4
  // 0, 252, 253, 505
	hw_uint<16> f0;
	fifo<hw_uint<16>, 251> f1;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 251> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_251() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_252() {
		return f2;
	}

	inline hw_uint<16> peek_253() {
		return f4;
	}

	inline hw_uint<16> peek_504() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_505() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 251
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 251 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 251
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 251 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct denoised_1_stencil_cache {
  // Reader addrs...
    // { op_hcompute_b_b_stencil[root = 0, b_b_s0_y, b_b_s0_x_x] -> denoised_1_stencil[1 + 2b_b_s0_y, 2 + 2b_b_s0_x_x] : 0 <= b_b_s0_y <= 72 and 0 <= b_b_s0_x_x <= 124 }
    // { op_hcompute_g_gb_stencil[root = 0, g_gb_s0_y, g_gb_s0_x_x] -> denoised_1_stencil[1 + 2g_gb_s0_y, 1 + 2g_gb_s0_x_x] : 0 <= g_gb_s0_y <= 73 and 0 <= g_gb_s0_x_x <= 125 }
    // { op_hcompute_g_gr_stencil[root = 0, g_gr_s0_y, g_gr_s0_x_x] -> denoised_1_stencil[2g_gr_s0_y, 2g_gr_s0_x_x] : 0 <= g_gr_s0_y <= 73 and 0 <= g_gr_s0_x_x <= 125 }
    // { op_hcompute_r_r_stencil[root = 0, r_r_s0_y, r_r_s0_x_x] -> denoised_1_stencil[2 + 2r_r_s0_y, 1 + 2r_r_s0_x_x] : 0 <= r_r_s0_y <= 72 and 0 <= r_r_s0_x_x <= 124 }
  // # of banks: 1
  denoised_1_stencil_op_hcompute_denoised_1_stencil_22_merged_banks_4_cache denoised_1_stencil_op_hcompute_denoised_1_stencil_22_merged_banks_4;
};



inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_22_write(hw_uint<16>& denoised_1_stencil_op_hcompute_denoised_1_stencil_22, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x, int dynamic_address) {
  denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_22_merged_banks_4.push(denoised_1_stencil_op_hcompute_denoised_1_stencil_22);
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_b_b_stencil_88_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int b_b_s0_y, int b_b_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_b_b_stencil_88 read pattern: { op_hcompute_b_b_stencil[root = 0, b_b_s0_y, b_b_s0_x_x] -> denoised_1_stencil[1 + 2b_b_s0_y, 2 + 2b_b_s0_x_x] : 0 <= b_b_s0_y <= 72 and 0 <= b_b_s0_x_x <= 124 }
  // Read schedule : { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 3] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_22 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_22_merged_banks_4.peek_505();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_22;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_g_gb_stencil_21_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int g_gb_s0_y, int g_gb_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_g_gb_stencil_21 read pattern: { op_hcompute_g_gb_stencil[root = 0, g_gb_s0_y, g_gb_s0_x_x] -> denoised_1_stencil[1 + 2g_gb_s0_y, 1 + 2g_gb_s0_x_x] : 0 <= g_gb_s0_y <= 73 and 0 <= g_gb_s0_x_x <= 125 }
  // Read schedule : { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_22 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_22_merged_banks_4.peek_0();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_22;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_g_gr_stencil_19_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int g_gr_s0_y, int g_gr_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_g_gr_stencil_19 read pattern: { op_hcompute_g_gr_stencil[root = 0, g_gr_s0_y, g_gr_s0_x_x] -> denoised_1_stencil[2g_gr_s0_y, 2g_gr_s0_x_x] : 0 <= g_gr_s0_y <= 73 and 0 <= g_gr_s0_x_x <= 125 }
  // Read schedule : { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_22 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_22_merged_banks_4.peek_253();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_22;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_r_r_stencil_1_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int r_r_s0_y, int r_r_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_1_stencil_op_hcompute_r_r_stencil_1 read pattern: { op_hcompute_r_r_stencil[root = 0, r_r_s0_y, r_r_s0_x_x] -> denoised_1_stencil[2 + 2r_r_s0_y, 1 + 2r_r_s0_x_x] : 0 <= r_r_s0_y <= 72 and 0 <= r_r_s0_x_x <= 124 }
  // Read schedule : { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 5 + 2d2, 6] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_22 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_22_merged_banks_4.peek_252();
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_22;
  return 0;
}

// # of bundles = 5
// op_hcompute_b_b_stencil_read
//	denoised_1_stencil_op_hcompute_b_b_stencil_88
inline hw_uint<16> denoised_1_stencil_op_hcompute_b_b_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int b_b_s0_y, int b_b_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // denoised_1_stencil_op_hcompute_b_b_stencil_88

	hw_uint<16> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_b_b_stencil_88_res = denoised_1_stencil_op_hcompute_b_b_stencil_88_select(denoised_1_stencil, root, b_b_s0_y, b_b_s0_x_x, dynamic_address);
	set_at<0, 16>(result, denoised_1_stencil_op_hcompute_b_b_stencil_88_res);
	return result;
}

// op_hcompute_denoised_1_stencil_write
//	denoised_1_stencil_op_hcompute_denoised_1_stencil_22
inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_write_bundle_write(hw_uint<16>& op_hcompute_denoised_1_stencil_write, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x, int dynamic_address) {
	hw_uint<16> denoised_1_stencil_op_hcompute_denoised_1_stencil_22_res = op_hcompute_denoised_1_stencil_write.extract<0, 15>();
	denoised_1_stencil_op_hcompute_denoised_1_stencil_22_write(denoised_1_stencil_op_hcompute_denoised_1_stencil_22_res, denoised_1_stencil, root, denoised_1_s0_y, denoised_1_s0_x_x, dynamic_address);
}

// op_hcompute_g_gb_stencil_read
//	denoised_1_stencil_op_hcompute_g_gb_stencil_21
inline hw_uint<16> denoised_1_stencil_op_hcompute_g_gb_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int g_gb_s0_y, int g_gb_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // denoised_1_stencil_op_hcompute_g_gb_stencil_21

	hw_uint<16> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_g_gb_stencil_21_res = denoised_1_stencil_op_hcompute_g_gb_stencil_21_select(denoised_1_stencil, root, g_gb_s0_y, g_gb_s0_x_x, dynamic_address);
	set_at<0, 16>(result, denoised_1_stencil_op_hcompute_g_gb_stencil_21_res);
	return result;
}

// op_hcompute_g_gr_stencil_read
//	denoised_1_stencil_op_hcompute_g_gr_stencil_19
inline hw_uint<16> denoised_1_stencil_op_hcompute_g_gr_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int g_gr_s0_y, int g_gr_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // denoised_1_stencil_op_hcompute_g_gr_stencil_19

	hw_uint<16> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_g_gr_stencil_19_res = denoised_1_stencil_op_hcompute_g_gr_stencil_19_select(denoised_1_stencil, root, g_gr_s0_y, g_gr_s0_x_x, dynamic_address);
	set_at<0, 16>(result, denoised_1_stencil_op_hcompute_g_gr_stencil_19_res);
	return result;
}

// op_hcompute_r_r_stencil_read
//	denoised_1_stencil_op_hcompute_r_r_stencil_1
inline hw_uint<16> denoised_1_stencil_op_hcompute_r_r_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int r_r_s0_y, int r_r_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // denoised_1_stencil_op_hcompute_r_r_stencil_1

	hw_uint<16> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_r_r_stencil_1_res = denoised_1_stencil_op_hcompute_r_r_stencil_1_select(denoised_1_stencil, root, r_r_s0_y, r_r_s0_x_x, dynamic_address);
	set_at<0, 16>(result, denoised_1_stencil_op_hcompute_r_r_stencil_1_res);
	return result;
}

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46_cache {
	// RAM Box: {[0, 71], [1, 124]}
	// Capacity: 377
	// # of read delays: 126
  // 0, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376
	fifo<hw_uint<16>, 377> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(376 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47_cache {
	// RAM Box: {[1, 72], [1, 124]}
	// Capacity: 251
	// # of read delays: 126
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250
	fifo<hw_uint<16>, 251> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(250 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48_cache {
	// RAM Box: {[1, 72], [0, 123]}
	// Capacity: 252
	// # of read delays: 126
  // 0, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251
	fifo<hw_uint<16>, 252> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(251 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33_cache {
	// RAM Box: {[1, 72], [0, 123]}
	// Capacity: 252
	// # of read delays: 126
  // 0, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251
	fifo<hw_uint<16>, 252> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(251 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34_cache {
	// RAM Box: {[1, 72], [1, 124]}
	// Capacity: 251
	// # of read delays: 126
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250
	fifo<hw_uint<16>, 251> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(250 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35_cache {
	// RAM Box: {[0, 71], [0, 123]}
	// Capacity: 378
	// # of read delays: 126
  // 0, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377
	fifo<hw_uint<16>, 378> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(377 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36_cache {
	// RAM Box: {[0, 71], [1, 124]}
	// Capacity: 377
	// # of read delays: 126
  // 0, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376
	fifo<hw_uint<16>, 377> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(376 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37_cache {
	// RAM Box: {[0, 71], [2, 125]}
	// Capacity: 376
	// # of read delays: 125
  // 0, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375
	fifo<hw_uint<16>, 376> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(375 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38_cache {
	// RAM Box: {[1, 72], [2, 125]}
	// Capacity: 250
	// # of read delays: 125
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249
	fifo<hw_uint<16>, 250> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(249 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_53_cache {
	// RAM Box: {[0, 71], [1, 124]}
	// Capacity: 377
	// # of read delays: 126
  // 0, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376
	fifo<hw_uint<16>, 377> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(376 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_54_cache {
	// RAM Box: {[1, 72], [1, 124]}
	// Capacity: 251
	// # of read delays: 126
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250
	fifo<hw_uint<16>, 251> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(250 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_55_cache {
	// RAM Box: {[0, 71], [0, 123]}
	// Capacity: 378
	// # of read delays: 126
  // 0, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377
	fifo<hw_uint<16>, 378> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(377 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_56_cache {
	// RAM Box: {[1, 72], [0, 123]}
	// Capacity: 252
	// # of read delays: 126
  // 0, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251
	fifo<hw_uint<16>, 252> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(251 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_57_cache {
	// RAM Box: {[2, 73], [0, 123]}
	// Capacity: 126
	// # of read delays: 126
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125
	fifo<hw_uint<16>, 126> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(125 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_58_cache {
	// RAM Box: {[2, 73], [1, 124]}
	// Capacity: 125
	// # of read delays: 126
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124
	fifo<hw_uint<16>, 125> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(124 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // # of banks: 15
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_53_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_53;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_54_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_54;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_55_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_55;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_56_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_56;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_57_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_57;
  g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_58_cache g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_58;
};



inline void g_gb_stencil_op_hcompute_g_gb_stencil_20_write(hw_uint<16>& g_gb_stencil_op_hcompute_g_gb_stencil_20, g_gb_stencil_cache& g_gb_stencil, int root, int g_gb_s0_y, int g_gb_s0_x_x, int dynamic_address) {
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_53.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_54.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_55.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_56.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_57.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_58.push(g_gb_stencil_op_hcompute_g_gb_stencil_20);
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((376 - floord(demosaicked_1_s0_x_x, 2))) : (demosaicked_1_s0_y == 0) ? (253) : ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0) ? (253) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((250 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (127) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((251 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (128) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((251 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (128) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((250 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (127) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((377 - floord(demosaicked_1_s0_x_x, 2))) : (demosaicked_1_s0_y == 0) ? (254) : ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0) ? (254) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((376 - floord(demosaicked_1_s0_x_x, 2))) : (demosaicked_1_s0_y == 0) ? (253) : ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0) ? (253) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (252) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((375 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x == 0) ? (252) : ((-247 + demosaicked_1_s0_x_x == 0 && demosaicked_1_s0_y == 0) || ((-demosaicked_1_s0_y) % 2 == 0 && -247 + demosaicked_1_s0_x_x == 0 && -2 + demosaicked_1_s0_y >= 0)) ? (252) : (demosaicked_1_s0_y == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (252) : ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (252) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (126) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((249 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x == 0) ? (126) : ((-demosaicked_1_s0_y) % 2 == 0 && -247 + demosaicked_1_s0_x_x == 0) ? (126) : ((-demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (126) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_53_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_53 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_53.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((376 - floord(demosaicked_1_s0_x_x, 2))) : (demosaicked_1_s0_y == 0) ? (253) : ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0) ? (253) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_54_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_54 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_54.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((250 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (127) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_55_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_55 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_55.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((377 - floord(demosaicked_1_s0_x_x, 2))) : (demosaicked_1_s0_y == 0) ? (254) : ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0) ? (254) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_56_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_56 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_56.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((251 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (128) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_57_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_57 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_57.peek(/* one reader or all rams */ ((-demosaicked_1_s0_x_x) % 2 == 0 && (-demosaicked_1_s0_y) % 2 == 0) ? (2) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((125 - floord(2*demosaicked_1_s0_x_x, 4))) : ((-1 - demosaicked_1_s0_x_x) % 2 == 0 && (-demosaicked_1_s0_y) % 2 == 0) ? (2) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_58_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_58 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gb_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_20 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_20_to_g_gb_stencil_op_hcompute_demosaicked_1_stencil_58.peek(/* one reader or all rams */ ((-demosaicked_1_s0_y) % 2 == 0) ? (1) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((124 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_20;
  return 0;
}

// # of bundles = 4
// op_hcompute_demosaicked_1_stencil_1_read
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48
inline hw_uint<48> g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_read_bundle_read(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48

	hw_uint<48> result;
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 48>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_46_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<16, 48>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_47_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<32, 48>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_48_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_2_read
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38
inline hw_uint<96> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 6
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38

	hw_uint<96> result;
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_33_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<16, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_34_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<32, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_35_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<48, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_36_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<64, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_37_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<80, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_38_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_read
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_53
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_54
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_55
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_56
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_57
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_58
inline hw_uint<96> g_gb_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 6
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_53
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_54
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_55
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_56
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_57
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_58

	hw_uint<96> result;
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_53_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_53_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_53_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_54_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_54_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<16, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_54_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_55_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_55_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<32, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_55_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_56_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_56_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<48, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_56_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_57_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_57_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<64, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_57_res);
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_58_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_58_select(g_gb_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<80, 96>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_58_res);
	return result;
}

// op_hcompute_g_gb_stencil_write
//	g_gb_stencil_op_hcompute_g_gb_stencil_20
inline void g_gb_stencil_op_hcompute_g_gb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_g_gb_stencil_write, g_gb_stencil_cache& g_gb_stencil, int root, int g_gb_s0_y, int g_gb_s0_x_x, int dynamic_address) {
	hw_uint<16> g_gb_stencil_op_hcompute_g_gb_stencil_20_res = op_hcompute_g_gb_stencil_write.extract<0, 15>();
	g_gb_stencil_op_hcompute_g_gb_stencil_20_write(g_gb_stencil_op_hcompute_g_gb_stencil_20_res, g_gb_stencil, root, g_gb_s0_y, g_gb_s0_x_x, dynamic_address);
}

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49_cache {
	// RAM Box: {[1, 72], [1, 124]}
	// Capacity: 251
	// # of read delays: 126
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250
	fifo<hw_uint<16>, 251> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(250 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50_cache {
	// RAM Box: {[1, 72], [2, 125]}
	// Capacity: 250
	// # of read delays: 125
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249
	fifo<hw_uint<16>, 250> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(249 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51_cache {
	// RAM Box: {[2, 73], [1, 124]}
	// Capacity: 125
	// # of read delays: 126
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124
	fifo<hw_uint<16>, 125> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(124 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39_cache {
	// RAM Box: {[1, 72], [1, 124]}
	// Capacity: 251
	// # of read delays: 126
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250
	fifo<hw_uint<16>, 251> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(250 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40_cache {
	// RAM Box: {[2, 73], [1, 124]}
	// Capacity: 125
	// # of read delays: 126
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124
	fifo<hw_uint<16>, 125> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(124 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41_cache {
	// RAM Box: {[0, 71], [1, 124]}
	// Capacity: 377
	// # of read delays: 126
  // 0, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376
	fifo<hw_uint<16>, 377> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(376 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42_cache {
	// RAM Box: {[1, 72], [2, 125]}
	// Capacity: 250
	// # of read delays: 125
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249
	fifo<hw_uint<16>, 250> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(249 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43_cache {
	// RAM Box: {[0, 71], [2, 125]}
	// Capacity: 376
	// # of read delays: 125
  // 0, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375
	fifo<hw_uint<16>, 376> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(375 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44_cache {
	// RAM Box: {[2, 73], [2, 125]}
	// Capacity: 124
	// # of read delays: 125
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123
	fifo<hw_uint<16>, 124> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(123 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_59_cache {
	// RAM Box: {[1, 72], [1, 124]}
	// Capacity: 251
	// # of read delays: 126
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250
	fifo<hw_uint<16>, 251> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(250 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_60_cache {
	// RAM Box: {[1, 72], [2, 125]}
	// Capacity: 250
	// # of read delays: 125
  // 0, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249
	fifo<hw_uint<16>, 250> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(249 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_61_cache {
	// RAM Box: {[1, 72], [0, 123]}
	// Capacity: 252
	// # of read delays: 126
  // 0, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251
	fifo<hw_uint<16>, 252> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(251 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_62_cache {
	// RAM Box: {[2, 73], [1, 124]}
	// Capacity: 125
	// # of read delays: 126
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124
	fifo<hw_uint<16>, 125> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(124 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_63_cache {
	// RAM Box: {[2, 73], [0, 123]}
	// Capacity: 126
	// # of read delays: 126
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125
	fifo<hw_uint<16>, 126> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(125 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_64_cache {
	// RAM Box: {[2, 73], [2, 125]}
	// Capacity: 124
	// # of read delays: 125
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123
	fifo<hw_uint<16>, 124> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(123 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct g_gr_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // # of banks: 15
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_59_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_59;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_60_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_60;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_61_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_61;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_62_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_62;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_63_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_63;
  g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_64_cache g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_64;
};



inline void g_gr_stencil_op_hcompute_g_gr_stencil_18_write(hw_uint<16>& g_gr_stencil_op_hcompute_g_gr_stencil_18, g_gr_stencil_cache& g_gr_stencil, int root, int g_gr_s0_y, int g_gr_s0_x_x, int dynamic_address) {
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_59.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_60.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_61.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_62.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_63.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_64.push(g_gr_stencil_op_hcompute_g_gr_stencil_18);
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((250 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (127) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (126) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((249 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x == 0) ? (126) : ((-demosaicked_1_s0_y) % 2 == 0 && -247 + demosaicked_1_s0_x_x == 0) ? (126) : ((-demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (126) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51.peek(/* one reader or all rams */ ((-demosaicked_1_s0_y) % 2 == 0) ? (1) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((124 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((250 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (127) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40.peek(/* one reader or all rams */ ((-demosaicked_1_s0_y) % 2 == 0) ? (1) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((124 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((376 - floord(demosaicked_1_s0_x_x, 2))) : (demosaicked_1_s0_y == 0) ? (253) : ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0) ? (253) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (126) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((249 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x == 0) ? (126) : ((-demosaicked_1_s0_y) % 2 == 0 && -247 + demosaicked_1_s0_x_x == 0) ? (126) : ((-demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (126) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (252) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((375 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x == 0) ? (252) : ((-247 + demosaicked_1_s0_x_x == 0 && demosaicked_1_s0_y == 0) || ((-demosaicked_1_s0_y) % 2 == 0 && -247 + demosaicked_1_s0_x_x == 0 && -2 + demosaicked_1_s0_y >= 0)) ? (252) : (demosaicked_1_s0_y == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (252) : ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (252) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((123 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_59_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_59 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_59.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((250 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (127) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_60_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_60 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_60.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (126) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((249 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x == 0) ? (126) : ((-demosaicked_1_s0_y) % 2 == 0 && -247 + demosaicked_1_s0_x_x == 0) ? (126) : ((-demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (126) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_61_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_61 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_61.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((251 - floord(demosaicked_1_s0_x_x, 2))) : ((-demosaicked_1_s0_y) % 2 == 0) ? (128) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_62_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_62 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_62.peek(/* one reader or all rams */ ((-demosaicked_1_s0_y) % 2 == 0) ? (1) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((124 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_63_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_63 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_63.peek(/* one reader or all rams */ ((-demosaicked_1_s0_x_x) % 2 == 0 && (-demosaicked_1_s0_y) % 2 == 0) ? (2) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((125 - floord(2*demosaicked_1_s0_x_x, 4))) : ((-1 - demosaicked_1_s0_x_x) % 2 == 0 && (-demosaicked_1_s0_y) % 2 == 0) ? (2) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_64_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_64 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> g_gr_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and 3 + demosaicked_1_s0_y <= 2o0 <= 4 + demosaicked_1_s0_y and 3 + demosaicked_1_s0_x_x <= 2o1 <= 4 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_18 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_18_to_g_gr_stencil_op_hcompute_demosaicked_1_stencil_64.peek(/* one reader or all rams */ ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((123 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_18;
  return 0;
}

// # of bundles = 4
// op_hcompute_demosaicked_1_stencil_1_read
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51
inline hw_uint<48> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_read_bundle_read(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51

	hw_uint<48> result;
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 48>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_49_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<16, 48>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_50_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<32, 48>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_51_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_2_read
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44
inline hw_uint<96> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 6
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44

	hw_uint<96> result;
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_39_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<16, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_40_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<32, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_41_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<48, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_42_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<64, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_43_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<80, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_44_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_read
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_59
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_60
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_61
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_62
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_63
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_64
inline hw_uint<96> g_gr_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 6
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_59
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_60
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_61
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_62
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_63
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_64

	hw_uint<96> result;
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_59_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_59_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_59_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_60_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_60_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<16, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_60_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_61_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_61_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<32, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_61_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_62_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_62_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<48, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_62_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_63_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_63_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<64, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_63_res);
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_64_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_64_select(g_gr_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<80, 96>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_64_res);
	return result;
}

// op_hcompute_g_gr_stencil_write
//	g_gr_stencil_op_hcompute_g_gr_stencil_18
inline void g_gr_stencil_op_hcompute_g_gr_stencil_write_bundle_write(hw_uint<16>& op_hcompute_g_gr_stencil_write, g_gr_stencil_cache& g_gr_stencil, int root, int g_gr_s0_y, int g_gr_s0_x_x, int dynamic_address) {
	hw_uint<16> g_gr_stencil_op_hcompute_g_gr_stencil_18_res = op_hcompute_g_gr_stencil_write.extract<0, 15>();
	g_gr_stencil_op_hcompute_g_gr_stencil_18_write(g_gr_stencil_op_hcompute_g_gr_stencil_18_res, g_gr_stencil, root, g_gr_s0_y, g_gr_s0_x_x, dynamic_address);
}

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15_cache {
	// RAM Box: {[0, 151], [0, 255]}
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

struct hw_input_global_wrapper_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 151 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 255 }
  // # of banks: 1
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15;
};



inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16);
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y <= 151 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 255 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16;
  return 0;
}

// # of bundles = 2
// op_hcompute_hw_input_global_wrapper_glb_stencil_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_res = op_hcompute_hw_input_global_wrapper_glb_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_16_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_15_res);
	return result;
}

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5_cache {
	// RAM Box: {[0, 151], [2, 253]}
	// Capacity: 1027
	// # of read delays: 6
  // 0, 2, 512, 514, 516, 1026
	hw_uint<16> f0;
	hw_uint<16> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 509> f3;
	hw_uint<16> f4;
	hw_uint<16> f5;
	hw_uint<16> f6;
	hw_uint<16> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 509> f9;
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

	inline hw_uint<16> peek_511() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_512() {
		return f4;
	}

	inline hw_uint<16> peek_513() {
		return f5;
	}

	inline hw_uint<16> peek_514() {
		return f6;
	}

	inline hw_uint<16> peek_515() {
		return f7;
	}

	inline hw_uint<16> peek_516() {
		return f8;
	}

	inline hw_uint<16> peek_1025() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1026() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 509
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 509 reading from capacity: 1
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
    // cap: 1 reading from capacity: 509
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 509 reading from capacity: 1
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

struct hw_input_global_wrapper_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + denoised_1_s0_y, 2 + denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[4 + denoised_1_s0_y, 2 + denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[denoised_1_s0_y, 2 + denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + denoised_1_s0_y, denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + denoised_1_s0_y, 4 + denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
  // # of banks: 1
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5;
};



inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14);
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_23_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_23 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + denoised_1_s0_y, 2 + denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5.peek_514();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_24_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_24 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[4 + denoised_1_s0_y, 2 + denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5.peek_2();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_25_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_25 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[denoised_1_s0_y, 2 + denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5.peek_1026();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_26_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_26 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + denoised_1_s0_y, denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5.peek_516();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_27_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_27 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + denoised_1_s0_y, 4 + denoised_1_s0_x_x] : 0 <= denoised_1_s0_y <= 147 and 0 <= denoised_1_s0_x_x <= 251 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_merged_banks_5.peek_512();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14;
  return 0;
}

// # of bundles = 2
// op_hcompute_denoised_1_stencil_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_23
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_24
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_25
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_26
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_27
inline hw_uint<80> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 5
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_23
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_24
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_25
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_26
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_27

	hw_uint<80> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_23_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_23_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x_x, dynamic_address);
	set_at<0, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_23_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_24_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_24_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x_x, dynamic_address);
	set_at<16, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_24_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_25_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_25_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x_x, dynamic_address);
	set_at<32, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_25_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_26_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_26_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x_x, dynamic_address);
	set_at<48, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_26_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_27_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_27_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y, denoised_1_s0_x_x, dynamic_address);
	set_at<64, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_27_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_14_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5_cache {
	// RAM Box: {[0, 143], [0, 247], [1, 1]}
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

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3_cache {
	// RAM Box: {[0, 143], [0, 247], [2, 2]}
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

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_cache {
	// RAM Box: {[0, 143], [0, 247], [0, 0]}
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

struct hw_output_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
    // { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
    // { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
  // # of banks: 3
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7;
};



inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8);
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 20] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 17] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 21] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 18] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7 read pattern: { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 19] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 16] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12;
  return 0;
}

// # of bundles = 6
// op_hcompute_hw_output_glb_stencil_1_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_1_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_res = op_hcompute_hw_output_glb_stencil_1_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_10_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_2_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_2_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_res = op_hcompute_hw_output_glb_stencil_2_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_8_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_res = op_hcompute_hw_output_glb_stencil_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_12_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_global_wrapper_stencil_1_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_5_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_2_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_3_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_res);
	return result;
}

struct r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_65_cache {
	// RAM Box: {[0, 71], [0, 123]}
	// Capacity: 250
	// # of read delays: 126
  // 0, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249
	fifo<hw_uint<16>, 250> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(249 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_66_cache {
	// RAM Box: {[0, 71], [1, 124]}
	// Capacity: 249
	// # of read delays: 125
  // 0, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248
	fifo<hw_uint<16>, 249> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(248 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_67_cache {
	// RAM Box: {[1, 72], [0, 123]}
	// Capacity: 125
	// # of read delays: 126
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124
	fifo<hw_uint<16>, 125> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(124 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_68_cache {
	// RAM Box: {[1, 72], [1, 124]}
	// Capacity: 124
	// # of read delays: 125
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123
	fifo<hw_uint<16>, 124> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(123 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r_r_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> r_r_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> r_r_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> r_r_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> r_r_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // # of banks: 4
  r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_65_cache r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_65;
  r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_66_cache r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_66;
  r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_67_cache r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_67;
  r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_68_cache r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_68;
};



inline void r_r_stencil_op_hcompute_r_r_stencil_0_write(hw_uint<16>& r_r_stencil_op_hcompute_r_r_stencil_0, r_r_stencil_cache& r_r_stencil, int root, int r_r_s0_y, int r_r_s0_x_x, int dynamic_address) {
  r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_65.push(r_r_stencil_op_hcompute_r_r_stencil_0);
  r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_66.push(r_r_stencil_op_hcompute_r_r_stencil_0);
  r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_67.push(r_r_stencil_op_hcompute_r_r_stencil_0);
  r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_68.push(r_r_stencil_op_hcompute_r_r_stencil_0);
}

inline hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_65_select(r_r_stencil_cache& r_r_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r_r_stencil_op_hcompute_demosaicked_1_stencil_65 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> r_r_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 5 + 2d2, 6] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_65.peek(/* one reader or all rams */ ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (126) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((249 - floord(demosaicked_1_s0_x_x, 2))) : ((demosaicked_1_s0_y == 0 && 245 - demosaicked_1_s0_x_x >= 0) || ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0 && 245 - demosaicked_1_s0_x_x >= 0)) ? (127) : 0);
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_66_select(r_r_stencil_cache& r_r_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r_r_stencil_op_hcompute_demosaicked_1_stencil_66 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> r_r_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and -1 + demosaicked_1_s0_y <= 2o0 <= demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 5 + 2d2, 6] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_66.peek(/* one reader or all rams */ (-246 + demosaicked_1_s0_x_x >= 0) ? (125) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((248 - floord(demosaicked_1_s0_x_x, 2))) : ((demosaicked_1_s0_y == 0 && 245 - demosaicked_1_s0_x_x >= 0) || ((-demosaicked_1_s0_y) % 2 == 0 && -2 + demosaicked_1_s0_y >= 0 && 245 - demosaicked_1_s0_x_x >= 0)) ? (126) : 0);
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_67_select(r_r_stencil_cache& r_r_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r_r_stencil_op_hcompute_demosaicked_1_stencil_67 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> r_r_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and -1 + demosaicked_1_s0_x_x <= 2o1 <= demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 5 + 2d2, 6] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_67.peek(/* one reader or all rams */ ((-demosaicked_1_s0_y) % 2 == 0 && -246 + demosaicked_1_s0_x_x >= 0) ? (1) : ((-demosaicked_1_s0_x_x) % 2 == 0 && (-demosaicked_1_s0_y) % 2 == 0 && 244 - demosaicked_1_s0_x_x >= 0) ? (2) : ((-1 - demosaicked_1_s0_y) % 2 == 0) ? ((124 - floord(2*demosaicked_1_s0_x_x, 4))) : ((-1 - demosaicked_1_s0_x_x) % 2 == 0 && (-demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (2) : 0);
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_68_select(r_r_stencil_cache& r_r_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // r_r_stencil_op_hcompute_demosaicked_1_stencil_68 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y, demosaicked_1_s0_x_x] -> r_r_stencil[o0, o1] : 0 <= demosaicked_1_s0_y <= 143 and 0 <= demosaicked_1_s0_x_x <= 247 and demosaicked_1_s0_y < 2o0 <= 2 + demosaicked_1_s0_y and demosaicked_1_s0_x_x < 2o1 <= 2 + demosaicked_1_s0_x_x }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 5 + 2d2, 6] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_to_r_r_stencil_op_hcompute_demosaicked_1_stencil_68.peek(/* one reader or all rams */ ((-demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? (1) : ((-1 - demosaicked_1_s0_y) % 2 == 0 && 245 - demosaicked_1_s0_x_x >= 0) ? ((123 - floord(2*demosaicked_1_s0_x_x, 4))) : 0);
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_demosaicked_1_stencil_read
//	r_r_stencil_op_hcompute_demosaicked_1_stencil_65
//	r_r_stencil_op_hcompute_demosaicked_1_stencil_66
//	r_r_stencil_op_hcompute_demosaicked_1_stencil_67
//	r_r_stencil_op_hcompute_demosaicked_1_stencil_68
inline hw_uint<64> r_r_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(r_r_stencil_cache& r_r_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 4
    // r_r_stencil_op_hcompute_demosaicked_1_stencil_65
    // r_r_stencil_op_hcompute_demosaicked_1_stencil_66
    // r_r_stencil_op_hcompute_demosaicked_1_stencil_67
    // r_r_stencil_op_hcompute_demosaicked_1_stencil_68

	hw_uint<64> result;
	hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_65_res = r_r_stencil_op_hcompute_demosaicked_1_stencil_65_select(r_r_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 64>(result, r_r_stencil_op_hcompute_demosaicked_1_stencil_65_res);
	hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_66_res = r_r_stencil_op_hcompute_demosaicked_1_stencil_66_select(r_r_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<16, 64>(result, r_r_stencil_op_hcompute_demosaicked_1_stencil_66_res);
	hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_67_res = r_r_stencil_op_hcompute_demosaicked_1_stencil_67_select(r_r_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<32, 64>(result, r_r_stencil_op_hcompute_demosaicked_1_stencil_67_res);
	hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_68_res = r_r_stencil_op_hcompute_demosaicked_1_stencil_68_select(r_r_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, dynamic_address);
	set_at<48, 64>(result, r_r_stencil_op_hcompute_demosaicked_1_stencil_68_res);
	return result;
}

// op_hcompute_r_r_stencil_write
//	r_r_stencil_op_hcompute_r_r_stencil_0
inline void r_r_stencil_op_hcompute_r_r_stencil_write_bundle_write(hw_uint<16>& op_hcompute_r_r_stencil_write, r_r_stencil_cache& r_r_stencil, int root, int r_r_s0_y, int r_r_s0_x_x, int dynamic_address) {
	hw_uint<16> r_r_stencil_op_hcompute_r_r_stencil_0_res = op_hcompute_r_r_stencil_write.extract<0, 15>();
	r_r_stencil_op_hcompute_r_r_stencil_0_write(r_r_stencil_op_hcompute_r_r_stencil_0_res, r_r_stencil, root, r_r_s0_y, r_r_s0_x_x, dynamic_address);
}

// Total re-use buffer capacity: 168304 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_glb_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_hw_input_global_wrapper_s0_y__p___m_4_rp__c___lp_hw_input_global_wrapper_s0_x_x__p___m_4_rp__value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil__lp_hw_input_global_wrapper_s0_y__p___m_4_rp__c___lp_hw_input_global_wrapper_s0_x_x__p___m_4_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c__hw_input_global_wrapper_global_wrapper_s0_x_x_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_hw_input_global_wrapper_global_wrapper_s0_y_c__hw_input_global_wrapper_global_wrapper_s0_x_x_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y, int denoised_1_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_denoised_1_s0_y__p__2_rp__c___lp_denoised_1_s0_x_x__p__2_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, denoised_1_s0_y, denoised_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil__lp_denoised_1_s0_y__p__2_rp__c___lp_denoised_1_s0_x_x__p__2_rp__value);
	// Produce: denoised_1_stencil
	denoised_1_stencil_op_hcompute_denoised_1_stencil_write_bundle_write(/* arg names */compute_result, denoised_1_stencil, root, denoised_1_s0_y, denoised_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_b_b_stencil(denoised_1_stencil_cache& denoised_1_stencil, b_b_stencil_cache& b_b_stencil, int root, int b_b_s0_y, int b_b_s0_x_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil__lp__lp_b_b_s0_y_m_2_rp___p__1_rp__c___lp__lp_b_b_s0_x_x_m_2_rp___p__2_rp__value = denoised_1_stencil_op_hcompute_b_b_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, b_b_s0_y, b_b_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_b_b_stencil(denoised_1_stencil__lp__lp_b_b_s0_y_m_2_rp___p__1_rp__c___lp__lp_b_b_s0_x_x_m_2_rp___p__2_rp__value);
	// Produce: b_b_stencil
	b_b_stencil_op_hcompute_b_b_stencil_write_bundle_write(/* arg names */compute_result, b_b_stencil, root, b_b_s0_y, b_b_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_g_gb_stencil(denoised_1_stencil_cache& denoised_1_stencil, g_gb_stencil_cache& g_gb_stencil, int root, int g_gb_s0_y, int g_gb_s0_x_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil__lp__lp_g_gb_s0_y_m_2_rp___p__1_rp__c___lp__lp_g_gb_s0_x_x_m_2_rp___p__1_rp__value = denoised_1_stencil_op_hcompute_g_gb_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, g_gb_s0_y, g_gb_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_g_gb_stencil(denoised_1_stencil__lp__lp_g_gb_s0_y_m_2_rp___p__1_rp__c___lp__lp_g_gb_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: g_gb_stencil
	g_gb_stencil_op_hcompute_g_gb_stencil_write_bundle_write(/* arg names */compute_result, g_gb_stencil, root, g_gb_s0_y, g_gb_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_g_gr_stencil(denoised_1_stencil_cache& denoised_1_stencil, g_gr_stencil_cache& g_gr_stencil, int root, int g_gr_s0_y, int g_gr_s0_x_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil__lp_g_gr_s0_y_m_2_rp__c___lp_g_gr_s0_x_x_m_2_rp__value = denoised_1_stencil_op_hcompute_g_gr_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, g_gr_s0_y, g_gr_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_g_gr_stencil(denoised_1_stencil__lp_g_gr_s0_y_m_2_rp__c___lp_g_gr_s0_x_x_m_2_rp__value);
	// Produce: g_gr_stencil
	g_gr_stencil_op_hcompute_g_gr_stencil_write_bundle_write(/* arg names */compute_result, g_gr_stencil, root, g_gr_s0_y, g_gr_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_r_r_stencil(denoised_1_stencil_cache& denoised_1_stencil, r_r_stencil_cache& r_r_stencil, int root, int r_r_s0_y, int r_r_s0_x_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil__lp__lp_r_r_s0_y_m_2_rp___p__2_rp__c___lp__lp_r_r_s0_x_x_m_2_rp___p__1_rp__value = denoised_1_stencil_op_hcompute_r_r_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, r_r_s0_y, r_r_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_r_r_stencil(denoised_1_stencil__lp__lp_r_r_s0_y_m_2_rp___p__2_rp__c___lp__lp_r_r_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: r_r_stencil
	r_r_stencil_op_hcompute_r_r_stencil_write_bundle_write(/* arg names */compute_result, r_r_stencil, root, r_r_s0_y, r_r_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_demosaicked_1_stencil(g_gb_stencil_cache& g_gb_stencil, g_gr_stencil_cache& g_gr_stencil, r_r_stencil_cache& r_r_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: g_gb_stencil
	auto g_gb_stencil_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value = g_gb_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(g_gb_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: g_gr_stencil
	auto g_gr_stencil__lp_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp___p__1_rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value = g_gr_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(g_gr_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: r_r_stencil
	auto r_r_stencil_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp__c__floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp__value = r_r_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(r_r_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_demosaicked_1_stencil(g_gb_stencil_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value, g_gr_stencil__lp_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp___p__1_rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value, r_r_stencil_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp__c__floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp__value, demosaicked_1_s0_x_x, demosaicked_1_s0_y);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_demosaicked_1_stencil_1(g_gb_stencil_cache& g_gb_stencil, g_gr_stencil_cache& g_gr_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: g_gb_stencil
	auto g_gb_stencil_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value = g_gb_stencil_op_hcompute_demosaicked_1_stencil_1_read_bundle_read(g_gb_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: g_gr_stencil
	auto g_gr_stencil__lp_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp___p__1_rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value = g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_read_bundle_read(g_gr_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_demosaicked_1_stencil_1(g_gb_stencil_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value, g_gr_stencil__lp_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp___p__1_rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value, demosaicked_1_s0_x_x, demosaicked_1_s0_y);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_demosaicked_1_stencil_2(b_b_stencil_cache& b_b_stencil, g_gb_stencil_cache& g_gb_stencil, g_gr_stencil_cache& g_gr_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: b_b_stencil
	auto b_b_stencil_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp__c__floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp__value = b_b_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(b_b_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: g_gb_stencil
	auto g_gb_stencil__lp_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp___p__1_rp__c__floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp__value = g_gb_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(g_gb_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: g_gr_stencil
	auto g_gr_stencil__lp_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp___p__1_rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value = g_gr_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(g_gr_stencil/* source_delay */, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_demosaicked_1_stencil_2(b_b_stencil_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp__c__floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp__value, g_gb_stencil__lp_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp___p__1_rp__c__floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp__value, g_gr_stencil__lp_floor_lp__lp_demosaicked_1_s0_y_div_2_rp__rp___p__1_rp__c___lp_floor_lp__lp_demosaicked_1_s0_x_x_div_2_rp__rp___p__1_rp__value, demosaicked_1_s0_x_x, demosaicked_1_s0_y);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y, demosaicked_1_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_corrected_stencil(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c__corrected_s0_y_c__corrected_s0_x_x_value = demosaicked_1_stencil_op_hcompute_corrected_stencil_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y, corrected_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_corrected_stencil(demosaicked_1_stencil_0_c__corrected_s0_y_c__corrected_s0_x_x_value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y, corrected_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_corrected_stencil_1(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_1, int corrected_s0_x_x_1) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c__corrected_s0_y_1_c__corrected_s0_x_x_1_value = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_1, corrected_s0_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_corrected_stencil_1(demosaicked_1_stencil_0_c__corrected_s0_y_1_c__corrected_s0_x_x_1_value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_1_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_1, corrected_s0_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_corrected_stencil_2(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_2, int corrected_s0_x_x_2) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c__corrected_s0_y_2_c__corrected_s0_x_x_2_value = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_2, corrected_s0_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_corrected_stencil_2(demosaicked_1_stencil_0_c__corrected_s0_y_2_c__corrected_s0_x_x_2_value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_2_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_2, corrected_s0_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_curved_stencil(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_0_c__curved_s0_y_c__curved_s0_x_x_value = corrected_stencil_op_hcompute_curved_stencil_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y, curved_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_curved_stencil(corrected_stencil_0_c__curved_s0_y_c__curved_s0_x_x_value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y, curved_s0_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_curved_stencil_1(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_1, int curved_s0_x_x_1) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_1_c__curved_s0_y_1_c__curved_s0_x_x_1_value = corrected_stencil_op_hcompute_curved_stencil_1_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_1, curved_s0_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_curved_stencil_1(corrected_stencil_1_c__curved_s0_y_1_c__curved_s0_x_x_1_value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_1_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_1, curved_s0_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_curved_stencil_2(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_2, int curved_s0_x_x_2) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_2_c__curved_s0_y_2_c__curved_s0_x_x_2_value = corrected_stencil_op_hcompute_curved_stencil_2_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_2, curved_s0_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_curved_stencil_2(corrected_stencil_2_c__curved_s0_y_2_c__curved_s0_x_x_2_value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_2_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_2, curved_s0_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_glb_stencil(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_0_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_xi_value = curved_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_glb_stencil(curved_stencil_0_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_xi_value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_glb_stencil_1(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_1_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_xi_value = curved_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_glb_stencil_1(curved_stencil_1_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_xi_value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_glb_stencil_2(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_2_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_xi_value = curved_stencil_op_hcompute_hw_output_glb_stencil_2_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_glb_stencil_2(curved_stencil_2_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_xi_value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_0, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c__hw_output_global_wrapper_s0_x_xi_xi_c__0_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c__hw_output_global_wrapper_s0_x_xi_xi_c__0_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_0
	hw_output_global_wrapper_stencil_clkwrk_0.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_1, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c__hw_output_global_wrapper_s0_x_xi_xi_c__1_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c__hw_output_global_wrapper_s0_x_xi_xi_c__1_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_1
	hw_output_global_wrapper_stencil_clkwrk_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_2, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c__hw_output_global_wrapper_s0_x_xi_xi_c__2_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c__hw_output_global_wrapper_s0_x_xi_xi_c__2_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_2
	hw_output_global_wrapper_stencil_clkwrk_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void camera_pipeline_glb(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("camera_pipeline_glb_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  b_b_stencil_cache b_b_stencil;
#ifdef __VIVADO_SYNTH__
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
  g_gb_stencil_cache g_gb_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  g_gr_stencil_cache g_gr_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_glb_stencil_cache hw_input_global_wrapper_glb_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_global_wrapper_stencil_cache hw_input_global_wrapper_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_output_glb_stencil_cache hw_output_glb_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  r_r_stencil_cache r_r_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125; op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 17] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 21] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251; op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125; op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 13] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 151 and 0 <= d2 <= 255; op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 151 and 0 <= d2 <= 255; op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 3] : 0 <= d1 <= 72 and 0 <= d2 <= 124; op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 16] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 12] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 11] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 19] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 14] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 5 + 2d2, 6] : 0 <= d1 <= 72 and 0 <= d2 <= 124; op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 18] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 20] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 15] : 0 <= d1 <= 143 and 0 <= d2 <= 247; op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 10] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
//   { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 5] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
// Condition for op_hcompute_g_gr_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((151 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((255 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 17] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_hw_output_glb_stencil_1(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 21] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_2(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 147 and 0 <= d2 <= 251 }
// Condition for op_hcompute_denoised_1_stencil(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((151 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((255 + -1*i2)) >= 0)))
//   { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 5 + 2d1, 5 + 2d2, 4] : 0 <= d1 <= 73 and 0 <= d2 <= 125 }
// Condition for op_hcompute_g_gb_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((151 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((255 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 9] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_demosaicked_1_stencil_2(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 13] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_curved_stencil(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((151 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((255 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 151 and 0 <= d2 <= 255 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((151 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((255 + -1*i2)) >= 0)))
//   { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 7 + 2d2, 3] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
// Condition for op_hcompute_b_b_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((151 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((255 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 16] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_hw_output_glb_stencil(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 12] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_corrected_stencil_2(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 11] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_corrected_stencil_1(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 19] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 7] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_demosaicked_1_stencil(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 14] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_curved_stencil_1(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 8] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_demosaicked_1_stencil_1(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 7 + 2d1, 5 + 2d2, 6] : 0 <= d1 <= 72 and 0 <= d2 <= 124 }
// Condition for op_hcompute_r_r_stencil(((((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((151 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((253 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 18] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_hw_output_glb_stencil_2(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 20] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_1(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 15] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_curved_stencil_2(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 10] : 0 <= d1 <= 143 and 0 <= d2 <= 247 }
// Condition for op_hcompute_corrected_stencil(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((152 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((256 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 152; c1 += 1) {
	  if (c1 >= 9) {
	    if (c1 <= 151)
	      for (int c2 = 0; c2 <= 8; c2 += 1) {
	        op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	        op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	        if (c2 >= 4) {
	          op_hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, denoised_1_stencil, 0, c1 - 4, c2 - 4);
	          if (c2 == 7 && (c1 + 1) % 2 == 0)
	            op_hcompute_b_b_stencil(denoised_1_stencil /* buf name */, b_b_stencil, 0, (c1 - 7) / 2, 0);
	          if ((c1 + 1) % 2 == 0 && (c2 + 1) % 2 == 0) {
	            op_hcompute_g_gb_stencil(denoised_1_stencil /* buf name */, g_gb_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	            op_hcompute_g_gr_stencil(denoised_1_stencil /* buf name */, g_gr_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	            op_hcompute_r_r_stencil(denoised_1_stencil /* buf name */, r_r_stencil, 0, (c1 - 7) / 2, (c2 - 5) / 2);
	          }
	        }
	      }
	    for (int c2 = 9; c2 <= 256; c2 += 1) {
	      if (c1 <= 151 && c2 <= 255) {
	        op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	        op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	        op_hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, denoised_1_stencil, 0, c1 - 4, c2 - 4);
	        if ((c1 + 1) % 2 == 0 && (c2 + 1) % 2 == 0) {
	          op_hcompute_b_b_stencil(denoised_1_stencil /* buf name */, b_b_stencil, 0, (c1 - 7) / 2, (c2 - 7) / 2);
	          op_hcompute_g_gb_stencil(denoised_1_stencil /* buf name */, g_gb_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	          op_hcompute_g_gr_stencil(denoised_1_stencil /* buf name */, g_gr_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	          if (c2 <= 253)
	            op_hcompute_r_r_stencil(denoised_1_stencil /* buf name */, r_r_stencil, 0, (c1 - 7) / 2, (c2 - 5) / 2);
	        }
	      }
	      op_hcompute_demosaicked_1_stencil(g_gb_stencil /* buf name */, g_gr_stencil /* buf name */, r_r_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_demosaicked_1_stencil_1(g_gb_stencil /* buf name */, g_gr_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_demosaicked_1_stencil_2(b_b_stencil /* buf name */, g_gb_stencil /* buf name */, g_gr_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_corrected_stencil(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_corrected_stencil_1(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_corrected_stencil_2(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_curved_stencil(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_curved_stencil_1(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_curved_stencil_2(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_hw_output_glb_stencil(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_hw_output_glb_stencil_1(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_hw_output_glb_stencil_2(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 9, c2 - 9);
	      op_hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_0, 0, c1 - 9, c2 - 9);
	      op_hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_1, 0, c1 - 9, c2 - 9);
	      op_hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_2, 0, c1 - 9, c2 - 9);
	    }
	  } else {
	    for (int c2 = 0; c2 <= 255; c2 += 1) {
	      op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	      op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	      if (c1 >= 4 && c2 >= 4) {
	        op_hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, denoised_1_stencil, 0, c1 - 4, c2 - 4);
	        if (c1 == 7 && c2 >= 7 && (c2 + 1) % 2 == 0)
	          op_hcompute_b_b_stencil(denoised_1_stencil /* buf name */, b_b_stencil, 0, 0, (c2 - 7) / 2);
	        if ((c1 + 1) % 2 == 0 && (c2 + 1) % 2 == 0) {
	          op_hcompute_g_gb_stencil(denoised_1_stencil /* buf name */, g_gb_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	          op_hcompute_g_gr_stencil(denoised_1_stencil /* buf name */, g_gr_stencil, 0, (c1 - 5) / 2, (c2 - 5) / 2);
	          if (c1 == 7 && c2 <= 253)
	            op_hcompute_r_r_stencil(denoised_1_stencil /* buf name */, r_r_stencil, 0, 0, (c2 - 5) / 2);
	        }
	      }
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void camera_pipeline_glb_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    camera_pipeline_glb(hw_input_stencil, hw_output_global_wrapper_stencil_clkwrk_0, hw_output_global_wrapper_stencil_clkwrk_1, hw_output_global_wrapper_stencil_clkwrk_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil[-4 + hw_input_global_wrapper_s0_y, -4 + hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y <= 151 and 0 <= hw_input_global_wrapper_s0_x_x <= 255 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers = 38912;
  // { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_0[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
const int op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_num_transfers = 35712;
  // { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_1[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
const int op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_num_transfers = 35712;
  // { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_2[hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi <= 143 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 247 }
const int op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_num_transfers = 35712;


extern "C" {

void camera_pipeline_glb_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers*size);

  camera_pipeline_glb_wrapper(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_num_transfers*size);
}

}
extern "C" {

void camera_pipeline_glb_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  camera_pipeline_glb(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

